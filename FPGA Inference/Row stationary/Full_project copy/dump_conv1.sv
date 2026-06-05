`timescale 1ns/1ps
module dump_conv1;
  initial begin
    #2789404000;
    $display("HW conv1 [0,0] channels:");
    for (int oc=0; oc<6; oc++)
      $display(" oc%0d = %0d", oc, $signed(model_top_tb.uut.conv1_inst.o_mem.mem[oc][31:0]));
    $finish;
  end
endmodule
