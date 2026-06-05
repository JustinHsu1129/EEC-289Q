`timescale 1 ns / 1 ps

module Systolic_Top #(
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter WeightBitWidth = 8,
    parameter InputFeatureMapBitWidth = 16,
    parameter OutputFeatureMapBitWidth = 32,
    parameter InputFeatureMapSigned = 1,
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
    parameter InputFeatureMapDataPath = "",
    parameter WeightDataPath = "",
    parameter OutputFeatureMapDataPath = ""
)(
    input logic Clock,
    input logic ResetNegative,
    input logic [OutputFeatureMapAddressBit-1:0] TestOutputAddressIn,
    input logic TestCheckIn,
    output logic [PeArrayColumns*OutputFeatureMapBitWidth-1:0] TestOutputOut,
    input logic [InputFeatureMapAddressBit-1:0] IfmapWriteAddressIn,
    input logic [PeArrayRows*InputFeatureMapBitWidth-1:0] IfmapWriteDataIn,
    input logic IfmapWriteEnableIn,
    input logic StartIn,
    output logic FinishOut
);

logic [PeArrayRows-1:0][PeArrayColumns-1:0][WeightBitWidth-1:0] WeightData;
logic [WeightAddressBit-1:0] WeightAddress;
logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapData;
logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddress;
logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapWriteData;
logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddress;
logic OutputFeatureMapWriteEnable;
logic signed [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapReadData;
logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapReadAddressMux;
logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddressMux;
logic MemCtrlInputFeatureMapStart;
logic MemCtrlInputFeatureMapReadEnable;
logic WeightMacEnable;
logic ClearAccumulation;
logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] PeOutputFeatureMapData;
logic [PeArrayColumns-1:0] PeOutputFeatureMapValid;

generate
    for (genvar i = 0; i < PeArrayColumns; i++) begin : gen_wdata
        assign OutputFeatureMapWriteData[i] = PeOutputFeatureMapData[i];
    end
endgenerate

PE_Array #(
    .PeArrayRows(PeArrayRows),
    .PeArrayColumns(PeArrayColumns),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
    .WeightBitWidth(WeightBitWidth),
    .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth),
    .InputFeatureMapSigned(InputFeatureMapSigned)
) PE_Array_instance (
    .Clock(Clock),
    .ResetNegative(ResetNegative),
    .ClearAccumulationIn(ClearAccumulation),
    .MacEnableIn(WeightMacEnable),
    .OutputFeatureMapEnableIn(OutputFeatureMapWriteEnable),
    .InputFeatureMapDataIn(InputFeatureMapData),
    .WeightDataIn(WeightData),
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
    .WeightPrefetchOut(),
    .WeightAddressOut(WeightAddress),
    .WeightReadEnableOut(),
    .InputFeatureMapStartOut(MemCtrlInputFeatureMapStart),
    .InputFeatureMapAddressOut(InputFeatureMapAddress),
    .InputFeatureMapReadEnableOut(MemCtrlInputFeatureMapReadEnable),
    .MacDoneOut(),
    .OutputFeatureMapAddressOut(OutputFeatureMapAddress),
    .OutputFeatureMapWriteEnableOut(OutputFeatureMapWriteEnable),
    .OutputFeatureMapWriteDoneOut(FinishOut),
    .ClearAccumulationOut(ClearAccumulation),
    .WeightMacEnableOut(WeightMacEnable)
);

assign TestOutputOut = OutputFeatureMapReadData;
assign OutputFeatureMapReadAddressMux = TestCheckIn ? TestOutputAddressIn : OutputFeatureMapAddress;
assign InputFeatureMapAddressMux = IfmapWriteEnableIn ? IfmapWriteAddressIn : InputFeatureMapAddress;

ifmap_mem #(
    .Width(InputFeatureMapBitWidth*PeArrayRows),
    .Depth(1 << InputFeatureMapAddressBit),
    .DataBitWidth(InputFeatureMapBitWidth),
    .PeArrayRows(PeArrayRows),
    .InputFeatureMapChannelCount(InputFeatureMapChannelCount),
    .InputFeatureMapWidth(InputFeatureMapWidth),
    .InputFeatureMapHeight(InputFeatureMapHeight),
    .INIT_FILE(InputFeatureMapDataPath)
) i_mem (
    .Address(InputFeatureMapAddressMux),
    .Clock(Clock),
    .Data(IfmapWriteDataIn),
    .WriteEnable(IfmapWriteEnableIn),
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
    .WeightHeight(WeightHeight),
    .INIT_FILE(WeightDataPath)
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
    .PeArrayColumns(PeArrayColumns),
    .INIT_FILE(OutputFeatureMapDataPath)
) o_mem (
    .Clock(Clock),
    .Data(OutputFeatureMapWriteData),
    .ReadAddress(OutputFeatureMapReadAddressMux),
    .WriteAddress(OutputFeatureMapAddress),
    .WriteEnable(OutputFeatureMapWriteEnable),
    .Accumulate(1'b0),
    .DataOut(OutputFeatureMapReadData)
);
endmodule
