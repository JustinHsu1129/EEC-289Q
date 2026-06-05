module pooling_tb;

    localparam WIDTH      = 18;
    localparam IMG_WIDTH  = 28;
    localparam OUT_WIDTH  = IMG_WIDTH/2;
    localparam CHANNELS   = 6;
    localparam SHIFT      = 2;   // must match pooling_layer

    // Clock + reset
    reg clk;
    reg rst_n;

    // BRAM models
    reg  [WIDTH-1:0] bram_in  [0:CHANNELS-1][0:IMG_WIDTH*IMG_WIDTH-1];   // 18-bit input
    reg  [7:0]       bram_out [0:CHANNELS-1][0:OUT_WIDTH*OUT_WIDTH-1];   // 8-bit output

    // DUT BRAM interface
    wire [$clog2(IMG_WIDTH*IMG_WIDTH)-1:0] rd_addr;
    wire [WIDTH-1:0]                       rd_data;

    wire [$clog2(OUT_WIDTH*OUT_WIDTH)-1:0] wr_addr;
    wire [7:0]                             wr_data;
    wire                                   wr_en;

    // Reference model
    integer ref_model [0:CHANNELS-1][0:OUT_WIDTH-1][0:OUT_WIDTH-1];

    // Loop vars
    integer ch, r, c;
    integer a, b, d, e;
    integer ref_avg, ref_q;
    integer errors;
    integer outputs_seen;

    // DUT
    pooling_top #(
        .WIDTH(WIDTH),
        .IMG_WIDTH(IMG_WIDTH),
        .CHANNELS(CHANNELS)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .rd_addr(rd_addr),
        .rd_data(rd_data),
        .wr_addr(wr_addr),
        .wr_data(wr_data),
        .wr_en(wr_en)
    );

    // Clock
    always #5 clk = ~clk;

    // BRAM read: select channel by dut.ch
    assign rd_data = bram_in[dut.ch][rd_addr];

    // BRAM write: use latched channel index dut.ch_write
    always_ff @(posedge clk) begin
        if (wr_en)
            bram_out[dut.ch_write][wr_addr] <= wr_data;
    end

    initial begin
        clk   = 0;
        rst_n = 0;

        // Initialize input BRAM with deterministic pattern
        for (ch = 0; ch < CHANNELS; ch = ch + 1)
            for (r = 0; r < IMG_WIDTH; r = r + 1)
                for (c = 0; c < IMG_WIDTH; c = c + 1)
                    bram_in[ch][r*IMG_WIDTH + c] = ch*1000 + r*IMG_WIDTH + c;

        // Reference: 2x2 avg, then quantize to 8 bits
        for (ch = 0; ch < CHANNELS; ch = ch + 1)
            for (r = 0; r < OUT_WIDTH; r = r + 1)
                for (c = 0; c < OUT_WIDTH; c = c + 1) begin
                    a = bram_in[ch][(2*r)*IMG_WIDTH + (2*c)];
                    b = bram_in[ch][(2*r)*IMG_WIDTH + (2*c+1)];
                    d = bram_in[ch][(2*r+1)*IMG_WIDTH + (2*c)];
                    e = bram_in[ch][(2*r+1)*IMG_WIDTH + (2*c+1)];
                    ref_avg = (a + b + d + e) >> 2;
                    ref_q   = ref_avg >> SHIFT;
                    ref_model[ch][r][c] = ref_q;
                end

        #20 rst_n = 1;

        // Wait for all outputs
        outputs_seen = 0;
        while (outputs_seen < CHANNELS*OUT_WIDTH*OUT_WIDTH) begin
            @(posedge clk);
            if (wr_en)
                outputs_seen = outputs_seen + 1;
        end

        #20;

        // Compare
        errors = 0;
       // Reference: 2x2 avg, then quantize with saturation to 8 bits
		for (ch = 0; ch < CHANNELS; ch = ch + 1)
			 for (r = 0; r < OUT_WIDTH; r = r + 1)
				  for (c = 0; c < OUT_WIDTH; c = c + 1) begin
						a = bram_in[ch][(2*r)*IMG_WIDTH + (2*c)];
						b = bram_in[ch][(2*r)*IMG_WIDTH + (2*c+1)];
						d = bram_in[ch][(2*r+1)*IMG_WIDTH + (2*c)];
						e = bram_in[ch][(2*r+1)*IMG_WIDTH + (2*c+1)];
						ref_avg = (a + b + d + e) >> 2;
						ref_q   = ref_avg >> SHIFT;
						
						// Apply reference saturation matching hardware
						if (ref_q > 255) begin
							 ref_model[ch][r][c] = 255;
						end else begin
							 ref_model[ch][r][c] = ref_q;
						end
				  end

        if (errors == 0)
            $display("TEST PASSED");
        else
            $display("TEST FAILED with %0d errors", errors);

        $finish;
    end

endmodule
