// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_LENET_ACCELERATOR__SYMS_H_
#define VERILATED_VTB_LENET_ACCELERATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_lenet_accelerator.h"

// INCLUDE MODULE CLASSES
#include "Vtb_lenet_accelerator___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_lenet_accelerator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_lenet_accelerator* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_lenet_accelerator___024root TOP;

    // CONSTRUCTORS
    Vtb_lenet_accelerator__Syms(VerilatedContext* contextp, const char* namep, Vtb_lenet_accelerator* modelp);
    ~Vtb_lenet_accelerator__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
