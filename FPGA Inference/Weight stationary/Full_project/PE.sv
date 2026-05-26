`timescale 1 ns / 1 ps

module PE #(
    parameter InputFeatureMapBitWidth = 16, // Bit width of the input feature map
    parameter WeightBitWidth = 8, // Bit width of the weight data
    parameter OutputFeatureMapBitWidth = 32, // Bit width of the output (accumulator)
    parameter InputFeatureMapSigned = 1
)(
    input logic Clock,
    input logic ResetNegative,
    input logic WeightEnableIn,
    input logic WeightValidIn,
    input logic [WeightBitWidth-1:0] WeightDataIn,
    output logic WeightValidOut,
    output logic [WeightBitWidth-1:0] WeightDataOut,
    input logic InputFeatureMapEnableIn,
    input logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataIn,
    output logic InputFeatureMapValidOut,
    output logic [InputFeatureMapBitWidth-1:0] InputFeatureMapDataOut,
    input logic [OutputFeatureMapBitWidth-1:0] PartialSumDataIn,
    output logic [OutputFeatureMapBitWidth-1:0] PartialSumDataOut
);

logic signed [WeightBitWidth-1:0] WeightRegister;
logic signed [InputFeatureMapBitWidth:0] InputFeatureMapOperand;
logic signed [OutputFeatureMapBitWidth-1:0] PartialSumData;
logic signed [OutputFeatureMapBitWidth-1:0] MultiplicationResult;

assign WeightDataOut = WeightRegister;
assign PartialSumData = PartialSumDataIn;
assign InputFeatureMapOperand = InputFeatureMapSigned
    ? $signed({InputFeatureMapDataIn[InputFeatureMapBitWidth-1], InputFeatureMapDataIn})
    : $signed({1'b0, InputFeatureMapDataIn});

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        WeightRegister <= {WeightBitWidth{1'b0}};
        InputFeatureMapValidOut <= 1'b0;
    end else begin
        if (WeightEnableIn && WeightValidIn) begin
            WeightRegister <= WeightDataIn;
        end
        if (InputFeatureMapEnableIn) begin
            MultiplicationResult <= InputFeatureMapOperand * WeightRegister;
        end
        if (InputFeatureMapValidOut) begin
            PartialSumDataOut <= MultiplicationResult + PartialSumData;
        end
        InputFeatureMapValidOut <= InputFeatureMapEnableIn;
        InputFeatureMapDataOut <= InputFeatureMapDataIn;
        WeightValidOut <= WeightValidIn;
    end
end
endmodule
