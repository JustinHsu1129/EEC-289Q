`timescale 1 ns / 1 ps

// Row-stationary IFMAP memory: backing store is raw NCHW layout; read addresses
// from Mem_ctrl are translated into convolution-window pixels for each PE row.
module ifmap_mem #(
    parameter Width = 128,
    parameter Depth = 512,
    parameter DataBitWidth = 8,
    parameter StorageBitWidth = 8,
    parameter PeArrayRows = 16,
    parameter InputFeatureMapChannelCount = 1,
    parameter WeightWidth = 3,
    parameter WeightHeight = 3,
    parameter InputFeatureMapWidth = 32,
    parameter InputFeatureMapHeight = 32,
    parameter OutputFeatureMapWidth = 28,
    parameter OutputFeatureMapHeight = 28,
    parameter InputFeatureMapSigned = 0,
    parameter INIT_FILE = ""
)(
    input  logic [$clog2(Depth)-1:0] Address,
    input  logic Clock,
    input  logic [Width-1:0] Data,
    input  logic WriteEnable,
    input  logic [$clog2(RawDepth)-1:0] ExternalWriteAddress,
    input  logic [StorageBitWidth-1:0] ExternalWriteData,
    input  logic ExternalWriteEnable,
    output logic [Width-1:0] DataOut
);

    localparam int NumRowTile = (WeightHeight + PeArrayRows - 1) / PeArrayRows;
    localparam int ReductionSteps = InputFeatureMapChannelCount * WeightWidth * NumRowTile;
    localparam int RawDepth = InputFeatureMapChannelCount * InputFeatureMapWidth * InputFeatureMapHeight;

    (* ramstyle = "M10K" *)
    logic [StorageBitWidth-1:0] mem [0:RawDepth-1];

    initial begin
        for (int i = 0; i < RawDepth; i++) begin
            mem[i] = '0;
        end
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end
    end

    always_ff @(posedge Clock) begin
        DataOut <= '0;

        if (ExternalWriteEnable) begin
            mem[ExternalWriteAddress] <= ExternalWriteData;
        end

        if (WriteEnable) begin
            mem[Address[$clog2(RawDepth)-1:0]] <= Data[StorageBitWidth-1:0];
        end

        begin : map_read
            int ReductionAddress;
            int OutputPixelAddress;
            int RowTile;
            int KernelColumn;
            int InputChannel;
            int OutputPixelRow;
            int OutputPixelColumn;
            int KernelRow;
            int RawAddress;

            ReductionAddress = Address % ReductionSteps;
            OutputPixelAddress = Address / ReductionSteps;
            RowTile = ReductionAddress % NumRowTile;
            KernelColumn = (ReductionAddress / NumRowTile) % WeightWidth;
            InputChannel = ReductionAddress / (NumRowTile * WeightWidth);
            OutputPixelRow = OutputPixelAddress / OutputFeatureMapWidth;
            OutputPixelColumn = OutputPixelAddress % OutputFeatureMapWidth;

            for (int Row = 0; Row < PeArrayRows; Row++) begin
                KernelRow = RowTile * PeArrayRows + Row;
                RawAddress = InputChannel * InputFeatureMapWidth * InputFeatureMapHeight +
                    (OutputPixelRow + KernelRow) * InputFeatureMapWidth +
                    (OutputPixelColumn + KernelColumn);

                if (InputChannel < InputFeatureMapChannelCount &&
                    KernelRow < WeightHeight &&
                    OutputPixelRow < OutputFeatureMapHeight &&
                    OutputPixelColumn < OutputFeatureMapWidth &&
                    OutputPixelRow + KernelRow < InputFeatureMapHeight &&
                    OutputPixelColumn + KernelColumn < InputFeatureMapWidth) begin
                    if (InputFeatureMapSigned) begin
                        DataOut[Row*DataBitWidth +: DataBitWidth] <=
                            {{(DataBitWidth-StorageBitWidth){mem[RawAddress][StorageBitWidth-1]}},
                             mem[RawAddress]};
                    end else begin
                        DataOut[Row*DataBitWidth +: DataBitWidth] <=
                            {{(DataBitWidth-StorageBitWidth){1'b0}}, mem[RawAddress]};
                    end
                end
            end
        end
    end

endmodule
