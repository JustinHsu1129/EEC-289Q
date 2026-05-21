`timescale 1ns / 1ps

module skew_buffer #(
    parameter WIDTH = 8,      
    parameter CHANNELS = 16   
)(
    input logic clk,
    input logic rst_n,
    input logic [CHANNELS-1:0][WIDTH-1:0] din,
    output logic [CHANNELS-1:0][WIDTH-1:0] dout
);

    genvar i;
    generate
        for (i = 0; i < CHANNELS; i = i + 1) begin : gen_channel
            if (i == 0) begin : gen_delay_0
                assign dout[i] = din[i];
            end else begin : gen_delay_n
                // flat shift register: (i) stages, each WIDTH bits wide.
                logic [(i)*WIDTH-1:0] sr;
                
                always_ff @(posedge clk or negedge rst_n) begin
                    if (!rst_n) begin
                        sr <= '0;
                    end else begin
                        // shift left-new data enters at MSB, oldest data exits at LSB
                        if (i == 1) begin
                            sr <= din[i];
                        end else begin
                            sr <= {din[i], sr[(i)*WIDTH-1 : WIDTH]};
                        end
                    end
                end
                
                // oldest data is at the LSB
                assign dout[i] = sr[WIDTH-1 : 0];
            end
        end
    endgenerate

endmodule

module deskew_buffer #(
    parameter WIDTH = 33,     
    parameter CHANNELS = 16   
)(
    input logic clk,
    input logic rst_n,
    input logic [CHANNELS-1:0][WIDTH-1:0] din,
    output logic [CHANNELS-1:0][WIDTH-1:0] dout
);

    genvar i;
    generate
        for (i = 0; i < CHANNELS; i = i + 1) begin : gen_channel
            localparam DELAY = CHANNELS - 1 - i;
            
            if (DELAY == 0) begin : gen_delay_0
                assign dout[i] = din[i];
            end else begin : gen_delay_n
                // flat shift register
                logic [(DELAY)*WIDTH-1:0] sr;
                
                always_ff @(posedge clk or negedge rst_n) begin
                    if (!rst_n) begin
                        sr <= '0;
                    end else begin
                        // shift left: new data enters at MSB, oldest data exits at LSB
                        if (DELAY == 1) begin
                            sr <= din[i];
                        end else begin
                            sr <= {din[i], sr[(DELAY)*WIDTH-1 : WIDTH]};
                        end
                    end
                end
                
                // oldest data is at the LSB
                assign dout[i] = sr[WIDTH-1 : 0];
            end
        end
    endgenerate

endmodule