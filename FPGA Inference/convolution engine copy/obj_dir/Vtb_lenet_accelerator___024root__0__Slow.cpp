// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_lenet_accelerator.h for the primary calling header

#include "Vtb_lenet_accelerator__pch.h"

void Vtb_lenet_accelerator___024root___timing_ready(Vtb_lenet_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_static(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_static\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__num_tiles = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__total_addresses = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__y_coord = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__base_x = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__drain_cycle = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__filter_id = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6228865541619284911ull);
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i = 0U;
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__rst_n__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0 
        = vlSelfRef.tb_lenet_accelerator__DOT__done;
    Vtb_lenet_accelerator___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_static__TOP(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_static__TOP\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__num_tiles = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__total_addresses = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__y_coord = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__base_x = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__drain_cycle = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__filter_id = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6228865541619284911ull);
    vlSelfRef.tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i = 0U;
}

extern const VlWide<16>/*511:0*/ Vtb_lenet_accelerator__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_initial__TOP(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_initial__TOP\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i;
    tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i;
    tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i = 0;
    // Body
    tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram[(0x000003ffU 
                                                                           & tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i)] = 0U;
        tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[0U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[0U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[0U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[0U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[1U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[1U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[1U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[1U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[2U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[2U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[2U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[2U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[3U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[3U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[3U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[3U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[4U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[4U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[4U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[4U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[5U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[5U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[5U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[5U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[6U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[6U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[6U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[6U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[7U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[7U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[7U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[7U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[8U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[8U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[8U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[8U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[9U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[9U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[9U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[9U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[10U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[10U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[10U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[10U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[11U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[11U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[11U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[11U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[12U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[12U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[12U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[12U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[13U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[13U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[13U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[13U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[14U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[14U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[14U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[14U][3U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[15U][0U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[15U][1U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[15U][2U] = 0U;
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[15U][3U] = 0U;
    tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000400U, tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i)) {
        VL_ASSIGN_W(512, vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram
                    [(0x000003ffU & tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i)], Vtb_lenet_accelerator__ConstPool__CONST_h93e1b771_0);
        tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_final(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_final\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lenet_accelerator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_lenet_accelerator___024root___eval_phase__stl(Vtb_lenet_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_settle(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_settle\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_lenet_accelerator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_systolic.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_lenet_accelerator___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_triggers_vec__stl(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_triggers_vec__stl\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_lenet_accelerator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lenet_accelerator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_lenet_accelerator___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_lenet_accelerator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___stl_sequent__TOP__0(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___stl_sequent__TOP__0\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata;
    VL_ZERO_W(128, tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata);
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
    tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT____VdfgRegularize_he25b7133_0_1 
        = ((IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__out_x) 
           + (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__kx));
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[0U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[32U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[64U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[96U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[128U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[160U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[192U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[224U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0), 
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
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[15U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[31U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[47U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[63U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[79U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[95U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[111U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[127U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[143U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[159U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[175U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[191U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[207U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[223U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[239U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[255U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[14U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[30U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[46U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[62U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[78U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[94U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[110U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[126U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[142U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[158U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[174U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[190U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[206U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[222U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[238U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[254U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[13U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[29U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[45U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[61U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[77U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[93U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[109U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[125U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[141U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[157U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[173U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[189U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[205U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[221U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[237U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[253U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[12U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[28U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[44U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[60U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[76U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[92U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[108U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[124U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[140U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[156U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[172U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[188U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[204U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[220U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[236U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[252U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[11U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[27U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[43U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[59U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[75U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[91U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[107U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[123U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[139U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[155U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[171U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[187U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[203U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[219U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[235U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[251U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[10U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[26U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[42U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[58U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[74U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[90U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[106U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[122U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[138U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[154U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[170U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[186U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[202U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[218U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[234U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[250U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[9U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[25U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[41U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[57U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[73U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[89U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[105U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[121U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[137U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[153U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[169U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[185U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[201U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[217U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[233U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[249U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[8U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[24U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[40U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[56U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[72U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[88U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[104U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[120U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[136U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[152U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[168U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[184U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[200U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[216U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[232U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[248U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[7U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[23U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[39U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[55U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[71U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[87U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[103U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[119U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[135U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[151U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[167U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[183U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[199U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[215U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[231U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[247U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[6U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[22U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[38U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[54U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[70U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[86U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[102U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[118U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[134U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[150U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[166U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[182U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[198U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[214U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[230U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[246U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[5U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[21U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[37U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[53U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[69U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[85U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[101U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[117U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[133U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[149U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[165U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[181U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[197U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[213U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[229U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[245U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[4U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[20U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[36U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[52U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[68U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[84U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[100U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[116U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[132U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[148U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[164U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[180U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[196U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[212U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[228U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[244U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[3U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[19U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[35U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[51U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[67U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[83U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[99U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[115U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[131U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[147U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[163U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[179U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[195U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[211U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[227U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[243U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[2U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[18U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[34U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[50U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[66U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[82U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[98U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[114U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[130U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[146U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[162U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[178U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[194U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[210U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[226U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[242U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[1U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[17U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[33U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[49U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[0U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[65U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[81U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[97U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[113U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[1U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[129U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[145U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[161U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[177U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[2U] 
                                                     >> 0x00000018U)))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[193U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U])))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[209U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 8U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[225U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (0x000000ffU 
                                                     & (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                        >> 0x00000010U))))));
    vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[241U] 
        = (0x0000ffffU & VL_MULS_III(16, (IData)(vlSelfRef.tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2), 
                                     (0x0000ffffU & 
                                      VL_EXTENDS_II(16,8, 
                                                    (tb_lenet_accelerator__DOT__dut__DOT__wt_bram_rdata[3U] 
                                                     >> 0x00000018U)))));
}

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___eval_stl(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_stl\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_lenet_accelerator___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_lenet_accelerator___024root___eval_phase__stl(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___eval_phase__stl\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_lenet_accelerator___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_lenet_accelerator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_lenet_accelerator___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_lenet_accelerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_lenet_accelerator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_lenet_accelerator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_lenet_accelerator___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_lenet_accelerator.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_lenet_accelerator.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_lenet_accelerator.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_lenet_accelerator___024root___ctor_var_reset(Vtb_lenet_accelerator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_lenet_accelerator___024root___ctor_var_reset\n"); );
    Vtb_lenet_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_lenet_accelerator__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4973098785845370270ull);
    vlSelf->tb_lenet_accelerator__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8476863016376626007ull);
    vlSelf->tb_lenet_accelerator__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9522199673612692249ull);
    vlSelf->tb_lenet_accelerator__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6340200219334525951ull);
    vlSelf->tb_lenet_accelerator__DOT__host_act_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12228713447663868545ull);
    vlSelf->tb_lenet_accelerator__DOT__host_act_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6974223275523436596ull);
    vlSelf->tb_lenet_accelerator__DOT__host_act_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10278047770128624040ull);
    vlSelf->tb_lenet_accelerator__DOT__host_wt_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16467994749917175774ull);
    vlSelf->tb_lenet_accelerator__DOT__host_wt_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5157879966594132875ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_lenet_accelerator__DOT__host_wt_wdata, __VscopeHash, 1201491618576909652ull);
    vlSelf->tb_lenet_accelerator__DOT__host_psum_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10186247287372633524ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_lenet_accelerator__DOT__host_psum_rdata, __VscopeHash, 12188215999090594452ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__act_bram_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8266875623993962517ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9491903661993256617ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__out_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2305996737093851432ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__kx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16573118058973606967ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__ky = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 122115470809750713ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2638462965649915066ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__engine_clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298780131068442790ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6436029774232059023ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17811453696459901545ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__engine_psum_valid = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17670546633296130511ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed, __VscopeHash, 9312408924836273376ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1130331396531594121ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12871080136623810837ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram[__Vi0], __VscopeHash, 8866255749090370665ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(512, vlSelf->tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram[__Vi0], __VscopeHash, 1838281595744443340ull);
    }
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16647310408054938457ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16338846835482077829ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13333793063020655292ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1344919060405018658ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10207904432945966207ull);
    VL_SCOPED_RAND_RESET_W(672, vlSelf->tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg, __VscopeHash, 2496709918477740176ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15277118096560794794ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10203671472961648736ull);
    }
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11539376876848211952ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1185418644546373443ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT__shift_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13166841027225240406ull);
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15 = 0;
    vlSelf->tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16 = 0;
    vlSelf->__VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 = 0;
    vlSelf->__VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 = 0;
    vlSelf->__VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
