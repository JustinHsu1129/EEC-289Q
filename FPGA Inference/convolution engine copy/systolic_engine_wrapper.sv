`timescale 1ns / 1ps

module systolic_engine #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32,
    parameter ARRAY_ROWS = 16,
    parameter ARRAY_COLS = 16
)(
    input logic clk,
    input logic rst_n,
    input logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0] flat_act_in,
    input logic [ARRAY_COLS-1:0] flat_shift_in,
    input logic [ARRAY_ROWS-1:0][DATA_WIDTH-1:0] flat_weight_in,
    input logic [ARRAY_ROWS-1:0] flat_mac_en_in,
    input logic [ARRAY_ROWS-1:0] flat_clr_in,
    output logic [ARRAY_COLS-1:0][ACCUM_WIDTH-1:0] flat_psum_out,
    output logic [ARRAY_COLS-1:0] flat_psum_valid_out
);

    logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0] skewed_act_in;
    logic [ARRAY_COLS-1:0] skewed_shift_in;
    logic [ARRAY_ROWS-1:0][DATA_WIDTH-1:0] skewed_weight_in;
    logic [ARRAY_ROWS-1:0] skewed_mac_en_in;
    logic [ARRAY_ROWS-1:0] skewed_clr_in;
    logic [ARRAY_COLS-1:0][ACCUM_WIDTH-1:0] array_psum_out;
    logic [ARRAY_COLS-1:0] array_psum_valid_out;

    // skew buffers
    skew_buffer #(.WIDTH(DATA_WIDTH), .CHANNELS(ARRAY_COLS)) act_skew (
        .clk(clk), .rst_n(rst_n), .din(flat_act_in), .dout(skewed_act_in)
    );
    skew_buffer #(.WIDTH(1), .CHANNELS(ARRAY_COLS)) shift_skew (
        .clk(clk), .rst_n(rst_n), .din(flat_shift_in), .dout(skewed_shift_in)
    );
    skew_buffer #(.WIDTH(DATA_WIDTH), .CHANNELS(ARRAY_ROWS)) weight_skew (
        .clk(clk), .rst_n(rst_n), .din(flat_weight_in), .dout(skewed_weight_in)
    );
    skew_buffer #(.WIDTH(1), .CHANNELS(ARRAY_ROWS)) mac_en_skew (
        .clk(clk), .rst_n(rst_n), .din(flat_mac_en_in), .dout(skewed_mac_en_in)
    );
    skew_buffer #(.WIDTH(1), .CHANNELS(ARRAY_ROWS)) clr_skew (
        .clk(clk), .rst_n(rst_n), .din(flat_clr_in), .dout(skewed_clr_in)
    );

    // physical array
    systolic_array #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACCUM_WIDTH(ACCUM_WIDTH),
        .ARRAY_ROWS(ARRAY_ROWS),
        .ARRAY_COLS(ARRAY_COLS)
    ) core_array (
        .clk(clk), .rst_n(rst_n),
        .act_in(skewed_act_in),
        .shift_in(skewed_shift_in),
        .weight_in(skewed_weight_in),
        .mac_en_in(skewed_mac_en_in),
        .clr_in(skewed_clr_in),
        .psum_out(array_psum_out),
        .psum_valid_out(array_psum_valid_out)
    );

    // deskew buffers
    deskew_buffer #(.WIDTH(ACCUM_WIDTH), .CHANNELS(ARRAY_COLS)) psum_deskew (
        .clk(clk), .rst_n(rst_n), .din(array_psum_out), .dout(flat_psum_out)
    );
    deskew_buffer #(.WIDTH(1), .CHANNELS(ARRAY_COLS)) valid_deskew (
        .clk(clk), .rst_n(rst_n), .din(array_psum_valid_out), .dout(flat_psum_valid_out)
    );

endmodule