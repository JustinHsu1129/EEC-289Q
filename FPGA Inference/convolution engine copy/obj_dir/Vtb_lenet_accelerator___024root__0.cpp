// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lenet_accelerator.h for the primary calling header

#include "Vtb_lenet_accelerator__pch.h"

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_initial__TOP(Vtb_lenet_accelerator___024root* vlSelf);
VlCoroutine Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__0(Vtb_lenet_accelerator___024root* vlSelf);
VlCoroutine Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__1(Vtb_lenet_accelerator___024root* vlSelf);

void Vtb_lenet_accelerator___024root___eval_initial(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_initial\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_lenet_accelerator___024root___eval_initial__TOP(vlSelf);
    Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__0(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lenet_accelerator__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_systolic.sv", 
                                             62);
        vlSelfRef.tb_lenet_accelerator__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_lenet_accelerator__DOT__clk)));
    }
    co_return;
}

void Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(Vtb_lenet_accelerator___024root* vlSelf, const char* __VeventDescription);
void Vtb_lenet_accelerator___024root____VbeforeTrig_hb5f24d3d__0(Vtb_lenet_accelerator___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__1(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_lenet_accelerator__DOT__unnamedblk1__DOT__i;
    tb_lenet_accelerator__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__unnamedblk2__DOT__i;
    tb_lenet_accelerator__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__unnamedblk3__DOT__i;
    tb_lenet_accelerator__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__unnamedblk4__DOT__i;
    tb_lenet_accelerator__DOT__unnamedblk4__DOT__i = 0;
    // Body
    vlSelfRef.tb_lenet_accelerator__DOT__rst_n = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__start = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_act_we = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_act_addr = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_act_wdata = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_we = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_addr = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "tb_systolic.sv", 
                                         80);
    vlSelfRef.tb_lenet_accelerator__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "tb_systolic.sv", 
                                         82);
    VL_WRITEF_NX("-----------------------------------------\nStarting LeNet Accelerator Simulation...\n-----------------------------------------\nZeroing Activation BRAM...\n",0);
    tb_lenet_accelerator__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_lenet_accelerator__DOT__unnamedblk1__DOT__i)) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                    "@(posedge tb_lenet_accelerator.clk)");
        co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lenet_accelerator.clk)", 
                                                             "tb_systolic.sv", 
                                                             91);
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_we = 1U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_addr 
            = (0x000003ffU & tb_lenet_accelerator__DOT__unnamedblk1__DOT__i);
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_wdata = 0U;
        tb_lenet_accelerator__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("Loading Image (28x28)...\n",0);
    tb_lenet_accelerator__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000310U, tb_lenet_accelerator__DOT__unnamedblk2__DOT__i)) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                    "@(posedge tb_lenet_accelerator.clk)");
        co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lenet_accelerator.clk)", 
                                                             "tb_systolic.sv", 
                                                             99);
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_we = 1U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_addr 
            = (0x000003ffU & tb_lenet_accelerator__DOT__unnamedblk2__DOT__i);
        vlSelfRef.tb_lenet_accelerator__DOT__host_act_wdata 
            = (0x000000ffU & VL_MODDIVS_III(32, tb_lenet_accelerator__DOT__unnamedblk2__DOT__i, (IData)(0x00000064U)));
        tb_lenet_accelerator__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__unnamedblk2__DOT__i);
    }
    Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                "@(posedge tb_lenet_accelerator.clk)");
    co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lenet_accelerator.clk)", 
                                                         "tb_systolic.sv", 
                                                         104);
    vlSelfRef.tb_lenet_accelerator__DOT__host_act_we = 0U;
    VL_WRITEF_NX("Zeroing Weight BRAM...\n",0);
    tb_lenet_accelerator__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_lenet_accelerator__DOT__unnamedblk3__DOT__i)) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                    "@(posedge tb_lenet_accelerator.clk)");
        co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lenet_accelerator.clk)", 
                                                             "tb_systolic.sv", 
                                                             109);
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_we = 1U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_addr 
            = (0x0000000fU & tb_lenet_accelerator__DOT__unnamedblk3__DOT__i);
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[0U] = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[1U] = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[2U] = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[3U] = 0U;
        tb_lenet_accelerator__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__unnamedblk3__DOT__i);
    }
    VL_WRITEF_NX("Loading Weights (3x3 kernel, 16 filters)...\n",0);
    tb_lenet_accelerator__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 9U, tb_lenet_accelerator__DOT__unnamedblk4__DOT__i)) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                    "@(posedge tb_lenet_accelerator.clk)");
        co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lenet_accelerator.clk)", 
                                                             "tb_systolic.sv", 
                                                             117);
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_we = 1U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_addr 
            = (0x0000000fU & tb_lenet_accelerator__DOT__unnamedblk4__DOT__i);
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[0U] = 0x04030201U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[1U] = 0x08070605U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[2U] = 0x0c0b0a09U;
        vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[3U] = 0x100f0e0dU;
        tb_lenet_accelerator__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__unnamedblk4__DOT__i);
    }
    Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                "@(posedge tb_lenet_accelerator.clk)");
    co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lenet_accelerator.clk)", 
                                                         "tb_systolic.sv", 
                                                         125);
    vlSelfRef.tb_lenet_accelerator__DOT__host_wt_we = 0U;
    VL_WRITEF_NX("Pulsing Start Signal...\n",0);
    Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                "@(posedge tb_lenet_accelerator.clk)");
    co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lenet_accelerator.clk)", 
                                                         "tb_systolic.sv", 
                                                         129);
    vlSelfRef.tb_lenet_accelerator__DOT__start = 1U;
    Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                "@(posedge tb_lenet_accelerator.clk)");
    co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_lenet_accelerator.clk)", 
                                                         "tb_systolic.sv", 
                                                         131);
    vlSelfRef.tb_lenet_accelerator__DOT__start = 0U;
    VL_WRITEF_NX("Waiting for accelerator to finish...\n",0);
    while ((1U & (~ (IData)(vlSelfRef.tb_lenet_accelerator__DOT__done)))) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_hb5f24d3d__0(vlSelf, 
                                                                    "@( tb_lenet_accelerator.done)");
        co_await vlSelfRef.__VtrigSched_hb5f24d3d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_lenet_accelerator.done)", 
                                                             "tb_systolic.sv", 
                                                             136);
    }
    VL_WRITEF_NX("Accelerator Finished! Extracting Psums...\n",0);
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__num_tiles = 0x00000034U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__total_addresses 
        = VL_MULS_III(32, (IData)(0x00000010U), vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__num_tiles);
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd 
        = VL_FOPEN_NN("psum_results.csv"s, "w"s);
    ;
    VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,"RAM_Addr,Filter_ID,Tile_Y,Base_X,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15\n",0);
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i = 0U;
    while (VL_LTS_III(32, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__total_addresses)) {
        Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(vlSelf, 
                                                                    "@(posedge tb_lenet_accelerator.clk)");
        co_await vlSelfRef.__VtrigSched_h69ab9abe__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_lenet_accelerator.clk)", 
                                                             "tb_systolic.sv", 
                                                             173);
        vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr 
            = (0x000003ffU & vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id 
            = VL_DIVS_III(32, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i, (IData)(0x00000010U));
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__drain_cycle 
            = VL_MODDIVS_III(32, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i, (IData)(0x00000010U));
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__filter_id 
            = ((IData)(0x0000000fU) - vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__drain_cycle);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__y_coord 
            = VL_DIVS_III(32, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id, (IData)(2U));
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__base_x 
            = VL_MULS_III(32, (IData)(0x00000010U), 
                          VL_MODDIVS_III(32, vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id, (IData)(2U)));
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,"%0d,%0d,%0d,%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__filter_id,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__y_coord,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__base_x);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[0U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[1U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[2U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[3U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[4U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[5U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[6U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[7U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[8U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[9U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[10U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[11U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[12U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[13U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[14U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[15U];
        VL_FWRITEF_NX(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd,",%0d\n",0,
                      32,vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val);
        vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i 
            = ((IData)(1U) + vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i);
    }
    VL_FCLOSE_I(vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd); VL_WRITEF_NX("-----------------------------------------\nSimulation Complete! Check 'psum_results.csv'\n-----------------------------------------\n",0);
    VL_FINISH_MT("tb_systolic.sv", 146, "");
    co_return;
}

