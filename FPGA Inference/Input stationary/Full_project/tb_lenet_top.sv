// iverilog -g2012 -o sim fc_layer.sv fc_serial.sv fc_top.sv fcl_bias_rom.sv fcl_weight_rom.sv FIFO.sv ifmap_mem.sv Mem_ctrl.sv memory_control.sv model_top.sv ofmap_mem.sv PE_Array.sv PE.sv pooling_top.sv pooling.sv Systolic_Top.sv tb_lenet_top.sv weight_mem.sv

`timescale 1ns / 1ps

module model_top_tb;
    // ============================================================
    // CLOCK & CONFIGURATION PARAMETERS
    // ============================================================
    localparam CLK_PERIOD     = 10;
    // 100 MHz clock
    localparam DATA_WIDTH     = 8;
    localparam ACCUM_WIDTH    = 32;
    localparam WIDTH          = 8;
    // --- USER SETTINGS: MULTI-RUN MNIST TEST CONFIGURATION ---
    // FIRST_IMAGE_INDEX: starting index in t10k-* files (0 = first test image, label 7)
    // NUM_RUNS: how many consecutive images to run (indices FIRST .. FIRST+NUM_RUNS-1)
    localparam int FIRST_IMAGE_INDEX = 100;
    localparam int NUM_RUNS          = 5;
    int first_image_index;
    int num_runs;

    task automatic clear_accelerator_memories();
        for (int addr = 0; addr < 1024; addr++) begin
            uut.conv1_inst.o_mem.mem[addr] = '0;
            uut.conv2_inst.o_mem.mem[addr] = '0;
        end
        // Clear IFMAP memories so stale values can't affect subsequent images.
        for (int addr = 0; addr < 1024; addr++) begin
            uut.conv1_inst.i_mem.mem[addr] = '0;
        end
        for (int addr = 0; addr < 2048; addr++) begin
            uut.conv2_inst.i_mem.mem[addr] = '0;
        end
        for (int addr = 0; addr < 400; addr++) begin
            uut.pool2_to_fc_buf.ram[addr] = 8'h00;
        end
    endtask

    // Variable to hold the dynamically fetched ground truth label
    logic [3:0] expected_label;
    logic [9:0] expected_one_hot;
    assign expected_one_hot = (10'b1 << expected_label);

    integer pass_count;
    integer fail_count;
    integer img_idx;
    integer run_idx;
    logic [9:0] led_snapshot;
    
    // ============================================================
    // TESTBENCH SIGNALS
    // ============================================================
    logic clk;
    logic rst_n;
    logic start;
    logic done;
    logic [9:0] LED;

    // ============================================================
    // DEVICE UNDER TEST (DUT) INSTANTIATION
    // ============================================================
    model_top #(
        .DATA_WIDTH(DATA_WIDTH),
        .ACCUM_WIDTH(ACCUM_WIDTH),
        .WIDTH(WIDTH)
    ) uut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .done(done),
        .LED(LED)
   
    );

    // ============================================================
    // CLOCK GENERATOR
    // ============================================================
    always #(CLK_PERIOD/2) clk = ~clk;
    
    // ============================================================
    // WATCHDOG TIMER (Prevents infinite hangs)
    // ============================================================
    initial begin
        // Scale watchdog with batch size (~10 ms per inference).
        #(10000000 * NUM_RUNS);
        $display("\n====================================================");
        $display("FATAL ERROR: WATCHDOG TIMEOUT!");
        $display("The simulation stalled. 'done' was never asserted.");
        $display("Check lenet_sim.vcd in GTKWave to see where the FSM got stuck.");
        $display("====================================================\n");
        $finish;
    end

    // ============================================================
    // MAIN SIMULATION WORKFLOW
    // ============================================================
    initial begin
        // 0. Enable Waveform Dumping unless disabled for faster debug runs.
        if (!$test$plusargs("no_vcd")) begin
            $dumpfile("lenet_sim.vcd");
            $dumpvars(0, model_top_tb);
        end

        // Initialize inputs
        clk   = 1'b0;
        rst_n = 1'b0;
        start = 1'b0;

        pass_count = 0;
        fail_count = 0;

        first_image_index = FIRST_IMAGE_INDEX;
        num_runs          = NUM_RUNS;
        if ($value$plusargs("first=%d", first_image_index))
            $display("[TB INFO] Overriding first image index: %0d", first_image_index);
        if ($value$plusargs("runs=%d", num_runs))
            $display("[TB INFO] Overriding run count: %0d", num_runs);

        $display("====================================================");
        $display("STARTING LENET-5 SYSTOLIC ACCELERATOR TESTBENCH");
        $display("Running %0d images (indices %0d .. %0d)",
                 num_runs, first_image_index, first_image_index + num_runs - 1);
        $display("====================================================");

        // 1. Load weights once (shared across all runs)
        $display("[TB INFO] Loading network weights and biases...");
        load_conv1_weights("conv1_weights.hex");
        load_conv2_weights("conv2_weights.hex");
        $display("[TB INFO] Weight loading complete.");

        if ($test$plusargs("golden_fc")) begin
            $readmemh("golden_pool2.hex", uut.pool2_to_fc_buf.ram);
            $display("[TB INFO] Loaded golden_pool2.hex for FC-only check.");
        end

        // 2. Release reset safely
        #(CLK_PERIOD * 5);
        @(negedge clk);
        rst_n = 1'b1;
        #(CLK_PERIOD * 2);

        // 3. Run inference on each test image
        for (run_idx = 0; run_idx < num_runs; run_idx = run_idx + 1) begin
            img_idx = first_image_index + run_idx;
            $display("");
            $display("----------------------------------------------------");
            $display("RUN %0d / %0d  |  MNIST test index %0d", run_idx + 1, num_runs, img_idx);
            $display("----------------------------------------------------");

            clear_accelerator_memories();
            // Pulse reset between runs so each image starts from a clean FSM / buffer state
            if (run_idx > 0) begin
                @(posedge clk);
                start <= 1'b0;
                rst_n <= 1'b0;
                repeat (5) @(posedge clk);
                rst_n <= 1'b1;
                repeat (4) @(posedge clk);
            end

            load_mnist_binary("t10k-images-idx3-ubyte", img_idx);
            load_mnist_label("t10k-labels-idx1-ubyte", img_idx, expected_label);
            $display("[TB INFO] Asserting start for expected label %0d...", expected_label);
            if ($test$plusargs("golden_fc")) begin
                @(posedge clk);
                force uut.state    = uut.ST_FC_STREAM;
                force uut.fc_start = 1'b1;
                @(posedge clk);
                release uut.fc_start;
                release uut.state;
            end else begin
                @(posedge clk);
                start <= 1'b1;
                @(posedge clk);
                start <= 1'b0;
            end

            $display("[TB INFO] Pipeline active. Awaiting done...");
            if ($test$plusargs("dump_pool2_only")) begin
                wait(uut.state == uut.ST_FC_STREAM);
                $writememh($sformatf("pool1_run%0d.hex", run_idx + 1), uut.conv2_inst.i_mem.mem);
                $writememh($sformatf("pool2_run%0d.hex", run_idx + 1), uut.pool2_to_fc_buf.ram);
                $display("[TB DEBUG] Wrote pool1_run%0d.hex and pool2_run%0d.hex at FC stream start.",
                         run_idx + 1, run_idx + 1);
            end else begin
                wait(done == 1'b1);
                @(posedge clk);
                led_snapshot = LED;

                if ($test$plusargs("debug_pool")) begin
                    int pool_sum;
                    int omem_sum;
                    pool_sum = 0;
                    omem_sum = 0;
                    for (int addr = 0; addr < 400; addr++)
                        pool_sum += $signed(uut.pool2_to_fc_buf.ram[addr]);
                    for (int addr = 0; addr < 784; addr++)
                        omem_sum += uut.conv1_inst.o_mem.mem[addr][31:0];
                    $display("[TB DEBUG] pool2_to_fc_buf sum = %0d | conv1 o_mem[31:0] sum = %0d",
                             pool_sum, omem_sum);
                end

                if ($test$plusargs("debug_scores")) begin
                    dump_debug_summary();
                end

				// Explicitly display the hardware predicted output for both PASS and FAIL cases
                for (int i = 0; i < 10; i++) begin
                    if (led_snapshot[i])
                        $display("  Hardware predicted output: %0d", i);
                end

                if (led_snapshot == expected_one_hot) begin
                    pass_count++;
                    $display("RUN %0d PASS | index %0d | expected %0d | LED %b",
                             run_idx + 1, img_idx, expected_label, led_snapshot);
                end else begin
                    fail_count++;
                    $display("RUN %0d FAIL | index %0d | expected %0d (one-hot %b) | LED %b",
                             run_idx + 1, img_idx, expected_label, expected_one_hot, led_snapshot);
                end
            end
        end

        $display("");
        $display("====================================================");
        $display("BATCH SIMULATION COMPLETE");
        $display("Passed: %0d / %0d", pass_count, num_runs);
        $display("Failed: %0d / %0d", fail_count, num_runs);
        if (fail_count == 0)
            $display("OVERALL: ALL RUNS PASSED");
        else
            $display("OVERALL: %0d MISMATCH(ES) — check if only one digit works", fail_count);
        $display("====================================================");
        $finish;
    end

    // ============================================================
    // TASK: MNIST BINARY PARSER & BACKDOOR MEMORY LOADER
    // ============================================================
    task automatic load_mnist_binary(input string filename, input int img_idx);
        int file_desc;
        int status;
        int file_offset;
        int val;
        logic [7:0] padded_image[32][32];

        file_desc = $fopen(filename, "rb");
        if (file_desc == 0) begin
            $display("CRITICAL ERROR: Could not open MNIST image file: %s", filename);
            $display("Please verify file path and ensure it is decompressed.");
            $finish;
        end

        // Skip header and jump straight to the specific image file 
        file_offset = 16 + (img_idx * 784);
        status = $fseek(file_desc, file_offset, 0);
        
        // Read 28x28 image and map centered inside a 32x32 zero-padded buffer
        for (int r = 0; r < 32; r++) begin
            for (int c = 0; c < 32; c++) begin
                if (r >= 2 && r < 30 && c >= 2 && c < 30) begin
              
                    val = $fgetc(file_desc);
                    if (val == -1) begin
                        $display("ERROR: Unexpected EOF encountered at row %0d, col %0d", r, c);
                        $finish;
                    end
                    // Match training Normalize((0.5,), (0.5,)) in 8-bit fixed point.
                    padded_image[r][c] = val[7:0] - 8'd128;
                end else begin
                    padded_image[r][c] = 8'h00;
                    // Zero padding boundaries
                end
            end
        end
        $fclose(file_desc);
        $display("[TB INFO] Successfully extracted and padded MNIST Image Index %0d.", img_idx);
        // Conv1 has one physical input row, so pack one 8-bit pixel per IFMAP address.
        for (int addr = 0; addr < 1024; addr++) begin
            int row_coord = addr / 32;
            int col_coord = addr % 32;
            uut.conv1_inst.i_mem.mem[addr] = padded_image[row_coord][col_coord];
        end
        $display("[TB INFO] Backdoor load to conv1 input feature memory (i_mem) complete.");
        if ($test$plusargs("debug_ifmap")) begin
            int ifmap_sum;
            ifmap_sum = 0;
            for (int addr = 0; addr < 1024; addr++)
                ifmap_sum += $signed(uut.conv1_inst.i_mem.mem[addr]);
            $display("[TB DEBUG] conv1 i_mem sum = %0d", ifmap_sum);
        end
    endtask

    task automatic dump_debug_summary();
        int nonzero_fc_inputs;
        int unknown_fc_inputs;
        logic signed [15:0] score;
        int nonzero_fc1_outputs;
        int nonzero_fc2_outputs;
        int min_fc1_acc;
        int max_fc1_acc;
        int acc_i32;
        nonzero_fc_inputs  = 0;
        unknown_fc_inputs  = 0;
        nonzero_fc1_outputs = 0;
        nonzero_fc2_outputs = 0;
        for (int addr = 0; addr < 400; addr++) begin
            if (^uut.pool2_to_fc_buf.ram[addr] === 1'bx) begin
                unknown_fc_inputs++;
            end else if (uut.pool2_to_fc_buf.ram[addr] != 8'h00) begin
                nonzero_fc_inputs++;
            end
        end

        $display("[TB DEBUG] Non-zero FC input buffer entries: %0d / 400", nonzero_fc_inputs);
        $display("[TB DEBUG] Unknown FC input buffer entries: %0d / 400", unknown_fc_inputs);
        $display("[TB DEBUG] pool2_to_fc_buf[0:19]:");
        for (int addr = 0; addr < 20; addr++)
            $display("  [%0d] = %02h", addr, uut.pool2_to_fc_buf.ram[addr]);
        $display("[TB DEBUG] FC3 class scores:");
        for (int i = 0; i < 10; i++) begin
            score = uut.fc_pipeline.fc3_out[(i+1)*16-1 -: 16];
            $display("[TB DEBUG]   class %0d: %0d (0x%04h)", i, score, score);
        end

        // Extra visibility: does zeroing happen already at FC1 / FC2?
        for (int i = 0; i < 120; i++) begin
            score = uut.fc_pipeline.fc1_out[(i+1)*16-1 -: 16];
            if (score != 0)
                nonzero_fc1_outputs++;
        end
        for (int i = 0; i < 84; i++) begin
            score = uut.fc_pipeline.fc2_out[(i+1)*16-1 -: 16];
            if (score != 0)
                nonzero_fc2_outputs++;
        end
        $display("[TB DEBUG] Non-zero FC1 outputs: %0d / 120", nonzero_fc1_outputs);
        $display("[TB DEBUG] Non-zero FC2 outputs: %0d / 84", nonzero_fc2_outputs);

        // Pin down why FC1 is clamped to zero:
        // print accum + bias quantization for a few FC1 neurons.
        $display("[TB DEBUG] FC1 accum/bias/biased (first 5 neurons):");
        for (int i = 0; i < 5; i++) begin
            // fc1.accum is wider than 16 bits;
            // cast to a reasonable size for printing.
            // biased mirrors fc_layer's BIAS_ADD math: (accum + b) >>> OUT_SHIFT.
            logic signed [31:0] acc_i;
            logic signed [7:0]  b_i;
            logic signed [15:0] biased_i;
            acc_i = uut.fc_pipeline.fc1.accum[i];
            b_i   = uut.fc_pipeline.fc1_bias[(i+1)*8-1 -: 8];
            biased_i = (acc_i + b_i) >>> uut.fc_pipeline.FC_OUT_SHIFT;
            $display("  i=%0d acc=%0d bias=%0d biased=%0d out=%0d",
                     i, acc_i, b_i, biased_i,
                     uut.fc_pipeline.fc1_out[(i+1)*16-1 -: 16]);
        end

        // Quantization insight: how large are the raw accum values?
        // If abs(acc) is much smaller than 2^8, then (acc >>> 8) collapses to 0/-1.
        min_fc1_acc = 32'sd2147483647;
        max_fc1_acc = -32'sd2147483648;
        for (int i = 0; i < 120; i++) begin
            acc_i32 = uut.fc_pipeline.fc1.accum[i];
            if (acc_i32 < min_fc1_acc) min_fc1_acc = acc_i32;
            if (acc_i32 > max_fc1_acc) max_fc1_acc = acc_i32;
        end
        $display("[TB DEBUG] FC1 accum range: min=%0d max=%0d (before >>>%0d)",
                 min_fc1_acc, max_fc1_acc, uut.fc_pipeline.FC_OUT_SHIFT);
        if ($test$plusargs("debug_ifmap")) begin
            int pool_sum;
            pool_sum = 0;
            for (int addr = 0; addr < 400; addr++)
                pool_sum += $signed(uut.pool2_to_fc_buf.ram[addr]);
            $display("[TB DEBUG] pool2_to_fc_buf sum = %0d", pool_sum);
        end
    endtask

    // ============================================================
    // TASKS: CONV WEIGHT PACKERS FOR SYSTOLIC WEIGHT MEMORY
    // ============================================================
    task automatic load_conv1_weights(input string filename);
        int file_desc;
        int status;
        int raw_val;
        localparam int CONV1_IC = 1;
        for (int addr = 0; addr < 2048; addr++) begin
            uut.conv1_inst.w_mem.mem[addr] = '0;
        end

        file_desc = $fopen(filename, "r");
        if (file_desc == 0) begin
            $display("CRITICAL ERROR: Could not open Conv1 weight file: %s", filename);
            $finish;
        end

        // Mem_ctrl loads one word per physical PE row;
        // Conv1 has one input-channel row.
        for (int ky = 0; ky < 5; ky++) begin
            for (int kx = 0; kx < 5; kx++) begin
                for (int ic = 0; ic < CONV1_IC; ic++) begin
                    for (int oc = 5; oc >= 0; oc--) begin
           
                         int tap = (ky * 5) + kx;
                         int word_addr = (tap * CONV1_IC) + ic;

                        status = $fscanf(file_desc, "%h", raw_val);
                        if (status != 1) begin
                            $display("CRITICAL ERROR: Conv1 weight file ended early at oc=%0d ic=%0d ky=%0d kx=%0d", oc, ic, ky, kx);
                            $finish;
                        end
                        uut.conv1_inst.w_mem.mem[word_addr][oc*8 +: 8] = raw_val[7:0];
                    end
                end
            end
        end

        $fclose(file_desc);
        $display("[TB INFO] Conv1 weights packed into systolic weight memory.");
    endtask

    task automatic load_conv2_weights(input string filename);
        int file_desc;
        int status;
        int raw_val;
        localparam int CONV2_IC = 6;

        for (int addr = 0; addr < 2048; addr++) begin
            uut.conv2_inst.w_mem.mem[addr] = '0;
        end

        file_desc = $fopen(filename, "r");
        if (file_desc == 0) begin
            $display("CRITICAL ERROR: Could not open Conv2 weight file: %s", filename);
            $finish;
        end

        // Mem_ctrl loads one word per physical PE row;
        // Conv2 has six input-channel rows.
        for (int ky = 0; ky < 5; ky++) begin
            for (int kx = 0; kx < 5; kx++) begin
                for (int ic = 0; ic < CONV2_IC; ic++) begin
                    for (int oc = 15; oc >= 0; oc--) begin
           
                         int tap = (ky * 5) + kx;
                         int word_addr = (tap * CONV2_IC) + ic;

                        status = $fscanf(file_desc, "%h", raw_val);
                        if (status != 1) begin
                            $display("CRITICAL ERROR: Conv2 weight file ended early at oc=%0d ic=%0d ky=%0d kx=%0d", oc, ic, ky, kx);
                            $finish;
                        end
                        uut.conv2_inst.w_mem.mem[word_addr][oc*8 +: 8] = raw_val[7:0];
                    end
                end
            end
        end

        $fclose(file_desc);
        $display("[TB INFO] Conv2 weights packed into systolic weight memory.");
    endtask

    // ============================================================
    // TASK: MNIST LABEL PARSER
    // ============================================================
    task automatic load_mnist_label(
        input string filename, 
        input int img_idx, 
        output logic [3:0] label_out
    );
        int file_desc;
        int status;
        int file_offset;
        int val;

        file_desc = $fopen(filename, "rb");
        if (file_desc == 0) begin
            $display("CRITICAL ERROR: Could not open MNIST label file: %s", filename);
            $finish;
        end

        file_offset = 8 + img_idx;
        status = $fseek(file_desc, file_offset, 0);
        val = $fgetc(file_desc);
        if (val == -1) begin
            $display("ERROR: Unexpected EOF encountered while reading label for index %0d", img_idx);
            $finish;
        end

        label_out = val[3:0];
        $fclose(file_desc);
        $display("[TB INFO] Successfully extracted ground truth label: %0d", label_out);
    endtask

endmodule
