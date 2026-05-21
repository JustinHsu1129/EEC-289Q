// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lenet_accelerator.h for the primary calling header

#include "Vtb_lenet_accelerator__pch.h"

void Vtb_lenet_accelerator___024root___nba_sequent__TOP__2(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___nba_sequent__TOP__2\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram[vlSelfRef.__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0] 
            = vlSelfRef.__VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0;
    }
}

void Vtb_lenet_accelerator___024root___nba_comb__TOP__1(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___nba_comb__TOP__1\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata;
    VL_ZERO_W(128, tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata);
    // Body
    tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr][0U];
    tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr][1U];
    tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr][2U];
    tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
        = vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram
        [vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr][3U];
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[0U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[1U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[2U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[3U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[4U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[5U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[6U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[7U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[8U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[9U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[10U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[11U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[12U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[13U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[14U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[15U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[16U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[17U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[18U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[19U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[20U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[21U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[22U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[23U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[24U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[25U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[26U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[27U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[28U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[29U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[30U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[31U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[32U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[33U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[34U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[35U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[36U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[37U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[38U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[39U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[40U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[41U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[42U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[43U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[44U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[45U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[46U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[47U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[48U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[49U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[50U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[51U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[52U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[53U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[54U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[55U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[56U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[57U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[58U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[59U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[60U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[61U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[62U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[63U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[64U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[65U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[66U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[67U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[68U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[69U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[70U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[71U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[72U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[73U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[74U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[75U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[76U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[77U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[78U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[79U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[80U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[81U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[82U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[83U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[84U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[85U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[86U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[87U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[88U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[89U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[90U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[91U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[92U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[93U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[94U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[95U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[96U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[97U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[98U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[99U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[100U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[101U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[102U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[103U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[104U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[105U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[106U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[107U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[108U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[109U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[110U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[111U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[112U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[113U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[114U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[115U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[116U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[117U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[118U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[119U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[120U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[121U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[122U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[123U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[124U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[125U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[126U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[127U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[128U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[129U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[130U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[131U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[132U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[133U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[134U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[135U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[136U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[137U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[138U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[139U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[140U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[141U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[142U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[143U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[144U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[145U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[146U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[147U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[148U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[149U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[150U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[151U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[152U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[153U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[154U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[155U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[156U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[157U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[158U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[159U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[160U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[161U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[162U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[163U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[164U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[165U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[166U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[167U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[168U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[169U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[170U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[171U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[172U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[173U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[174U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[175U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[176U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[177U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[178U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[179U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[180U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[181U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[182U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[183U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[184U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[185U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[186U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[187U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[188U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[189U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[190U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[191U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[192U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[193U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[194U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[195U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[196U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[197U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[198U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[199U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[200U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[201U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[202U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[203U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[204U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[205U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[206U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[207U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[208U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[209U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[210U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[211U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[212U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[213U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[214U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[215U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[216U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[217U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[218U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[219U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[220U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[221U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[222U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[223U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[224U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[225U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[226U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[227U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[228U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[229U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[230U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[231U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[232U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[233U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[234U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[235U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[236U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[237U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[238U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[239U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[240U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[241U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[242U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[243U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[244U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[245U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[246U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[247U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[248U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[249U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[250U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[251U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[252U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[253U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[254U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[255U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
}

void Vtb_lenet_accelerator___024root___nba_sequent__TOP__0(Vtb_lenet_accelerator___024root* vlSelf);
void Vtb_lenet_accelerator___024root___nba_sequent__TOP__1(Vtb_lenet_accelerator___024root* vlSelf);
void Vtb_lenet_accelerator___024root___act_comb__TOP__0(Vtb_lenet_accelerator___024root* vlSelf);

void Vtb_lenet_accelerator___024root___eval_nba(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_nba\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_lenet_accelerator___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_lenet_accelerator___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_lenet_accelerator___024root___act_comb__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0) {
            vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram[vlSelfRef.__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0] 
                = vlSelfRef.__VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_lenet_accelerator___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_lenet_accelerator___024root___timing_ready(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___timing_ready\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready("@(posedge tb_lenet_accelerator.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb5f24d3d__0.ready("@( tb_lenet_accelerator.done)");
    }
}

void Vtb_lenet_accelerator___024root___timing_resume(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___timing_resume\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h69ab9abe__0.moveToResumeQueue(
                                                          "@(posedge tb_lenet_accelerator.clk)");
    vlSelfRef.__VtrigSched_hb5f24d3d__0.moveToResumeQueue(
                                                          "@( tb_lenet_accelerator.done)");
    vlSelfRef.__VtrigSched_h69ab9abe__0.resume("@(posedge tb_lenet_accelerator.clk)");
    vlSelfRef.__VtrigSched_hb5f24d3d__0.resume("@( tb_lenet_accelerator.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_lenet_accelerator___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_lenet_accelerator___024root___eval_triggers_vec__act(Vtb_lenet_accelerator___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lenet_accelerator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_lenet_accelerator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_lenet_accelerator___024root___eval_act(Vtb_lenet_accelerator___024root* vlSelf);

bool Vtb_lenet_accelerator___024root___eval_phase__act(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_phase__act\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_lenet_accelerator___024root___eval_triggers_vec__act(vlSelf);
    Vtb_lenet_accelerator___024root___timing_ready(vlSelf);
    Vtb_lenet_accelerator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_lenet_accelerator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_lenet_accelerator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_lenet_accelerator___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_lenet_accelerator___024root___timing_resume(vlSelf);
        Vtb_lenet_accelerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_lenet_accelerator___024root___eval_phase__inact(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_phase__inact\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_systolic.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_lenet_accelerator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_lenet_accelerator___024root___eval_phase__nba(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_phase__nba\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_lenet_accelerator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_lenet_accelerator___024root___eval_nba(vlSelf);
        Vtb_lenet_accelerator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_lenet_accelerator___024root___eval(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_lenet_accelerator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_systolic.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_systolic.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_lenet_accelerator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_systolic.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_lenet_accelerator___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_lenet_accelerator___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_lenet_accelerator___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0(Vtb_lenet_accelerator___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root____VbeforeTrig_h69ab9abe__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_lenet_accelerator__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h69ab9abe__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_lenet_accelerator___024root____VbeforeTrig_hb5f24d3d__0(Vtb_lenet_accelerator___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root____VbeforeTrig_hb5f24d3d__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_lenet_accelerator__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb5f24d3d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_lenet_accelerator___024root___eval_debug_assertions(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_debug_assertions\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
