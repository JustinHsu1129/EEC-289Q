`timescale 1ns/1ps

module fc_serializer #(
    parameter WIDTH = 16,
    parameter NUM   = 120
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start,

    input  logic [NUM*WIDTH-1:0] vec,

    output logic [WIDTH-1:0] out_data,
    output logic out_valid,
    input  logic out_ready
);

    logic [NUM*WIDTH-1:0] buffer;
    logic [$clog2(NUM):0] count; // Tracks remaining elements to transmit
    logic active;

    // Combinationally drive outputs to avoid 1-cycle handshake lag
    assign out_data  = buffer[WIDTH-1:0];
    assign out_valid = active;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            buffer <= '0;
            count  <= '0;
            active <= 1'b0;
        end else begin
            if (start) begin
                buffer <= vec;
                count  <= NUM;
                active <= 1'b1;
            end else if (active && out_ready) begin
                if (count == 1) begin
                    active <= 1'b0;
                    count  <= '0;
                end else begin
                    buffer <= buffer >> WIDTH; // Shift next piece of data into position
                    count  <= count - 1'b1;
                end
            end
        end
    end
endmodule