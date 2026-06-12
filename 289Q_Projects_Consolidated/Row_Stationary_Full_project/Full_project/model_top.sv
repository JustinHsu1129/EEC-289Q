`timescale 1ns / 1ps

module model_top #(
    parameter DATA_WIDTH  = 8,
    parameter ACCUM_WIDTH = 32,
    parameter WIDTH       = 8
)(
    input  logic clk,
    input  logic rst_n,
    input  logic start,
    output logic done,
    output logic [9:0] LED,
	 output logic [6:0] HEX0  // ADDED: Output for DE1-SoC Seven Segment Display
);

    localparam int SYSTOLIC_LANES = 16;
    localparam int CONV1_ROWS     = 1;
    localparam int CONV2_ROWS     = 1;
    localparam int CONV2_IC       = 6;
    localparam int CONV2_SPATIAL  = 14 * 14;

    localparam int CONV1_REDUCTION_STEPS = 1 * 5 * 5;
    localparam int CONV1_TOTAL_PIXELS    = 28 * 28;
    localparam int CONV1_IFMAP_DEPTH     = CONV1_TOTAL_PIXELS * CONV1_REDUCTION_STEPS;
    localparam int CONV1_IFMAP_ADDR_BITS = (CONV1_IFMAP_DEPTH <= 1) ? 1 : $clog2(CONV1_IFMAP_DEPTH);

    localparam int CONV2_REDUCTION_STEPS = 6 * 5 * 5;
    localparam int CONV2_TOTAL_PIXELS    = 10 * 10;
    localparam int CONV2_IFMAP_DEPTH     = CONV2_TOTAL_PIXELS * CONV2_REDUCTION_STEPS;
    localparam int CONV2_IFMAP_ADDR_BITS = (CONV2_IFMAP_DEPTH <= 1) ? 1 : $clog2(CONV2_IFMAP_DEPTH);

    // ============================================================
    // SYSTEM FSM STATES
    // ============================================================
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_CONV1,
        ST_POOL1,
        ST_CONV2,
        ST_POOL2,
        ST_FC_STREAM,
        ST_DONE
    } state_t;

    state_t state, next_state;

    // ============================================================
    // INTER-LAYER CONTROL & INTERFACE SIGNALS
    // ============================================================
    // Conv1 Signals (32x32x1 -> 28x28x6)
    logic        conv1_start, conv1_finish;
    logic [9:0]  conv1_test_addr;
    logic        conv1_test_check;
    logic [16*32-1:0] conv1_test_out;

    // Pool1 Signals (28x28x6 -> 14x14x6)
    logic        pool1_rst_n;
    logic [9:0]  pool1_rd_addr;
    logic [17:0] pool1_rd_data;
    logic [7:0]  pool1_wr_addr;
    logic [7:0]  pool1_wr_data;
    logic        pool1_wr_en;

    // Conv2 Signals (14x14x6 -> 10x10x16)
    logic        conv2_start, conv2_finish;
    logic [9:0]  conv2_test_addr;
    logic        conv2_test_check;
    logic [16*32-1:0] conv2_test_out;
    logic [10:0] conv2_ifmap_waddr;
    logic [CONV2_ROWS*16-1:0] conv2_ifmap_wdata;  // 16-bit storage word //CHANGED

    // Pool2 Signals (10x10x16 -> 5x5x16)
    logic        pool2_rst_n;
    logic [6:0]  pool2_rd_addr;
    logic [17:0] pool2_rd_data;
    logic [4:0]  pool2_wr_addr;
    logic [7:0]  pool2_wr_data;
    logic        pool2_wr_en;

    // FC Pipeline Streaming Buffer Signals
    logic [8:0]  fc_buf_waddr;
    logic [7:0]  fc_buf_rdata;
    logic [8:0]  fc_buf_raddr;
    logic [8:0]  fc_stream_ptr;
    logic        fc_start, fc_in_valid, fc_in_ready, fc_done;

    // Channel trackers (since channel state registers are internal to pooling_top)
    logic [10:0] pool1_write_cnt;
    logic [3:0]  pool1_ch;
    logic [3:0]  pool1_ch_write;
    logic [8:0]  pool2_write_cnt;
    logic [4:0]  pool2_ch;

    logic signed [7:0] conv1_bias [0:5];
    logic signed [7:0] conv2_bias [0:15];

    initial begin
        int bias_val;
        $readmemh("conv1_bias.hex", conv1_bias);
        $readmemh("conv2_bias.hex", conv2_bias);
        for (int i = 0; i < 6; i++) begin
            bias_val = conv1_bias[i];
            if (bias_val >= 128)
                conv1_bias[i] = bias_val - 256;
        end
        for (int i = 0; i < 16; i++) begin
            bias_val = conv2_bias[i];
            if (bias_val >= 128)
                conv2_bias[i] = bias_val - 256;
        end
    end

    // ============================================================
    // CENTRAL CONTROL FSM
    // ============================================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) state <= ST_IDLE;
        else        state <= next_state;
    end

    always_comb begin
        next_state = state;
        case (state)
            ST_IDLE:      if (start) next_state = ST_CONV1;
            ST_CONV1:     if (conv1_finish) next_state = ST_POOL1;
            ST_POOL1:     if (pool1_write_cnt == 1176) next_state = ST_CONV2; // 14x14x6 elements finished
            ST_CONV2:     if (conv2_finish) next_state = ST_POOL2;
            ST_POOL2:     if (pool2_write_cnt == 400) next_state = ST_FC_STREAM;  // 5x5x16 elements finished
            ST_FC_STREAM: if (fc_done) next_state = ST_DONE;
            ST_DONE:      next_state = ST_IDLE;
            default:      next_state = ST_IDLE;
        endcase
    end

    // FSM Control Driving Outputs & Resets
    assign conv1_start      = (state == ST_IDLE && start);
    assign conv1_test_check = (state == ST_POOL1); // Enable test read out during pooling phase
    assign pool1_rst_n      = rst_n && (state == ST_POOL1);

    assign conv2_start      = (state == ST_POOL1 && next_state == ST_CONV2);
    assign conv2_test_check = (state == ST_POOL2); // Enable test read out during pooling phase
    assign pool2_rst_n      = rst_n && (state == ST_POOL2);

    assign fc_start         = (state == ST_POOL2 && next_state == ST_FC_STREAM);
    assign done             = (state == ST_DONE);

    // ============================================================
    // LAYER 1: CONVOLUTION 1 (Input: 32x32x1 -> Output: 28x28x6)
    // ============================================================
    function automatic logic signed [31:0] conv_with_bias(
        input logic signed [31:0] accum,
        input logic signed [7:0]  bias
    );
        logic signed [31:0] biased;
        begin
            biased = accum + {{24{bias[7]}}, bias};
            conv_with_bias = biased;
        end
    endfunction

    function automatic logic signed [17:0] conv_relu_to_pool18(input logic signed [31:0] value);
        logic signed [31:0] relu_val;
        begin
            relu_val   = (value < 32'sd0) ? 32'sd0 : value;
            conv_relu_to_pool18 = relu_val[17:0];
        end
    endfunction

    assign conv1_test_addr = pool1_rd_addr;
    assign pool1_rd_data   = conv_relu_to_pool18(
        conv_with_bias(conv1_test_out[pool1_ch * 32 +: 32], conv1_bias[pool1_ch])
    );

    Systolic_Top #(
        .PeArrayRows(CONV1_ROWS),
        .PeArrayColumns(SYSTOLIC_LANES),
        .WeightBitWidth(8),
        .InputFeatureMapBitWidth(8),
        .OutputFeatureMapBitWidth(32),
        .InputFeatureMapSigned(1),
        .WeightAddressBit(11),
        .InputFeatureMapAddressBit(CONV1_IFMAP_ADDR_BITS),
        .OutputFeatureMapAddressBit(10),
        .OutputFeatureMapChannelCount(6),
        .InputFeatureMapChannelCount(1),
        .WeightWidth(5),
        .WeightHeight(5),
        .InputFeatureMapWidth(32),
        .InputFeatureMapHeight(32),
        .OutputFeatureMapWidth(28),
        .OutputFeatureMapHeight(28),
		  .StorageBitWidth(16)
    ) conv1_inst (
        .Clock(clk),
        .ResetNegative(rst_n),
        .TestOutputAddressIn(conv1_test_addr),
        .TestCheckIn(conv1_test_check),
        .TestOutputOut(conv1_test_out),
        .IfmapWriteAddressIn('0),
        .IfmapWriteDataIn('0),
        .IfmapWriteEnableIn(1'b0),
        .StartIn(conv1_start),
        .FinishOut(conv1_finish)
    );

    // ============================================================
    // LAYER 2: MAX POOLING 1 (Input: 28x28x6 -> Output: 14x14x6)
    // ============================================================
    pooling_top #(
        .WIDTH(18),
        .IMG_WIDTH(28),
        .CHANNELS(6)
    ) pool1_inst (
        .clk(clk),
        .rst_n(pool1_rst_n),
        .rd_addr(pool1_rd_addr),
        .rd_data(pool1_rd_data),
        .wr_addr(pool1_wr_addr),
        .wr_data(pool1_wr_data),
        .wr_en(pool1_wr_en),
        .ch(pool1_ch),
        .ch_write(pool1_ch_write)
    );

    // Monitor pooling writes to trace spatial layout wrapping
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pool1_write_cnt <= '0;
        end else if (state == ST_POOL1) begin
            if (pool1_wr_en) begin
                pool1_write_cnt <= pool1_write_cnt + 1;
            end
        end else begin
            pool1_write_cnt <= '0;
        end
    end

    // ============================================================
    // LAYER 3: CONVOLUTION 2 (Input: 14x14x6 -> Output: 10x10x16)
    // ============================================================
    assign conv2_test_addr = pool2_rd_addr;
    assign pool2_rd_data   = conv_relu_to_pool18(
        conv_with_bias(conv2_test_out[pool2_ch * 32 +: 32], conv2_bias[pool2_ch])
    );
    assign conv2_ifmap_waddr = (pool1_ch_write * CONV2_SPATIAL) + pool1_wr_addr;
    // pool1_wr_data is 8-bit, non-negative (ReLU). Zero-extend into 16-bit storage. 
    assign conv2_ifmap_wdata = {8'd0, pool1_wr_data}; //CHANGED

    Systolic_Top #(
        .PeArrayRows(CONV2_ROWS),
        .PeArrayColumns(SYSTOLIC_LANES),
        .WeightBitWidth(8),
        .InputFeatureMapBitWidth(16),
        .OutputFeatureMapBitWidth(32),
        .InputFeatureMapSigned(0),
        .WeightAddressBit(11),
        .InputFeatureMapAddressBit(CONV2_IFMAP_ADDR_BITS),
        .OutputFeatureMapAddressBit(10),
        .OutputFeatureMapChannelCount(16),
        .InputFeatureMapChannelCount(6),
        .WeightWidth(5),
        .WeightHeight(5),
        .InputFeatureMapWidth(14),
        .InputFeatureMapHeight(14),
        .OutputFeatureMapWidth(10),
        .OutputFeatureMapHeight(10),
		  .StorageBitWidth(16) //CHANGED
    ) conv2_inst (
        .Clock(clk),
        .ResetNegative(rst_n),
        .TestOutputAddressIn(conv2_test_addr),
        .TestCheckIn(conv2_test_check),
        .TestOutputOut(conv2_test_out),
        .IfmapWriteAddressIn(conv2_ifmap_waddr),
        .IfmapWriteDataIn(conv2_ifmap_wdata),
        .IfmapWriteEnableIn(state == ST_POOL1 && pool1_wr_en),
        .StartIn(conv2_start),
        .FinishOut(conv2_finish)
    );

    // ============================================================
    // LAYER 4: MAX POOLING 2 (Input: 10x10x16 -> Output: 5x5x16)
    // ============================================================
    pooling_top #(
        .WIDTH(18),
        .IMG_WIDTH(10),
        .CHANNELS(16)
    ) pool2_inst (
        .clk(clk),
        .rst_n(pool2_rst_n),
        .rd_addr(pool2_rd_addr),
        .rd_data(pool2_rd_data),
        .wr_addr(pool2_wr_addr),
        .wr_data(pool2_wr_data),
        .wr_en(pool2_wr_en),
        .ch(pool2_ch),
        .ch_write() // unused here
    );

    // Monitor pooling writes to trace spatial layout wrapping
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pool2_write_cnt <= '0;
        end else if (state == ST_POOL2) begin
            if (pool2_wr_en) begin
                pool2_write_cnt <= pool2_write_cnt + 1;
            end
        end else begin
            pool2_write_cnt <= '0;
        end
    end

    // Linearization buffer converting sequential Pool2 writes into the flat FC streaming layout
    assign fc_buf_waddr = pool2_write_cnt[8:0];

    dual_port_bram #(
        .DATA_WIDTH(8),
        .ADDR_WIDTH(9)
    ) pool2_to_fc_buf (
        .clk(clk),
        .we(pool2_wr_en),
        .waddr(fc_buf_waddr),
        .wdata(pool2_wr_data),
        .re(1'b1),
        .raddr(fc_buf_raddr),
        .rdata(fc_buf_rdata)
    );

    // ============================================================
    // STREAM GENERATION FOR THE FULLY CONNECTED PIPELINE
    // ============================================================
    assign fc_buf_raddr = fc_stream_ptr;
    assign fc_in_valid  = (state == ST_FC_STREAM) && (fc_stream_ptr < 9'd400);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            fc_stream_ptr <= '0;
        end else if (state == ST_IDLE && start) begin
            fc_stream_ptr <= '0;
        end else if (state == ST_FC_STREAM && fc_in_ready && fc_stream_ptr < 9'd400) begin
            fc_stream_ptr <= fc_stream_ptr + 9'd1;
        end else if (state != ST_FC_STREAM && state != ST_DONE) begin
            fc_stream_ptr <= '0;
        end
    end

    // ============================================================
    // LAYERS 5, 6, 7: FULLY CONNECTED PIPELINE (FC1 -> FC2 -> FC3)
    // ============================================================
    fc_top #(
        .WIDTH(WIDTH)
    ) fc_pipeline (
        .clk(clk),
        .rst_n(rst_n),
        .start(fc_start),
        .in_data(fc_buf_rdata),
        .in_valid(fc_in_valid),
        .in_ready(fc_in_ready),
        .done(fc_done),
        .LED(LED)
    );
	 
	 always_comb begin
		 case (LED)
					10'b00_0000_0001: HEX0 = 7'b100_0000; // Digit 0
					10'b00_0000_0010: HEX0 = 7'b111_1001; // Digit 1
					10'b00_0000_0100: HEX0 = 7'b010_0100; // Digit 2
					10'b00_0000_1000: HEX0 = 7'b011_0000; // Digit 3
					10'b00_0001_0000: HEX0 = 7'b001_1001; // Digit 4
					10'b00_0010_0000: HEX0 = 7'b001_0010; // Digit 5
					10'b00_0100_0000: HEX0 = 7'b000_0010; // Digit 6
					10'b00_1000_0000: HEX0 = 7'b111_1000; // Digit 7
					10'b01_0000_0000: HEX0 = 7'b000_0000; // Digit 8
					10'b10_0000_0000: HEX0 = 7'b001_0000; // Digit 9
					default:          HEX0 = 7'b111_1111; // Blank display (No bits or multiple bits active)
		 endcase
    end

endmodule
