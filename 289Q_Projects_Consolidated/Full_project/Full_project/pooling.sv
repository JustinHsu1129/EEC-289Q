module pooling_layer #(
    parameter IN_WIDTH  = 18,
    parameter OUT_WIDTH = 8,
    parameter SHIFT     = 2   // extra quantization shift after averaging
)(
    input  logic                  clk,
    input  logic                  rst_n,

    input  logic [IN_WIDTH-1:0]   in_data,
    input  logic                  in_valid,
    output logic                  in_ready,

    output logic [OUT_WIDTH-1:0]  out_data,
    output logic                  out_valid,
    input  logic                  out_ready
);

    logic [1:0]              pix_cnt;
    logic [IN_WIDTH+1:0]     acc;   // sum of up to 4 pixels

    assign in_ready = rst_n && out_ready;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pix_cnt   <= 2'd0;
            acc       <= '0;
            out_data  <= '0;
            out_valid <= 1'b0;
        end else begin
            out_valid <= 1'b0;

            if (in_valid && in_ready) begin
                if (pix_cnt == 2'd3) begin
                    // 4th pixel: compute sum, avg, then quantize
                    logic [IN_WIDTH+1:0] sum;
                    logic [IN_WIDTH+1:0] avg;
                    logic [IN_WIDTH+1:0] quant;
                    sum = acc + in_data;
                    avg = sum >> 2;                 // 2x2 average
                    quant = avg >> SHIFT;
                    if (quant > {OUT_WIDTH{1'b1}})
                        out_data <= {OUT_WIDTH{1'b1}};
                    else
                        out_data <= quant[OUT_WIDTH-1:0];
                    out_valid <= 1'b1;
                    pix_cnt   <= 2'd0;
                    acc       <= '0;
                end else begin
                    acc     <= acc + in_data;
                    pix_cnt <= pix_cnt + 2'd1;
                end
            end
        end
    end

endmodule
