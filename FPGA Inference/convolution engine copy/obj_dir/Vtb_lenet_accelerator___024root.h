// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_lenet_accelerator.h for the primary calling header

#ifndef VERILATED_VTB_LENET_ACCELERATOR___024ROOT_H_
#define VERILATED_VTB_LENET_ACCELERATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_lenet_accelerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_lenet_accelerator___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_lenet_accelerator__DOT__clk;
        CData/*0:0*/ tb_lenet_accelerator__DOT__rst_n;
        CData/*0:0*/ tb_lenet_accelerator__DOT__start;
        CData/*0:0*/ tb_lenet_accelerator__DOT__done;
        CData/*0:0*/ tb_lenet_accelerator__DOT__host_act_we;
        CData/*7:0*/ tb_lenet_accelerator__DOT__host_act_wdata;
        CData/*0:0*/ tb_lenet_accelerator__DOT__host_wt_we;
        CData/*3:0*/ tb_lenet_accelerator__DOT__host_wt_addr;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__act_bram_re;
        CData/*1:0*/ tb_lenet_accelerator__DOT__dut__DOT__kx;
        CData/*1:0*/ tb_lenet_accelerator__DOT__dut__DOT__ky;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__engine_mac_en;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__engine_clr;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__engine_shift_in;
        CData/*3:0*/ tb_lenet_accelerator__DOT__dut__DOT__wt_bram_addr;
        CData/*3:0*/ tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__state;
        CData/*4:0*/ tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__drain_count;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__act_bram_re_q;
        CData/*3:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT__drain_emit_row;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT__draining;
        CData/*0:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT__shift_q;
        CData/*7:0*/ __VdlyVal__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0;
        CData/*0:0*/ __VdlySet__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_lenet_accelerator__DOT__done__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*9:0*/ tb_lenet_accelerator__DOT__host_act_addr;
        SData/*9:0*/ tb_lenet_accelerator__DOT__host_psum_addr;
        SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__act_bram_addr;
        SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__out_x;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__engine_psum_valid;
        SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__psum_write_addr;
        SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__out_y;
        SData/*9:0*/ tb_lenet_accelerator__DOT__dut__DOT__controller__DOT__stream_count;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_0;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_2;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_3;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_4;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_5;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_6;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_7;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_8;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_9;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_10;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_11;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_12;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_13;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_14;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_15;
        SData/*15:0*/ tb_lenet_accelerator__DOT__dut__DOT__core__DOT____VdfgRegularize_h8828232e_0_16;
        SData/*9:0*/ __VdlyDim0__tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram__v0;
        VlWide<4>/*127:0*/ tb_lenet_accelerator__DOT__host_wt_wdata;
        VlWide<16>/*511:0*/ tb_lenet_accelerator__DOT__host_psum_rdata;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__fd;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__num_tiles;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__total_addresses;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__tile_id;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__y_coord;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__base_x;
    };
    struct {
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__drain_cycle;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__filter_id;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__psum_val;
        IData/*31:0*/ tb_lenet_accelerator__DOT__extract_to_csv__Vstatic__i;
        VlWide<16>/*511:0*/ tb_lenet_accelerator__DOT__dut__DOT__engine_psum_packed;
        VlWide<21>/*671:0*/ tb_lenet_accelerator__DOT__dut__DOT__line_buf__DOT__shift_reg;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<CData/*7:0*/, 1024> tb_lenet_accelerator__DOT__dut__DOT__act_bram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 16> tb_lenet_accelerator__DOT__dut__DOT__weight_bram__DOT__ram;
        VlUnpacked<VlWide<16>/*511:0*/, 1024> tb_lenet_accelerator__DOT__dut__DOT__psum_bram_inst__DOT__ram;
        VlUnpacked<IData/*31:0*/, 256> tb_lenet_accelerator__DOT__dut__DOT__core__DOT__accum_bank;
        VlUnpacked<SData/*15:0*/, 256> tb_lenet_accelerator__DOT__dut__DOT__core__DOT__mult_w;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h69ab9abe__0;
    VlTriggerScheduler __VtrigSched_hb5f24d3d__0;

    // INTERNAL VARIABLES
    Vtb_lenet_accelerator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_lenet_accelerator___024root(Vtb_lenet_accelerator__Syms* symsp, const char* namep);
    ~Vtb_lenet_accelerator___024root();
    VL_UNCOPYABLE(Vtb_lenet_accelerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
