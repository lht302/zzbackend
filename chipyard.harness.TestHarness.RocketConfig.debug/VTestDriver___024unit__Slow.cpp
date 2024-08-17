// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024unit.h"

void VTestDriver___024unit___ctor_var_reset(VTestDriver___024unit* vlSelf);

VTestDriver___024unit::VTestDriver___024unit(VTestDriver__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestDriver___024unit___ctor_var_reset(this);
}

void VTestDriver___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestDriver___024unit::~VTestDriver___024unit() {
}
