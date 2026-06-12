`timescale 1 ns / 1 ps

// Input-stationary PE: activation latched locally; weights stream in (not stored).
module PE #(
    parameter InputFeatureMapBitWidth = 16,
    parameter WeightBitWidth = 8,
    parameter OutputFeatureMapBitWidth = 32,
    parameter InputFeatureMapSigned = 1
)(
    input logic Clock,
    input logic ResetNegative,
    input logic WeightEnableIn,
    input logic [WeightBitWidth-1:0] WeightDataIn,
    output logic [WeightBitWidth-1:0] WeightDataOut,
    input logic InputFeatureMapEnableIn,
    input logic InputFeatureMapValidIn,
    input logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    input logic [OutputFeatureMapBitWidth-1:0] PartialSumDataIn,
    output logic [OutputFeatureMapBitWidth-1:0] PartialSumDataOut
);

logic [InputFeatureMapBitWidth-1:0] IfmapRegister;
logic signed [InputFeatureMapBitWidth:0] IfmapOperand;
logic signed [WeightBitWidth-1:0] WeightOperand;
logic signed [OutputFeatureMapBitWidth-1:0] PartialSumData;

assign WeightDataOut = WeightDataIn;
assign PartialSumData = PartialSumDataIn;
assign IfmapOperand = InputFeatureMapSigned
    ? $signed({IfmapRegister[InputFeatureMapBitWidth-1], IfmapRegister})
    : $signed({1'b0, IfmapRegister});
assign WeightOperand = WeightDataIn;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        IfmapRegister <= {InputFeatureMapBitWidth{1'b0}};
        PartialSumDataOut <= '0;
    end else begin
        if (InputFeatureMapEnableIn && InputFeatureMapValidIn) begin
            IfmapRegister <= InputFeatureMapDataIn;
        end
        if (WeightEnableIn) begin
            PartialSumDataOut <= (IfmapOperand * WeightOperand) + PartialSumData;
        end
    end
end
endmodule
