`timescale 1 ns / 1 ps

module ifmap_mem #(
    parameter Width                         = 128,
    parameter Depth                         = 512,
    parameter DataBitWidth                  = 8,
    parameter StorageBitWidth               = 8,
    parameter PeArrayRows                   = 16,
    parameter InputFeatureMapChannelCount   = 1,
    parameter WeightWidth                   = 3,
    parameter WeightHeight                  = 3,
    parameter InputFeatureMapWidth          = 32,
    parameter InputFeatureMapHeight         = 32,
    parameter OutputFeatureMapWidth         = 28,
    parameter OutputFeatureMapHeight        = 28,
    parameter InputFeatureMapSigned         = 0,
    parameter INIT_FILE                     = "",
    parameter RawDepth =
        InputFeatureMapChannelCount *
        InputFeatureMapWidth *
        InputFeatureMapHeight
)(
    input  logic [$clog2(Depth)-1:0] Address,
    input  logic Clock,

    input  logic [StorageBitWidth-1:0] Data,
    input  logic WriteEnable,

    input  logic [$clog2(RawDepth)-1:0] ExternalWriteAddress,
    input  logic [StorageBitWidth-1:0] ExternalWriteData,
    input  logic ExternalWriteEnable,

    // Address Mapping Variables moved to inputs
    input  int RowTile,
    input  int KernelColumn,
    input  int InputChannel,
    input  int OutputPixelRow,
    input  int OutputPixelColumn,

    output logic [Width-1:0] DataOut
);

    localparam int ext_bits = (DataBitWidth > StorageBitWidth) ? (DataBitWidth - StorageBitWidth) : 0;

    // ============================================================
    // THE PHYSICAL MEMORY: Flat array preserves Testbench visibility
    // ============================================================
    (* ramstyle = "M10K" *)
    logic [StorageBitWidth-1:0] mem [0:RawDepth-1];

    initial begin
        for (int i = 0; i < RawDepth; i++) mem[i] = '0;
        if (INIT_FILE != "") $readmemh(INIT_FILE, mem);
    end

    // Unrolled combinational logic maps target coordinates to raw indices
    int LookUpAddress [0:PeArrayRows-1];
    logic LookUpValid  [0:PeArrayRows-1];

    always_comb begin
        for (int Row = 0; Row < PeArrayRows; Row++) begin
            automatic int KernelRow = RowTile * PeArrayRows + Row;
            LookUpAddress[Row] = InputChannel * InputFeatureMapWidth * InputFeatureMapHeight +
                                 (OutputPixelRow + KernelRow) * InputFeatureMapWidth +
                                 (OutputPixelColumn + KernelColumn);
            LookUpValid[Row] = (InputChannel < InputFeatureMapChannelCount &&
                                KernelRow < WeightHeight &&
                                OutputPixelRow < OutputFeatureMapHeight &&
                                OutputPixelColumn < OutputFeatureMapWidth &&
                                OutputPixelRow + KernelRow < InputFeatureMapHeight &&
                                OutputPixelColumn + KernelColumn < InputFeatureMapWidth);
        end
    end

    // Synchronous memory block execution
    always_ff @(posedge Clock) begin
        // Write Routing
        if (ExternalWriteEnable) begin
            mem[ExternalWriteAddress] <= ExternalWriteData;
        end
        if (WriteEnable) begin
            mem[Address[$clog2(RawDepth)-1:0]] <= Data;
        end

        // Read Routing: Directly fetches elements synchronously
        for (int Row = 0; Row < PeArrayRows; Row++) begin
            if (LookUpValid[Row] && (LookUpAddress[Row] < RawDepth)) begin
                if (InputFeatureMapSigned) begin
                    DataOut[Row*DataBitWidth +: DataBitWidth] <=
                        { {ext_bits{mem[LookUpAddress[Row]][StorageBitWidth-1]}}, mem[LookUpAddress[Row]] };
                end else begin
                    DataOut[Row*DataBitWidth +: DataBitWidth] <=
                        { {ext_bits{1'b0}}, mem[LookUpAddress[Row]] };
                end
            end else begin
                DataOut[Row*DataBitWidth +: DataBitWidth] <= '0;
            end
        end
    end

endmodule