`timescale 1ns / 1ps

module main_controller #(
    parameter IMAGE_W = 28,
    parameter IMAGE_H = 28,
    parameter KERNEL_SIZE = 3,
    parameter ARRAY_ROWS = 16,
    parameter ARRAY_COLS = 16,
    parameter ADDR_WIDTH = 10,
    parameter WT_ADDR_W = 4
)(
    input logic clk,
    input logic rst_n,
    
    input logic start,
    output logic done,

    // IA bram control
    output logic act_bram_re,
    output logic [ADDR_WIDTH-1:0] act_bram_addr,
    
    // line buffer control
    output logic line_buf_shift_en,
    output logic [ADDR_WIDTH-1:0] out_x,
    output logic [$clog2(KERNEL_SIZE)-1:0] kx,
    output logic [$clog2(KERNEL_SIZE)-1:0] ky,

    // weight bram control
    output logic wt_bram_re,
    output logic [WT_ADDR_W-1:0]  wt_bram_addr,
    
    // systolic engine control
    output logic engine_mac_en,
    output logic engine_clr,
    output logic engine_shift_in
);

    typedef enum logic [3:0] {
        IDLE, 
        PRELOAD,       
        WAIT_WEIGHTS,
        COMPUTE,       
        DRAIN,         
        NEXT_TILE,     
        SHIFT_ROW,  
        FLUSH,
        DONE_STATE
    } state_t;
    
    state_t state;

    localparam KERNEL_AREA = KERNEL_SIZE * KERNEL_SIZE;
    localparam COMPUTE_DONE = KERNEL_AREA;
    localparam WAIT_COUNT = 2;

    logic [ADDR_WIDTH-1:0] out_y;
    logic [ADDR_WIDTH-1:0] stream_count; 
    logic [6:0] drain_count;

    logic act_bram_re_q;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) act_bram_re_q <= 1'b0;
        else        act_bram_re_q <= act_bram_re;
    end

    assign line_buf_shift_en = act_bram_re;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= IDLE;
            act_bram_addr <= '1;
            act_bram_re <= 1'b0;
            out_x <= '0;
            out_y <= '0;
            stream_count <= '0;
            kx <= '0;
            ky <= '0;
            drain_count <= '0;
            wt_bram_re <= 1'b0;
            wt_bram_addr <= '0;
            engine_mac_en <= 1'b0;
            engine_clr <= 1'b0;
            engine_shift_in <= 1'b0;
            done <= 1'b0;
        end else begin
            // default pulldowns
            act_bram_re <= 1'b0;
            wt_bram_re <= 1'b0;
            engine_clr <= 1'b0;
            engine_mac_en <= 1'b0;
            engine_shift_in <= 1'b0;
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        state <= PRELOAD;
                        act_bram_addr <= '1;
                        stream_count <= '0;
                        out_x <= '0;
                        out_y <= '0;
                    end
                end

                PRELOAD: begin
                    if (stream_count < KERNEL_SIZE * IMAGE_W) begin
                        act_bram_re <= 1'b1;
                        act_bram_addr <= act_bram_addr + 1;
                        stream_count <= stream_count + 1;
                    end else if (!act_bram_re_q) begin
                        state <= WAIT_WEIGHTS;
                        stream_count <= '0;
                    end
                end

                WAIT_WEIGHTS: begin
                    if (stream_count == 0) begin
                        engine_clr    <= 1'b1;
                        wt_bram_re    <= 1'b1;
                        wt_bram_addr  <= '0;
                        stream_count  <= stream_count + 1;
                    end else if (stream_count < WAIT_COUNT) begin
                        stream_count <= stream_count + 1;
                    end else begin
                        state        <= COMPUTE;
                        stream_count <= '0;
                        kx           <= '0;
                        ky           <= '0;
                    end
                end

                COMPUTE: begin
                    if (stream_count < KERNEL_AREA) begin
                        engine_mac_en <= 1'b1;
                        
                        kx <= stream_count % KERNEL_SIZE;
                        ky <= stream_count / KERNEL_SIZE;

                        if (stream_count < KERNEL_AREA - 1) begin
                            wt_bram_re   <= 1'b1;
                            wt_bram_addr <= stream_count + 1;
                        end
                    end

                    if (stream_count == COMPUTE_DONE - 1) begin
                        state        <= DRAIN;
                        drain_count  <= '0;
                        stream_count <= '0;
                    end else begin
                        stream_count <= stream_count + 1;
                    end
                end

                DRAIN: begin
                    if (drain_count < ARRAY_ROWS) begin
                        engine_shift_in <= 1'b1;
                        drain_count <= drain_count + 1;
                    end else begin
                        state <= NEXT_TILE;
                    end
                end

                NEXT_TILE: begin
                    if (out_x + ARRAY_COLS >= IMAGE_W) begin
                        out_x <= '0;
                        if (out_y + 1 >= IMAGE_H - KERNEL_SIZE + 1) begin
                            state <= FLUSH;
                            drain_count <= '0;
                        end else begin
                            state <= SHIFT_ROW;
                            stream_count <= '0;
                            out_y <= out_y + 1;
                        end
                    end else begin
                        out_x <= out_x + ARRAY_COLS;
                        state <= WAIT_WEIGHTS;
                        stream_count <= '0;
                    end
                end

                SHIFT_ROW: begin
                    if (stream_count < IMAGE_W) begin
                        act_bram_re <= 1'b1;
                        act_bram_addr <= act_bram_addr + 1;
                        stream_count <= stream_count + 1;
                    end else if (!act_bram_re_q) begin
                        state <= WAIT_WEIGHTS;
                        stream_count <= '0;
                    end
                end

                FLUSH: begin
                    if (drain_count < 64) begin
                        drain_count <= drain_count + 1;
                    end else begin
                        state <= DONE_STATE;
                    end
                end

                DONE_STATE: begin
                    done <= 1'b1;
                    state <= IDLE;
                end
                
                default: state <= IDLE;
            endcase
        end
    end

endmodule
