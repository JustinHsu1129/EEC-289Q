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
    input logic ClearAccumulationIn,
    input logic MacEnableIn,
    input logic OutputFeatureMapEnableIn,
    input logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    input logic [PeArrayRows-1:0][PeArrayColumns-1:0][WeightBitWidth-1:0] WeightDataIn,
    output logic [PeArrayColumns-1:0] OutputFeatureMapValidOut,
    output logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapDataOut
);

logic signed [OutputFeatureMapBitWidth-1:0] PeAccumulationData [PeArrayRows][PeArrayColumns];

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        OutputFeatureMapValidOut <= {PeArrayColumns{1'b0}};
    end else begin
        OutputFeatureMapValidOut <= {PeArrayColumns{OutputFeatureMapEnableIn}};
    end
end

generate
    genvar r;
    genvar c;

    for (c = 0; c < PeArrayColumns; c++) begin : initCol
        logic signed [OutputFeatureMapBitWidth-1:0] ColumnSum;

        always_comb begin
            ColumnSum = '0;
            for (int RowIndex = 0; RowIndex < PeArrayRows; RowIndex++) begin
                ColumnSum = ColumnSum + PeAccumulationData[RowIndex][c];
            end
            OutputFeatureMapDataOut[c] = ColumnSum;
        end
    end

    for (r = 0; r < PeArrayRows; r++) begin : row
        for (c = 0; c < PeArrayColumns; c++) begin : col
            PE #(
                .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
                .WeightBitWidth(WeightBitWidth),
                .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth),
                .InputFeatureMapSigned(InputFeatureMapSigned)
            ) pe_inst (
                .Clock(Clock),
                .ResetNegative(ResetNegative),
                .ClearAccumulationIn(ClearAccumulationIn),
                .MacEnableIn(MacEnableIn),
                .InputFeatureMapDataIn(InputFeatureMapDataIn[r]),
                .InputFeatureMapDataOut(),
                .WeightDataIn(WeightDataIn[r][c]),
                .WeightDataOut(),
                .OutputFeatureMapDataOut(PeAccumulationData[r][c])
            );
        end
    end
endgenerate
endmodule
