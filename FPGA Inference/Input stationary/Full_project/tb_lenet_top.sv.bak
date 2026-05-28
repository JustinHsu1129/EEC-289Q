`timescale 1ns / 1ps

module tb_lenet_top();

parameter int PeArrayRows = 1; // Physical PE rows
parameter int PeArrayColumns = 6;
// Physical PE columns
parameter int WeightBitWidth = 8;
parameter int InputFeatureMapBitWidth = 16;
parameter int OutputFeatureMapBitWidth = 32;
parameter int OutputFeatureMapChannelCount = 16; // Logical output channels
parameter int InputFeatureMapChannelCount = 1;
// Logical input channels
parameter int WeightWidth = 3;
parameter int WeightHeight = 3;
parameter int InputFeatureMapWidth = 28;
parameter int InputFeatureMapHeight = 28;
parameter int OutputFeatureMapWidth = 26;
parameter int OutputFeatureMapHeight = 26;
localparam int NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
localparam int NumInTile = (InputFeatureMapChannelCount + PeArrayRows - 1) / PeArrayRows;
localparam int TotalPixels = OutputFeatureMapWidth * OutputFeatureMapHeight;
localparam int InputFeatureMapDepth = InputFeatureMapWidth * InputFeatureMapHeight * NumInTile;
localparam int WeightDepth = WeightWidth * WeightHeight * NumInTile * PeArrayRows * NumOutTile;
localparam int OutputFeatureMapDepth = TotalPixels * NumOutTile;
localparam int WeightAddressBit = (WeightDepth <= 1) ? 1 : $clog2(WeightDepth);
localparam int InputFeatureMapAddressBit = (InputFeatureMapDepth <= 1) ? 1 : $clog2(InputFeatureMapDepth);
localparam int OutputFeatureMapAddressBit = (OutputFeatureMapDepth <= 1) ?
1 : $clog2(OutputFeatureMapDepth);

logic Clock;
logic ResetNegative;
logic StartIn;
logic FinishOut;
logic [OutputFeatureMapAddressBit-1:0] TestOutputAddressIn;
logic TestCheckIn;
logic [PeArrayColumns*OutputFeatureMapBitWidth-1:0] TestOutputOut;
logic signed [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] TestOutputWords;

logic signed [15:0] Expected [0:OutputFeatureMapChannelCount-1][0:TotalPixels-1];
logic signed [15:0] ExpectedLoad [0:TotalPixels-1];

integer Errors;
integer I;
integer Tile;
integer Lane;
integer Channel;
string ExpectedFile;
logic signed [OutputFeatureMapBitWidth-1:0] OutValue;
logic signed [OutputFeatureMapBitWidth-1:0] ExpValue;

assign TestOutputWords = TestOutputOut;
Systolic_Top #(
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
) dut (
    .Clock(Clock),
    .ResetNegative(ResetNegative),
    .StartIn(StartIn),
    .FinishOut(FinishOut),
    .TestOutputAddressIn(TestOutputAddressIn),
    .TestCheckIn(TestCheckIn),
    .TestOutputOut(TestOutputOut)
);
initial begin
    Clock = 0;
    forever #5 Clock = ~Clock;
end

initial begin
    for (Channel = 0; Channel < OutputFeatureMapChannelCount; Channel++) begin
        for (I = 0; I < TotalPixels; I++) begin
            Expected[Channel][I] = '0;
        end
    end
    for (Channel = 0; Channel < OutputFeatureMapChannelCount; Channel++) begin
        ExpectedFile = $sformatf("expected_c%0d.hex", Channel);
        for (I = 0; I < TotalPixels; I++) begin
            ExpectedLoad[I] = '0;
        end
        $readmemh(ExpectedFile, ExpectedLoad);
        for (I = 0; I < TotalPixels; I++) begin
            Expected[Channel][I] = ExpectedLoad[I];
        end
    end
    ResetNegative = 0;
    StartIn = 0;
    TestCheckIn = 0;
    TestOutputAddressIn = 0;
    Errors = 0;
    #20 ResetNegative = 1;
    @(posedge Clock) StartIn = 1;
    @(posedge Clock) StartIn = 0;
    $display("\n>> Processing %0dx%0d Image with %0d input channels, %0d output channels, and a %0dx%0d PE array.",
             InputFeatureMapHeight, InputFeatureMapWidth, InputFeatureMapChannelCount, OutputFeatureMapChannelCount, PeArrayRows, PeArrayColumns);
    wait(FinishOut == 1'b1);
    $display("\n>> Inference Completed. Entering Verification Mode.");
    @(posedge Clock) TestCheckIn = 1;
    $display("\n========================================");
    $display("   STARTING MATHEMATICAL VERIFICATION   ");
    $display("========================================");
    for (I = 0; I < TotalPixels; I = I + 1) begin
        for (Tile = 0; Tile < NumOutTile; Tile = Tile + 1) begin
            @(posedge Clock) TestOutputAddressIn = I * NumOutTile + Tile;
            @(posedge Clock);
            #1;
            for (Lane = 0; Lane < PeArrayColumns; Lane = Lane + 1) begin
                Channel = Tile * PeArrayColumns + Lane;
                if (Channel < OutputFeatureMapChannelCount) begin
                    OutValue = TestOutputWords[Lane];
                    ExpValue = 32'(Expected[Channel][I]);
                    if (OutValue !== ExpValue) begin
                        $display("FAIL [C%0d, Addr %0d]: Exp %0d, Got %0d", Channel, I, ExpValue, OutValue);
                        Errors = Errors + 1;
                    end
                end
            end
        end
    end
    if (Errors == 0) begin
        $display(">> SUCCESS! ALL %0d PIXELS MATCH EXACTLY ACROSS %0d CHANNELS. <<",
                 TotalPixels * OutputFeatureMapChannelCount, OutputFeatureMapChannelCount);
    end else begin
        $display(">> VERIFICATION FAILED WITH %0d ERRORS. <<", Errors);
    end
    $display("========================================\n");
    #20 $finish;
end
endmodule

// Mock Memory Modules
module ifmap_mem #(
    parameter Width = 16,
    parameter Depth = 2048,
    parameter DataBitWidth = 16,
    parameter PeArrayRows = 1,
    parameter InputFeatureMapChannelCount = 1,
    parameter InputFeatureMapWidth = 28,
    parameter InputFeatureMapHeight = 28
) (
    input logic [$clog2(Depth)-1:0] Address,
    input logic Clock,
    input logic [Width-1:0] Data,
    input logic WriteEnable,
    output logic [Width-1:0] DataOut
);
localparam int NumInTile = (InputFeatureMapChannelCount + PeArrayRows - 1) / PeArrayRows;
localparam int RawDepth = InputFeatureMapChannelCount * InputFeatureMapWidth * InputFeatureMapHeight;
logic [7:0] Memory8Bit [0:RawDepth-1];
integer InTile;
integer SpatialAddress;
integer LogicalChannel;
integer QLane;
integer RawAddress;
initial begin
    for (int J=0; J<RawDepth; J++) Memory8Bit[J] = '0;
    $readmemh("image.hex", Memory8Bit);
end
always_ff @(posedge Clock) begin
    DataOut <= '0;
    InTile = Address % NumInTile;
    SpatialAddress = Address / NumInTile;
    for (int Row = 0; Row < PeArrayRows; Row++) begin
        LogicalChannel = InTile * PeArrayRows + Row;
        QLane = PeArrayRows - 1 - Row;
        RawAddress = LogicalChannel * InputFeatureMapWidth * InputFeatureMapHeight + SpatialAddress;
        if (LogicalChannel < InputFeatureMapChannelCount && SpatialAddress < InputFeatureMapWidth * InputFeatureMapHeight) begin
            DataOut[QLane*DataBitWidth +: DataBitWidth] <=
                {{(DataBitWidth-8){Memory8Bit[RawAddress][7]}}, Memory8Bit[RawAddress]};
        end
    end
    if (WriteEnable) Memory8Bit[Address] <= Data[7:0];
end
endmodule

module weight_mem #(
    parameter Width = 8,
    parameter Depth = 2048,
    parameter DataBitWidth = 8,
    parameter PeArrayRows = 1,
    parameter PeArrayColumns = 1,
    parameter OutputFeatureMapChannelCount = 1,
    parameter InputFeatureMapChannelCount = 1,
    parameter WeightWidth = 3,
    parameter WeightHeight = 3
) (
    input logic [$clog2(Depth)-1:0] Address,
    input logic Clock,
    input logic [Width-1:0] Data,
    input logic WriteEnable,
    output logic [Width-1:0] DataOut
);
localparam int NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
localparam int NumInTile = (InputFeatureMapChannelCount + PeArrayRows - 1) / PeArrayRows;
localparam int FullWeightWidth = DataBitWidth * OutputFeatureMapChannelCount;
localparam int RawDepth = WeightWidth * WeightHeight * InputFeatureMapChannelCount;
logic [FullWeightWidth-1:0] Memory [0:RawDepth-1];
integer OutTile;
integer PackedInputAddress;
integer PhysicalRow;
integer InTile;
integer KernelAddress;
integer LogicalInputChannel;
integer LogicalOutputChannel;
integer RawAddress;
initial begin
    for (int J=0; J<RawDepth; J++) Memory[J] = '0;
    $readmemh("weights.hex", Memory);
end
always_ff @(posedge Clock) begin
    DataOut <= '0;
    OutTile = Address % NumOutTile;
    PackedInputAddress = Address / NumOutTile;
    PhysicalRow = PackedInputAddress % PeArrayRows;
    InTile = (PackedInputAddress / PeArrayRows) % NumInTile;
    KernelAddress = PackedInputAddress / (PeArrayRows * NumInTile);
    LogicalInputChannel = InTile * PeArrayRows + PhysicalRow;
    RawAddress = KernelAddress * InputFeatureMapChannelCount + LogicalInputChannel;
    if (LogicalInputChannel < InputFeatureMapChannelCount && KernelAddress < WeightWidth * WeightHeight) begin
        for (int Lane = 0; Lane < PeArrayColumns; Lane++) begin
            LogicalOutputChannel = OutTile * PeArrayColumns + Lane;
            if (LogicalOutputChannel < OutputFeatureMapChannelCount) begin
                DataOut[Lane*DataBitWidth +: DataBitWidth] <=
                    Memory[RawAddress][LogicalOutputChannel*DataBitWidth +: DataBitWidth];
            end
        end
    end
    if (WriteEnable) Memory[Address] <= Data;
end
endmodule

module ofmap_mem #(
    parameter Width = 32,
    parameter Depth = 2048,
    parameter DataBitWidth = 32,
    parameter PeArrayColumns = 1
) (
    input logic Clock,
    input logic [Width-1:0] Data,
    input logic [$clog2(Depth)-1:0] ReadAddress,
    input logic [$clog2(Depth)-1:0] WriteAddress,
    input logic WriteEnable,
    input logic Accumulate,
    output logic [Width-1:0] DataOut
);
logic [Width-1:0] Memory [0:Depth-1];
logic signed [DataBitWidth-1:0] StoredLane;
logic signed [DataBitWidth-1:0] WriteLane;
initial begin
    for (int J=0; J<Depth; J++) Memory[J] = '0;
end
always_ff @(posedge Clock) begin
    if (WriteEnable) begin
        if (Accumulate) begin
            for (int Lane = 0; Lane < PeArrayColumns; Lane++) begin
                StoredLane = Memory[WriteAddress][Lane*DataBitWidth +: DataBitWidth];
                WriteLane = Data[Lane*DataBitWidth +: DataBitWidth];
                Memory[WriteAddress][Lane*DataBitWidth +: DataBitWidth] <= StoredLane + WriteLane;
            end
        end else begin
            Memory[WriteAddress] <= Data;
        end
    end
    DataOut <= Memory[ReadAddress];
end
endmodule