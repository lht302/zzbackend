// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

void VTestDriver___024root___ctor_var_reset(VTestDriver___024root* vlSelf);

VTestDriver___024root::VTestDriver___024root(VTestDriver__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestDriver___024root___ctor_var_reset(this);
}

void VTestDriver___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestDriver___024root::~VTestDriver___024root() {
}
