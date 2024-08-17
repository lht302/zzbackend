// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestDriver.h for the primary calling header

#ifndef VERILATED_VTESTDRIVER___024UNIT_H_
#define VERILATED_VTESTDRIVER___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTestDriver__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestDriver___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestDriver__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestDriver___024unit(VTestDriver__Syms* symsp, const char* v__name);
    ~VTestDriver___024unit();
    VL_UNCOPYABLE(VTestDriver___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
