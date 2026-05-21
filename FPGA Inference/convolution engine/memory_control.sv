`timescale 1ns / 1ps

module dual_port_bram #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 10
)(
    input logic clk,
    
    // write
    input logic we,
    input logic [ADDR_WIDTH-1:0] waddr,
    input logic [DATA_WIDTH-1:0] wdata,
    
    // read
    input logic re,
    input logic [ADDR_WIDTH-1:0] raddr,
    output logic [DATA_WIDTH-1:0] rdata
);

    // calculate memory depth based on address width
    localparam DEPTH = 1 << ADDR_WIDTH;
    
    // instance m10k block (might need to use the hard IP instead of trying to infer it)
	
    (* ramstyle = "M10K" *) logic [DATA_WIDTH-1:0] ram [0:DEPTH-1];

    initial begin
        for (int i = 0; i < DEPTH; i = i + 1)
            ram[i] = '0;
    end

    always_ff @(posedge clk) begin
        if (we)
            ram[waddr] <= wdata;
    end
	
    assign rdata = ram[raddr];

endmodule

module weight_addr_gen #(
    parameter KERNEL_SIZE = 3,
    parameter ADDR_WIDTH = 10
)(
    input logic clk,
    input logic rst_n,
    
    input logic start,
    input logic [ADDR_WIDTH-1:0] filter_base_addr,
    
    output logic [ADDR_WIDTH-1:0] bram_addr,
    output logic bram_read_en,
    output logic done_out
);

    localparam KERNEL_AREA = KERNEL_SIZE * KERNEL_SIZE;
    
    typedef enum logic {IDLE, READ} state_t;
    state_t state;

    logic [$clog2(KERNEL_AREA)-1:0] count;

    // memory addr for weights
    assign bram_addr = filter_base_addr + count;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            count <= '0;
            bram_read_en <= 1'b0;
            done_out <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    done_out <= 1'b0;
                    if (start) begin
                        state <= READ;
                        count <= '0;
                        bram_read_en <= 1'b1;
                    end else begin
                        bram_read_en <= 1'b0;
                    end
                end
                
                READ: begin
                    bram_read_en <= 1'b1;
                    
                    if (count == KERNEL_AREA - 1) begin
                        state <= IDLE;
                        bram_read_en <= 1'b0;
                        done_out <= 1'b1;
                    end else begin
                        count <= count + 1;
                    end
                end
            endcase
        end
    end

endmodule

module activation_line_buffer #(
    parameter DATA_WIDTH = 8,
    parameter IMAGE_W = 28,
    parameter KERNEL_SIZE = 3,
    parameter ARRAY_COLS = 16,
    parameter ADDR_WIDTH = 10
)(
    input logic clk,
    input logic rst_n,
    input logic [DATA_WIDTH-1:0] pixel_in,
    input logic  shift_en,
    input logic [ADDR_WIDTH-1:0] out_x,
    input logic [$clog2(KERNEL_SIZE)-1:0] kx,
    input logic [$clog2(KERNEL_SIZE)-1:0] ky,
    output logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0] act_out
);

    localparam BUF_DEPTH = KERNEL_SIZE * IMAGE_W;
    
    // shift_reg[MSB...(BUF_DEPTH-1)*DATA_WIDTH] = newest pixel
    // shift_reg[DATA_WIDTH-1...0] = oldest pixel
    // each clock (when shift_en), newest pixel enters at MSB, everything ages toward LSB
    logic [BUF_DEPTH*DATA_WIDTH-1:0] shift_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            shift_reg <= '0;
        end else if (shift_en) begin
            shift_reg <= {pixel_in, shift_reg[BUF_DEPTH*DATA_WIDTH-1 : DATA_WIDTH]};
        end
    end

    genvar j;
    generate
        for (j = 0; j < ARRAY_COLS; j = j + 1) begin : gen_out
            // the oldest pixel in the loaded 3-row window is index 0.  Therefore
            // kernel tap (ky,kx) for output column (out_x+j) maps directly to the
            // standard valid-convolution pixel at row ky and column out_x+j+kx.
            wire signed [31:0] tap_x =
                $signed({1'b0, out_x}) + $signed({1'b0, kx}) + j;

            wire signed [31:0] raw_index =
                ($signed({1'b0, ky}) * IMAGE_W) + tap_x;
            wire valid_tap = (tap_x >= 0 && tap_x < IMAGE_W &&
                              raw_index >= 0 && raw_index < BUF_DEPTH);
            wire [31:0] safe_index = valid_tap ? raw_index : 0;
            
            // zero pad any column that falls outside the valid buffer range
            assign act_out[j] = valid_tap ? shift_reg[safe_index * DATA_WIDTH +: DATA_WIDTH]
                                           : '0;
        end
    endgenerate

endmodule
