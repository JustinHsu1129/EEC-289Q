`timescale 1 ns / 1 ps

module PE_Array #(
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter InputFeatureMapChannelCount = 1,
    parameter InputFeatureMapBitWidth = 16,
    parameter WeightBitWidth = 8,
    parameter OutputFeatureMapBitWidth = 32
)(
    input logic Clock,
    input logic ResetNegative,
    input logic RowLoadEnableIn,
    input logic [PeArrayRows-1:0][InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    input logic WeightMacEnableIn,
    input logic [PeArrayRows-1:0][PeArrayColumns-1:0][WeightBitWidth-1:0] WeightDataIn,
    output logic [PeArrayColumns-1:0] OutputFeatureMapValidOut,
    output logic [PeArrayColumns-1:0][OutputFeatureMapBitWidth-1:0] OutputFeatureMapDataOut
);

logic [OutputFeatureMapBitWidth-1:0] ConnectPartialSumData [PeArrayRows+1][PeArrayColumns];
logic WeightMacValid;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        OutputFeatureMapValidOut <= {PeArrayColumns{1'b0}};
        WeightMacValid <= 1'b0;
    end else begin
        WeightMacValid <= WeightMacEnableIn;
        OutputFeatureMapValidOut <= {PeArrayColumns{WeightMacValid}};
    end
end

generate
    genvar r;
    genvar c;

    localparam int OutputRowTap = PeArrayRows;

    for (c = 0; c < PeArrayColumns; c++) begin : init_column
        assign ConnectPartialSumData[0][c] = '0;
        assign OutputFeatureMapDataOut[c] = ConnectPartialSumData[OutputRowTap][c];
    end

    for (r = 0; r < PeArrayRows; r++) begin : row
        for (c = 0; c < PeArrayColumns; c++) begin : col
            PE #(
                .InputFeatureMapBitWidth(InputFeatureMapBitWidth),
                .WeightBitWidth(WeightBitWidth),
                .OutputFeatureMapBitWidth(OutputFeatureMapBitWidth)
            ) pe_inst (
                .Clock(Clock),
                .ResetNegative(ResetNegative),
                .RowLoadEnableIn(RowLoadEnableIn),
                .InputFeatureMapDataIn(InputFeatureMapDataIn[r]),
                .WeightEnableIn(WeightMacEnableIn),
                .WeightDataIn(WeightDataIn[r][c]),
                .WeightDataOut(),
                .PartialSumDataIn(ConnectPartialSumData[r][c]),
                .PartialSumDataOut(ConnectPartialSumData[r+1][c])
            );
        end
    end
endgenerate
endmodule
