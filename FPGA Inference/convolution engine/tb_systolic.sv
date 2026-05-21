`timescale 1ns / 1ps
// iverilog -g2012 -o sim systolic_top.sv systolic_control.sv systolic_array.sv parallel_mac_engine.sv tb_systolic.sv im2col.sv skew_buffer.sv memory_control.sv systolic_engine_wrapper.sv

module tb_lenet_accelerator;

    localparam DATA_WIDTH = 8;
    localparam ACCUM_WIDTH = 32;
    localparam IMAGE_W = 28;
    localparam IMAGE_H = 28;
    localparam KERNEL_SIZE = 3;
    localparam ARRAY_ROWS = 16;
    localparam ARRAY_COLS = 16;
    localparam ACT_ADDR_W = 10;
    localparam WT_ADDR_W = 4;
    localparam PSUM_ADDR_W = 10;
    
    logic clk;
    logic rst_n;
    logic start;
    logic done;
    logic host_act_we;
    logic [ACT_ADDR_W-1:0] host_act_addr;
    logic [DATA_WIDTH-1:0] host_act_wdata;
    logic host_wt_we;
    logic [WT_ADDR_W-1:0]  host_wt_addr;
    logic [ARRAY_ROWS*DATA_WIDTH-1:0] host_wt_wdata;
    logic host_psum_re;
    logic [PSUM_ADDR_W-1:0] host_psum_addr;
    logic [ARRAY_COLS*ACCUM_WIDTH-1:0] host_psum_rdata;

    lenet_accelerator #(
        .DATA_WIDTH(DATA_WIDTH), .ACCUM_WIDTH(ACCUM_WIDTH),
        .IMAGE_W(IMAGE_W), .IMAGE_H(IMAGE_H), .KERNEL_SIZE(KERNEL_SIZE),
        .ARRAY_ROWS(ARRAY_ROWS), .ARRAY_COLS(ARRAY_COLS),
        .ACT_ADDR_W(ACT_ADDR_W), .WT_ADDR_W(WT_ADDR_W), .PSUM_ADDR_W(PSUM_ADDR_W)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .done(done),
        .host_act_we(host_act_we),
        .host_act_addr(host_act_addr),
        .host_act_wdata(host_act_wdata),
        .host_wt_we(host_wt_we),
        .host_wt_addr(host_wt_addr),
        .host_wt_wdata(host_wt_wdata),
        .host_psum_re(host_psum_re),
        .host_psum_addr(host_psum_addr),
        .host_psum_rdata(host_psum_rdata)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100 MHz clock
    end

    initial begin
        rst_n = 0;
        start = 0;
        host_act_we = 0;
        host_act_addr = 0;
        host_act_wdata = 0;
        host_wt_we = 0;
        host_wt_addr = 0;
        host_wt_wdata = 0;
        host_psum_re = 0;
        host_psum_addr = 0;

        #50;
        rst_n = 1;
        #50;
        
        $display("-----------------------------------------");
        $display("Starting LeNet Accelerator Simulation...");
        $display("-----------------------------------------");

		// load IA
        $display("Zeroing Activation BRAM...");
        for (int i = 0; i < (1 << ACT_ADDR_W); i++) begin
            @(negedge clk);
            host_act_we = 1;
            host_act_addr = i;
            host_act_wdata = '0;
        end
        
        $display("Loading Image (28x28)...");
        for (int i = 0; i < IMAGE_W * IMAGE_H; i++) begin
            @(negedge clk);
            host_act_we = 1;
            host_act_addr = i;
            host_act_wdata = i % 100;
        end
        @(negedge clk); host_act_we = 0;

        // load weights
        $display("Zeroing Weight BRAM...");
        for (int i = 0; i < (1 << WT_ADDR_W); i++) begin
            @(negedge clk);
            host_wt_we = 1;
            host_wt_addr = i;
            host_wt_wdata = '0;
        end

        $display("Loading Weights (3x3 kernel, 16 filters)...");
        for (int i = 0; i < KERNEL_SIZE * KERNEL_SIZE; i++) begin
            @(negedge clk);
            host_wt_we = 1;
            host_wt_addr = i;
            for (int r = 0; r < ARRAY_ROWS; r++) begin
                host_wt_wdata[r*DATA_WIDTH +: DATA_WIDTH] = r + 1; 
            end
        end
        @(negedge clk); host_wt_we = 0;

        // start execution
        $display("Pulsing Start Signal...");
        @(negedge clk);
        start = 1;
        @(negedge clk);
        start = 0;

        $display("Waiting for accelerator to finish...");
        wait(done == 1'b1);
        $display("Accelerator Finished! Extracting Psums...");

        // export outputs to csv
        extract_to_csv();
        
        $display("-----------------------------------------");
        $display("Simulation Complete! Check 'psum_results.csv'");
        $display("-----------------------------------------");
        
        $finish;
    end

    // read mem and export to csv
    task extract_to_csv;
        int fd;
        int num_tiles;
        int total_addresses;
        int tile_id, y_coord, base_x, drain_cycle, filter_id;
        logic signed [ACCUM_WIDTH-1:0] psum_val;

        int i, col; 
        
        begin
            num_tiles = ((IMAGE_W + ARRAY_COLS - 1) / ARRAY_COLS) * (IMAGE_H - KERNEL_SIZE + 1);
            total_addresses = num_tiles * ARRAY_ROWS;
            
            fd = $fopen("psum_results.csv", "w");
            
            // write header for csv
            $fdisplay(fd, "RAM_Addr,Filter_ID,Tile_Y,Base_X,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15");

            for (i = 0; i < total_addresses; i = i + 1) begin
                @(negedge clk);
                host_psum_re = 1;
                host_psum_addr = i;
                #1;

                tile_id = i / ARRAY_ROWS;
                drain_cycle = i % ARRAY_ROWS;
                
                // array drains from bottom up: cycle 0 = Row 15, cycle 15 = Row 0
                filter_id = (ARRAY_ROWS - 1) - drain_cycle; 
                y_coord = tile_id / ((IMAGE_W + ARRAY_COLS - 1) / ARRAY_COLS);
                base_x  = (tile_id % 2) * ARRAY_COLS;
                $fwrite(fd, "%0d,%0d,%0d,%0d", i, filter_id, y_coord, base_x);
                for (col = 0; col < ARRAY_COLS; col = col + 1) begin
                    psum_val = host_psum_rdata[col*ACCUM_WIDTH +: ACCUM_WIDTH];
                    $fwrite(fd, ",%0d", psum_val);
                end
                $fwrite(fd, "\n");
            end
            
            host_psum_re = 0;
            $fclose(fd);
        end
    endtask

endmodule
