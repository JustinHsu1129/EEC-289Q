module fc_top #(
    parameter WIDTH = 8
)(
    input  logic clk,
    input  logic rst_n,

    input  logic start,          // start whole FC pipeline
    input  logic [WIDTH-1:0] in_data,
    input  logic in_valid,
    output logic in_ready,        // FIXED.: Added top-level handshake output to control flow
    output logic done,            // final output ready
    output logic [9:0] LED
);

    // ============================================================
    // FC1: 120 outputs
    // ============================================================
    localparam FC1_IN   = 400;   // example: 5x5x16 flattened
    localparam FC1_OUT  = 120;
    localparam FC_OUT_SHIFT = 6;

    logic fc1_start, fc1_ready, fc1_done;
    logic fc1_in_ready;
    logic [$clog2(FC1_IN*FC1_OUT)-1:0] fc1_waddr; //
    logic signed [WIDTH-1:0] fc1_wdata;
    logic signed [FC1_OUT*(WIDTH+8)-1:0] fc1_out;
    logic signed [FC1_OUT*WIDTH-1:0] fc1_bias;

    // Weight ROM
    fcl_weight_rom # (
        .WIDTH(WIDTH),
        .DEPTH(FC1_IN * FC1_OUT),
        .INIT_FILE("fc1_weight.hex"),
        .INIT_WIDTH(4)
    ) w1 (
        .clk(clk),
        .addr(fc1_waddr),
        .data(fc1_wdata)
    );

    // Bias ROM
    fcl_bias_rom #(
        .WIDTH(WIDTH),
        .NUM_OUTPUTS(FC1_OUT),
        .INIT_FILE("fc1_bias.hex"),
        .INIT_WIDTH(4)
    ) b1 (
        .clk(clk),
        .data(fc1_bias)
    );

    fc_layer #(
        .WIDTH(WIDTH),
        .NUM_INPUTS(FC1_IN),
        .NUM_OUTPUTS(FC1_OUT),
        .OUT_SHIFT(FC_OUT_SHIFT)
    ) fc1 (
        .clk(clk),
        .rst_n(rst_n),
        .layer_start(fc1_start),
        .layer_ready(fc1_ready),
        .layer_done(fc1_done),
        .in_data(in_data),
        .in_valid(in_valid),
        .in_ready(fc1_in_ready),
        .weight_addr(fc1_waddr), //
        .weight_data(fc1_wdata),
        .bias_data(fc1_bias),
        .out_neurons(fc1_out)
    );

    assign fc1_start = start; //
    assign in_ready  = fc1_in_ready; // FIXED: Expose ready signal to the testbench

    // ============================================================
    // SERIALIZER: FC1 → FC2
    // ============================================================
    // FIXED: Changed width from [WIDTH-1:0] to [WIDTH+8-1:0] (16 bits) to match the internal serializer parameter
    logic [WIDTH+8-1:0] ser12_data; 
    logic ser12_valid, ser12_ready; //

    fc_serializer #(
        .WIDTH(WIDTH+8),
        .NUM(FC1_OUT)
    ) ser12 (
        .clk(clk),
        .rst_n(rst_n),
        .start(fc1_done),
        .vec(fc1_out),
        .out_data(ser12_data),
        .out_valid(ser12_valid),
        .out_ready(ser12_ready)
    );

    // ============================================================
    // FC2: 84 outputs
    // ============================================================
    localparam FC2_IN  = FC1_OUT; //
    localparam FC2_OUT = 84;

    logic fc2_start, fc2_ready, fc2_done;
    logic [$clog2(FC2_IN*FC2_OUT)-1:0] fc2_waddr;
    logic signed [WIDTH-1:0] fc2_wdata;
    logic signed [FC2_OUT*(WIDTH+8)-1:0] fc2_out;
    logic signed [FC2_OUT*WIDTH-1:0] fc2_bias; //

    fcl_weight_rom #(
        .WIDTH(WIDTH),
        .DEPTH(FC2_IN * FC2_OUT),
        .INIT_FILE("fc2_weight.hex"),
        .INIT_WIDTH(4)
    ) w2 (
        .clk(clk),
        .addr(fc2_waddr),
        .data(fc2_wdata)
    );

    // Bias ROM
    fcl_bias_rom #(
        .WIDTH(WIDTH),
        .NUM_OUTPUTS(FC2_OUT),
        .INIT_FILE("fc2_bias.hex"),
        .INIT_WIDTH(4)
    ) b2 (
        .clk(clk),
        .data(fc2_bias)
    );

    fc_layer #(
        .WIDTH(WIDTH),
        .NUM_INPUTS(FC2_IN),
        .NUM_OUTPUTS(FC2_OUT),
        .OUT_SHIFT(FC_OUT_SHIFT)
    ) fc2 (
        .clk(clk),
        .rst_n(rst_n),
        .layer_start(fc2_start),
        .layer_ready(fc2_ready),
        .layer_done(fc2_done),
        .in_data(ser12_data[WIDTH-1:0]),
        .in_valid(ser12_valid),
        .in_ready(ser12_ready),
        .weight_addr(fc2_waddr), //
        .weight_data(fc2_wdata),
        .bias_data(fc2_bias),
        .out_neurons(fc2_out)
    );

    assign fc2_start = fc1_done; //

    // ============================================================
    // SERIALIZER: FC2 → FC3
    // ============================================================
    // FIXED: Changed width from [WIDTH-1:0] to [WIDTH+8-1:0] (16 bits) to prevent data truncation errors
    logic [WIDTH+8-1:0] ser23_data;
    logic ser23_valid, ser23_ready; //

    fc_serializer #(
        .WIDTH(WIDTH+8),
        .NUM(FC2_OUT)
    ) ser23 (
        .clk(clk),
        .rst_n(rst_n),
        .start(fc2_done),
        .vec(fc2_out),
        .out_data(ser23_data),
        .out_valid(ser23_valid),
        .out_ready(ser23_ready)
    );

    // ============================================================
    // FC3: 10 outputs (final classifier)
    // ============================================================
    localparam FC3_IN  = FC2_OUT; //
    localparam FC3_OUT = 10;

    logic fc3_start, fc3_ready, fc3_done;
    logic [$clog2(FC3_IN*FC3_OUT)-1:0] fc3_waddr;
    logic signed [WIDTH-1:0] fc3_wdata;
    logic signed [FC3_OUT*(WIDTH+8)-1:0] fc3_out;
    logic signed [FC3_OUT*WIDTH-1:0] fc3_bias; //
    logic signed [WIDTH+8-1:0] fc3_score [0:FC3_OUT-1];
    logic signed [WIDTH+8-1:0] max_score;
    logic [3:0] max_index;
    logic [9:0] predicted_one_hot;
    
    fcl_weight_rom #(
        .WIDTH(WIDTH),
        .DEPTH(FC3_IN * FC3_OUT),
        .INIT_FILE("fc3_weight.hex"),
        .INIT_WIDTH(4)
    ) w3 (
        .clk(clk),
        .addr(fc3_waddr),
        .data(fc3_wdata)
    );

    // Bias ROM
    fcl_bias_rom #(
        .WIDTH(WIDTH),
        .NUM_OUTPUTS(FC3_OUT),
        .INIT_FILE("fc3_bias.hex"),
        .INIT_WIDTH(4)
    ) b3 (
        .clk(clk),
        .data(fc3_bias)
    );

    fc_layer #(
        .WIDTH(WIDTH),
        .NUM_INPUTS(FC3_IN),
        .NUM_OUTPUTS(FC3_OUT),
        .APPLY_RELU(0),
        .OUT_SHIFT(FC_OUT_SHIFT)
    ) fc3 (
        .clk(clk),
        .rst_n(rst_n),
        .layer_start(fc3_start),
        .layer_ready(fc3_ready),
        .layer_done(fc3_done),
        .in_data(ser23_data[WIDTH-1:0]), // FIXED: Explicitly truncate 16-bit serializer data to the layer's 8-bit input width
        .in_valid(ser23_valid), //
        .in_ready(ser23_ready),
        .weight_addr(fc3_waddr), //
        .weight_data(fc3_wdata),
        .bias_data(fc3_bias),
        .out_neurons(fc3_out)
    );

    assign fc3_start = fc2_done; //
    assign done      = fc3_done;

    generate
        genvar score_idx;
        for (score_idx = 0; score_idx < FC3_OUT; score_idx++) begin : gen_fc3_score
            assign fc3_score[score_idx] = fc3_out[(score_idx+1)*(WIDTH+8)-1 -: (WIDTH+8)];
        end
    endgenerate

    always_comb begin
        max_score = fc3_score[0];
        max_index = 4'd0;

        for (int i = 1; i < FC3_OUT; i++) begin
            if (fc3_score[i] > max_score) begin
                max_score = fc3_score[i];
                max_index = i;
            end
        end

        predicted_one_hot = '0;
        predicted_one_hot[max_index] = 1'b1;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            LED <= '0;
        end else if (fc3_done) begin
            LED <= predicted_one_hot;
        end
    end

endmodule
