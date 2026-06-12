module pooling_top #(
    parameter WIDTH      = 18,
    parameter IMG_WIDTH  = 28,
    parameter CHANNELS   = 6
)(
    input  logic clk,
    input  logic rst_n,

    // READ PORT (Port A) – 18-bit feature maps
    output logic [$clog2(IMG_WIDTH*IMG_WIDTH)-1:0] rd_addr,
    input  logic [WIDTH-1:0] rd_data,

    // WRITE PORT (Port B) – 8-bit pooled activations
    output logic [$clog2((IMG_WIDTH/2)*(IMG_WIDTH/2))-1:0] wr_addr,
    output logic [7:0]  wr_data,
    output logic        wr_en
);

    localparam OUT_WIDTH = IMG_WIDTH/2;

    // Streaming interface to pooling_layer
    logic [WIDTH-1:0] in_data;
    logic             in_valid;
    logic             in_ready;

    logic [7:0]       out_data;
    logic             out_valid;
    logic             out_ready;

    assign out_ready = 1'b1;

    // Tile counters
    logic [$clog2(CHANNELS)-1:0]  ch;
    logic [$clog2(OUT_WIDTH)-1:0] out_r;
    logic [$clog2(OUT_WIDTH)-1:0] out_c;
    logic [1:0]                   tile_idx;

    // Channel latched at tile start for correct writeback
    logic [$clog2(CHANNELS)-1:0] ch_write;

    // FSM
    typedef enum logic [2:0] {
        S_IDLE,
        S_READ_TILE,
        S_WAIT_DATA,
        S_SEND_TILE,
        S_WAIT_OUTPUT
    } state_t;

    state_t state;

    // Tile-based, quantizing pooling layer
    pooling_layer #(
        .IN_WIDTH(WIDTH),
        .OUT_WIDTH(8),
        .SHIFT(2)
    ) dut_pool (
        .clk(clk),
        .rst_n(rst_n),
        .in_data(in_data),
        .in_valid(in_valid),
        .in_ready(in_ready),
        .out_data(out_data),
        .out_valid(out_valid),
        .out_ready(out_ready)
    );

    // Combinational address logic
    logic [$clog2(IMG_WIDTH*IMG_WIDTH)-1:0]          next_rd_addr;
    logic [$clog2((IMG_WIDTH/2)*(IMG_WIDTH/2))-1:0]  next_wr_addr;
	
	 // Replace "int r0, c0;" with properly sized logic signals
    logic [4:0] r0;
    logic [4:0] c0;

    always_comb begin
        r0 = {out_r, 1'b0}; // Left shift by 1 bit is a zero-cost wire-based multiplication by 2
        c0 = {out_c, 1'b0}; // Left shift by 1 bit

        case (tile_idx)
            2'd0: next_rd_addr = r0*IMG_WIDTH + c0;
            2'd1: next_rd_addr = r0*IMG_WIDTH + (c0+1'b1);
            2'd2: next_rd_addr = (r0+1'b1)*IMG_WIDTH + c0;
            2'd3: next_rd_addr = (r0+1'b1)*IMG_WIDTH + (c0+1'b1);
            default: next_rd_addr = '0;
        endcase

        next_wr_addr = out_r * OUT_WIDTH + out_c;
    end

    // FSM + registers
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state    <= S_IDLE;
            ch       <= '0;
            out_r    <= '0;
            out_c    <= '0;
            tile_idx <= '0;
            ch_write <= '0;
            in_valid <= 1'b0;
            wr_en    <= 1'b0;
            rd_addr  <= '0;
            wr_addr  <= '0;
            wr_data  <= '0;
        end else begin
            in_valid <= 1'b0;
            wr_en    <= 1'b0;

            case (state)

                S_IDLE: begin
                    tile_idx <= 2'd0;
                    rd_addr  <= next_rd_addr;
                    state    <= S_READ_TILE;
                end

                S_READ_TILE: begin
                    if (tile_idx == 2'd0)
                        ch_write <= ch;   // latch channel for this tile

                    rd_addr <= next_rd_addr;
                    state   <= S_WAIT_DATA;
                end

                S_WAIT_DATA: begin
                    state <= S_SEND_TILE;
                end

                S_SEND_TILE: begin
                    if (in_ready) begin
                        in_valid <= 1'b1;
                        in_data  <= rd_data;

                        if (tile_idx == 2'd3) begin
                            tile_idx <= 2'd0;
                            state    <= S_WAIT_OUTPUT;
                        end else begin
                            tile_idx <= tile_idx + 2'd1;
                            rd_addr  <= next_rd_addr;
                            state    <= S_READ_TILE;
                        end
                    end
                end

                S_WAIT_OUTPUT: begin
                    if (out_valid) begin
                        wr_addr <= next_wr_addr;
                        wr_data <= out_data;
                        wr_en   <= 1'b1;

                        // advance tile coordinates
                        if (out_c == OUT_WIDTH-1) begin
                            out_c <= '0;
                            if (out_r == OUT_WIDTH-1) begin
                                out_r <= '0;
                                if (ch == CHANNELS-1)
                                    ch <= '0;
                                else
                                    ch <= ch + 1'b1;
                            end else begin
                                out_r <= out_r + 1'b1;
                            end
                        end else begin
                            out_c <= out_c + 1'b1;
                        end

                        rd_addr <= next_rd_addr;
                        state   <= S_READ_TILE;
                    end
                end

            endcase
        end
    end

endmodule
