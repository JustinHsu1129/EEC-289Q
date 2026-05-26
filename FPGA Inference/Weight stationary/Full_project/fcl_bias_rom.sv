module fcl_bias_rom #(
    parameter WIDTH       = 8,
    parameter NUM_OUTPUTS = 120,
    parameter INIT_FILE   = "",
    parameter INIT_WIDTH  = WIDTH
)(
    input  logic clk,
    output logic signed [NUM_OUTPUTS*WIDTH-1:0] data
);

    (* ramstyle = "M10K" *)
    logic signed [WIDTH-1:0] mem [0:NUM_OUTPUTS-1];

    function automatic logic signed [WIDTH-1:0] extend_init_value(input logic signed [WIDTH-1:0] raw_value);
        logic signed [WIDTH-1:0] extended;
        begin
            extended = raw_value;
            if (INIT_WIDTH < WIDTH && raw_value[INIT_WIDTH-1]) begin
                extended = {{(WIDTH-INIT_WIDTH){1'b1}}, raw_value[INIT_WIDTH-1:0]};
            end
            extend_init_value = extended;
        end
    endfunction

    // Read file directly, with optional sign extension for narrow hex exports.
    initial begin
        for (int i = 0; i < NUM_OUTPUTS; i++) begin
            mem[i] = '0;
        end

        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
            for (int i = 0; i < NUM_OUTPUTS; i++) begin
                mem[i] = extend_init_value(mem[i]);
            end
        end
    end

    // Synchronous readout of all biases
    always_ff @(posedge clk) begin
        for (int i = 0; i < NUM_OUTPUTS; i++) begin
            data[(i+1)*WIDTH-1 -: WIDTH] <= mem[i];
        end
    end

endmodule
