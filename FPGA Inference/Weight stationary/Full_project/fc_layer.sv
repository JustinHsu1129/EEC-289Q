`timescale 1ns / 1ps

// Fully-connected layer: for each input index, MAC across all output neurons.
// fcl_weight_rom is synchronous (data valid one cycle after addr). This FSM
// does: drive addr -> wait 1 cycle -> MAC with registered weight.

module fc_layer #(
    parameter WIDTH       = 8,
    parameter NUM_INPUTS  = 400,
    parameter NUM_OUTPUTS = 120,
    parameter APPLY_RELU  = 1,
    parameter OUT_SHIFT   = WIDTH
)(
    input  logic clk,
    input  logic rst_n,

    input  logic layer_start,
    output logic layer_ready,
    output logic layer_done,

    input  logic [WIDTH-1:0] in_data,
    input  logic in_valid,
    output logic in_ready,

    output logic [$clog2(NUM_INPUTS*NUM_OUTPUTS)-1:0] weight_addr,
    input  logic signed [WIDTH-1:0] weight_data,

    input  logic signed [NUM_OUTPUTS*WIDTH-1:0]        bias_data,
    output logic signed [NUM_OUTPUTS*(WIDTH+8)-1:0]    out_neurons
);

    typedef enum logic [1:0] {IDLE, FETCH_AND_MAC, BIAS_ADD, DONE} state_t;
    state_t state;

    logic [$clog2(NUM_INPUTS)-1:0]  in_cnt;
    logic [$clog2(NUM_OUTPUTS)-1:0] out_cnt;

    logic [WIDTH-1:0] in_data_reg;
    logic input_latched;

    localparam ACCW = WIDTH*2 + $clog2(NUM_INPUTS);
    logic signed [ACCW:0] accum [NUM_OUTPUTS];

    // 0: weight addr for out_cnt is stable; 1: weight_data is valid for that addr
    logic weight_phase;

    assign weight_addr = (out_cnt * NUM_INPUTS) + in_cnt;

    assign in_ready    = (state == FETCH_AND_MAC) && (out_cnt == 0) && !input_latched && !weight_phase;
    assign layer_ready = (state == IDLE);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state         <= IDLE;
            in_cnt        <= '0;
            out_cnt       <= '0;
            input_latched <= 1'b0;
            weight_phase  <= 1'b0;
            layer_done    <= 1'b0;

            for (int i = 0; i < NUM_OUTPUTS; i++) begin
                accum[i] <= '0;
                out_neurons[(i+1)*(WIDTH+8)-1 -: (WIDTH+8)] <= '0;
            end
        end else begin
            layer_done <= 1'b0;

            case (state)
                IDLE: begin
                    weight_phase <= 1'b0;
                    if (layer_start) begin
                        in_cnt        <= '0;
                        out_cnt       <= '0;
                        input_latched <= 1'b0;
                        for (int i = 0; i < NUM_OUTPUTS; i++)
                            accum[i] <= '0;
                        state <= FETCH_AND_MAC;
                    end
                end

                FETCH_AND_MAC: begin
                    if (in_valid && in_ready) begin
                        in_data_reg   <= in_data;
                        input_latched <= 1'b1;
                        out_cnt       <= '0;
                        weight_phase  <= 1'b0;
                    end else if (input_latched) begin
                        if (!weight_phase) begin
                            // Address (out_cnt, in_cnt) is stable; wait one cycle for ROM
                            weight_phase <= 1'b1;
                        end else begin
                            // weight_data is valid for the current out_cnt after the wait phase.
                            accum[out_cnt] <= accum[out_cnt] +
                                ($signed({1'b0, in_data_reg}) * weight_data);

                            if (out_cnt == NUM_OUTPUTS - 1) begin
                                out_cnt       <= '0;
                                input_latched <= 1'b0;
                                weight_phase  <= 1'b0;
                                if (in_cnt == NUM_INPUTS - 1)
                                    state <= BIAS_ADD;
                                else
                                    in_cnt <= in_cnt + 1'b1;
                            end else begin
                                out_cnt      <= out_cnt + 1'b1;
                                weight_phase <= 1'b0;
                            end
                        end
                    end
                end

                BIAS_ADD: begin
                    for (int i = 0; i < NUM_OUTPUTS; i++) begin
                        logic signed [WIDTH-1:0]  b;
                        logic signed [WIDTH+8-1:0] biased;
                        b = bias_data[(i+1)*WIDTH-1 -: WIDTH];
                        biased = (accum[i] + b) >>> OUT_SHIFT;
                        if (APPLY_RELU) begin
                            out_neurons[(i+1)*(WIDTH+8)-1 -: (WIDTH+8)] <=
                                (biased < 0) ? '0 : biased;
                        end else begin
                            out_neurons[(i+1)*(WIDTH+8)-1 -: (WIDTH+8)] <= biased;
                        end
                    end
                    state <= DONE;
                end

                DONE: begin
                    layer_done <= 1'b1;
                    state      <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule
