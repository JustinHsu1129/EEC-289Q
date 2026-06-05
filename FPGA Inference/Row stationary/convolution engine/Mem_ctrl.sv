`timescale 1 ns / 1 ps

// Row-stationary controller: load a group of IFMAP rows once, hold those rows
// in the PE array, then stream output-channel weight tiles through them.
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
    input logic OutputFeatureMapReadyIn,
    output logic WeightPrefetchOut,
    output logic [WeightAddressBit-1:0] WeightAddressOut,
    output logic WeightReadEnableOut,
    output logic WeightBufferLoadOut,
    output logic InputFeatureMapStartOut,
    output logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddressOut,
    output logic InputFeatureMapReadEnableOut,
    output logic RowLoadEnableOut,
    output logic MacDoneOut,
    output logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddressOut,
    output logic OutputFeatureMapWriteEnableOut,
    output logic OutputFeatureMapWriteDoneOut,
    output logic AccumulatePartialSumOut,
    output logic WeightMacEnableOut
);

localparam logic [2:0] IDLE = 3'd0;
localparam logic [2:0] LOAD_IFMAP = 3'd1;
localparam logic [2:0] LOAD_WEIGHT = 3'd2;
localparam logic [2:0] STREAM_WEIGHT = 3'd3;
localparam logic [2:0] DRAIN = 3'd4;

localparam logic [1:0] TILE_FETCH = 2'd0;
localparam logic [1:0] TILE_LATCH = 2'd1;
localparam logic [1:0] TILE_COMPUTE = 2'd2;

localparam int NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
localparam int NumRowTile = (WeightHeight + PeArrayRows - 1) / PeArrayRows;
localparam int ReductionSteps = InputFeatureMapChannelCount * WeightWidth * NumRowTile;
localparam int TotalOutputPixels = OutputFeatureMapWidth * OutputFeatureMapHeight;
localparam int DrainCycles = 3;

localparam int ReductionCounterWidth = (ReductionSteps <= 1) ? 1 : $clog2(ReductionSteps);
localparam int OutputPixelCounterWidth = (TotalOutputPixels <= 1) ? 1 : $clog2(TotalOutputPixels);
localparam int OutTileWidth = (NumOutTile <= 1) ? 1 : $clog2(NumOutTile);
localparam int DrainCounterWidth = (DrainCycles <= 1) ? 1 : $clog2(DrainCycles);

logic [2:0] State;
logic [1:0] TilePhase;
logic [ReductionCounterWidth-1:0] ReductionCounter;
logic [OutputPixelCounterWidth-1:0] OutputPixelCounter;
logic [OutTileWidth-1:0] OutChannelTile;
logic [DrainCounterWidth-1:0] DrainCounter;
logic LastReduction;
logic LastOutputPixel;
logic LastOutTile;
logic [WeightAddressBit-1:0] WeightAddressComb;
logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddressComb;
logic AccumulatePartialSumComb;

assign LastReduction = (ReductionCounter == ReductionSteps - 1);
assign LastOutputPixel = (OutputPixelCounter == TotalOutputPixels - 1);
assign LastOutTile = (OutChannelTile == NumOutTile - 1);

assign WeightPrefetchOut = (State == LOAD_WEIGHT) && (TilePhase == TILE_FETCH);
assign WeightReadEnableOut = ((State == LOAD_WEIGHT) || (State == STREAM_WEIGHT)) &&
    (TilePhase == TILE_FETCH);
assign WeightBufferLoadOut = ((State == LOAD_WEIGHT) || (State == STREAM_WEIGHT)) &&
    (TilePhase == TILE_LATCH);
assign WeightMacEnableOut = ((State == LOAD_WEIGHT) || (State == STREAM_WEIGHT)) &&
    (TilePhase == TILE_COMPUTE);
assign InputFeatureMapStartOut = (State == LOAD_IFMAP);
assign InputFeatureMapReadEnableOut = (State == LOAD_IFMAP);
assign RowLoadEnableOut = (State == LOAD_WEIGHT) && (TilePhase == TILE_LATCH);
assign MacDoneOut = (State == DRAIN);
assign OutputFeatureMapWriteEnableOut = 1'b0;

assign WeightAddressComb = ReductionCounter * NumOutTile + OutChannelTile;
assign InputFeatureMapAddressOut = OutputPixelCounter * ReductionSteps + ReductionCounter;
assign OutputFeatureMapAddressComb = OutputPixelCounter * NumOutTile + OutChannelTile;
assign AccumulatePartialSumComb = (ReductionCounter != '0);

assign WeightAddressOut = WeightAddressComb;
assign OutputFeatureMapAddressOut = OutputFeatureMapAddressComb;
assign AccumulatePartialSumOut = AccumulatePartialSumComb;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        State <= IDLE;
        TilePhase <= TILE_FETCH;
        ReductionCounter <= '0;
        OutputPixelCounter <= '0;
        OutChannelTile <= '0;
        DrainCounter <= '0;
        OutputFeatureMapWriteDoneOut <= 1'b0;
    end else begin
        case (State)
            IDLE: begin
                TilePhase <= TILE_FETCH;
                ReductionCounter <= '0;
                OutputPixelCounter <= '0;
                OutChannelTile <= '0;
                DrainCounter <= '0;
                if (StartIn) begin
                    OutputFeatureMapWriteDoneOut <= 1'b0;
                    State <= LOAD_IFMAP;
                end
            end

            LOAD_IFMAP: begin
                OutChannelTile <= '0;
                TilePhase <= TILE_FETCH;
                State <= LOAD_WEIGHT;
            end

            LOAD_WEIGHT, STREAM_WEIGHT: begin
                case (TilePhase)
                    TILE_FETCH: TilePhase <= TILE_LATCH;
                    TILE_LATCH: TilePhase <= TILE_COMPUTE;
                    TILE_COMPUTE: begin
                        TilePhase <= TILE_FETCH;
                        if (LastOutTile) begin
                            OutChannelTile <= '0;
                            if (LastReduction && LastOutputPixel) begin
                                DrainCounter <= '0;
                                State <= DRAIN;
                            end else begin
                                if (LastReduction) begin
                                    ReductionCounter <= '0;
                                    OutputPixelCounter <= OutputPixelCounter + 1'b1;
                                end else begin
                                    ReductionCounter <= ReductionCounter + 1'b1;
                                end
                                State <= LOAD_IFMAP;
                            end
                        end else begin
                            OutChannelTile <= OutChannelTile + 1'b1;
                        end
                    end
                    default: TilePhase <= TILE_FETCH;
                endcase
            end

            DRAIN: begin
                if (DrainCounter == DrainCycles - 1) begin
                    OutputFeatureMapWriteDoneOut <= 1'b1;
                    State <= IDLE;
                end else begin
                    DrainCounter <= DrainCounter + 1'b1;
                end
            end

            default: begin
                State <= IDLE;
            end
        endcase
    end
end
endmodule
