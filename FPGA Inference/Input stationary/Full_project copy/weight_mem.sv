`timescale 1 ns / 1 ps

module weight_mem #(
    parameter Width = 128,
    parameter Depth = 2048,
    parameter DataBitWidth = 8,
    parameter PeArrayRows = 16,
    parameter PeArrayColumns = 16,
    parameter OutputFeatureMapChannelCount = 64,
    parameter InputFeatureMapChannelCount = 32,
    parameter WeightWidth = 3,
    parameter WeightHeight = 3,
    parameter INIT_FILE = ""
)(
    input  logic [$clog2(Depth)-1:0] Address,
    input  logic Clock,
    input  logic [Width-1:0] Data,
    input  logic WriteEnable,
    output logic [Width-1:0] DataOut
);

    // M10K Block RAM declaration
    (* ramstyle = "M10K" *)
    logic [Width-1:0] mem [0:Depth-1];

    // Initialize to zero first so unused weight lanes/addresses are deterministic.
    initial begin
        for (int i = 0; i < Depth; i++) begin
            mem[i] = '0;
        end
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end
    end

    // Synchronous read/write operations
    always_ff @(posedge Clock) begin
        if (WriteEnable) begin
            mem[Address] <= Data;
        end
        DataOut <= mem[Address];
    end

endmodule
