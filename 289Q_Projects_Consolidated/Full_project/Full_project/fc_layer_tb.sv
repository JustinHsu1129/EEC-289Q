`timescale 1ns/1ps

module fc_layer_tb;

    // Clock and reset
    logic clk;
    logic rst_n;

    // Inputs to DUT
    logic start;
    logic in_valid;
    logic [7:0] in_data;

    // Outputs from DUT
    logic done;
    logic [9:0] LED; // Updated to 10 bits to match fc_top declaration

    // Scoreboard storage array to keep track of what we actually successfully pushed into the DUT
    logic [7:0] captured_inputs[400];

	 bit mismatch_detected;
	 logic signed [8:0] signed_in;
	 logic signed [7:0] weight;
	 logic signed [15:0] rtl_val;
    // Instantiate DUT
    fc_top #(.WIDTH(8)) dut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .in_data(in_data),
        .in_valid(in_valid),
        .done(done),
        .LED(LED)
    );

    // Clock generation (100 MHz)
    always #5 clk = ~clk;

    initial begin
        // Initialize inputs
        clk      = 0;
        rst_n    = 0;
        start    = 0;
        in_valid = 0;
        in_data  = 0;

        // Reset Sequence
        repeat (5) @(posedge clk);
        rst_n = 1;

        // Give the internal ROM architectures time to settle out of reset
        repeat (5) @(posedge clk);

        // Assert start pulse for exactly 1 clock cycle to trigger pipeline FSMs
        start = 1;
        @(posedge clk);
        start = 0;

        // Feed 400 bytes of data while strictly respecting the hardware handshake protocol
        begin
            int img_idx = 0;
            while (img_idx < 400) begin
                in_valid = 1;
                in_data  = img_idx[7:0]; // Standard deterministic pattern
                
                @(posedge clk);
                
                // Only advance the input stream index if the hardware actually accepted it
                if (dut.fc1_in_ready) begin
                    captured_inputs[img_idx] = in_data;
                    img_idx++;
                end
            end
        end

        // Terminate input stream driving
        in_valid = 0;
        in_data  = 0;

        // Wait for the final classification layer output processing to finish
        wait(done == 1);
        repeat(2) @(posedge clk);
        
        $display("====================================================");
        $display("Simulation Finished! Executing Scoreboard Check...");
        $display("====================================================");

        // Run verification engine
        validate_results();

        $finish;
    end

    // Waveform dump
    initial begin
        $dumpfile("fc_layer_tb.vcd");
        $dumpvars(0, fc_layer_tb);
    end


    // ========================================================================
    // Golden Scoreboard Behavioral Predictor Engine
    // ========================================================================
    task validate_results();
        // Emulation registers for Layer 1
        longint fc1_accum[120];
        logic signed [15:0] fc1_out[120];
        logic [7:0] fc1_truncated[120];

        // Emulation registers for Layer 2
        longint fc2_accum[84];
        logic signed [15:0] fc2_out[84];
        logic [7:0] fc2_truncated[84];

        // Emulation registers for Layer 3
        longint fc3_accum[10];
        logic signed [15:0] fc3_out[10];

        mismatch_detected = 0;

        // --------------------------------------------------------------------
        // 1. Compute Expected Layer 1 (400 Inputs -> 120 Outputs)
        // --------------------------------------------------------------------
        for (int j = 0; j < 120; j++) begin
            fc1_accum[j] = 0;
            for (int i = 0; i < 400; i++) begin
                signed_in = $signed({1'b0, captured_inputs[i]});
                weight    = dut.w1.mem[(j * 400) + i];
                fc1_accum[j] += signed_in * weight;
            end
            // Account for bias addition and fixed-point truncation mapping.
            fc1_out[j] = (fc1_accum[j] + $signed(dut.b1.mem[j])) >>> dut.FC_OUT_SHIFT;
            if (fc1_out[j] < 0)
                fc1_out[j] = 0;
            fc1_truncated[j] = fc1_out[j][7:0];
        end

        // --------------------------------------------------------------------
        // 2. Compute Expected Layer 2 (120 Inputs -> 84 Outputs)
        // --------------------------------------------------------------------
        for (int j = 0; j < 84; j++) begin
            fc2_accum[j] = 0;
            for (int i = 0; i < 120; i++) begin
                signed_in = $signed({1'b0, fc1_truncated[i]});
                weight    = dut.w2.mem[(j * 120) + i];
                fc2_accum[j] += signed_in * weight;
            end
            fc2_out[j] = (fc2_accum[j] + $signed(dut.b2.mem[j])) >>> dut.FC_OUT_SHIFT;
            if (fc2_out[j] < 0)
                fc2_out[j] = 0;
            fc2_truncated[j] = fc2_out[j][7:0];
        end

        // --------------------------------------------------------------------
        // 3. Compute Expected Layer 3 (84 Inputs -> 10 Outputs)
        // --------------------------------------------------------------------
        for (int j = 0; j < 10; j++) begin
            fc3_accum[j] = 0;
            for (int i = 0; i < 84; i++) begin
                signed_in = $signed({1'b0, fc2_truncated[i]});
                weight    = dut.w3.mem[(j * 84) + i];
                fc3_accum[j] += signed_in * weight;
            end
            fc3_out[j] = (fc3_accum[j] + $signed(dut.b3.mem[j])) >>> dut.FC_OUT_SHIFT;
        end

        // --------------------------------------------------------------------
        // 4. Print Comparison Diagnostic Summary
        // --------------------------------------------------------------------
        begin
            int expected_class;
            int actual_class;
            logic [9:0] expected_one_hot;
            expected_class = 0;
            for (int j = 1; j < 10; j++) begin
                if (fc3_out[j] > fc3_out[expected_class])
                    expected_class = j;
            end
            expected_one_hot = (10'b1 << expected_class);

            $display("\n--- Final Neuron Value Check (All 10 Class Outputs) ---");
            for (int j = 0; j < 10; j++) begin
                rtl_val = dut.fc3_out[(j+1)*16-1 -: 16];

                $display("Neuron [%0d]: Expected (Scoreboard) = %0d | Actual (RTL) = %0d",
                         j, fc3_out[j], rtl_val);

                if (fc3_out[j] !== rtl_val) begin
                    mismatch_detected = 1;
                end
            end

            actual_class = 0;
            for (int j = 0; j < 10; j++) begin
                if (LED[j])
                    actual_class = j;
            end

            $display("\n--- Top Level Physical Output Pin Mapping Check ---");
            $display("LED Expected = 10'b%b (class %0d) | Actual = 10'b%b (class %0d)",
                     expected_one_hot, expected_class, LED, actual_class);

            if (LED !== expected_one_hot) begin
                mismatch_detected = 1;
            end
        end

        $display("====================================================");
        if (mismatch_detected) begin
            $display("VERIFICATION FAILED: Math or quantization mismatch isolated between simulation model and RTL.");
        end else begin
            $display("VERIFICATION SUCCESS: Hardware results match behavioral expectations flawlessly!");
        end
        $display("====================================================");
    endtask

endmodule
