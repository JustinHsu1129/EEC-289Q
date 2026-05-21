`timescale 1ns / 1ps

module parallel_mac_engine #(
    parameter DATA_WIDTH = 8,
    parameter ACCUM_WIDTH = 32,
    parameter ARRAY_ROWS = 16,
    parameter ARRAY_COLS = 16
)(
    input logic clk,
    input logic rst_n,
    input logic [ARRAY_COLS-1:0][DATA_WIDTH-1:0]  flat_act_in,
    input logic [ARRAY_COLS-1:0] flat_shift_in,
    input logic [ARRAY_ROWS-1:0][DATA_WIDTH-1:0]  flat_weight_in,
    input logic [ARRAY_ROWS-1:0] flat_mac_en_in,
    input logic [ARRAY_ROWS-1:0] flat_clr_in,
    output logic [ARRAY_COLS-1:0][ACCUM_WIDTH-1:0] flat_psum_out,
    output logic [ARRAY_COLS*ACCUM_WIDTH-1:0] flat_psum_packed,
    output logic [ARRAY_COLS-1:0] flat_psum_valid_out
);

    localparam int ACCUM_ENTRIES = ARRAY_ROWS * ARRAY_COLS;

    logic signed [DATA_WIDTH-1:0] act_s [ARRAY_COLS];
    logic signed [DATA_WIDTH-1:0] wt_s  [ARRAY_ROWS];
    logic signed [ACCUM_WIDTH-1:0] accum_bank [0:ACCUM_ENTRIES-1];
    logic signed [DATA_WIDTH*2-1:0] mult_w [0:ACCUM_ENTRIES-1];

    logic [$clog2(ARRAY_ROWS)-1:0] drain_emit_row;
    logic draining;
    logic shift_q;
    logic [ARRAY_COLS*ACCUM_WIDTH-1:0] drain_row_packed;
    logic [ARRAY_COLS*ACCUM_WIDTH-1:0] drain_capture;

    genvar j, i, ri, ci, gc;
    generate
        for (j = 0; j < ARRAY_COLS; j++) begin : gen_act
            assign act_s[j] = flat_act_in[j];
        end
        for (i = 0; i < ARRAY_ROWS; i++) begin : gen_wt
            assign wt_s[i] = flat_weight_in[i];
        end
        for (gc = 0; gc < ARRAY_COLS; gc++) begin : gen_psum_unpack
            assign flat_psum_out[gc] = drain_capture[gc*ACCUM_WIDTH +: ACCUM_WIDTH];
        end
        for (ri = 0; ri < ARRAY_ROWS; ri++) begin : gen_mult
            for (ci = 0; ci < ARRAY_COLS; ci++) begin : gen_mult_col
                localparam int IDX = ri * ARRAY_COLS + ci;
                assign mult_w[IDX] = act_s[ci] * wt_s[ri];
            end
        end
        for (ri = 0; ri < ARRAY_ROWS; ri++) begin : gen_accum
            for (ci = 0; ci < ARRAY_COLS; ci++) begin : gen_accum_col
                localparam int IDX = ri * ARRAY_COLS + ci;
                always_ff @(posedge clk or negedge rst_n) begin
                    if (!rst_n)
                        accum_bank[IDX] <= '0;
                    else if (flat_clr_in[0])
                        accum_bank[IDX] <= '0;
                    else if (flat_mac_en_in[0])
                        accum_bank[IDX] <= accum_bank[IDX] + mult_w[IDX];
                end
            end
        end
    endgenerate

    always_comb begin
        drain_row_packed = '0;
        case (drain_emit_row)
            4'd0: drain_row_packed = {accum_bank[15],  accum_bank[14],  accum_bank[13],  accum_bank[12],  accum_bank[11],  accum_bank[10],  accum_bank[9],   accum_bank[8],   accum_bank[7],   accum_bank[6],   accum_bank[5],   accum_bank[4],   accum_bank[3],   accum_bank[2],   accum_bank[1],   accum_bank[0]};
            4'd1: drain_row_packed = {accum_bank[31],  accum_bank[30],  accum_bank[29],  accum_bank[28],  accum_bank[27],  accum_bank[26],  accum_bank[25],  accum_bank[24],  accum_bank[23],  accum_bank[22],  accum_bank[21],  accum_bank[20],  accum_bank[19],  accum_bank[18],  accum_bank[17],  accum_bank[16]};
            4'd2: drain_row_packed = {accum_bank[47],  accum_bank[46],  accum_bank[45],  accum_bank[44],  accum_bank[43],  accum_bank[42],  accum_bank[41],  accum_bank[40],  accum_bank[39],  accum_bank[38],  accum_bank[37],  accum_bank[36],  accum_bank[35],  accum_bank[34],  accum_bank[33],  accum_bank[32]};
            4'd3: drain_row_packed = {accum_bank[63],  accum_bank[62],  accum_bank[61],  accum_bank[60],  accum_bank[59],  accum_bank[58],  accum_bank[57],  accum_bank[56],  accum_bank[55],  accum_bank[54],  accum_bank[53],  accum_bank[52],  accum_bank[51],  accum_bank[50],  accum_bank[49],  accum_bank[48]};
            4'd4: drain_row_packed = {accum_bank[79],  accum_bank[78],  accum_bank[77],  accum_bank[76],  accum_bank[75],  accum_bank[74],  accum_bank[73],  accum_bank[72],  accum_bank[71],  accum_bank[70],  accum_bank[69],  accum_bank[68],  accum_bank[67],  accum_bank[66],  accum_bank[65],  accum_bank[64]};
            4'd5: drain_row_packed = {accum_bank[95],  accum_bank[94],  accum_bank[93],  accum_bank[92],  accum_bank[91],  accum_bank[90],  accum_bank[89],  accum_bank[88],  accum_bank[87],  accum_bank[86],  accum_bank[85],  accum_bank[84],  accum_bank[83],  accum_bank[82],  accum_bank[81],  accum_bank[80]};
            4'd6: drain_row_packed = {accum_bank[111], accum_bank[110], accum_bank[109], accum_bank[108], accum_bank[107], accum_bank[106], accum_bank[105], accum_bank[104], accum_bank[103], accum_bank[102], accum_bank[101], accum_bank[100], accum_bank[99],  accum_bank[98],  accum_bank[97],  accum_bank[96]};
            4'd7: drain_row_packed = {accum_bank[127], accum_bank[126], accum_bank[125], accum_bank[124], accum_bank[123], accum_bank[122], accum_bank[121], accum_bank[120], accum_bank[119], accum_bank[118], accum_bank[117], accum_bank[116], accum_bank[115], accum_bank[114], accum_bank[113], accum_bank[112]};
            4'd8: drain_row_packed = {accum_bank[143], accum_bank[142], accum_bank[141], accum_bank[140], accum_bank[139], accum_bank[138], accum_bank[137], accum_bank[136], accum_bank[135], accum_bank[134], accum_bank[133], accum_bank[132], accum_bank[131], accum_bank[130], accum_bank[129], accum_bank[128]};
            4'd9: drain_row_packed = {accum_bank[159], accum_bank[158], accum_bank[157], accum_bank[156], accum_bank[155], accum_bank[154], accum_bank[153], accum_bank[152], accum_bank[151], accum_bank[150], accum_bank[149], accum_bank[148], accum_bank[147], accum_bank[146], accum_bank[145], accum_bank[144]};
            4'd10: drain_row_packed = {accum_bank[175], accum_bank[174], accum_bank[173], accum_bank[172], accum_bank[171], accum_bank[170], accum_bank[169], accum_bank[168], accum_bank[167], accum_bank[166], accum_bank[165], accum_bank[164], accum_bank[163], accum_bank[162], accum_bank[161], accum_bank[160]};
            4'd11: drain_row_packed = {accum_bank[191], accum_bank[190], accum_bank[189], accum_bank[188], accum_bank[187], accum_bank[186], accum_bank[185], accum_bank[184], accum_bank[183], accum_bank[182], accum_bank[181], accum_bank[180], accum_bank[179], accum_bank[178], accum_bank[177], accum_bank[176]};
            4'd12: drain_row_packed = {accum_bank[207], accum_bank[206], accum_bank[205], accum_bank[204], accum_bank[203], accum_bank[202], accum_bank[201], accum_bank[200], accum_bank[199], accum_bank[198], accum_bank[197], accum_bank[196], accum_bank[195], accum_bank[194], accum_bank[193], accum_bank[192]};
            4'd13: drain_row_packed = {accum_bank[223], accum_bank[222], accum_bank[221], accum_bank[220], accum_bank[219], accum_bank[218], accum_bank[217], accum_bank[216], accum_bank[215], accum_bank[214], accum_bank[213], accum_bank[212], accum_bank[211], accum_bank[210], accum_bank[209], accum_bank[208]};
            4'd14: drain_row_packed = {accum_bank[239], accum_bank[238], accum_bank[237], accum_bank[236], accum_bank[235], accum_bank[234], accum_bank[233], accum_bank[232], accum_bank[231], accum_bank[230], accum_bank[229], accum_bank[228], accum_bank[227], accum_bank[226], accum_bank[225], accum_bank[224]};
            default: drain_row_packed = {accum_bank[255], accum_bank[254], accum_bank[253], accum_bank[252], accum_bank[251], accum_bank[250], accum_bank[249], accum_bank[248], accum_bank[247], accum_bank[246], accum_bank[245], accum_bank[244], accum_bank[243], accum_bank[242], accum_bank[241], accum_bank[240]};
        endcase
    end

    assign flat_psum_packed = drain_capture;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            drain_emit_row <= ARRAY_ROWS - 1;
            draining <= 1'b0;
            shift_q <= 1'b0;
            drain_capture <= '0;
            flat_psum_valid_out <= '0;
        end else begin
            shift_q <= flat_shift_in[0];

            flat_psum_valid_out <= {ARRAY_COLS{shift_q}};

            //   cycle N   : flat_shift_in=1-drain_emit_row decrements (registered)
            //   cycle N+1 : shift_q=1-drain_capture latches drain_row_packed
            //   (which now uses the decremented index)
            //   cycle N+2 : flat_psum_valid=1-host sees correct data on flat_psum_packed

            if (shift_q)
                drain_capture <= drain_row_packed;

            if (flat_clr_in[0]) begin
                draining       <= 1'b0;
                drain_emit_row <= ARRAY_ROWS - 1;
            end else if (flat_mac_en_in[0]) begin
                draining <= 1'b0;
            end else if (flat_shift_in[0]) begin
                if (!draining) begin
                    draining       <= 1'b1;
                    drain_emit_row <= ARRAY_ROWS - 2;
                end else if (drain_emit_row > 0) begin
                    drain_emit_row <= drain_emit_row - 1;
                end else begin
                    draining <= 1'b0;
                end
            end else begin
                draining <= 1'b0;
            end
        end
    end

endmodule