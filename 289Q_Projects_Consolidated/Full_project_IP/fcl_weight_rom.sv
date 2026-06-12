module fcl_weight_rom #(
    parameter WIDTH = 8,
    parameter DEPTH = 1024,
    parameter INIT_FILE = "",
    parameter INIT_WIDTH = WIDTH
)(
    input  logic clk,
    input  logic [$clog2(DEPTH)-1:0] addr,
    output logic signed [WIDTH-1:0] data
);

    (* ramstyle = "M10K" *)
    logic signed [WIDTH-1:0] mem [0:DEPTH-1];

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
        for (int i = 0; i < DEPTH; i++) begin
            mem[i] = '0;
        end

        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
            for (int i = 0; i < DEPTH; i++) begin
                mem[i] = extend_init_value(mem[i]);
            end
        end
    end

    always_ff @(posedge clk) begin
        data <= mem[addr];
    end

endmodule