void Vtb_lenet_accelerator___024root___eval_triggers_vec__act(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_triggers_vec__act\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.tb_lenet_accelerator__DOT__done) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.tb_lenet_accelerator__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__rst_n__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__done;
}

bool Vtb_lenet_accelerator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_lenet_accelerator___024root___act_comb__TOP__0(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___act_comb__TOP__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[0U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][0U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[1U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][1U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[2U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][2U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[3U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][3U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[4U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][4U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[5U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][5U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[6U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][6U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[7U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][7U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[8U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][8U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[9U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][9U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[10U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][10U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[11U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][11U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[12U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][12U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[13U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][13U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[14U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][14U];
    vlSelfRef.tb_lenet_accelerator__DOT__host_psum_rdata[15U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__host_psum_addr][15U];
}

void Vtb_lenet_accelerator___024root___eval_act(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_act\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_lenet_accelerator___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_lenet_accelerator___024root___nba_sequent__TOP__0(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___nba_sequent__TOP__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0;
    VL_ZERO_W(128, __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0);
    CData/*3:0*/ __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0;
    __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0 = 0;
    VlWide<16>/*511:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0;
    VL_ZERO_W(512, __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0);
    SData/*9:0*/ __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0;
    __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0 = 0U;
    if (vlSelfRef.tb_lenet_accelerator__DOT__host_act_we) {
        vlSelfRef.__VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_act_wdata;
        vlSelfRef.__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_act_addr;
        vlSelfRef.__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.tb_lenet_accelerator__DOT__host_wt_we) {
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[0U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[0U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[1U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[1U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[2U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[2U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[3U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_wt_wdata[3U];
        __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0 
            = vlSelfRef.tb_lenet_accelerator__DOT__host_wt_addr;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0 = 1U;
    }
    if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_valid))) {
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[0U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[1U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[2U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[3U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[4U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[5U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[6U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[7U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[8U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[9U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[10U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[11U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[12U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[13U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[14U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[14U];
        __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[15U] 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[15U];
        __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0 = 1U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0][0U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[0U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0][1U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[1U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0][2U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[2U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0][3U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram__v0[3U];
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][0U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[0U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][1U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[1U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][2U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[2U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][3U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[3U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][4U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[4U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][5U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[5U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][6U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[6U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][7U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[7U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][8U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[8U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][9U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[9U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][10U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[10U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][11U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[11U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][12U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[12U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][13U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[13U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][14U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[14U];
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0][15U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram__v0[15U];
    }
}

extern const VlWide<21>/*671:0*/ Vtb_lenet_accelerator__ConstPool__CONST_hb8942254_0;
extern const VlWide<16>/*511:0*/ Vtb_lenet_accelerator__ConstPool__CONST_h93e1b771_0;

void Vtb_lenet_accelerator___024root___nba_sequent__TOP__1(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___nba_sequent__TOP__1\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_2;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_2 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_3;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_3 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_4;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_4 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_5;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_5 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_6;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_6 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_7;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_7 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_8;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_8 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_9;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_9 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_10;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_10 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_11;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_11 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_12;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_12 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_13;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_13 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_14;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_14 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_15;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_15 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_16;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_16 = 0;
    CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_17;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_17 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32 = 0;
    SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33 = 0;
    SData/*9:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr = 0;
    CData/*0:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = 0;
    CData/*3:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 0;
    SData/*9:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr = 0;
    SData/*9:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0;
    SData/*9:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x = 0;
    SData/*9:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y = 0;
    CData/*4:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count = 0;
    CData/*0:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0;
    CData/*3:0*/ __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v0;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v2;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v3;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v5;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v6;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v6 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v8;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v9;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v11;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v12;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v14;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v15;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v17;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v18;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v20;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v21;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v23;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v24;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v26;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v27;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v29;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v30;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v32;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v33;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v33 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v35;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v35 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v36;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v36 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v38;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v39;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v39 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v41;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v41 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v42;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v42 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v44;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v44 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v45;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v45 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v47;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v47 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v48;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v48 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v50;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v50 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v51;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v51 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v53;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v53 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v54;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v54 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v56;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v56 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v57;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v57 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v59;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v59 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v60;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v60 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v62;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v62 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v63;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v63 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v65;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v66;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v68;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v68 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v69;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v69 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v71;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v71 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v72;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v72 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v74;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v74 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v75;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v75 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v77;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v77 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v78;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v78 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v80;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v80 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v81;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v81 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v83;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v83 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v84;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v84 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v86;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v86 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v87;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v87 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v89;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v89 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v90;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v90 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v92;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v92 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v93;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v93 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v95;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v95 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v96;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v96 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v98;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v98 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v99;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v99 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v101;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v101 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v102;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v102 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v104;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v104 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v105;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v105 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v107;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v107 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v108;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v108 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v110;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v110 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v111;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v111 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v113;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v113 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v114;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v114 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v116;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v116 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v117;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v117 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v119;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v119 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v120;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v120 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v122;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v122 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v123;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v123 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v125;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v125 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v126;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v126 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v128;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v128 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v129;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v129 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v131;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v131 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v132;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v132 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v134;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v134 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v135;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v135 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v137;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v137 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v138;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v138 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v140;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v140 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v141;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v141 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v143;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v143 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v144;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v144 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v146;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v146 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v147;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v147 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v149;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v149 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v150;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v150 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v152;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v152 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v153;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v153 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v155;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v155 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v156;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v156 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v158;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v158 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v159;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v159 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v161;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v161 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v162;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v162 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v164;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v164 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v165;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v165 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v167;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v167 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v168;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v168 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v170;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v170 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v171;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v171 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v173;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v173 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v174;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v174 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v176;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v176 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v177;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v177 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v179;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v179 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v180;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v180 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v182;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v182 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v183;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v183 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v185;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v185 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v186;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v186 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v188;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v188 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v189;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v189 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v191;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v191 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v192;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v192 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v194;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v194 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v195;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v195 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v197;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v197 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v198;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v198 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v200;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v200 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v201;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v201 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v203;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v203 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v204;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v204 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v206;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v206 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v207;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v207 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v209;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v209 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v210;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v210 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v212;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v212 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v213;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v213 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v215;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v215 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v216;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v216 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v218;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v218 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v219;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v219 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v221;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v221 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v222;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v222 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v224;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v224 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v225;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v225 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v227;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v227 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v228;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v228 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v230;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v230 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v231;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v231 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v233;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v233 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v234;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v234 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v236;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v236 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v237;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v237 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v239;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v239 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v240;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v240 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v242;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v242 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v243;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v243 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v245;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v245 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v246;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v246 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v248;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v248 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v249;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v249 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v251;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v251 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v252;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v252 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v254;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v254 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v255;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v255 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v257;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v257 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v258;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v258 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v260;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v260 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v261;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v261 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v263;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v263 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v264;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v264 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v266;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v266 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v267;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v267 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v269;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v269 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v270;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v270 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v272;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v272 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v273;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v273 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v275;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v275 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v276;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v276 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v278;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v278 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v279;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v279 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v281;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v281 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v282;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v282 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v284;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v284 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v285;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v285 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v287;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v287 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v288;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v288 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v290;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v290 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v291;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v291 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v293;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v293 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v294;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v294 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v296;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v296 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v297;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v297 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v299;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v299 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v300;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v300 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v302;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v302 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v303;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v303 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v305;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v305 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v306;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v306 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v308;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v308 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v309;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v309 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v311;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v311 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v312;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v312 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v314;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v314 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v315;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v315 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v317;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v317 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v318;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v318 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v320;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v320 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v321;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v321 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v323;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v323 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v324;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v324 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v326;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v326 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v327;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v327 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v329;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v329 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v330;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v330 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v332;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v332 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v333;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v333 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v335;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v335 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v336;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v336 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v338;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v338 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v339;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v339 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v341;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v341 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v342;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v342 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v344;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v344 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v345;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v345 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v347;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v347 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v348;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v348 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v350;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v350 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v351;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v351 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v353;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v353 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v354;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v354 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v356;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v356 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v357;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v357 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v359;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v359 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v360;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v360 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v362;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v362 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v363;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v363 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v365;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v365 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v366;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v366 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v368;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v368 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v369;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v369 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v371;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v371 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v372;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v372 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v374;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v374 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v375;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v375 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v377;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v377 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v378;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v378 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v380;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v380 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v381;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v381 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v383;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v383 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v384;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v384 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v386;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v386 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v387;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v387 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v389;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v389 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v390;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v390 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v392;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v392 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v393;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v393 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v395;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v395 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v396;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v396 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v398;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v398 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v399;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v399 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v401;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v401 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v402;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v402 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v404;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v404 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v405;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v405 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v407;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v407 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v408;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v408 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v410;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v410 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v411;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v411 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v413;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v413 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v414;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v414 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v416;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v416 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v417;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v417 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v419;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v419 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v420;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v420 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v422;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v422 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v423;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v423 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v425;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v425 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v426;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v426 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v428;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v428 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v429;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v429 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v431;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v431 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v432;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v432 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v434;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v434 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v435;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v435 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v437;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v437 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v438;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v438 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v440;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v440 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v441;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v441 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v443;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v443 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v444;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v444 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v446;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v446 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v447;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v447 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v449;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v449 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v450;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v450 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v452;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v452 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v453;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v453 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v455;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v455 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v456;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v456 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v458;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v458 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v459;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v459 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v461;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v461 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v462;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v462 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v464;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v464 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v465;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v465 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v467;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v467 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v468;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v468 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v470;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v470 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v471;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v471 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v473;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v473 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v474;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v474 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v476;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v476 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v477;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v477 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v479;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v479 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v480;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v480 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v482;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v482 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v483;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v483 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v485;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v485 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v486;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v486 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v488;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v488 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v489;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v489 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v491;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v491 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v492;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v492 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v494;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v494 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v495;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v495 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v497;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v497 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v498;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v498 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v500;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v500 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v501;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v501 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v503;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v503 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v504;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v504 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v506;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v506 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v507;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v507 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v509;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v509 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v510;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v510 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v512;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v512 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v513;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v513 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v515;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v515 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v516;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v516 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v518;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v518 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v519;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v519 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v521;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v521 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v522;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v522 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v524;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v524 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v525;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v525 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v527;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v527 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v528;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v528 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v530;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v530 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v531;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v531 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v533;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v533 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v534;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v534 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v536;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v536 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v537;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v537 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v539;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v539 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v540;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v540 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v542;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v542 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v543;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v543 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v545;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v545 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v546;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v546 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v548;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v548 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v549;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v549 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v551;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v551 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v552;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v552 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v554;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v554 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v555;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v555 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v557;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v557 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v558;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v558 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v560;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v560 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v561;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v561 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v563;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v563 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v564;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v564 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v566;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v566 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v567;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v567 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v569;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v569 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v570;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v570 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v572;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v572 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v573;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v573 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v575;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v575 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v576;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v576 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v578;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v578 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v579;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v579 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v581;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v581 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v582;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v582 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v584;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v584 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v585;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v585 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v587;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v587 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v588;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v588 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v590;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v590 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v591;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v591 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v593;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v593 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v594;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v594 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v596;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v596 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v597;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v597 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v599;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v599 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v600;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v600 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v602;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v602 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v603;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v603 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v605;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v605 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v606;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v606 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v608;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v608 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v609;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v609 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v611;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v611 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v612;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v612 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v614;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v614 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v615;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v615 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v617;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v617 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v618;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v618 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v620;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v620 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v621;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v621 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v623;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v623 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v624;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v624 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v626;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v626 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v627;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v627 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v629;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v629 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v630;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v630 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v632;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v632 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v633;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v633 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v635;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v635 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v636;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v636 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v638;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v638 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v639;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v639 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v641;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v641 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v642;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v642 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v644;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v644 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v645;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v645 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v647;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v647 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v648;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v648 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v650;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v650 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v651;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v651 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v653;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v653 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v654;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v654 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v656;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v656 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v657;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v657 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v659;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v659 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v660;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v660 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v662;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v662 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v663;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v663 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v665;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v665 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v666;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v666 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v668;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v668 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v669;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v669 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v671;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v671 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v672;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v672 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v674;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v674 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v675;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v675 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v677;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v677 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v678;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v678 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v680;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v680 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v681;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v681 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v683;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v683 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v684;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v684 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v686;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v686 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v687;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v687 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v689;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v689 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v690;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v690 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v692;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v692 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v693;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v693 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v695;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v695 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v696;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v696 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v698;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v698 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v699;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v699 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v701;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v701 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v702;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v702 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v704;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v704 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v705;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v705 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v707;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v707 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v708;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v708 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v710;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v710 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v711;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v711 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v713;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v713 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v714;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v714 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v716;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v716 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v717;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v717 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v719;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v719 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v720;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v720 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v722;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v722 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v723;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v723 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v725;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v725 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v726;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v726 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v728;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v728 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v729;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v729 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v731;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v731 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v732;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v732 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v734;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v734 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v735;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v735 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v737;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v737 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v738;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v738 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v740;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v740 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v741;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v741 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v743;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v743 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v744;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v744 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v746;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v746 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v747;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v747 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v749;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v749 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v750;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v750 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v752;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v752 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v753;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v753 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v755;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v755 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v756;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v756 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v758;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v758 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v759;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v759 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v761;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v761 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v762;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v762 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v764;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v764 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v765;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v765 = 0;
    IData/*31:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766;
    __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766 = 0;
    CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v767;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v767 = 0;
    VlWide<21>/*671:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_65;
    VlWide<16>/*511:0*/ __Vtemp_127;
    VlWide<16>/*511:0*/ __Vtemp_191;
    VlWide<16>/*511:0*/ __Vtemp_253;
    // Body
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_re;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v0 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v2 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v3 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v5 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v6 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v8 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v9 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v11 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v12 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v14 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v15 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v17 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v18 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v20 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v21 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v23 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v24 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v26 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v27 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v29 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v30 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v32 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v33 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v35 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v36 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v38 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v39 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v41 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v42 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v44 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v45 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v47 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v48 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v50 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v51 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v53 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v54 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v56 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v57 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v59 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v60 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v62 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v63 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v65 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v66 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v68 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v69 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v71 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v72 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v74 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v75 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v77 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v78 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v80 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v81 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v83 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v84 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v86 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v87 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v89 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v90 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v92 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v93 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v95 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v96 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v98 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v99 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v101 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v102 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v104 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v105 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v107 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v108 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v110 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v111 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v113 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v114 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v116 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v117 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v119 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v120 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v122 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v123 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v125 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v126 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v128 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v129 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v131 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v132 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v134 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v135 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v137 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v138 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v140 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v141 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v143 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v144 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v146 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v147 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v149 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v150 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v152 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v153 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v155 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v156 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v158 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v159 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v161 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v162 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v164 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v165 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v167 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v168 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v170 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v171 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v173 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v174 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v176 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v177 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v179 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v180 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v182 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v183 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v185 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v186 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v188 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v189 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v191 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v192 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v194 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v195 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v197 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v198 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v200 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v201 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v203 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v204 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v206 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v207 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v209 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v210 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v212 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v213 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v215 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v216 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v218 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v219 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v221 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v222 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v224 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v225 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v227 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v228 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v230 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v231 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v233 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v234 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v236 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v237 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v239 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v240 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v242 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v243 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v245 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v246 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v248 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v249 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v251 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v252 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v254 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v255 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v257 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v258 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v260 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v261 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v263 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v264 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v266 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v267 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v269 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v270 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v272 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v273 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v275 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v276 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v278 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v279 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v281 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v282 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v284 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v285 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v287 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v288 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v290 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v291 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v293 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v294 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v296 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v297 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v299 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v300 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v302 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v303 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v305 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v306 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v308 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v309 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v311 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v312 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v314 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v315 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v317 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v318 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v320 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v321 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v323 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v324 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v326 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v327 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v329 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v330 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v332 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v333 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v335 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v336 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v338 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v339 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v341 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v342 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v344 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v345 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v347 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v348 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v350 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v351 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v353 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v354 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v356 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v357 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v359 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v360 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v362 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v363 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v365 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v366 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v368 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v369 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v371 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v372 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v374 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v375 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v377 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v378 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v380 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v381 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v383 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v384 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v386 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v387 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v389 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v390 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v392 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v393 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v395 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v396 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v398 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v399 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v401 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v402 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v404 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v405 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v407 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v408 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v410 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v411 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v413 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v414 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v416 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v417 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v419 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v420 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v422 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v423 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v425 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v426 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v428 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v429 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v431 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v432 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v434 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v435 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v437 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v438 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v440 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v441 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v443 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v444 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v446 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v447 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v449 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v450 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v452 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v453 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v455 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v456 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v458 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v459 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v461 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v462 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v464 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v465 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v467 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v468 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v470 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v471 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v473 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v474 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v476 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v477 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v479 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v480 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v482 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v483 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v485 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v486 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v488 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v489 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v491 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v492 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v494 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v495 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v497 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v498 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v500 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v501 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v503 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v504 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v506 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v507 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v509 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v510 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v512 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v513 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v515 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v516 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v518 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v519 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v521 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v522 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v524 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v525 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v527 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v528 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v530 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v531 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v533 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v534 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v536 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v537 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v539 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v540 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v542 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v543 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v545 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v546 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v548 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v549 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v551 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v552 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v554 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v555 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v557 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v558 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v560 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v561 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v563 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v564 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v566 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v567 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v569 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v570 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v572 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v573 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v575 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v576 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v578 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v579 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v581 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v582 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v584 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v585 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v587 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v588 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v590 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v591 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v593 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v594 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v596 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v597 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v599 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v600 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v602 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v603 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v605 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v606 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v608 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v609 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v611 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v612 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v614 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v615 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v617 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v618 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v620 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v621 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v623 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v624 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v626 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v627 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v629 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v630 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v632 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v633 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v635 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v636 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v638 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v639 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v641 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v642 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v644 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v645 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v647 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v648 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v650 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v651 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v653 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v654 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v656 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v657 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v659 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v660 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v662 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v663 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v665 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v666 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v668 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v669 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v671 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v672 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v674 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v675 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v677 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v678 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v680 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v681 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v683 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v684 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v686 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v687 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v689 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v690 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v692 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v693 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v695 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v696 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v698 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v699 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v701 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v702 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v704 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v705 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v707 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v708 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v710 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v711 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v713 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v714 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v716 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v717 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v719 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v720 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v722 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v723 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v725 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v726 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v728 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v729 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v731 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v732 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v734 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v735 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v737 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v738 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v740 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v741 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v743 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v744 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v746 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v747 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v749 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v750 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v752 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v753 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v755 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v756 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v758 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v759 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v761 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v762 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v764 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v765 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766 = 0U;
    __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v767 = 0U;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining;
    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row;
    if (vlSelfRef.tb_lenet_accelerator__DOT__rst_n) {
        if (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q) {
            __Vtemp_1[1U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[0U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[1U] 
                                                 << 8U));
            __Vtemp_1[2U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[1U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[2U] 
                                                 << 8U));
            __Vtemp_1[3U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[2U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[3U] 
                                                 << 8U));
            __Vtemp_1[4U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[3U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[4U] 
                                                 << 8U));
            __Vtemp_1[5U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[4U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[5U] 
                                                 << 8U));
            __Vtemp_1[6U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[5U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[6U] 
                                                 << 8U));
            __Vtemp_1[7U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[6U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[7U] 
                                                 << 8U));
            __Vtemp_1[8U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[7U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[8U] 
                                                 << 8U));
            __Vtemp_1[9U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[8U] 
                              >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[9U] 
                                                 << 8U));
            __Vtemp_1[10U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[9U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[10U] 
                                                  << 8U));
            __Vtemp_1[11U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[10U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[11U] 
                                                  << 8U));
            __Vtemp_1[12U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[11U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[12U] 
                                                  << 8U));
            __Vtemp_1[13U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[12U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[13U] 
                                                  << 8U));
            __Vtemp_1[14U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[13U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[14U] 
                                                  << 8U));
            __Vtemp_1[15U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[14U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[15U] 
                                                  << 8U));
            __Vtemp_1[16U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[15U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[16U] 
                                                  << 8U));
            __Vtemp_1[17U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[16U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[17U] 
                                                  << 8U));
            __Vtemp_1[18U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[17U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[18U] 
                                                  << 8U));
            __Vtemp_1[19U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[18U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[19U] 
                                                  << 8U));
            __Vtemp_1[20U] = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[19U] 
                               >> 0x00000018U) | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[20U] 
                                                  << 8U));
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[0U] 
                = ((vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[0U] 
                    << 8U) | vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram
                   [vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr]);
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[1U] 
                = __Vtemp_1[1U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[2U] 
                = __Vtemp_1[2U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[3U] 
                = __Vtemp_1[3U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[4U] 
                = __Vtemp_1[4U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[5U] 
                = __Vtemp_1[5U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[6U] 
                = __Vtemp_1[6U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[7U] 
                = __Vtemp_1[7U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[8U] 
                = __Vtemp_1[8U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[9U] 
                = __Vtemp_1[9U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[10U] 
                = __Vtemp_1[10U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[11U] 
                = __Vtemp_1[11U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[12U] 
                = __Vtemp_1[12U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[13U] 
                = __Vtemp_1[13U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[14U] 
                = __Vtemp_1[14U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[15U] 
                = __Vtemp_1[15U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[16U] 
                = __Vtemp_1[16U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[17U] 
                = __Vtemp_1[17U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[18U] 
                = __Vtemp_1[18U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[19U] 
                = __Vtemp_1[19U];
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg[20U] 
                = __Vtemp_1[20U];
        }
        if (vlSelfRef.tb_lenet_accelerator__DOT__start) {
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_valid))) {
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr)));
        }
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
        if (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_clr) {
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v0 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v3 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v6 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v9 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v12 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v15 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v18 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v21 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v24 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v27 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v30 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v33 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v36 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v39 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v42 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v45 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v48 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v51 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v54 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v57 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v60 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v63 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v66 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v69 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v72 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v75 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v78 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v81 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v84 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v87 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v90 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v93 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v96 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v99 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v102 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v105 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v108 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v111 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v114 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v117 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v120 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v123 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v126 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v129 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v132 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v135 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v138 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v141 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v144 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v147 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v150 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v153 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v156 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v159 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v162 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v165 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v168 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v171 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v174 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v177 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v180 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v183 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v186 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v189 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v192 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v195 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v198 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v201 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v204 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v207 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v210 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v213 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v216 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v219 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v222 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v225 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v228 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v231 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v234 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v237 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v240 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v243 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v246 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v249 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v252 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v255 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v258 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v261 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v264 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v267 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v270 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v273 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v276 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v279 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v282 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v285 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v288 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v291 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v294 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v297 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v300 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v303 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v306 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v309 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v312 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v315 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v318 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v321 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v324 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v327 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v330 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v333 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v336 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v339 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v342 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v345 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v348 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v351 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v354 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v357 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v360 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v363 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v366 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v369 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v372 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v375 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v378 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v381 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v384 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v387 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v390 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v393 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v396 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v399 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v402 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v405 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v408 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v411 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v414 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v417 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v420 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v423 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v426 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v429 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v432 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v435 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v438 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v441 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v444 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v447 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v450 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v453 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v456 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v459 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v462 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v465 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v468 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v471 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v474 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v477 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v480 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v483 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v486 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v489 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v492 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v495 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v498 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v501 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v504 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v507 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v510 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v513 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v516 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v519 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v522 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v525 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v528 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v531 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v534 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v537 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v540 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v543 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v546 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v549 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v552 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v555 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v558 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v561 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v564 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v567 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v570 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v573 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v576 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v579 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v582 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v585 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v588 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v591 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v594 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v597 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v600 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v603 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v606 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v609 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v612 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v615 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v618 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v621 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v624 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v627 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v630 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v633 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v636 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v639 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v642 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v645 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v648 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v651 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v654 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v657 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v660 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v663 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v666 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v669 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v672 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v675 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v678 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v681 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v684 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v687 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v690 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v693 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v696 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v699 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v702 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v705 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v708 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v711 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v714 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v717 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v720 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v723 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v726 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v729 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v732 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v735 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v738 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v741 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v744 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v747 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v750 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v753 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v756 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v759 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v762 = 1U;
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v765 = 1U;
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0U;
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row = 0x0fU;
        } else if (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en) {
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[0U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[0U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[1U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[1U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[2U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[2U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[3U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[3U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[4U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[4U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[5U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[5U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[6U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[6U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[7U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[7U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[8U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[8U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[9U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[9U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[10U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[10U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[11U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[11U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[12U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[12U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[13U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[13U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[14U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[15U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[16U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[16U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[17U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[17U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[18U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[18U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[19U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[19U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[20U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[20U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[21U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[21U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[22U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[22U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[23U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[23U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[24U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[24U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[25U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[25U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[26U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[26U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[27U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[27U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[28U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[28U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[29U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[29U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[30U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[31U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[32U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[32U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[33U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[33U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[34U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[34U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[35U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[35U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[36U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[36U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[37U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[37U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[38U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[38U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[39U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[39U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[40U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[40U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[41U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[41U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[42U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[42U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[43U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[43U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[44U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[44U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[45U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[45U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[46U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[47U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[48U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[48U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[49U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[49U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[50U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[50U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[51U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[51U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[52U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[52U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[53U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[53U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[54U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[54U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[55U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[55U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[56U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[56U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[57U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[57U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[58U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[58U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[59U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[59U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[60U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[60U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[61U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[61U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[62U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[63U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[64U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[64U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[65U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[65U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[66U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[66U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[67U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[67U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[68U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[68U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[69U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[69U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[70U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[70U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[71U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[71U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[72U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[72U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[73U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[73U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[74U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[74U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[75U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[75U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[76U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[76U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[77U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[77U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[78U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[79U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[80U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[80U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[81U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[81U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[82U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[82U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[83U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[83U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[84U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[84U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[85U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[85U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[86U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[86U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[87U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[87U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[88U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[88U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[89U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[89U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[90U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[90U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[91U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[91U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[92U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[92U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[93U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[93U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[94U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[95U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[96U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[96U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[97U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[97U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[98U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[98U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[99U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[99U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[100U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[100U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[101U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[101U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[102U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[102U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[103U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[103U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[104U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[104U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[105U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[105U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[106U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[106U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[107U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[107U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[108U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[108U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[109U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[109U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[110U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[111U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[112U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[112U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[113U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[113U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[114U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[114U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[115U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[115U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[116U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[116U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[117U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[117U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[118U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[118U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[119U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[119U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[120U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[120U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[121U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[121U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[122U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[122U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[123U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[123U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[124U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[124U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[125U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[125U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[126U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[127U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[128U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[128U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[129U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[129U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[130U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[130U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[131U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[131U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[132U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[132U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[133U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[133U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[134U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[134U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[135U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[135U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[136U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[136U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[137U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[137U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[138U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[138U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[139U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[139U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[140U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[140U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[141U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[141U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[142U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[143U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[144U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[144U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[145U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[145U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[146U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[146U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[147U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[147U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[148U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[148U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[149U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[149U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[150U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[150U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[151U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[151U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[152U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[152U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[153U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[153U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[154U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[154U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[155U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[155U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[156U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[156U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[157U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[157U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[158U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[159U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[160U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[160U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[161U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[161U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[162U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[162U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[163U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[163U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[164U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[164U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[165U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[165U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[166U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[166U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[167U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[167U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[168U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[168U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[169U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[169U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[170U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[170U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[171U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[171U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[172U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[172U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[173U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[173U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[174U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[175U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[176U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[176U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[177U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[177U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[178U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[178U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[179U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[179U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[180U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[180U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[181U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[181U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[182U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[182U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[183U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[183U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[184U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[184U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[185U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[185U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[186U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[186U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[187U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[187U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[188U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[188U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[189U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[189U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[190U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[191U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[192U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[192U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[193U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[193U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[194U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[194U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[195U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[195U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[196U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[196U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[197U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[197U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[198U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[198U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[199U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[199U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[200U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[200U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[201U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[201U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[202U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[202U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[203U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[203U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[204U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[204U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[205U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[205U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[206U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[207U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[208U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[208U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[209U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[209U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[210U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[210U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[211U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[211U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[212U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[212U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[213U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[213U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[214U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[214U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[215U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[215U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[216U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[216U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[217U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[217U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[218U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[218U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[219U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[219U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[220U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[220U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[221U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[221U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[222U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[223U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[224U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[224U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[225U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[225U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[226U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[226U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[227U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[227U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[228U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[228U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[229U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[229U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[230U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[230U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[231U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[231U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[232U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[232U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[233U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[233U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[234U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[234U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[235U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[235U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[236U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[236U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[237U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[237U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[238U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[239U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[240U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[240U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[241U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[241U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[242U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[242U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[243U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[243U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[244U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[244U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[245U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[245U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[246U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[246U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[247U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[247U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[248U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[248U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[249U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[249U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[250U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[250U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[251U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[251U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[252U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[252U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[253U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[253U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[254U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763 = 1U;
            __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766 
                = (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U] 
                   + VL_EXTENDS_II(32,16, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[255U]));
            __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766 = 1U;
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0U;
        } else if (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in) {
            if ((2U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    __Vtemp_65[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U]))));
                    __Vtemp_65[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U]))) 
                                               >> 0x00000020U));
                    __Vtemp_127[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U]))));
                    __Vtemp_127[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U]))) 
                                                >> 0x00000020U));
                    __Vtemp_191[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U]))));
                    __Vtemp_191[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U]))) 
                                                >> 0x00000020U));
                    __Vtemp_253[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U]))));
                    __Vtemp_253[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U]))) 
                                                >> 0x00000020U));
                } else {
                    __Vtemp_65[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U]))));
                    __Vtemp_65[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U]))) 
                                               >> 0x00000020U));
                    __Vtemp_127[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U]))));
                    __Vtemp_127[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U]))) 
                                                >> 0x00000020U));
                    __Vtemp_191[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U]))));
                    __Vtemp_191[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U]))) 
                                                >> 0x00000020U));
                    __Vtemp_253[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U])) 
                                                 << 0x00000020U) 
                                                | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U]))));
                    __Vtemp_253[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U]))) 
                                                >> 0x00000020U));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                __Vtemp_65[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U]))));
                __Vtemp_65[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U]))) 
                                           >> 0x00000020U));
                __Vtemp_127[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U]))));
                __Vtemp_127[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U]))) 
                                            >> 0x00000020U));
                __Vtemp_191[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U]))));
                __Vtemp_191[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U]))) 
                                            >> 0x00000020U));
                __Vtemp_253[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U]))));
                __Vtemp_253[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U]))) 
                                            >> 0x00000020U));
            } else {
                __Vtemp_65[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U]))));
                __Vtemp_65[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U]))) 
                                           >> 0x00000020U));
                __Vtemp_127[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U]))));
                __Vtemp_127[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U]))) 
                                            >> 0x00000020U));
                __Vtemp_191[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U]))));
                __Vtemp_191[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U]))) 
                                            >> 0x00000020U));
                __Vtemp_253[14U] = (IData)((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U]))));
                __Vtemp_253[15U] = (IData)(((((QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U]))) 
                                            >> 0x00000020U));
            }
            if ((8U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                if ((4U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    if ((2U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[240U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[241U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[242U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[243U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[244U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[245U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[246U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[247U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[248U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[249U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[250U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[251U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[252U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[253U];
                        } else {
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[224U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[225U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[226U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[227U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[228U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[229U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[230U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[231U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[232U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[233U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[234U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[235U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[236U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[237U];
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[208U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[209U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[210U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[211U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[212U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[213U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[214U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[215U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[216U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[217U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[218U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[219U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[220U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[221U];
                    } else {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[192U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[193U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[194U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[195U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[196U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[197U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[198U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[199U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[200U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[201U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[202U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[203U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[204U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[205U];
                    }
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[14U] 
                        = __Vtemp_65[14U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[15U] 
                        = __Vtemp_65[15U];
                } else {
                    if ((2U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[176U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[177U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[178U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[179U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[180U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[181U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[182U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[183U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[184U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[185U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[186U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[187U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[188U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[189U];
                        } else {
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[160U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[161U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[162U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[163U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[164U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[165U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[166U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[167U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[168U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[169U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[170U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[171U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[172U];
                            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                                = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[173U];
                        }
                    } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[144U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[145U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[146U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[147U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[148U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[149U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[150U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[151U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[152U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[153U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[154U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[155U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[156U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[157U];
                    } else {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[128U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[129U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[130U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[131U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[132U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[133U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[134U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[135U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[136U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[137U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[138U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[139U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[140U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[141U];
                    }
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[14U] 
                        = __Vtemp_127[14U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[15U] 
                        = __Vtemp_127[15U];
                }
            } else if ((4U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                if ((2U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[112U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[113U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[114U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[115U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[116U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[117U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[118U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[119U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[120U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[121U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[122U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[123U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[124U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[125U];
                    } else {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[96U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[97U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[98U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[99U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[100U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[101U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[102U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[103U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[104U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[105U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[106U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[107U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[108U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[109U];
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[80U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[81U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[82U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[83U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[84U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[85U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[86U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[87U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[88U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[89U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[90U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[91U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[92U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[93U];
                } else {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[64U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[65U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[66U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[67U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[68U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[69U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[70U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[71U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[72U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[73U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[74U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[75U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[76U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[77U];
                }
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[14U] 
                    = __Vtemp_191[14U];
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[15U] 
                    = __Vtemp_191[15U];
            } else {
                if ((2U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[48U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[49U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[50U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[51U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[52U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[53U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[54U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[55U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[56U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[57U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[58U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[59U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[60U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[61U];
                    } else {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[32U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[33U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[34U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[35U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[36U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[37U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[38U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[39U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[40U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[41U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[42U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[43U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[44U];
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[45U];
                    }
                } else if ((1U & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[16U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[17U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[18U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[19U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[20U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[21U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[22U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[23U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[24U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[25U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[26U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[27U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[28U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[29U];
                } else {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[0U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[0U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[1U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[1U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[2U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[2U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[3U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[3U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[4U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[4U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[5U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[5U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[6U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[6U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[7U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[7U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[8U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[8U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[9U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[9U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[10U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[10U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[11U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[11U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[12U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[12U];
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[13U] 
                        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[13U];
                }
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[14U] 
                    = __Vtemp_253[14U];
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed[15U] 
                    = __Vtemp_253[15U];
            }
            if (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining) {
                if ((0U < (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row) 
                                          - (IData)(1U)));
                } else {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0U;
                }
            } else {
                __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 1U;
                __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row = 0x0eU;
            }
        } else {
            __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0U;
        }
    } else {
        VL_ASSIGN_W(672, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg, Vtb_lenet_accelerator__ConstPool__CONST_hb8942254_0);
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v2 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v5 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v8 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v11 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v14 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v17 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v20 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v23 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v26 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v29 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v32 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v35 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v38 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v41 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v44 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v47 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v50 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v53 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v56 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v59 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v62 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v65 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v68 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v71 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v74 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v77 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v80 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v83 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v86 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v89 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v92 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v95 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v98 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v101 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v104 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v107 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v110 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v113 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v116 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v119 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v122 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v125 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v128 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v131 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v134 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v137 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v140 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v143 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v146 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v149 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v152 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v155 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v158 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v161 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v164 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v167 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v170 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v173 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v176 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v179 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v182 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v185 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v188 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v191 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v194 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v197 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v200 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v203 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v206 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v209 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v212 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v215 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v218 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v221 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v224 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v227 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v230 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v233 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v236 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v239 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v242 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v245 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v248 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v251 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v254 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v257 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v260 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v263 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v266 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v269 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v272 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v275 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v278 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v281 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v284 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v287 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v290 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v293 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v296 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v299 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v302 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v305 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v308 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v311 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v314 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v317 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v320 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v323 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v326 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v329 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v332 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v335 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v338 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v341 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v344 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v347 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v350 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v353 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v356 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v359 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v362 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v365 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v368 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v371 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v374 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v377 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v380 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v383 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v386 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v389 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v392 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v395 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v398 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v401 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v404 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v407 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v410 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v413 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v416 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v419 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v422 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v425 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v428 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v431 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v434 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v437 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v440 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v443 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v446 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v449 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v452 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v455 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v458 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v461 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v464 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v467 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v470 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v473 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v476 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v479 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v482 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v485 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v488 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v491 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v494 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v497 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v500 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v503 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v506 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v509 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v512 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v515 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v518 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v521 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v524 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v527 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v530 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v533 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v536 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v539 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v542 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v545 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v548 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v551 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v554 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v557 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v560 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v563 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v566 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v569 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v572 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v575 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v578 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v581 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v584 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v587 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v590 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v593 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v596 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v599 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v602 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v605 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v608 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v611 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v614 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v617 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v620 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v623 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v626 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v629 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v632 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v635 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v638 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v641 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v644 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v647 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v650 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v653 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v656 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v659 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v662 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v665 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v668 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v671 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v674 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v677 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v680 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v683 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v686 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v689 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v692 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v695 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v698 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v701 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v704 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v707 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v710 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v713 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v716 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v719 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v722 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v725 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v728 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v731 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v734 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v737 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v740 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v743 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v746 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v749 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v752 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v755 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v758 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v761 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v764 = 1U;
        __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v767 = 1U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row = 0x0fU;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = 0U;
        VL_ASSIGN_W(512, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed, Vtb_lenet_accelerator__ConstPool__CONST_h93e1b771_0);
    }
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining 
        = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row 
        = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row;
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v0) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[0U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[0U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v1;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v2) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[0U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v3) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[1U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[1U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v4;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v5) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[1U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v6) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[2U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[2U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v7;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v8) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[2U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v9) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[3U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[3U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v10;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v11) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[3U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v12) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[4U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[4U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v13;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v14) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[4U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v15) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[5U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[5U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v16;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v17) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[5U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v18) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[6U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[6U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v19;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v20) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[6U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v21) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[7U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[7U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v22;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v23) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[7U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v24) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[8U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[8U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v25;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v26) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[8U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v27) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[9U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[9U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v28;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v29) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[9U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v30) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[10U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[10U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v31;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v32) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[10U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v33) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[11U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[11U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v34;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v35) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[11U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v36) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[12U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[12U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v37;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v38) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[12U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v39) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[13U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[13U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v40;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v41) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[13U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v42) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v43;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v44) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[14U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v45) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v46;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v47) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[15U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v48) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[16U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[16U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v49;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v50) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[16U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v51) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[17U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[17U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v52;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v53) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[17U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v54) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[18U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[18U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v55;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v56) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[18U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v57) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[19U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[19U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v58;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v59) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[19U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v60) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[20U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[20U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v61;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v62) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[20U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v63) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[21U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[21U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v64;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v65) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[21U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v66) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[22U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[22U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v67;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v68) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[22U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v69) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[23U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[23U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v70;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v71) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[23U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v72) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[24U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[24U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v73;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v74) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[24U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v75) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[25U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[25U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v76;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v77) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[25U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v78) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[26U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[26U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v79;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v80) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[26U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v81) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[27U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[27U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v82;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v83) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[27U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v84) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[28U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[28U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v85;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v86) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[28U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v87) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[29U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[29U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v88;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v89) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[29U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v90) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v91;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v92) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[30U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v93) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v94;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v95) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[31U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v96) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[32U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[32U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v97;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v98) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[32U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v99) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[33U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[33U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v100;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v101) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[33U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v102) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[34U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[34U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v103;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v104) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[34U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v105) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[35U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[35U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v106;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v107) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[35U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v108) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[36U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[36U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v109;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v110) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[36U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v111) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[37U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[37U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v112;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v113) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[37U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v114) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[38U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[38U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v115;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v116) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[38U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v117) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[39U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[39U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v118;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v119) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[39U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v120) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[40U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[40U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v121;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v122) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[40U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v123) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[41U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[41U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v124;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v125) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[41U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v126) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[42U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[42U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v127;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v128) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[42U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v129) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[43U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[43U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v130;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v131) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[43U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v132) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[44U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[44U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v133;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v134) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[44U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v135) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[45U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[45U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v136;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v137) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[45U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v138) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v139;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v140) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[46U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v141) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v142;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v143) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[47U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v144) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[48U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[48U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v145;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v146) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[48U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v147) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[49U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[49U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v148;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v149) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[49U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v150) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[50U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[50U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v151;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v152) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[50U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v153) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[51U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[51U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v154;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v155) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[51U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v156) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[52U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[52U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v157;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v158) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[52U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v159) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[53U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[53U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v160;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v161) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[53U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v162) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[54U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[54U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v163;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v164) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[54U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v165) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[55U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[55U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v166;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v167) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[55U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v168) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[56U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[56U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v169;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v170) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[56U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v171) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[57U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[57U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v172;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v173) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[57U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v174) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[58U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[58U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v175;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v176) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[58U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v177) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[59U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[59U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v178;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v179) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[59U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v180) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[60U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[60U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v181;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v182) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[60U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v183) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[61U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[61U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v184;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v185) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[61U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v186) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v187;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v188) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[62U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v189) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v190;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v191) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[63U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v192) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[64U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[64U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v193;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v194) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[64U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v195) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[65U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[65U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v196;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v197) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[65U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v198) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[66U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[66U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v199;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v200) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[66U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v201) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[67U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[67U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v202;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v203) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[67U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v204) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[68U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[68U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v205;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v206) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[68U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v207) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[69U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[69U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v208;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v209) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[69U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v210) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[70U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[70U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v211;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v212) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[70U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v213) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[71U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[71U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v214;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v215) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[71U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v216) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[72U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[72U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v217;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v218) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[72U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v219) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[73U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[73U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v220;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v221) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[73U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v222) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[74U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[74U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v223;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v224) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[74U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v225) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[75U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[75U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v226;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v227) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[75U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v228) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[76U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[76U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v229;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v230) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[76U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v231) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[77U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[77U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v232;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v233) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[77U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v234) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v235;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v236) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[78U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v237) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v238;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v239) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[79U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v240) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[80U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[80U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v241;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v242) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[80U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v243) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[81U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[81U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v244;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v245) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[81U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v246) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[82U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[82U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v247;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v248) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[82U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v249) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[83U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[83U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v250;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v251) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[83U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v252) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[84U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[84U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v253;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v254) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[84U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v255) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[85U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[85U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v256;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v257) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[85U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v258) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[86U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[86U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v259;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v260) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[86U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v261) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[87U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[87U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v262;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v263) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[87U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v264) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[88U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[88U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v265;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v266) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[88U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v267) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[89U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[89U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v268;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v269) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[89U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v270) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[90U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[90U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v271;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v272) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[90U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v273) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[91U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[91U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v274;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v275) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[91U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v276) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[92U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[92U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v277;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v278) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[92U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v279) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[93U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[93U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v280;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v281) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[93U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v282) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v283;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v284) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[94U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v285) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v286;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v287) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[95U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v288) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[96U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[96U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v289;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v290) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[96U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v291) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[97U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[97U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v292;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v293) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[97U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v294) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[98U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[98U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v295;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v296) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[98U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v297) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[99U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[99U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v298;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v299) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[99U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v300) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[100U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[100U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v301;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v302) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[100U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v303) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[101U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[101U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v304;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v305) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[101U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v306) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[102U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[102U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v307;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v308) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[102U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v309) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[103U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[103U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v310;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v311) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[103U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v312) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[104U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[104U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v313;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v314) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[104U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v315) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[105U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[105U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v316;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v317) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[105U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v318) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[106U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[106U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v319;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v320) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[106U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v321) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[107U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[107U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v322;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v323) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[107U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v324) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[108U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[108U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v325;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v326) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[108U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v327) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[109U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[109U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v328;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v329) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[109U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v330) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v331;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v332) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[110U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v333) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v334;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v335) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[111U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v336) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[112U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[112U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v337;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v338) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[112U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v339) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[113U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[113U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v340;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v341) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[113U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v342) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[114U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[114U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v343;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v344) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[114U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v345) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[115U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[115U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v346;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v347) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[115U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v348) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[116U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[116U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v349;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v350) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[116U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v351) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[117U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[117U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v352;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v353) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[117U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v354) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[118U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[118U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v355;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v356) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[118U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v357) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[119U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[119U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v358;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v359) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[119U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v360) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[120U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[120U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v361;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v362) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[120U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v363) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[121U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[121U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v364;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v365) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[121U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v366) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[122U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[122U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v367;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v368) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[122U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v369) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[123U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[123U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v370;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v371) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[123U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v372) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[124U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[124U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v373;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v374) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[124U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v375) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[125U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[125U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v376;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v377) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[125U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v378) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v379;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v380) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[126U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v381) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v382;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v383) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[127U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v384) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[128U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[128U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v385;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v386) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[128U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v387) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[129U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[129U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v388;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v389) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[129U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v390) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[130U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[130U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v391;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v392) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[130U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v393) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[131U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[131U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v394;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v395) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[131U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v396) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[132U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[132U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v397;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v398) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[132U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v399) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[133U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[133U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v400;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v401) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[133U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v402) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[134U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[134U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v403;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v404) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[134U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v405) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[135U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[135U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v406;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v407) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[135U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v408) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[136U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[136U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v409;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v410) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[136U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v411) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[137U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[137U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v412;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v413) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[137U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v414) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[138U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[138U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v415;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v416) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[138U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v417) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[139U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[139U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v418;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v419) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[139U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v420) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[140U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[140U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v421;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v422) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[140U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v423) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[141U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[141U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v424;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v425) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[141U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v426) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v427;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v428) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[142U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v429) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v430;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v431) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[143U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v432) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[144U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[144U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v433;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v434) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[144U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v435) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[145U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[145U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v436;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v437) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[145U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v438) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[146U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[146U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v439;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v440) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[146U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v441) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[147U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[147U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v442;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v443) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[147U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v444) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[148U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[148U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v445;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v446) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[148U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v447) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[149U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[149U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v448;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v449) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[149U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v450) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[150U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[150U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v451;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v452) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[150U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v453) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[151U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[151U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v454;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v455) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[151U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v456) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[152U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[152U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v457;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v458) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[152U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v459) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[153U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[153U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v460;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v461) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[153U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v462) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[154U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[154U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v463;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v464) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[154U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v465) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[155U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[155U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v466;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v467) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[155U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v468) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[156U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[156U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v469;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v470) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[156U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v471) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[157U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[157U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v472;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v473) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[157U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v474) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v475;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v476) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[158U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v477) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v478;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v479) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[159U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v480) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[160U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[160U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v481;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v482) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[160U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v483) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[161U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[161U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v484;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v485) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[161U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v486) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[162U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[162U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v487;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v488) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[162U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v489) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[163U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[163U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v490;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v491) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[163U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v492) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[164U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[164U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v493;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v494) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[164U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v495) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[165U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[165U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v496;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v497) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[165U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v498) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[166U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[166U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v499;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v500) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[166U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v501) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[167U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[167U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v502;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v503) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[167U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v504) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[168U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[168U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v505;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v506) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[168U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v507) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[169U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[169U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v508;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v509) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[169U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v510) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[170U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[170U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v511;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v512) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[170U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v513) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[171U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[171U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v514;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v515) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[171U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v516) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[172U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[172U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v517;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v518) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[172U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v519) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[173U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[173U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v520;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v521) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[173U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v522) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v523;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v524) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[174U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v525) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v526;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v527) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[175U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v528) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[176U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[176U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v529;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v530) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[176U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v531) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[177U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[177U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v532;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v533) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[177U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v534) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[178U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[178U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v535;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v536) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[178U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v537) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[179U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[179U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v538;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v539) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[179U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v540) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[180U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[180U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v541;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v542) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[180U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v543) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[181U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[181U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v544;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v545) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[181U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v546) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[182U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[182U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v547;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v548) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[182U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v549) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[183U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[183U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v550;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v551) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[183U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v552) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[184U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[184U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v553;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v554) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[184U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v555) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[185U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[185U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v556;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v557) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[185U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v558) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[186U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[186U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v559;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v560) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[186U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v561) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[187U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[187U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v562;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v563) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[187U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v564) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[188U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[188U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v565;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v566) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[188U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v567) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[189U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[189U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v568;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v569) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[189U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v570) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v571;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v572) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[190U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v573) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v574;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v575) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[191U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v576) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[192U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[192U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v577;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v578) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[192U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v579) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[193U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[193U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v580;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v581) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[193U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v582) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[194U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[194U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v583;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v584) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[194U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v585) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[195U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[195U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v586;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v587) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[195U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v588) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[196U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[196U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v589;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v590) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[196U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v591) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[197U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[197U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v592;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v593) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[197U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v594) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[198U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[198U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v595;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v596) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[198U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v597) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[199U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[199U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v598;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v599) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[199U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v600) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[200U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[200U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v601;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v602) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[200U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v603) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[201U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[201U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v604;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v605) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[201U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v606) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[202U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[202U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v607;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v608) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[202U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v609) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[203U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[203U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v610;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v611) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[203U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v612) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[204U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[204U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v613;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v614) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[204U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v615) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[205U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[205U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v616;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v617) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[205U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v618) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v619;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v620) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[206U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v621) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v622;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v623) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[207U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v624) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[208U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[208U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v625;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v626) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[208U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v627) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[209U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[209U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v628;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v629) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[209U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v630) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[210U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[210U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v631;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v632) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[210U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v633) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[211U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[211U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v634;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v635) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[211U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v636) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[212U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[212U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v637;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v638) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[212U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v639) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[213U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[213U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v640;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v641) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[213U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v642) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[214U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[214U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v643;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v644) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[214U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v645) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[215U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[215U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v646;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v647) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[215U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v648) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[216U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[216U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v649;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v650) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[216U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v651) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[217U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[217U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v652;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v653) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[217U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v654) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[218U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[218U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v655;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v656) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[218U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v657) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[219U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[219U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v658;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v659) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[219U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v660) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[220U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[220U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v661;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v662) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[220U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v663) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[221U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[221U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v664;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v665) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[221U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v666) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v667;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v668) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[222U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v669) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v670;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v671) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[223U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v672) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[224U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[224U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v673;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v674) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[224U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v675) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[225U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[225U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v676;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v677) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[225U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v678) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[226U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[226U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v679;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v680) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[226U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v681) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[227U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[227U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v682;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v683) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[227U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v684) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[228U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[228U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v685;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v686) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[228U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v687) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[229U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[229U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v688;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v689) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[229U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v690) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[230U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[230U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v691;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v692) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[230U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v693) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[231U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[231U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v694;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v695) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[231U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v696) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[232U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[232U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v697;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v698) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[232U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v699) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[233U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[233U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v700;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v701) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[233U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v702) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[234U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[234U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v703;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v704) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[234U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v705) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[235U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[235U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v706;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v707) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[235U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v708) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[236U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[236U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v709;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v710) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[236U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v711) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[237U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[237U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v712;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v713) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[237U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v714) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v715;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v716) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[238U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v717) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v718;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v719) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[239U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v720) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[240U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[240U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v721;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v722) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[240U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v723) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[241U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[241U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v724;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v725) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[241U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v726) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[242U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[242U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v727;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v728) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[242U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v729) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[243U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[243U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v730;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v731) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[243U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v732) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[244U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[244U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v733;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v734) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[244U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v735) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[245U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[245U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v736;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v737) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[245U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v738) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[246U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[246U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v739;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v740) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[246U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v741) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[247U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[247U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v742;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v743) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[247U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v744) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[248U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[248U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v745;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v746) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[248U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v747) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[249U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[249U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v748;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v749) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[249U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v750) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[250U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[250U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v751;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v752) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[250U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v753) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[251U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[251U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v754;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v755) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[251U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v756) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[252U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[252U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v757;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v758) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[252U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v759) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[253U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[253U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v760;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v761) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[253U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v762) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v763;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v764) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[254U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v765) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U] = 0U;
    }
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U] 
            = __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v766;
    }
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_psum_valid 
        = ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__rst_n)
            ? (0x0000ffffU & (- (IData)((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__shift_q))))
            : 0U);
    if (__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank__v767) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[255U] = 0U;
    }
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__shift_q 
        = ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__rst_n) 
           && (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in));
    if (vlSelfRef.tb_lenet_accelerator__DOT__rst_n) {
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_clr = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__done = 0U;
        if (((((((((0U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state)) 
                   | (1U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
                  | (2U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
                 | (3U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
                | (4U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
               | (5U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
              | (6U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) 
             | (7U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state)))) {
            if ((0U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if (vlSelfRef.tb_lenet_accelerator__DOT__start) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 1U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr = 0U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x = 0U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y = 0U;
                }
            } else if ((1U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if ((0x0054U > (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr)));
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count)));
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q)))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 2U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 3U;
                __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__kx = 0U;
                vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky = 0U;
            } else if ((3U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_clr = 1U;
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr = 0U;
                } else if ((9U >= (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en = 1U;
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__kx 
                        = (3U & VL_MODDIV_III(32, ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count) 
                                                   - (IData)(1U)), (IData)(3U)));
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky 
                        = (3U & VL_DIV_III(32, ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count) 
                                                - (IData)(1U)), (IData)(3U)));
                    if ((9U > (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr 
                            = (0x0000000fU & (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count));
                    }
                }
                if ((9U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 4U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count = 0U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                } else {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count)));
                }
            } else if ((4U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if ((0x10U > (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count))) {
                    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in = 1U;
                }
                if ((0x10U >= (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count 
                        = (0x0000001fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count)));
                } else {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if ((0x0000001cU <= ((IData)(0x00000010U) 
                                     + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x)))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x = 0U;
                    if ((0x0000001aU <= ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y)))) {
                        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 7U;
                    } else {
                        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y)));
                        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 6U;
                        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                    }
                } else {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x 
                        = (0x000003ffU & ((IData)(0x0010U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x)));
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 2U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                }
            } else if ((6U == (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state))) {
                if ((0x001cU > (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr)));
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count)));
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = 1U;
                } else if ((1U & (~ (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q)))) {
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 2U;
                    __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
                }
            } else {
                vlSelfRef.tb_lenet_accelerator__DOT__done = 1U;
                __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 0U;
            }
        }
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q 
            = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_re;
    } else {
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__kx = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky = 0U;
        __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_clr = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__done = 0U;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x 
            = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__out_x;
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q = 0U;
    }
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1 
        = ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x) 
           + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__kx));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram_re 
        = __Vdly__tb_lenet_accelerator__DOT__dut__DOT__act_bram_re;
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000fU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000eU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000dU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000cU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000bU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(0x0000000aU) 
                                      + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(9U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(8U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(7U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(6U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(5U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(4U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(3U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(2U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index 
        = (((IData)(0x0000001cU) * ((IData)(2U) - (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__ky))) 
           + ((IData)(0x0000001bU) - ((IData)(1U) + tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1)));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_2 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_17 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_16 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_15 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_14 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_13 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_12 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_11 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_10 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_9 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_8 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_7 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_6 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_5 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_4 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_3 
        = (VL_LTES_III(32, 0U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index) 
           & VL_GTS_III(32, 0x00000054U, tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_2)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__0__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_17)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__15__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_16)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__14__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_15)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__13__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_14)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__12__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_13)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__11__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_12)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__10__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_11)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__9__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_10)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__8__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_9)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__7__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_8)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__6__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_7)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__5__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_6)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__4__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_5)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__3__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_4)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__2__KET____DOT__raw_index
                                                   : 0U), 3U));
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32 
        = (0x000003ffU & VL_SHIFTL_III(10,10,32, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_3)
                                                   ? tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__gen_out__BRA__1__KET____DOT__raw_index
                                                   : 0U), 3U));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_2)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_33)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_17)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_18)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_16)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_19)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_15)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_20)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_14)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_21)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_13)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_22)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_12)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_23)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_11)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_24)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_10)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_25)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_9)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_26)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_8)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_27)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_7)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_28)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_6)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_29)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_5)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_30)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_4)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_31)))))
                                                   : 0U)
                                               : 0U)));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2 
        = (0x0000ffffU & VL_EXTENDS_II(16,8, ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_3)
                                               ? ((0x029fU 
                                                   >= (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32))
                                                   ? 
                                                  (0x000000ffU 
                                                   & (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                        [
                                                        (((IData)(7U) 
                                                          + (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32)) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32))))) 
                                                      | (vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg
                                                         [
                                                         ((IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x0000001fU 
                                                          & (IData)(tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_32)))))
                                                   : 0U)
                                               : 0U)));
}
