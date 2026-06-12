`timescale 1 ns / 1 ps

/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off UNUSEDSIGNAL */
module Systolic_Top #(
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter WeightBitWidth = 8,
    parameter InputFeatureMapBitWidth = 16,
    parameter OutputFeatureMapBitWidth = 32,
    parameter WeightAddressBit = 12,
    parameter InputFeatureMapAddressBit = 9,
    parameter OutputFeatureMapAddressBit = 10,
    parameter OutputFeatureMapChannelCount = 64,
    parameter InputFeatureMapChannelCount = 32,
    parameter WeightWidth = 3,
    parameter WeightHeight = 3,
    parameter InputFeatureMapWidth = 16,
    parameter InputFeatureMapHeight = 16,
    parameter OutputFeatureMapWidth = 14,
    parameter OutputFeatureMapHeight = 14,
    parameter InputFeatureMapSigned = 0,
    parameter InputFeatureMapDataPath = "",
    parameter WeightDataPath = "",
    parameter OutputFeatureMapDataPath = "",
    parameter RawIfmapAddressBit = ((InputFeatureMapChannelCount * InputFeatureMapWidth * InputFeatureMapHeight) <= 1) ?
        1 : $clog2(InputFeatureMapChannelCount * InputFeatureMapWidth * InputFeatureMapHeight),
    parameter StorageBitWidth = 8
)(
    input logic Clock,
    input logic ResetNegative,
    input logic [OutputFeatureMapAddressBit-1:0] TestOutputAddressIn,
    input logic TestCheckIn,
    output logic [PeArrayColumns*OutputFeatureMapBitWidth-1:0] TestOutputOut,
    input logic [RawIfmapAddressBit-1:0] IfmapWriteAddressIn,
    input logic [StorageBitWidth-1:0] IfmapWriteDataIn,
    input logic IfmapWriteEnableIn,
    input logic StartIn,
    output logic FinishOut
);

localparam int RawIfmapDepth = InputFeatureMapChannelCount * InputFeatureMapWidth * InputFeatureMapHeight;

// ============================================================
// MOVED LOGIC: Address Mapping
// ============================================================
localparam int NumRowTile = (WeightHeight + PeArrayRows - 1) / PeArrayRows;
localparam int ReductionSteps = InputFeatureMapChannelCount * WeightWidth * NumRowTile;


// ============================================================

logic [PeArrayRows-1:0][PeArrayColumns-1:0][WeightBitWidth-1:0] WeightData;
logic [WeightAddressBit-1:0] WeightAddress;
logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapData;
logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddress;
logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapWriteData;
logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddress;
logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapReadAddressMux;
logic signed [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] PartialSumData;
logic MemCtrlRowLoadEnable;
logic WeightBufferLoad;
logic AccumulatePartialSum;
logic WeightMacEnable;
logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapBuffer;
logic [PeArrayRows-1:0][PeArrayColumns-1:0][WeightBitWidth-1:0] WeightBuffer;
logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] PeOutputFeatureMapData;
logic [PeArrayColumns-1:0] PeOutputFeatureMapValid;
logic MemCtrlOutputFeatureMapWriteEnable;
logic MemCtrlAccumulatePartialSum;
logic [OutputFeatureMapAddressBit-1:0] MemCtrlOutputFeatureMapAddress;
logic MemCtrlFinishOut;

int ReductionAddress;
int OutputPixelAddress;
int RowTile;
int KernelColumn;
int InputChannel;
int OutputPixelRow;
int OutputPixelColumn;

always_comb begin 
    ReductionAddress   = int'(InputFeatureMapAddress) % ReductionSteps;
    OutputPixelAddress = int'(InputFeatureMapAddress) / ReductionSteps;
    RowTile            = ReductionAddress % NumRowTile;
    KernelColumn       = (ReductionAddress / NumRowTile) % WeightWidth;
    InputChannel       = ReductionAddress / (NumRowTile * WeightWidth);
    OutputPixelRow     = OutputPixelAddress / OutputFeatureMapWidth;
    OutputPixelColumn  = OutputPixelAddress % OutputFeatureMapWidth;
end


logic [PeArrayRows:0] OutputFeatureMapWriteEnableDelay;
logic [PeArrayRows:0] AccumulatePartialSumDelay;
logic [PeArrayRows:0][OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddressDelay;

logic [PeArrayRows+2:0] FinishOutDelay;
logic OutputFeatureMapWriteEnable;

assign TestOutputOut = PartialSumData;
assign OutputFeatureMapReadAddressMux = TestCheckIn ? TestOutputAddressIn : OutputFeatureMapAddress;

assign OutputFeatureMapWriteEnable = OutputFeatureMapWriteEnableDelay[PeArrayRows-1];
assign AccumulatePartialSum        = AccumulatePartialSumDelay[PeArrayRows-1];
assign OutputFeatureMapAddress     = OutputFeatureMapAddressDelay[PeArrayRows-1];
assign FinishOut = FinishOutDelay[PeArrayRows+1];

genvar i;
generate
    for (i = 0; i < PeArrayColumns; i++) begin : gen_wdata
        assign OutputFeatureMapWriteData[i] = PeOutputFeatureMapData[i];
    end
endgenerate

always_ff @(posedge Clock) begin
    InputFeatureMapBuffer <= InputFeatureMapData;
    if (WeightBufferLoad) begin
        WeightBuffer <= WeightData;
    end
    
    if (~ResetNegative) begin
        OutputFeatureMapWriteEnableDelay <= '0;
        AccumulatePartialSumDelay <= '0;
        FinishOutDelay <= '0;
        for (int j = 0; j <= PeArrayRows; j++) begin
            OutputFeatureMapAddressDelay[j] <= '0;
        end
    end else begin
        OutputFeatureMapWriteEnableDelay[0] <= MemCtrlOutputFeatureMapWriteEnable;
        AccumulatePartialSumDelay[0]        <= MemCtrlAccumulatePartialSum;
        OutputFeatureMapAddressDelay[0]     <= MemCtrlOutputFeatureMapAddress;
        FinishOutDelay[0]                   <= MemCtrlFinishOut;

        for (int j = 1; j <= PeArrayRows; j++) begin
            OutputFeatureMapWriteEnableDelay[j] <= OutputFeatureMapWriteEnableDelay[j-1];
            AccumulatePartialSumDelay[j]        <= AccumulatePartialSumDelay[j-1];
            OutputFeatureMapAddressDelay[j]     <= OutputFeatureMapAddressDelay[j-1];
        end

        for (int j = 1; j <= PeArrayRows+2; j++) begin
            FinishOutDelay[j] <= FinishOutDelay[j-1];
        end
    end
end

PE_Array #(
    .PeArrayRows(PeArrayRows),
    .PeArrayColumns(PeArrayColumns),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
    .WeightBitWidth(WeightBitWidth),
    .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth)
) PE_Array_instance (
    .Clock(Clock),
    .ResetNegative(ResetNegative),
    .RowLoadEnableIn(MemCtrlRowLoadEnable),
    .InputFeatureMapDataIn(InputFeatureMapBuffer),
    .WeightMacEnableIn(WeightMacEnable),
    .WeightDataIn(WeightBuffer),
    .OutputFeatureMapValidOut(PeOutputFeatureMapValid),
    .OutputFeatureMapDataOut(PeOutputFeatureMapData)
);

Mem_ctrl #(
    .PeArrayRows(PeArrayRows),
    .PeArrayColumns(PeArrayColumns),
    .WeightBitWidth(WeightBitWidth),
    .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
    .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth),
    .WeightAddressBit(WeightAddressBit),
    .InputFeatureMapAddressBit(InputFeatureMapAddressBit),
    .OutputFeatureMapAddressBit(OutputFeatureMapAddressBit),
    .OutputFeatureMapChannelCount(OutputFeatureMapChannelCount),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .WeightWidth(WeightWidth),
    .WeightHeight(WeightHeight),
    .InputFeatureMapWidth(InputFeatureMapWidth),
    .InputFeatureMapHeight(InputFeatureMapHeight),
    .OutputFeatureMapWidth(OutputFeatureMapWidth),
    .OutputFeatureMapHeight(OutputFeatureMapHeight)
) Mem_ctrl_instance (
    .Clock(Clock),
    .ResetNegative(ResetNegative),
    .StartIn(StartIn),
    .OutputFeatureMapReadyIn(1'b1),
    .WeightPrefetchOut(),
    .WeightAddressOut(WeightAddress),
    .WeightReadEnableOut(),
    .InputFeatureMapStartOut(),
    .InputFeatureMapAddressOut(InputFeatureMapAddress), // Clean multi-dimensional generation occurs here
    .InputFeatureMapReadEnableOut(),
    .RowLoadEnableOut(MemCtrlRowLoadEnable),
    .WeightBufferLoadOut(WeightBufferLoad),
    .MacDoneOut(),
    .OutputFeatureMapAddressOut(MemCtrlOutputFeatureMapAddress),
    .OutputFeatureMapWriteEnableOut(MemCtrlOutputFeatureMapWriteEnable),
    .OutputFeatureMapWriteDoneOut(MemCtrlFinishOut),
    .AccumulatePartialSumOut(MemCtrlAccumulatePartialSum),
    .WeightMacEnableOut(WeightMacEnable)
);

ifmap_mem #(
    .Width(InputFeatureMapBitWidth*PeArrayRows),
    .Depth(1 << InputFeatureMapAddressBit),
    .DataBitWidth(InputFeatureMapBitWidth),
    .StorageBitWidth(StorageBitWidth),
    .PeArrayRows(PeArrayRows),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .WeightWidth(WeightWidth),
    .WeightHeight(WeightHeight),
    .InputFeatureMapWidth(InputFeatureMapWidth),
    .InputFeatureMapHeight(InputFeatureMapHeight),
    .OutputFeatureMapWidth(OutputFeatureMapWidth),
    .OutputFeatureMapHeight(OutputFeatureMapHeight),
    .InputFeatureMapSigned(InputFeatureMapSigned)
) i_mem (
    .Address(InputFeatureMapAddress),
    .Clock(Clock),
    .Data({(InputFeatureMapBitWidth*PeArrayRows){1'b0}}),
    .WriteEnable(1'b0),
    .ExternalWriteAddress(IfmapWriteAddressIn),
    .ExternalWriteData(IfmapWriteDataIn),
    .ExternalWriteEnable(IfmapWriteEnableIn),
    
    // Connected moved variables here
    .RowTile(RowTile),
    .KernelColumn(KernelColumn),
    .InputChannel(InputChannel),
    .OutputPixelRow(OutputPixelRow),
    .OutputPixelColumn(OutputPixelColumn),
    
    .DataOut(InputFeatureMapData)
);

weight_mem #(
    .Width(WeightBitWidth*PeArrayRows*PeArrayColumns),
    .Depth(1 << WeightAddressBit),
    .DataBitWidth(WeightBitWidth),
    .PeArrayRows(PeArrayRows),
    .PeArrayColumns(PeArrayColumns),
    .OutputFeatureMapChannelCount(OutputFeatureMapChannelCount),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .WeightWidth(WeightWidth),
    .WeightHeight(WeightHeight)
) w_mem (
    .Address(WeightAddress),
    .Clock(Clock),
    .Data({(WeightBitWidth*PeArrayRows*PeArrayColumns){1'b0}}),
    .WriteEnable(1'b0),
    .DataOut(WeightData)
);

ofmap_mem #(
    .Width(OutputFeatureMapBitWidth*PeArrayColumns),
    .Depth(1 << OutputFeatureMapAddressBit),
    .DataBitWidth(OutputFeatureMapBitWidth),
    .PeArrayColumns(PeArrayColumns)
) o_mem (
    .Clock(Clock),
    .Data(OutputFeatureMapWriteData),
    .ReadAddress(OutputFeatureMapReadAddressMux),
    .WriteAddress(OutputFeatureMapAddress),
    .WriteEnable(OutputFeatureMapWriteEnable),
    .Accumulate(AccumulatePartialSum),
    .DataOut(PartialSumData)
);

endmodule