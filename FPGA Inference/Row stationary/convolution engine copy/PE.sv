`timescale 1 ns / 1 ps

// Row-stationary PE: the IFMAP row value stays local while weights stream through
// and partial sums propagate down the column.
module PE #(
    parameter InputFeatureMapBitWidth = 16,
    parameter WeightBitWidth = 8,
    parameter OutputFeatureMapBitWidth = 32
)(
    input logic Clock,
    input logic ResetNegative,
    input logic RowLoadEnableIn,
    input logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    input logic WeightEnableIn,
    input logic [WeightBitWidth-1:0] WeightDataIn,
    output logic [WeightBitWidth-1:0] WeightDataOut,
    input logic [OutputFeatureMapBitWidth-1:0] PartialSumDataIn,
    output logic [OutputFeatureMapBitWidth-1:0] PartialSumDataOut
);

logic signed [InputFeatureMapBitWidth-1:0] IfmapRegister;
logic signed [InputFeatureMapBitWidth-1:0] IfmapOperand;
logic signed [WeightBitWidth-1:0] WeightOperand;
logic signed [OutputFeatureMapBitWidth-1:0] PartialSumOperand;
logic signed [OutputFeatureMapBitWidth-1:0] ProductData;

assign WeightDataOut = WeightDataIn;
assign IfmapOperand = IfmapRegister;
assign WeightOperand = WeightDataIn;
assign PartialSumOperand = PartialSumDataIn;
assign ProductData = IfmapOperand * WeightOperand;
assign PartialSumDataOut = WeightEnableIn ? (ProductData + PartialSumOperand) : PartialSumOperand;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        IfmapRegister <= '0;
    end else if (RowLoadEnableIn) begin
        IfmapRegister <= InputFeatureMapDataIn;
    end
end
endmodule
