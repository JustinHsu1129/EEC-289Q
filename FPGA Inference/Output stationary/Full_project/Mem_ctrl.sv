`timescale 1 ns / 1 ps

// Output-stationary controller: keep OFMAP partial sums in the PE array while
// streaming IFMAP and WEIGHT tiles through it.
module Mem_ctrl #(
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter WeightBitWidth = 8,
    parameter InputFeatureMapBitWidth = 16,
    parameter OutputFeatureMapBitWidth = 32,
    parameter WeightAddressBit = 11,
    parameter InputFeatureMapAddressBit = 9,
    parameter OutputFeatureMapAddressBit = 10,
    parameter OutputFeatureMapChannelCount = 64,
    parameter InputFeatureMapChannelCount = 32,
    parameter WeightWidth = 3,
    parameter WeightHeight = 3,
    parameter InputFeatureMapWidth = 16,
    parameter InputFeatureMapHeight = 16,
    parameter OutputFeatureMapWidth = 14,
    parameter OutputFeatureMapHeight = 14
)(
    input logic Clock,
    input logic ResetNegative,
    input logic StartIn,
    output logic WeightPrefetchOut,
    output logic [WeightAddressBit-1:0] WeightAddressOut,
    output logic WeightReadEnableOut,
    output logic InputFeatureMapStartOut,
    output logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddressOut,
    output logic InputFeatureMapReadEnableOut,
    output logic MacDoneOut,
    output logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddressOut,
    output logic OutputFeatureMapWriteEnableOut,
    output logic OutputFeatureMapWriteDoneOut,
    output logic ClearAccumulationOut,
    output logic WeightMacEnableOut
);

localparam logic [2:0] IDLE = 3'd0;
localparam logic [2:0] CLEAR = 3'd1;
localparam logic [2:0] STREAM = 3'd2;
localparam logic [2:0] DRAIN = 3'd3;
localparam logic [2:0] WRITE = 3'd4;

localparam int NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
localparam int NumInTile = (InputFeatureMapChannelCount + PeArrayRows - 1) / PeArrayRows;
localparam int ReductionSteps = WeightWidth * WeightHeight * NumInTile;
localparam int TotalOutputPixels = OutputFeatureMapWidth * OutputFeatureMapHeight;
localparam int ReductionCounterWidth = (ReductionSteps <= 1) ? 1 : $clog2(ReductionSteps);
localparam int OutputPixelCounterWidth = (TotalOutputPixels <= 1) ? 1 : $clog2(TotalOutputPixels);
localparam int OutTileWidth = (NumOutTile <= 1) ? 1 : $clog2(NumOutTile);

logic [2:0] State;
logic [ReductionCounterWidth-1:0] ReductionCounter;
logic [OutputPixelCounterWidth-1:0] OutputPixelCounter;
logic [OutTileWidth-1:0] OutChannelTile;
logic MacEnableDelay;
logic IssueRead;
logic LastReduction;
logic LastOutputTile;
logic LastOutputPixel;
logic [31:0] KernelIndex;
logic [31:0] RowOffset;
logic [31:0] ColOffset;
logic [31:0] InChannelTile;
logic [31:0] OutputPixelRow;
logic [31:0] OutputPixelColumn;
logic [WeightAddressBit-1:0] WeightAddressComb;
logic [InputFeatureMapAddressBit-1:0] IfmapAddressComb;
logic [OutputFeatureMapAddressBit-1:0] OutputAddressComb;

assign IssueRead = (State == CLEAR) || (State == STREAM);
assign LastReduction = (ReductionCounter == ReductionSteps - 1);
assign LastOutputTile = (OutChannelTile == NumOutTile - 1);
assign LastOutputPixel = (OutputPixelCounter == TotalOutputPixels - 1);

assign KernelIndex = ReductionCounter / NumInTile;
assign RowOffset = KernelIndex / WeightWidth;
assign ColOffset = KernelIndex % WeightWidth;
assign InChannelTile = ReductionCounter % NumInTile;
assign OutputPixelRow = OutputPixelCounter / OutputFeatureMapWidth;
assign OutputPixelColumn = OutputPixelCounter % OutputFeatureMapWidth;

assign WeightAddressComb = OutChannelTile + NumOutTile * ReductionCounter;
assign IfmapAddressComb = ((OutputPixelRow + RowOffset) * InputFeatureMapWidth +
    (OutputPixelColumn + ColOffset)) * NumInTile + InChannelTile;
assign OutputAddressComb = OutputPixelCounter * NumOutTile + OutChannelTile;

assign WeightPrefetchOut = 1'b0;
assign WeightAddressOut = WeightAddressComb;
assign WeightReadEnableOut = IssueRead;
assign InputFeatureMapStartOut = (State == CLEAR);
assign InputFeatureMapAddressOut = IfmapAddressComb;
assign InputFeatureMapReadEnableOut = IssueRead;
assign MacDoneOut = (State == WRITE);
assign OutputFeatureMapAddressOut = OutputAddressComb;
assign OutputFeatureMapWriteEnableOut = (State == WRITE);
assign ClearAccumulationOut = (State == CLEAR);
assign WeightMacEnableOut = MacEnableDelay;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        State <= IDLE;
        ReductionCounter <= '0;
        OutputPixelCounter <= '0;
        OutChannelTile <= '0;
        MacEnableDelay <= 1'b0;
        OutputFeatureMapWriteDoneOut <= 1'b0;
    end else begin
        MacEnableDelay <= IssueRead;

        case (State)
            IDLE: begin
                ReductionCounter <= '0;
                OutputPixelCounter <= '0;
                OutChannelTile <= '0;
                MacEnableDelay <= 1'b0;
                if (StartIn) begin
                    OutputFeatureMapWriteDoneOut <= 1'b0;
                    State <= CLEAR;
                end
            end

            CLEAR: begin
                if (LastReduction) begin
                    State <= DRAIN;
                end else begin
                    ReductionCounter <= ReductionCounter + 1'b1;
                    State <= STREAM;
                end
            end

            STREAM: begin
                if (LastReduction) begin
                    State <= DRAIN;
                end else begin
                    ReductionCounter <= ReductionCounter + 1'b1;
                end
            end

            DRAIN: begin
                State <= WRITE;
            end

            WRITE: begin
                ReductionCounter <= '0;
                if (LastOutputTile && LastOutputPixel) begin
                    OutputFeatureMapWriteDoneOut <= 1'b1;
                    State <= IDLE;
                end else begin
                    if (LastOutputTile) begin
                        OutChannelTile <= '0;
                        OutputPixelCounter <= OutputPixelCounter + 1'b1;
                    end else begin
                        OutChannelTile <= OutChannelTile + 1'b1;
                    end
                    State <= CLEAR;
                end
            end

            default: begin
                State <= IDLE;
            end
        endcase
    end
end
endmodule
