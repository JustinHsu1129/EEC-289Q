`timescale 1ns / 1ps

module mac_pe #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32
)(
    input logic clk,
    input logic rst_n,

    // top to bottom flow (IAs)
    input logic [DATA_WIDTH-1:0] act_in,
    input logic shift_in,
    input logic [ACCUM_WIDTH-1:0] psum_in, 
    
    output logic [DATA_WIDTH-1:0] act_out,
    output logic shift_out,
    output logic [ACCUM_WIDTH-1:0] psum_out,

    // left to right flow (weights)
    input logic [DATA_WIDTH-1:0] weight_in,
    input logic mac_en_in, 
    input logic clr_in,   
    
    output logic [DATA_WIDTH-1:0] weight_out,
    output logic mac_en_out,
    output logic clr_out
);

    logic signed [DATA_WIDTH-1:0] signed_act;
    logic signed [DATA_WIDTH-1:0] signed_weight;
    logic signed [DATA_WIDTH*2-1:0] mult_res;
    logic signed [ACCUM_WIDTH-1:0] accum_q;

    assign signed_act = act_in;
    assign signed_weight = weight_in;
    assign mult_res = signed_act * signed_weight;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            act_out    <= '0;
            weight_out <= '0;
            mac_en_out <= '0;
            clr_out    <= '0;
            shift_out  <= '0;
            psum_out   <= '0;
            accum_q    <= '0;
        end else begin
            act_out    <= act_in;
            weight_out <= weight_in;
            mac_en_out <= mac_en_in;
            clr_out    <= clr_in;
            shift_out  <= shift_in;

            if (shift_in) begin
                psum_out <= accum_q;
                accum_q  <= psum_in;
            end else begin
                psum_out <= '0;
                if (clr_in)
                    accum_q <= '0;
                else if (mac_en_in)
                    accum_q <= accum_q + mult_res;
            end
        end
    end

endmodule

module systolic_array #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32,
    parameter ARRAY_ROWS = 16, 
    parameter ARRAY_COLS = 16  
)(
    input logic clk,
    input logic rst_n,

    // top edge (IA and drain control)
    input logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0] act_in,
    input logic [ARRAY_COLS-1:0] shift_in,
    
    // left edge (weights and compute control)
    input logic [ARRAY_ROWS-1:0][DATA_WIDTH-1:0] weight_in,
    input logic [ARRAY_ROWS-1:0] mac_en_in,
    input logic [ARRAY_ROWS-1:0] lr_in,

    // bottom edge (drain outputs)
    output logic [ARRAY_COLS-1:0][ACCUM_WIDTH-1:0] psum_out,
    output logic [ARRAY_COLS-1:0] psum_valid_out
);

    logic [DATA_WIDTH-1:0] act_wire [ARRAY_ROWS+1][ARRAY_COLS];
    logic shift_wire [ARRAY_ROWS+1][ARRAY_COLS];
    logic [ACCUM_WIDTH-1:0] psum_wire [ARRAY_ROWS+1][ARRAY_COLS];

    logic [DATA_WIDTH-1:0] weight_wire [ARRAY_ROWS][ARRAY_COLS+1];
    logic mac_en_wire [ARRAY_ROWS][ARRAY_COLS+1];
    logic clr_wire [ARRAY_ROWS][ARRAY_COLS+1];

    genvar i, j;
    generate
        // top edge connections
        for (j = 0; j < ARRAY_COLS; j++) begin : gen_top_edge
            assign act_wire[0][j] = act_in[j];
            assign shift_wire[0][j] = shift_in[j];
            assign psum_wire[0][j] = '0; 
        end

        // left edge connections
        for (i = 0; i < ARRAY_ROWS; i++) begin : gen_left_edge
            assign weight_wire[i][0] = weight_in[i];
            assign mac_en_wire[i][0] = mac_en_in[i];
            assign clr_wire[i][0] = clr_in[i];
        end

        // instantiate the PE Grid
        for (i = 0; i < ARRAY_ROWS; i++) begin : row_loop
            for (j = 0; j < ARRAY_COLS; j++) begin : col_loop
                mac_pe #(
                    .DATA_WIDTH(DATA_WIDTH),
                    .ACCUM_WIDTH(ACCUM_WIDTH)
                ) pe_inst (
                    .clk(clk),
                    .rst_n(rst_n),

                    // top to bottom
                    .act_in   (act_wire[i][j]),
                    .shift_in (shift_wire[i][j]),
                    .psum_in  (psum_wire[i][j]),
                    .act_out  (act_wire[i+1][j]),
                    .shift_out(shift_wire[i+1][j]),
                    .psum_out (psum_wire[i+1][j]),

                    // left to right
                    .weight_in (weight_wire[i][j]),
                    .mac_en_in (mac_en_wire[i][j]),
                    .clr_in    (clr_wire[i][j]),
                    .weight_out(weight_wire[i][j+1]),
                    .mac_en_out(mac_en_wire[i][j+1]),
                    .clr_out   (clr_wire[i][j+1])
                );
            end
        end

        // bottom edge connections (outputs)
        for (j = 0; j < ARRAY_COLS; j++) begin : gen_bottom_edge
            assign psum_out[j] = psum_wire[ARRAY_ROWS][j];
            assign psum_valid_out[j] = shift_wire[ARRAY_ROWS][j];
        end
    endgenerate

endmodule