`timescale 1ns / 1ps

module lenet_accelerator #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32, // partial sum width in PEs
    parameter IMAGE_W = 28, // input width
    parameter IMAGE_H = 28, // input height
    parameter KERNEL_SIZE = 3, // filter size (AxA)
    parameter ARRAY_ROWS = 2, // physical amt of PE rows
    parameter ARRAY_COLS = 2, // physical amt of PE cols
    parameter ACT_ADDR_W = 10, // IA mem width: roundup[log2(IMAGE_W * IMAGE_H)]
    parameter WT_ADDR_W = 4, // weight mem width: roundup[log2(KERNEL_SIZE^2)]   
    parameter PSUM_ADDR_W = 10 // partial sum mem address width 
)(
    input logic clk,
    input logic rst_n,
    input logic start,
    output logic done,
    input logic host_act_we,
    input logic [ACT_ADDR_W-1:0] host_act_addr,
    input logic [DATA_WIDTH-1:0] host_act_wdata,
    input logic host_wt_we,
    input logic [WT_ADDR_W-1:0]  host_wt_addr,
    input logic [ARRAY_ROWS*DATA_WIDTH-1:0] host_wt_wdata,
    input logic host_psum_re,
    input logic [PSUM_ADDR_W-1:0] host_psum_addr,
    output logic [ARRAY_COLS*ACCUM_WIDTH-1:0] host_psum_rdata
);

    logic act_bram_re;
    logic [ACT_ADDR_W-1:0] act_bram_addr;
    logic [DATA_WIDTH-1:0] act_bram_rdata;
    logic line_buf_shift_en;
    logic [ACT_ADDR_W-1:0] out_x;
    logic [$clog2(KERNEL_SIZE)-1:0] kx, ky;
    logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0] engine_act_in;
    logic engine_mac_en, engine_clr, engine_shift_in;
    logic wt_bram_re;
    logic [WT_ADDR_W-1:0] wt_bram_addr;
    logic [ARRAY_ROWS*DATA_WIDTH-1:0] wt_bram_rdata;
    logic [ARRAY_ROWS-1:0][DATA_WIDTH-1:0] engine_wt_in;
    logic [ARRAY_ROWS-1:0] flat_mac_en;
    logic [ARRAY_ROWS-1:0] flat_clr;
    logic [ARRAY_COLS-1:0] flat_shift;
    logic [ARRAY_COLS-1:0][ACCUM_WIDTH-1:0] engine_psum_out;
    logic [ARRAY_COLS-1:0] engine_psum_valid;
    logic [ARRAY_COLS*ACCUM_WIDTH-1:0] engine_psum_packed;

    assign flat_mac_en = {ARRAY_ROWS{engine_mac_en}};
    assign flat_clr = {ARRAY_ROWS{engine_clr}};
    assign flat_shift = {ARRAY_COLS{engine_shift_in}};

    genvar g;
    generate
        for (g = 0; g < ARRAY_ROWS; g++) begin : gen_wt_unpack
            assign engine_wt_in[g] = wt_bram_rdata[g*DATA_WIDTH +: DATA_WIDTH];
        end
    endgenerate

    // instance memory (use m10k on FPGA)

    dual_port_bram #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ACT_ADDR_W)
    ) act_bram (
        .clk(clk),
        .we(host_act_we), .waddr(host_act_addr), .wdata(host_act_wdata),
        .re(act_bram_re), .raddr(act_bram_addr), .rdata(act_bram_rdata)
    );

    dual_port_bram #(
        .DATA_WIDTH(ARRAY_ROWS * DATA_WIDTH), 
        .ADDR_WIDTH(WT_ADDR_W)
    ) weight_bram (
        .clk(clk),
        .we(host_wt_we), .waddr(host_wt_addr), .wdata(host_wt_wdata),
        .re(wt_bram_re), .raddr(wt_bram_addr), .rdata(wt_bram_rdata)
    );

    logic [PSUM_ADDR_W-1:0] psum_write_addr;
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) psum_write_addr <= '0;
        else if (start) psum_write_addr <= '0;
        else if (engine_psum_valid[0]) psum_write_addr <= psum_write_addr + 1;
    end

    dual_port_bram #(
        .DATA_WIDTH(ARRAY_COLS * ACCUM_WIDTH),
        .ADDR_WIDTH(PSUM_ADDR_W)
    ) psum_bram_inst (
        .clk(clk),
        .we(engine_psum_valid[0]), .waddr(psum_write_addr), .wdata(engine_psum_packed),
        .re(host_psum_re),         .raddr(host_psum_addr),  .rdata(host_psum_rdata)
    );

	// controller instantiation

    main_controller #(
        .IMAGE_W(IMAGE_W), .IMAGE_H(IMAGE_H), .KERNEL_SIZE(KERNEL_SIZE),
        .ARRAY_ROWS(ARRAY_ROWS), .ARRAY_COLS(ARRAY_COLS),
        .ADDR_WIDTH(ACT_ADDR_W), .WT_ADDR_W(WT_ADDR_W)
    ) controller (
        .clk(clk), .rst_n(rst_n),
        .start(start), .done(done),
        .act_bram_re(act_bram_re), .act_bram_addr(act_bram_addr),
        .line_buf_shift_en(line_buf_shift_en),
        .out_x(out_x), .kx(kx), .ky(ky),
        .wt_bram_re(wt_bram_re), .wt_bram_addr(wt_bram_addr),
        .engine_mac_en(engine_mac_en), .engine_clr(engine_clr), .engine_shift_in(engine_shift_in)
    );

    activation_line_buffer #(
        .DATA_WIDTH(DATA_WIDTH), .IMAGE_W(IMAGE_W),
        .KERNEL_SIZE(KERNEL_SIZE), .ARRAY_COLS(ARRAY_COLS)
    ) line_buf (
        .clk(clk), .rst_n(rst_n),
        .pixel_in(act_bram_rdata), .shift_en(line_buf_shift_en),
        .out_x(out_x), .kx(kx), .ky(ky),
        .act_out(engine_act_in)
    );

	// instantiate systolic engine
    
    systolic_engine #(
        .DATA_WIDTH(DATA_WIDTH), .ACCUM_WIDTH(ACCUM_WIDTH),
        .ARRAY_ROWS(ARRAY_ROWS), .ARRAY_COLS(ARRAY_COLS)
    ) core (
        .clk(clk), .rst_n(rst_n),
        .flat_act_in(engine_act_in),
        .flat_shift_in(flat_shift),
        .flat_weight_in(engine_wt_in),
        .flat_mac_en_in(flat_mac_en),
        .flat_clr_in(flat_clr),
        .flat_psum_out(engine_psum_out),
        .flat_psum_valid_out(engine_psum_valid)
    );

    genvar p;
    generate
        for (p = 0; p < ARRAY_COLS; p++) begin : gen_psum_pack
            assign engine_psum_packed[p*ACCUM_WIDTH +: ACCUM_WIDTH] = engine_psum_out[p];
        end
    endgenerate

endmodule