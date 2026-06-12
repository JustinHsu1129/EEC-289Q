`timescale 1 ns / 1 ps

module PE_Array #(
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter InputFeatureMapChannelCount = 1,
    parameter InputFeatureMapBitWidth = 16,
    parameter WeightBitWidth = 8,
    parameter OutputFeatureMapBitWidth = 32,
    parameter InputFeatureMapSigned = 1
)(
    input logic Clock,
    input logic ResetNegative,
    input logic InputFeatureMapEnableIn,
    input logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    input logic WeightMacEnableIn,
    input logic [PeArrayColumns-1:0][WeightBitWidth-1:0] WeightDataIn,
    output logic [PeArrayColumns-1:0] OutputFeatureMapValidOut,
    output logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapDataOut
);

logic [WeightBitWidth-1:0] ConnectWeightData [PeArrayRows][PeArrayColumns];
logic [OutputFeatureMapBitWidth-1:0] ConnectOutputData [PeArrayRows+1][PeArrayColumns];
logic WeightMacValid;
localparam int RowCounterWidth = (PeArrayRows <= 1) ? 1 : $clog2(PeArrayRows);
logic [RowCounterWidth-1:0] IfmapLoadRow;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        OutputFeatureMapValidOut <= {PeArrayColumns{1'b0}};
        IfmapLoadRow <= '0;
        WeightMacValid <= 1'b0;
    end else begin
        if (InputFeatureMapEnableIn) begin
            if (IfmapLoadRow == PeArrayRows-1) begin
                IfmapLoadRow <= '0;
            end else begin
                IfmapLoadRow <= IfmapLoadRow + 1'b1;
            end
        end
        WeightMacValid <= WeightMacEnableIn;
        OutputFeatureMapValidOut <= {PeArrayColumns{WeightMacValid}};
    end
end

generate
    genvar r;
    genvar c;

    // When IC < PeArrayRows, only row 0 is loaded; bottom-row tap would read zeros.
    localparam int OutputRowTap = (InputFeatureMapChannelCount < PeArrayRows) ? 1 : PeArrayRows;

    for (c = 0; c < PeArrayColumns; c++) begin : initCol
        assign ConnectOutputData[0][c] = {OutputFeatureMapBitWidth{1'b0}};
        assign OutputFeatureMapDataOut[c] = ConnectOutputData[OutputRowTap][c];
    end

    for (r = 0; r < PeArrayRows; r++) begin : row
        for (c = 0; c < PeArrayColumns; c++) begin : col
            assign ConnectWeightData[r][c] = WeightDataIn[c];
            PE #(
                .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
                .WeightBitWidth(WeightBitWidth),
                .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth),
                .InputFeatureMapSigned(InputFeatureMapSigned)
            ) pe_inst (
                .Clock(Clock),
                .ResetNegative(ResetNegative),
                .WeightEnableIn(WeightMacEnableIn),
                .WeightDataIn(ConnectWeightData[r][c]),
                .WeightDataOut(),
                .InputFeatureMapEnableIn(InputFeatureMapEnableIn),
                .InputFeatureMapValidIn(IfmapLoadRow == r),
                .InputFeatureMapDataIn(InputFeatureMapDataIn[r]),
                .PartialSumDataIn(ConnectOutputData[r][c]),
                .PartialSumDataOut(ConnectOutputData[r+1][c])
            );
        end
    end
endgenerate
endmodule
