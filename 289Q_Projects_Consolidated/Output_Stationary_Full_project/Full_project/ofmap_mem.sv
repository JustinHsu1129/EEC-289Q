`timescale 1 ns / 1 ps

module ofmap_mem #(
    parameter Width = 512,
    parameter Depth = 1024,
    parameter DataBitWidth = 32,
    parameter PeArrayColumns = 16,
    parameter INIT_FILE = ""
)(
    input  logic Clock,
    input  logic [Width-1:0] Data,
    input  logic [$clog2(Depth)-1:0] ReadAddress,
    input  logic [$clog2(Depth)-1:0] WriteAddress,
    input  logic WriteEnable,
    output logic [Width-1:0] DataOut
);

    // Hard block RAM configuration style
    (* ramstyle = "M10K" *)
    logic [Width-1:0] mem [0:Depth-1];

    initial begin
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end else begin
            for (int i = 0; i < Depth; i++) begin
                mem[i] = '0;
            end
        end
    end

    // Fully synchronous Simple Dual-Port configuration
    always_ff @(posedge Clock) begin
        if (WriteEnable) begin
            mem[WriteAddress] <= Data;
        end
        DataOut <= mem[ReadAddress];
    end

endmodule