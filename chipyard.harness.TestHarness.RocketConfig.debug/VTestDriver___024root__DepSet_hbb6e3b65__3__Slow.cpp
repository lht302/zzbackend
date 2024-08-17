// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__224(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__224\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x91U] << 0x13U) | (0x7ffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                            [0x92U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x91U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x90U] 
                                           << 0x13U));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x90U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8fU] 
                                           << 0x13U));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8eU] 
                                           << 0x13U));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8dU] 
                                           << 0x13U));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8cU] 
                                           << 0x13U));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8bU] 
                                           << 0x13U));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x8aU] 
                                           << 0x13U));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x8aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x89U] 
                                           << 0x13U));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                       [0x89U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                           [0x88U] 
                                           << 0x13U));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x88U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x87U] 
                                             << 0x13U));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x87U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x86U] 
                                             << 0x13U));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x86U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x85U] 
                                             << 0x13U));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x85U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x84U] 
                                             << 0x13U));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x84U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x83U] 
                                             << 0x13U));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x83U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                             [0x82U] 
                                             << 0x13U));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x82U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x81U] 
                                              << 0x13U));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x81U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x80U] 
                                              << 0x13U));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x80U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7fU] 
                                              << 0x13U));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7eU] 
                                              << 0x13U));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7dU] 
                                              << 0x13U));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7cU] 
                                              << 0x13U));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7bU] 
                                              << 0x13U));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x7aU] 
                                              << 0x13U));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x7aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x79U] 
                                              << 0x13U));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x79U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x78U] 
                                              << 0x13U));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x78U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x77U] 
                                              << 0x13U));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x77U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x76U] 
                                              << 0x13U));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x76U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x75U] 
                                              << 0x13U));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x75U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x74U] 
                                              << 0x13U));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x74U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x73U] 
                                              << 0x13U));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x73U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x72U] 
                                              << 0x13U));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x72U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x71U] 
                                              << 0x13U));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x71U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x70U] 
                                              << 0x13U));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x70U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6fU] 
                                              << 0x13U));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6eU] 
                                              << 0x13U));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6dU] 
                                              << 0x13U));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6cU] 
                                              << 0x13U));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6bU] 
                                              << 0x13U));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x6aU] 
                                              << 0x13U));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x6aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x69U] 
                                              << 0x13U));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x69U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x68U] 
                                              << 0x13U));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x68U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x67U] 
                                              << 0x13U));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x67U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x66U] 
                                              << 0x13U));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x66U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x65U] 
                                              << 0x13U));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x65U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x64U] 
                                              << 0x13U));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x64U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x63U] 
                                              << 0x13U));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x63U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x62U] 
                                              << 0x13U));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x62U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x61U] 
                                              << 0x13U));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x61U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x60U] 
                                              << 0x13U));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x60U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5fU] 
                                              << 0x13U));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5eU] 
                                              << 0x13U));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5dU] 
                                              << 0x13U));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5cU] 
                                              << 0x13U));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5bU] 
                                              << 0x13U));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x5aU] 
                                              << 0x13U));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x5aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x59U] 
                                              << 0x13U));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x59U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x58U] 
                                              << 0x13U));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x58U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x57U] 
                                              << 0x13U));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x57U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x56U] 
                                              << 0x13U));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x56U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                              [0x55U] 
                                              << 0x13U));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                          [0x55U] >> 0xdU) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                        [0x53U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                         [0x54U])))) 
                                              << 0x13U));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                [0x54U])))) 
                          >> 0xdU) | ((IData)(((((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                 [0x53U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                  [0x54U]))) 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                [0x54U]))) 
                                  >> 0x20U)) >> 0xdU);
    VL_CONCAT_WIW(2052,17,2035, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                   [0x52U] >> 0xfU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__225(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__225\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog 
        = ((0xfe000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x92U]) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                        [0x93U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__226(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__226\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0xa2U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                 [0xa3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0xa2U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0xa1U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0xa1U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0xa0U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0xa0U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9fU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9fU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9eU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9eU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9dU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9dU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9cU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9cU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9bU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9bU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x9aU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x9aU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x99U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x99U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x98U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x98U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x97U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x97U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                              [0x96U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x96U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                        [0x94U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                    [0x95U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                      [0x94U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                       [0x95U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                 [0x94U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                             [0x95U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xfc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                           [0x93U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                         [0x94U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                                          [0x95U]))) 
                                                       >> 0x20U)) 
                                              >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0x3ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x93U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__227(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__227\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x123U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x122U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x121U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x120U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11fU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11eU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11dU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11cU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11bU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x11aU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x119U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x118U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x117U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x116U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x115U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x114U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x113U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x112U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x111U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x110U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10fU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10eU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10dU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10cU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10bU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x10aU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x109U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x108U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x107U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x106U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x105U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x104U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x103U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x102U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x101U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0x100U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xffU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xfeU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xfdU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xfcU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xfbU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xfaU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf9U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf8U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf7U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf6U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf5U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf4U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf3U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf2U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf1U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xf0U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xefU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xeeU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xedU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xecU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xebU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xeaU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xe9U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xe8U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xe7U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
        [0xe6U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                  [0xe4U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                              [0xe5U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                   [0xe4U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                                                               [0xe5U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_63, __Vtemp_62, 
                  (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                   [0x124U]));
    VL_CONCAT_WIW(2052,2,2050, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                   [0xe3U] >> 0x1eU), __Vtemp_63);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__228(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__228\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                 [0x124U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1 
        = ((0xffffff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
            [0x124U]) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___RANDOM
                         [0x125U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__220(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__221(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__222(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__223(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__229(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__229\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__220(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__221(vlSelf);
    VTestDriver___024root___eval_initial__TOP__222(vlSelf);
    VTestDriver___024root___eval_initial__TOP__223(vlSelf);
    VTestDriver___024root___eval_initial__TOP__224(vlSelf);
    VTestDriver___024root___eval_initial__TOP__225(vlSelf);
    VTestDriver___024root___eval_initial__TOP__226(vlSelf);
    VTestDriver___024root___eval_initial__TOP__227(vlSelf);
    VTestDriver___024root___eval_initial__TOP__228(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x126U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h26029430__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x125U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM[vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT____Vlvbound_h26029430__0;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [0U] >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__230(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__230\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__address 
        = ((0x1ff80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                           [0U] >> 3U)) | (0x7ffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__source_1 
        = ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                      [1U] >> 0x16U)) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                         [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [2U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [2U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__231(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__231\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x11U] << 0xbU) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0x12U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0x10U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0xfU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xeU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xdU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xcU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xcU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xbU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xbU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [0xaU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                [9U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [9U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [8U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [8U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [7U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [7U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [6U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [6U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [5U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [5U] >> 0x15U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                        [3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                    [4U])))) 
                              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [3U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [4U])))) >> 0x15U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                          [4U]))) >> 0x20U)) 
              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
        = ((0xfffff800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                           [2U] << 1U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                      [3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                       [4U]))) 
                                                    >> 0x20U)) 
                                           >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
        = (0x7ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [2U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__232(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__232\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x51U] << 0xfU) | (0x7fffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x52U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x51U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x50U] 
                                            << 0xfU));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x50U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4fU] 
                                            << 0xfU));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4eU] 
                                            << 0xfU));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4dU] 
                                            << 0xfU));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4cU] 
                                            << 0xfU));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4bU] 
                                            << 0xfU));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x4aU] 
                                            << 0xfU));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x4aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x49U] 
                                            << 0xfU));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x49U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x48U] 
                                            << 0xfU));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x48U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x47U] 
                                              << 0xfU));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x47U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x46U] 
                                              << 0xfU));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x46U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x45U] 
                                              << 0xfU));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x45U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x44U] 
                                              << 0xfU));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x44U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x43U] 
                                              << 0xfU));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x43U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x42U] 
                                              << 0xfU));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x42U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x41U] 
                                               << 0xfU));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x41U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x40U] 
                                               << 0xfU));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x40U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3fU] 
                                               << 0xfU));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3eU] 
                                               << 0xfU));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3dU] 
                                               << 0xfU));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3cU] 
                                               << 0xfU));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3bU] 
                                               << 0xfU));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x3aU] 
                                               << 0xfU));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x3aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x39U] 
                                               << 0xfU));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x39U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x38U] 
                                               << 0xfU));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x38U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x37U] 
                                               << 0xfU));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x37U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x36U] 
                                               << 0xfU));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x36U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x35U] 
                                               << 0xfU));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x35U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x34U] 
                                               << 0xfU));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x34U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x33U] 
                                               << 0xfU));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x33U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x32U] 
                                               << 0xfU));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x32U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x31U] 
                                               << 0xfU));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x31U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x30U] 
                                               << 0xfU));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x30U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2fU] 
                                               << 0xfU));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2eU] 
                                               << 0xfU));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2dU] 
                                               << 0xfU));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2cU] 
                                               << 0xfU));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2bU] 
                                               << 0xfU));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x2aU] 
                                               << 0xfU));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x2aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x29U] 
                                               << 0xfU));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x29U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x28U] 
                                               << 0xfU));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x28U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x27U] 
                                               << 0xfU));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x27U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x26U] 
                                               << 0xfU));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x26U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x25U] 
                                               << 0xfU));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x25U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x24U] 
                                               << 0xfU));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x24U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x23U] 
                                               << 0xfU));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x23U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x22U] 
                                               << 0xfU));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x22U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x21U] 
                                               << 0xfU));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x21U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x20U] 
                                               << 0xfU));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x20U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1fU] 
                                               << 0xfU));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1eU] 
                                               << 0xfU));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1dU] 
                                               << 0xfU));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1cU] 
                                               << 0xfU));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1bU] 
                                               << 0xfU));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x1aU] 
                                               << 0xfU));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x1aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x19U] 
                                               << 0xfU));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x19U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x18U] 
                                               << 0xfU));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x18U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x17U] 
                                               << 0xfU));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x17U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x16U] 
                                               << 0xfU));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x16U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                               [0x15U] 
                                               << 0xfU));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x15U] >> 0x11U) | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                         [0x13U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                          [0x14U])))) 
                                               << 0xfU));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [0x14U])))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                  [0x13U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                   [0x14U]))) 
                                                >> 0x20U)) 
                                       << 0xfU));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                  >> 0x20U)) >> 0x11U);
    VL_CONCAT_WIW(2052,21,2031, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0x12U] >> 0xbU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__233(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__233\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x91U] << 0x13U) | (0x7ffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                            [0x92U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x91U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x90U] 
                                           << 0x13U));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x90U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8fU] 
                                           << 0x13U));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8eU] 
                                           << 0x13U));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8dU] 
                                           << 0x13U));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8cU] 
                                           << 0x13U));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8bU] 
                                           << 0x13U));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x8aU] 
                                           << 0x13U));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x8aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x89U] 
                                           << 0x13U));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                       [0x89U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                           [0x88U] 
                                           << 0x13U));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x88U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x87U] 
                                             << 0x13U));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x87U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x86U] 
                                             << 0x13U));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x86U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x85U] 
                                             << 0x13U));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x85U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x84U] 
                                             << 0x13U));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x84U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x83U] 
                                             << 0x13U));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x83U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                             [0x82U] 
                                             << 0x13U));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x82U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x81U] 
                                              << 0x13U));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x81U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x80U] 
                                              << 0x13U));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x80U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7fU] 
                                              << 0x13U));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7eU] 
                                              << 0x13U));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7dU] 
                                              << 0x13U));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7cU] 
                                              << 0x13U));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7bU] 
                                              << 0x13U));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x7aU] 
                                              << 0x13U));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x7aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x79U] 
                                              << 0x13U));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x79U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x78U] 
                                              << 0x13U));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x78U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x77U] 
                                              << 0x13U));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x77U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x76U] 
                                              << 0x13U));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x76U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x75U] 
                                              << 0x13U));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x75U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x74U] 
                                              << 0x13U));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x74U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x73U] 
                                              << 0x13U));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x73U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x72U] 
                                              << 0x13U));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x72U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x71U] 
                                              << 0x13U));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x71U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x70U] 
                                              << 0x13U));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x70U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6fU] 
                                              << 0x13U));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6eU] 
                                              << 0x13U));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6dU] 
                                              << 0x13U));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6cU] 
                                              << 0x13U));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6bU] 
                                              << 0x13U));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x6aU] 
                                              << 0x13U));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x6aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x69U] 
                                              << 0x13U));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x69U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x68U] 
                                              << 0x13U));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x68U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x67U] 
                                              << 0x13U));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x67U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x66U] 
                                              << 0x13U));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x66U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x65U] 
                                              << 0x13U));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x65U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x64U] 
                                              << 0x13U));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x64U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x63U] 
                                              << 0x13U));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x63U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x62U] 
                                              << 0x13U));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x62U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x61U] 
                                              << 0x13U));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x61U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x60U] 
                                              << 0x13U));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x60U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5fU] 
                                              << 0x13U));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5eU] 
                                              << 0x13U));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5dU] 
                                              << 0x13U));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5cU] 
                                              << 0x13U));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5bU] 
                                              << 0x13U));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x5aU] 
                                              << 0x13U));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x5aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x59U] 
                                              << 0x13U));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x59U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x58U] 
                                              << 0x13U));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x58U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x57U] 
                                              << 0x13U));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x57U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x56U] 
                                              << 0x13U));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x56U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                              [0x55U] 
                                              << 0x13U));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                          [0x55U] >> 0xdU) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                        [0x53U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                         [0x54U])))) 
                                              << 0x13U));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [0x54U])))) 
                          >> 0xdU) | ((IData)(((((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                 [0x53U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                  [0x54U]))) 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                [0x54U]))) 
                                  >> 0x20U)) >> 0xdU);
    VL_CONCAT_WIW(2052,17,2035, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0x52U] >> 0xfU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__234(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__234\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((0xfe000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x92U]) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                        [0x93U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__235(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__235\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xa2U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0xa3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xa2U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xa1U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xa1U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xa0U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xa0U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9fU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9fU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9eU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9eU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9dU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9dU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9cU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9cU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9bU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9bU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x9aU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x9aU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x99U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x99U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x98U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x98U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x97U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x97U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0x96U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x96U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                        [0x94U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                    [0x95U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [0x94U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [0x95U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                 [0x94U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                             [0x95U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xfc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                           [0x93U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                         [0x94U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                          [0x95U]))) 
                                                       >> 0x20U)) 
                                              >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0x3ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x93U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__236(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__236\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x123U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x122U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x121U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x120U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11fU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11eU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11dU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11cU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11bU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x11aU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x119U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x118U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x117U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x116U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x115U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x114U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x113U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x112U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x111U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x110U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10fU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10eU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10dU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10cU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10bU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x10aU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x109U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x108U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x107U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x106U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x105U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x104U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x103U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x102U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x101U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x100U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xffU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xfeU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xfdU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xfcU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xfbU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xfaU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf9U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf8U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf7U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf6U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf5U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf4U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf3U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf2U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf1U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xf0U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xefU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xeeU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xedU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xecU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xebU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xeaU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xe9U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xe8U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xe7U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0xe6U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                  [0xe4U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                              [0xe5U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                   [0xe4U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                               [0xe5U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_63, __Vtemp_62, 
                  (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0x124U]));
    VL_CONCAT_WIW(2052,2,2050, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0xe3U] >> 0x1eU), __Vtemp_63);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__237(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__237\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                 [0x124U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((0xffffff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x124U]) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x125U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__238(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__238\n"); );
    // Init
    VlWide<4>/*127:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    VL_ZERO_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__229(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__230(vlSelf);
    VTestDriver___024root___eval_initial__TOP__231(vlSelf);
    VTestDriver___024root___eval_initial__TOP__232(vlSelf);
    VTestDriver___024root___eval_initial__TOP__233(vlSelf);
    VTestDriver___024root___eval_initial__TOP__234(vlSelf);
    VTestDriver___024root___eval_initial__TOP__235(vlSelf);
    VTestDriver___024root___eval_initial__TOP__236(vlSelf);
    VTestDriver___024root___eval_initial__TOP__237(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][3U] 
        = (0x1ffffffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x80U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][3U] 
        = (0x1ffffffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__239(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__239\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__240(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__240\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    VTestDriver___024root___eval_initial__TOP__238(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__239(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0x1fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x60U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0x1fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__241(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__241\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                     [0U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_address 
        = ((0x1ffc0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                           [0U] >> 3U)) | (0x3ffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                                           [1U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__242(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__242\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                    [1U] >> 0x12U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                             [1U] >> 0x1aU))) << 0x3aU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                               [2U])) << 0x1aU) | (QData)((IData)(
                                                                  (0x3ffffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                                                                   [3U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [3U] >> 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_lut 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
           [3U] >> 0x1cU);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data 
        = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                            [4U])) << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                                                               [5U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_denied 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
           [6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__beatsLeft 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 7U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__243(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__243\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    VTestDriver___024root___eval_initial__TOP__240(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__241(vlSelf);
    VTestDriver___024root___eval_initial__TOP__242(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x126U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT____Vlvbound_h26029430__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x125U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM[vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT____Vlvbound_h26029430__0;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__address 
        = ((0x1ff80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [0U] >> 3U)) | (0x7ffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__244(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__244\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__source_1 
        = ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                      [1U] >> 0x16U)) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__245(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__245\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x11U] << 0xbU) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0x12U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                 [0x10U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                 [0xfU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0xeU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0xdU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0xcU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xcU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0xbU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xbU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [0xaU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                [9U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [9U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [8U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [8U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [7U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [7U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [6U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [6U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [5U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [5U] >> 0x15U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                        [3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                    [4U])))) 
                              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                      [3U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                       [4U])))) >> 0x15U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                          [4U]))) >> 0x20U)) 
              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0xfU] 
        = ((0xfffff800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [2U] << 1U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                      [3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                       [4U]))) 
                                                    >> 0x20U)) 
                                           >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight[0x10U] 
        = (0x7ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [2U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__246(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__246\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x51U] << 0xfU) | (0x7fffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x52U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x51U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x50U] 
                                            << 0xfU));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x50U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4fU] 
                                            << 0xfU));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4eU] 
                                            << 0xfU));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4dU] 
                                            << 0xfU));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4cU] 
                                            << 0xfU));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4bU] 
                                            << 0xfU));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x4aU] 
                                            << 0xfU));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x49U] 
                                            << 0xfU));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x49U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x48U] 
                                            << 0xfU));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x48U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x47U] 
                                              << 0xfU));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x47U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x46U] 
                                              << 0xfU));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x46U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x45U] 
                                              << 0xfU));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x45U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x44U] 
                                              << 0xfU));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x44U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x43U] 
                                              << 0xfU));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x43U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x42U] 
                                              << 0xfU));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x42U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x41U] 
                                               << 0xfU));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x41U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x40U] 
                                               << 0xfU));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x40U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3fU] 
                                               << 0xfU));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3eU] 
                                               << 0xfU));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3dU] 
                                               << 0xfU));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3cU] 
                                               << 0xfU));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3bU] 
                                               << 0xfU));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x3aU] 
                                               << 0xfU));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x39U] 
                                               << 0xfU));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x39U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x38U] 
                                               << 0xfU));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x38U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x37U] 
                                               << 0xfU));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x37U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x36U] 
                                               << 0xfU));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x36U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x35U] 
                                               << 0xfU));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x35U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x34U] 
                                               << 0xfU));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x34U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x33U] 
                                               << 0xfU));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x33U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x32U] 
                                               << 0xfU));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x32U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x31U] 
                                               << 0xfU));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x31U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x30U] 
                                               << 0xfU));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x30U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2fU] 
                                               << 0xfU));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2eU] 
                                               << 0xfU));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2dU] 
                                               << 0xfU));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2cU] 
                                               << 0xfU));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2bU] 
                                               << 0xfU));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x2aU] 
                                               << 0xfU));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x29U] 
                                               << 0xfU));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x29U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x28U] 
                                               << 0xfU));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x28U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x27U] 
                                               << 0xfU));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x27U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x26U] 
                                               << 0xfU));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x26U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x25U] 
                                               << 0xfU));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x25U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x24U] 
                                               << 0xfU));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x24U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x23U] 
                                               << 0xfU));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x23U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x22U] 
                                               << 0xfU));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x22U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x21U] 
                                               << 0xfU));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x21U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x20U] 
                                               << 0xfU));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x20U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1fU] 
                                               << 0xfU));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1eU] 
                                               << 0xfU));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1dU] 
                                               << 0xfU));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1cU] 
                                               << 0xfU));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1bU] 
                                               << 0xfU));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x1aU] 
                                               << 0xfU));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x19U] 
                                               << 0xfU));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x19U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x18U] 
                                               << 0xfU));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x18U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x17U] 
                                               << 0xfU));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x17U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x16U] 
                                               << 0xfU));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x16U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                               [0x15U] 
                                               << 0xfU));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x15U] >> 0x11U) | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                         [0x13U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                          [0x14U])))) 
                                               << 0xfU));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x14U])))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                  [0x13U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                   [0x14U]))) 
                                                >> 0x20U)) 
                                       << 0xfU));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                  >> 0x20U)) >> 0x11U);
    VL_CONCAT_WIW(2052,21,2031, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x12U] >> 0xbU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__247(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__247\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x91U] << 0x13U) | (0x7ffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x92U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x91U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x90U] 
                                           << 0x13U));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x90U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8fU] 
                                           << 0x13U));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8eU] 
                                           << 0x13U));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8dU] 
                                           << 0x13U));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8cU] 
                                           << 0x13U));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8bU] 
                                           << 0x13U));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x8aU] 
                                           << 0x13U));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x8aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x89U] 
                                           << 0x13U));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x89U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x88U] 
                                           << 0x13U));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x88U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x87U] 
                                             << 0x13U));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x87U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x86U] 
                                             << 0x13U));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x86U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x85U] 
                                             << 0x13U));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x85U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x84U] 
                                             << 0x13U));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x84U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x83U] 
                                             << 0x13U));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x83U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                             [0x82U] 
                                             << 0x13U));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x82U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x81U] 
                                              << 0x13U));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x81U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x80U] 
                                              << 0x13U));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x80U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7fU] 
                                              << 0x13U));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7eU] 
                                              << 0x13U));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7dU] 
                                              << 0x13U));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7cU] 
                                              << 0x13U));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7bU] 
                                              << 0x13U));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x7aU] 
                                              << 0x13U));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x7aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x79U] 
                                              << 0x13U));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x79U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x78U] 
                                              << 0x13U));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x78U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x77U] 
                                              << 0x13U));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x77U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x76U] 
                                              << 0x13U));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x76U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x75U] 
                                              << 0x13U));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x75U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x74U] 
                                              << 0x13U));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x74U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x73U] 
                                              << 0x13U));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x73U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x72U] 
                                              << 0x13U));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x72U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x71U] 
                                              << 0x13U));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x71U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x70U] 
                                              << 0x13U));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x70U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6fU] 
                                              << 0x13U));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6eU] 
                                              << 0x13U));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6dU] 
                                              << 0x13U));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6cU] 
                                              << 0x13U));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6bU] 
                                              << 0x13U));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x6aU] 
                                              << 0x13U));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x6aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x69U] 
                                              << 0x13U));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x69U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x68U] 
                                              << 0x13U));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x68U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x67U] 
                                              << 0x13U));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x67U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x66U] 
                                              << 0x13U));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x66U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x65U] 
                                              << 0x13U));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x65U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x64U] 
                                              << 0x13U));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x64U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x63U] 
                                              << 0x13U));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x63U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x62U] 
                                              << 0x13U));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x62U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x61U] 
                                              << 0x13U));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x61U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x60U] 
                                              << 0x13U));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x60U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5fU] 
                                              << 0x13U));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5fU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5eU] 
                                              << 0x13U));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5eU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5dU] 
                                              << 0x13U));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5dU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5cU] 
                                              << 0x13U));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5cU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5bU] 
                                              << 0x13U));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5bU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x5aU] 
                                              << 0x13U));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x5aU] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x59U] 
                                              << 0x13U));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x59U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x58U] 
                                              << 0x13U));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x58U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x57U] 
                                              << 0x13U));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x57U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x56U] 
                                              << 0x13U));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x56U] >> 0xdU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                              [0x55U] 
                                              << 0x13U));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x55U] >> 0xdU) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                        [0x53U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                         [0x54U])))) 
                                              << 0x13U));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x54U])))) 
                          >> 0xdU) | ((IData)(((((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                 [0x53U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                  [0x54U]))) 
                                               >> 0x20U)) 
                                      << 0x13U));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x53U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x54U]))) 
                                  >> 0x20U)) >> 0xdU);
    VL_CONCAT_WIW(2052,17,2035, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x52U] >> 0xfU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__248(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__248\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0x92U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__watchdog 
        = ((0xfe000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x92U]) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                        [0x93U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__249(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__249\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xa2U] << 0x1aU) | (0x3ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                 [0xa3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xa2U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xa1U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xa1U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xa0U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xa0U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9fU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9fU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9eU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9eU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9dU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9dU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9cU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9cU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9bU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9bU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x9aU] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x9aU] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x99U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x99U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x98U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x98U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x97U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x97U] >> 6U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x96U] << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x96U] >> 6U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                        [0x94U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                    [0x95U])))) 
                              << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                      [0x94U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                       [0x95U])))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                 [0x94U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                             [0x95U]))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xfc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [0x93U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                         [0x94U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                          [0x95U]))) 
                                                       >> 0x20U)) 
                                              >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0x3ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x93U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__250(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__250\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x123U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x122U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x121U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x120U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11fU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11eU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11dU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11cU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11bU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x11aU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x119U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x118U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x117U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x116U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x115U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x114U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x113U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x112U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x111U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x110U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10fU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10eU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10dU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10cU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10bU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x10aU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x109U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x108U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x107U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x106U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x105U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x104U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x103U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x102U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x101U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x100U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xffU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xfeU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xfdU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xfcU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xfbU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xfaU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf9U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf8U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf7U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf6U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf5U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf4U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf3U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf2U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf1U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xf0U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xefU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xeeU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xedU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xecU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xebU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xeaU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xe9U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xe8U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xe7U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0xe6U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                  [0xe4U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                              [0xe5U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                   [0xe4U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                               [0xe5U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2050,2048,2, __Vtemp_63, __Vtemp_62, 
                  (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x124U]));
    VL_CONCAT_WIW(2052,2,2050, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0xe3U] >> 0x1eU), __Vtemp_63);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__251(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__251\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0x124U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
        = ((0xffffff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x124U]) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x125U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__252(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__252\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__243(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__244(vlSelf);
    VTestDriver___024root___eval_initial__TOP__245(vlSelf);
    VTestDriver___024root___eval_initial__TOP__246(vlSelf);
    VTestDriver___024root___eval_initial__TOP__247(vlSelf);
    VTestDriver___024root___eval_initial__TOP__248(vlSelf);
    VTestDriver___024root___eval_initial__TOP__249(vlSelf);
    VTestDriver___024root___eval_initial__TOP__250(vlSelf);
    VTestDriver___024root___eval_initial__TOP__251(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x126U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT____Vlvbound_h26029430__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x125U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM[vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT____Vlvbound_h26029430__0;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
        = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__size 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                     [0U] >> 0xcU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__253(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__253\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__address 
        = ((0x1ff80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                           [0U] >> 3U)) | (0x7ffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                           [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__size_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_1 
        = ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                      [1U] >> 0x16U)) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                         [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [2U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                 [2U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__254(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__254\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0x11U] << 0xbU) | (0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0x12U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                 [0x10U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                 [0xfU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0xeU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0xdU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xdU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0xcU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xcU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0xbU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xbU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [0xaU] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                [9U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [9U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                              [8U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [8U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                              [7U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [7U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                              [6U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [6U] >> 0x15U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                              [5U] << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
            [5U] >> 0x15U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                        [3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                    [4U])))) 
                              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                      [3U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                       [4U])))) >> 0x15U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                          [4U]))) >> 0x20U)) 
              << 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0xfU] 
        = ((0xfffff800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                           [2U] << 1U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                      [3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                       [4U]))) 
                                                    >> 0x20U)) 
                                           >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight[0x10U] 
        = (0x7ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                     [2U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__255(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__255\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x51U] << 0xfU) | (0x7fffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                           [0x52U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x51U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x50U] 
                                            << 0xfU));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x50U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4fU] 
                                            << 0xfU));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4eU] 
                                            << 0xfU));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4dU] 
                                            << 0xfU));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4cU] 
                                            << 0xfU));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4bU] 
                                            << 0xfU));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x4aU] 
                                            << 0xfU));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x4aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x49U] 
                                            << 0xfU));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                       [0x49U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                            [0x48U] 
                                            << 0xfU));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x48U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x47U] 
                                              << 0xfU));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x47U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x46U] 
                                              << 0xfU));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x46U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x45U] 
                                              << 0xfU));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x45U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x44U] 
                                              << 0xfU));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x44U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x43U] 
                                              << 0xfU));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                         [0x43U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                              [0x42U] 
                                              << 0xfU));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x42U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x41U] 
                                               << 0xfU));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x41U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x40U] 
                                               << 0xfU));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x40U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3fU] 
                                               << 0xfU));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3eU] 
                                               << 0xfU));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3dU] 
                                               << 0xfU));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3cU] 
                                               << 0xfU));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3bU] 
                                               << 0xfU));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x3aU] 
                                               << 0xfU));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x3aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x39U] 
                                               << 0xfU));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x39U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x38U] 
                                               << 0xfU));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x38U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x37U] 
                                               << 0xfU));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x37U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x36U] 
                                               << 0xfU));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x36U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x35U] 
                                               << 0xfU));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x35U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x34U] 
                                               << 0xfU));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x34U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x33U] 
                                               << 0xfU));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x33U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x32U] 
                                               << 0xfU));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x32U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x31U] 
                                               << 0xfU));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x31U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x30U] 
                                               << 0xfU));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x30U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2fU] 
                                               << 0xfU));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2eU] 
                                               << 0xfU));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2dU] 
                                               << 0xfU));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2cU] 
                                               << 0xfU));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2bU] 
                                               << 0xfU));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x2aU] 
                                               << 0xfU));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x2aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x29U] 
                                               << 0xfU));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x29U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x28U] 
                                               << 0xfU));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x28U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x27U] 
                                               << 0xfU));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x27U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x26U] 
                                               << 0xfU));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x26U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x25U] 
                                               << 0xfU));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x25U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x24U] 
                                               << 0xfU));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x24U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x23U] 
                                               << 0xfU));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x23U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x22U] 
                                               << 0xfU));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x22U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x21U] 
                                               << 0xfU));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x21U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x20U] 
                                               << 0xfU));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x20U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1fU] 
                                               << 0xfU));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1fU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1eU] 
                                               << 0xfU));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1eU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1dU] 
                                               << 0xfU));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1dU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1cU] 
                                               << 0xfU));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1cU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1bU] 
                                               << 0xfU));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1bU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x1aU] 
                                               << 0xfU));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x1aU] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x19U] 
                                               << 0xfU));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x19U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x18U] 
                                               << 0xfU));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x18U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x17U] 
                                               << 0xfU));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x17U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x16U] 
                                               << 0xfU));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x16U] >> 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                               [0x15U] 
                                               << 0xfU));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                          [0x15U] >> 0x11U) | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                         [0x13U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                          [0x14U])))) 
                                               << 0xfU));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                [0x14U])))) 
                          >> 0x11U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                  [0x13U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                   [0x14U]))) 
                                                >> 0x20U)) 
                                       << 0xfU));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                  >> 0x20U)) >> 0x11U);
    VL_CONCAT_WIW(2052,21,2031, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___RANDOM
                   [0x12U] >> 0xbU), __Vtemp_62);
}
