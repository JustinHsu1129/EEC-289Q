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
    input  logic Accumulate,
    output logic [Width-1:0] DataOut
);

    // M10K Block RAM declaration
    (* ramstyle = "M10K" *)
    logic [Width-1:0] mem [0:Depth-1];

    // Optional clearing or test vector setup
    initial begin
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end else begin
            for (int i = 0; i < Depth; i++) begin
                mem[i] = '0;
            end
        end
    end

    // Dual-port synchronous control
    always_ff @(posedge Clock) begin
        if (WriteEnable) begin
            if (Accumulate) begin
                // Element-wise addition across the packed parallel channels
                for (int i = 0; i < PeArrayColumns; i++) begin
                    mem[WriteAddress][(i+1)*DataBitWidth-1 -: DataBitWidth] <= 
                        mem[WriteAddress][(i+1)*DataBitWidth-1 -: DataBitWidth] + Data[(i+1)*DataBitWidth-1 -: DataBitWidth];
                end
            end else begin
                // Direct overwrite when starting a new tile loop pass
                mem[WriteAddress] <= Data;
            end
        end
        
        // Output assignment based on ReadAddress / Test interface selection
        DataOut <= mem[ReadAddress];
    end

endmodule