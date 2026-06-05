`timescale 1 ns / 1 ps

// Output-stationary PE: the output partial sum stays local while inputs and weights stream through.
module PE #(
    parameter InputFeatureMapBitWidth = 16,
    parameter WeightBitWidth = 8,
    parameter OutputFeatureMapBitWidth = 32
)(
    input logic Clock,
    input logic ResetNegative,
    input logic ClearAccumulationIn,
    input logic MacEnableIn,
    input logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    output logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataOut,
    input logic [WeightBitWidth-1:0] WeightDataIn,
    output logic [WeightBitWidth-1:0] WeightDataOut,
    output logic [OutputFeatureMapBitWidth-1:0] OutputFeatureMapDataOut
);

logic signed [InputFeatureMapBitWidth-1:0] IfmapOperand;
logic signed [WeightBitWidth-1:0] WeightOperand;
logic signed [OutputFeatureMapBitWidth-1:0] ProductData;
logic signed [OutputFeatureMapBitWidth-1:0] AccumulationRegister;

assign InputFeatureMapDataOut = InputFeatureMapDataIn;
assign WeightDataOut = WeightDataIn;
assign OutputFeatureMapDataOut = AccumulationRegister;
assign IfmapOperand = InputFeatureMapDataIn;
assign WeightOperand = WeightDataIn;
assign ProductData = IfmapOperand * WeightOperand;

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        AccumulationRegister <= '0;
    end else begin
        if (ClearAccumulationIn) begin
            AccumulationRegister <= '0;
        end else if (MacEnableIn) begin
            AccumulationRegister <= AccumulationRegister + ProductData;
        end
    end
end
endmodule
