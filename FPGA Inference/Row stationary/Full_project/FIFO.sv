`timescale 1ns / 1ps

module FIFO #(
    parameter int DataWidth = 16,
    parameter int LogDepth = 3,
    parameter int FifoDepth = 0
)(
    input logic Clock,
    input logic ResetNegative,
    input logic WriteRequest,
    input logic ReadRequest,
    input logic [DataWidth-1:0] DataIn,
    output logic [DataWidth-1:0] DataOut,
    output logic Full,
    output logic Empty
);

localparam int RequestedDepth = (FifoDepth > 0) ? FifoDepth : (1 << LogDepth);
localparam int ActualDepth = (RequestedDepth < 1) ? 1 : RequestedDepth;
localparam int PointerWidth = (ActualDepth <= 1) ? 1 : $clog2(ActualDepth);
localparam int EntryCountWidth = (ActualDepth <= 1) ? 1 : $clog2(ActualDepth + 1);

logic [DataWidth-1:0] Memory [0:ActualDepth-1];
logic [PointerWidth-1:0] WritePointer;
logic [PointerWidth-1:0] ReadPointer;
logic [EntryCountWidth-1:0] EntryCount;
logic ReadAccepted;
logic WriteAccepted;

assign Full = (EntryCount == ActualDepth);
assign Empty = (EntryCount == 0);
assign ReadAccepted = ReadRequest && !Empty;
assign WriteAccepted = WriteRequest && (!Full || ReadAccepted);
assign DataOut = Memory[ReadPointer];

always_ff @(posedge Clock) begin
    if (~ResetNegative) begin
        WritePointer <= '0;
        ReadPointer <= '0;
        EntryCount <= '0;
    end else begin
        if (WriteAccepted) begin
            Memory[WritePointer] <= DataIn;
            WritePointer <= (WritePointer == ActualDepth - 1) ? '0 : WritePointer + 1'b1;
        end

        if (ReadAccepted) begin
            ReadPointer <= (ReadPointer == ActualDepth - 1) ? '0 : ReadPointer + 1'b1;
        end

        case ({WriteAccepted, ReadAccepted})
            2'b10: EntryCount <= EntryCount + 1'b1;
            2'b01: EntryCount <= EntryCount - 1'b1;
            default: EntryCount <= EntryCount;
        endcase
    end
end
endmodule
