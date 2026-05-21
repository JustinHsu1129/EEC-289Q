`timescale 1ns / 1ps

module im2col_addr_gen #(
    parameter IMAGE_W = 28,
    parameter IMAGE_H = 28,
    parameter KERNEL_SIZE = 3,
    parameter ADDR_WIDTH = 10 // log2(28*28) = log2(784) = 10
)(
    input logic clk,
    input logic rst_n,
    
    // control interface
    input logic start,      // pulse to start generating addresses for a patch
    input logic [ADDR_WIDTH-1:0] base_out_x, // X coordinate of the output pixel
    input logic [ADDR_WIDTH-1:0] base_out_y, // Y coordinate of the output pixel
    
    // bram Interface
    output logic [ADDR_WIDTH-1:0] bram_addr,
    output logic bram_read_en,
    
    // control signals to engine
    output logic mac_en_out,
    output logic clr_out,
    output logic done_out    // on when the 9-cycle patch is complete
);


    logic [$clog2(KERNEL_SIZE)-1:0] kx, ky;
    
    typedef enum logic [1:0] {IDLE, COMPUTE, DONE} state_t;
    state_t state, next_state;

    logic [ADDR_WIDTH-1:0] pixel_x, pixel_y;
    
    // map window to original coords
    assign pixel_x = base_out_x + kx;
    assign pixel_y = base_out_y + ky;
    
    // 1D memory address: (Y * IMAGE_W) + X
    assign bram_addr = (pixel_y * IMAGE_W) + pixel_x;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            kx <= '0;
            ky <= '0;
            bram_read_en <= 1'b0;
            mac_en_out <= 1'b0;
            clr_out <= 1'b0;
            done_out <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    done_out <= 1'b0;
                    mac_en_out <= 1'b0;
                    if (start) begin
                        state <= COMPUTE;
                        kx <= '0;
                        ky <= '0;
                        bram_read_en <= 1'b1;
                        clr_out <= 1'b1; // clear on first cycle
                    end else begin
                        bram_read_en <= 1'b0;
                        clr_out <= 1'b0;
                    end
                end

                COMPUTE: begin
                    clr_out <= 1'b0;
                    mac_en_out <= 1'b1;
                    bram_read_en <= 1'b1;

                    if (kx == KERNEL_SIZE - 1) begin
                        kx <= '0;
                        if (ky == KERNEL_SIZE - 1) begin
                            state <= DONE;
                            bram_read_en <= 1'b0;
                            mac_en_out <= 1'b0;
                        end else begin
                            ky <= ky + 1;
                        end
                    end else begin
                        kx <= kx + 1;
                    end
                end

                DONE: begin
                    done_out <= 1'b1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule