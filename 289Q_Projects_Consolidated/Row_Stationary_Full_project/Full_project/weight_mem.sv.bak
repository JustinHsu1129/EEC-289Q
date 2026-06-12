`timescale 1 ns / 1 ps

// Row-stationary weight memory: backing store is one packed word per (kernel tap,
// input channel) with all output channels in parallel; Mem_ctrl addresses are
// translated into that layout for each PE-row / PE-column tile fetch.
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

    localparam int NumOutTile = (OutputFeatureMapChannelCount + PeArrayColumns - 1) / PeArrayColumns;
    localparam int NumRowTile = (WeightHeight + PeArrayRows - 1) / PeArrayRows;
    localparam int FullWeightWidth = DataBitWidth * OutputFeatureMapChannelCount;
    localparam int RawDepth = WeightWidth * WeightHeight * InputFeatureMapChannelCount;

    (* ramstyle = "M10K" *)
    logic [FullWeightWidth-1:0] mem [0:RawDepth-1];

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

        if (WriteEnable) begin
            mem[Address[$clog2(RawDepth)-1:0]] <= Data[FullWeightWidth-1:0];
        end

        begin : map_read
            int OutTile;
            int ReductionAddress;
            int RowTile;
            int KernelColumn;
            int InputChannel;
            int KernelRow;
            int LogicalOutputChannel;
            int RawAddress;

            OutTile = Address % NumOutTile;
            ReductionAddress = Address / NumOutTile;
            RowTile = ReductionAddress % NumRowTile;
            KernelColumn = (ReductionAddress / NumRowTile) % WeightWidth;
            InputChannel = ReductionAddress / (NumRowTile * WeightWidth);

            for (int Row = 0; Row < PeArrayRows; Row++) begin
                KernelRow = RowTile * PeArrayRows + Row;
                RawAddress = (KernelRow * WeightWidth + KernelColumn) *
                    InputFeatureMapChannelCount + InputChannel;

                if (InputChannel < InputFeatureMapChannelCount && KernelRow < WeightHeight) begin
                    for (int Lane = 0; Lane < PeArrayColumns; Lane++) begin
                        LogicalOutputChannel = OutTile * PeArrayColumns + Lane;
                        if (LogicalOutputChannel < OutputFeatureMapChannelCount) begin
                            DataOut[(Row*PeArrayColumns + Lane)*DataBitWidth +: DataBitWidth] <=
                                mem[RawAddress][LogicalOutputChannel*DataBitWidth +: DataBitWidth];
                        end
                    end
                end
            end
        end
    end

endmodule
