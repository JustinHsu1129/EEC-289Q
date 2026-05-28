`timescale 1 ns / 1 ps

// Input-stationary controller: latch IFMAP at each (oy,ox,ky,kx,ic), stream WEIGHT / OFMAP tiles.
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
    output logic InputFeatureMapStartOut,
    output logic [InputFeatureMapAddressBit-1:0] InputFeatureMapAddressOut,
    output logic InputFeatureMapReadEnableOut,
    output logic MacDoneOut,
    output logic [OutputFeatureMapAddressBit-1:0] OutputFeatureMapAddressOut,
    output logic OutputFeatureMapWriteEnableOut,
    output logic OutputFeatureMapWriteDoneOut,
    output logic AccumulatePartialSumOut,
    output logic WeightMacEnableOut
);

logic [1:0] State;
localparam IDLE = 2'd0, IFMAP = 2'd1, WEIGHT = 2'd2, WAIT = 2'd3;

localparam NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
localparam NumInTile = (InputFeatureMapChannelCount + PeArrayRows - 1) / PeArrayRows;
localparam WaitCycles = (PeArrayRows == 1) ? 2 : PeArrayColumns;
localparam IfmapLoadCycles = PeArrayRows + 2;
localparam IfmapLoadCounterWidth = (IfmapLoadCycles <= 1) ? 1 : $clog2(IfmapLoadCycles + 1);
localparam WeightRowWidth = (WeightHeight <= 1) ? 1 : $clog2(WeightHeight);
localparam WeightColWidth = (WeightWidth <= 1) ? 1 : $clog2(WeightWidth);
localparam OutputFeatureMapWidthCounterWidth = (OutputFeatureMapWidth <= 1) ? 1 : $clog2(OutputFeatureMapWidth);
localparam OutputFeatureMapHeightCounterWidth = (OutputFeatureMapHeight <= 1) ? 1 : $clog2(OutputFeatureMapHeight);
localparam OutTileWidth = (NumOutTile <= 1) ? 1 : $clog2(NumOutTile);
localparam InTileWidth = (NumInTile <= 1) ? 1 : $clog2(NumInTile);
localparam WaitCounterWidth = (WaitCycles <= 1) ? 1 : $clog2(WaitCycles);

logic [IfmapLoadCounterWidth-1:0] IfmapLoadCounter;
logic [WaitCounterWidth-1:0] ColCounter;
logic [WeightRowWidth-1:0] RowOffset;
logic [WeightColWidth-1:0] ColOffset;
logic [OutputFeatureMapWidthCounterWidth-1:0] IfWidthCounter;
logic [OutputFeatureMapHeightCounterWidth-1:0] IfHeightCounter;
logic [OutTileWidth-1:0] OutChannelTile;
logic [OutTileWidth-1:0] WriteOutChannelTile;
logic [InTileWidth-1:0] InChannelTile;
logic InputFeatureMapFinish, LastTile, LastChannelTile;
logic [WeightAddressBit-1:0] WeightAddressComb;
logic [InputFeatureMapAddressBit-1:0] IfmapAddressComb;
logic WeightMacRequest;
logic WeightMacRequestDly;

assign InputFeatureMapFinish = IfWidthCounter == OutputFeatureMapWidth - 1 &&
    IfHeightCounter == OutputFeatureMapHeight - 1;
assign LastChannelTile = OutChannelTile == NumOutTile - 1 && InChannelTile == NumInTile - 1;
assign LastTile = LastChannelTile && RowOffset == WeightHeight - 1 && ColOffset == WeightWidth - 1;
assign AccumulatePartialSumOut = (RowOffset != 0) || (ColOffset != 0) || (InChannelTile != 0);
// One MAC per output tile; ready is a single-cycle pulse from Systolic_Top.
assign WeightMacRequest = (State == WEIGHT) && !OutputFeatureMapReadyIn;
assign WeightMacEnableOut = WeightMacRequestDly;
assign WeightReadEnableOut = (State == WEIGHT);
assign OutputFeatureMapWriteEnableOut = OutputFeatureMapReadyIn;
assign OutputFeatureMapAddressOut = (IfHeightCounter * OutputFeatureMapWidth + IfWidthCounter) * NumOutTile
    + WriteOutChannelTile;

// Keep PhysicalRow=0 when IC fits in one in-tile (e.g. IC=1); kernel steps by NumOutTile*PeArrayRows.
localparam WeightKernelStride = NumOutTile * PeArrayRows;
assign WeightAddressComb = OutChannelTile + WeightKernelStride * (
    (NumInTile * (RowOffset * WeightWidth + ColOffset)) + InChannelTile
);
assign IfmapAddressComb = (IfHeightCounter + RowOffset) * InputFeatureMapWidth * NumInTile
    + (IfWidthCounter + ColOffset) * NumInTile
    + (InChannelTile * PeArrayRows);

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        WeightPrefetchOut <= 1'b0;
        WeightAddressOut <= 0;
        InputFeatureMapStartOut <= 1'b0;
        InputFeatureMapAddressOut <= 0;
        InputFeatureMapReadEnableOut <= 1'b0;
        MacDoneOut <= 1'b0;
        State <= IDLE;
        IfmapLoadCounter <= 0;
        RowOffset <= 0;
        ColOffset <= 0;
        IfWidthCounter <= 0;
        IfHeightCounter <= 0;
        OutChannelTile <= 0;
        WriteOutChannelTile <= 0;
        InChannelTile <= 0;
        ColCounter <= 0;
        WeightMacRequestDly <= 1'b0;
    end else begin
        WeightMacRequestDly <= WeightMacRequest;
        WeightAddressOut <= WeightAddressComb;
        InputFeatureMapAddressOut <= IfmapAddressComb;

        if (WeightMacRequest) begin
            WriteOutChannelTile <= OutChannelTile;
        end

        case (State)
            IDLE: begin
                ColCounter <= 0;
                IfmapLoadCounter <= 0;
                RowOffset <= 0;
                ColOffset <= 0;
                IfWidthCounter <= 0;
                IfHeightCounter <= 0;
                OutChannelTile <= 0;
                WriteOutChannelTile <= 0;
                InChannelTile <= 0;
                MacDoneOut <= 1'b0;
                if (StartIn) begin
                    State <= IFMAP;
                    InputFeatureMapStartOut <= 1'b1;
                    InputFeatureMapReadEnableOut <= 1'b1;
                end
            end
            IFMAP: begin
                InputFeatureMapStartOut <= 1'b0;
                WeightPrefetchOut <= 1'b0;
                MacDoneOut <= 1'b0;
                InputFeatureMapReadEnableOut <= 1'b1;
                if (IfmapLoadCounter == IfmapLoadCycles[IfmapLoadCounterWidth-1:0]) begin
                    IfmapLoadCounter <= 0;
                    InputFeatureMapReadEnableOut <= 1'b0;
                    State <= WEIGHT;
                    OutChannelTile <= 0;
                end else begin
                    IfmapLoadCounter <= IfmapLoadCounter + 1'b1;
                end
            end
            WEIGHT: begin
                WeightPrefetchOut <= 1'b0;
                InputFeatureMapReadEnableOut <= 1'b0;
                if (LastTile && InputFeatureMapFinish && OutChannelTile == NumOutTile - 1) begin
                    MacDoneOut <= 1'b1;
                end else begin
                    MacDoneOut <= 1'b0;
                end
                if (OutputFeatureMapReadyIn) begin
                    if (OutChannelTile == NumOutTile - 1) begin
                        OutChannelTile <= 0;
                        if (LastChannelTile) begin
                            InChannelTile <= 0;
                            if (ColOffset == WeightWidth - 1) begin
                                RowOffset <= RowOffset + 1'b1;
                                ColOffset <= 0;
                            end else begin
                                ColOffset <= ColOffset + 1'b1;
                            end
                        end else begin
                            InChannelTile <= InChannelTile + 1'b1;
                        end
                        if (LastTile) begin
                            RowOffset <= 0;
                            ColOffset <= 0;
                            InChannelTile <= 0;
                            if (InputFeatureMapFinish) begin
                                IfWidthCounter <= 0;
                                IfHeightCounter <= 0;
                                State <= IDLE;
                            end else begin
                                if (IfWidthCounter == OutputFeatureMapWidth - 1) begin
                                    IfWidthCounter <= 0;
                                    IfHeightCounter <= IfHeightCounter + 1'b1;
                                end else begin
                                    IfWidthCounter <= IfWidthCounter + 1'b1;
                                end
                                State <= WAIT;
                            end
                        end else begin
                            State <= IFMAP;
                            IfmapLoadCounter <= 0;
                        end
                    end else begin
                        OutChannelTile <= OutChannelTile + 1'b1;
                    end
                end
            end
            WAIT: begin
                MacDoneOut <= 1'b0;
                if (ColCounter < WaitCycles - 1) begin
                    ColCounter <= ColCounter + 1'b1;
                end else begin
                    ColCounter <= 0;
                    State <= IFMAP;
                    InputFeatureMapReadEnableOut <= 1'b1;
                end
            end
        endcase
    end
end

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        OutputFeatureMapWriteDoneOut <= 1'b0;
    end else begin
        if (MacDoneOut) begin
            OutputFeatureMapWriteDoneOut <= 1'b1;
        end else if (StartIn) begin
            OutputFeatureMapWriteDoneOut <= 1'b0;
        end
    end
end
endmodule
