// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4771(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4771\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h713f4ad2__0)) 
                     & (0xffU != (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x11U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:301: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 301, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:303: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 303, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h713f4ad2__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x19U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:307: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 307, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:309: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 309, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4772(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4772\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:313: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 313, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:315: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 315, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (~ (IData)(((0xc000U == (0xc000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                   & (7U != (7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:319: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 319, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:321: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 321, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4773(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4773\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:325: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 325, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:327: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 327, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:331: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 331, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:333: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 333, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4774(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4774\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:337: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 337, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:339: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 339, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x11U)) != (((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xdU)))) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                     << 6U) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xfU)))) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0x14U)) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                           << 4U) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               << 3U) 
                                                              | (0x7ff8U 
                                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x11U)))) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                                  | ((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x14U)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                                 << 2U) 
                                                                | ((((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                      | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                     << 1U) 
                                                                    | (0x1ffeU 
                                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x13U)))) 
                                                                   | ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                       | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x14U)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:343: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 343, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:345: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 345, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4775(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4775\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h88ad6e02__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x19U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 349, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:351: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 351, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc15e95e8__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xc000U == (0xc000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 355, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:357: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 357, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4776(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4776\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc15e95e8__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:361: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 361, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:363: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 363, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc15e95e8__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:367: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 367, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:369: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 369, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4777(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4777\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc15e95e8__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:373: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 373, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:375: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 375, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc15e95e8__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x11U)) != (((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xdU)))) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                     << 6U) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xfU)))) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0x14U)) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                           << 4U) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               << 3U) 
                                                              | (0x7ff8U 
                                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x11U)))) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                                  | ((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x14U)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                                 << 2U) 
                                                                | ((((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                      | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                     << 1U) 
                                                                    | (0x1ffeU 
                                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x13U)))) 
                                                                   | ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                       | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x14U)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:379: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 379, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:381: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 381, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4778(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4778\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc155756b__0)) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok) 
                           & (IData)(((0xc000U == (0xc000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                      & (7U != (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:385: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 385, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:387: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 387, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc155756b__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:391: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 391, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:393: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 393, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4779(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4779\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc155756b__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:397: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 397, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:399: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 399, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc155756b__0)) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:403: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 403, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:405: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 405, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4780(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4780\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc155756b__0)) 
                     & (0U != (0xffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0xfU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x11U)) 
                                        & (~ ((((((2U 
                                                   < 
                                                   (7U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U))) 
                                                  | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                 | (IData)(
                                                           ((0x40U 
                                                             == 
                                                             (0xc0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                << 7U) 
                                               | (0x7ff80U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                      << 7U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xdU)))) 
                                              | ((((((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x14U)) 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                  << 6U) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                      << 5U) 
                                                     | (0x1ffe0U 
                                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                            << 5U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xfU)))) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         | ((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x14U)) 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                        << 4U) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                            << 3U) 
                                                           | (0x7ff8U 
                                                              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  << 3U) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x11U)))) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x14U)) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                              << 2U) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                  << 1U) 
                                                                 | (0x1ffeU 
                                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                        << 1U) 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x13U)))) 
                                                                | ((((2U 
                                                                      < 
                                                                      (7U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 6U))) 
                                                                     | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                    | (IData)(
                                                                              ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0x14U)) 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:409: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 409, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:411: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 411, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4781(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4781\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_hc181768e__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:415: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 415, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:417: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 417, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc181768e__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:421: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 421, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:423: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 423, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4782(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4782\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc181768e__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:427: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 427, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:429: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 429, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc181768e__0)) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:433: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 433, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:435: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4783(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4783\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc181768e__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x11U)) != (((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xdU)))) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                     << 6U) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xfU)))) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0x14U)) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                           << 4U) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               << 3U) 
                                                              | (0x7ff8U 
                                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x11U)))) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                                  | ((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x14U)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                                 << 2U) 
                                                                | ((((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                      | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                     << 1U) 
                                                                    | (0x1ffeU 
                                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x13U)))) 
                                                                   | ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                       | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x14U)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:439: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 439, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:441: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 441, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4784(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4784\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_hc2a19c46__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 445, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:447: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 447, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc2a19c46__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 451, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:453: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 453, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4785(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4785\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc2a19c46__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 457, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:459: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 459, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc2a19c46__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 5U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 463, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:465: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 465, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4786(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4786\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hc2a19c46__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x11U)) != (((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xdU)))) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                     << 6U) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xfU)))) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0x14U)) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                           << 4U) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               << 3U) 
                                                              | (0x7ff8U 
                                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x11U)))) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                                  | ((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x14U)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                                 << 2U) 
                                                                | ((((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                      | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                     << 1U) 
                                                                    | (0x1ffeU 
                                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x13U)))) 
                                                                   | ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                       | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x14U)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 469, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:471: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4787(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4787\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 475, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:477: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 477, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 481, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:483: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4788(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4788\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)) 
                     & (0U != (0x3fU & ((~ ((IData)(0x3fU) 
                                            << (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))) 
                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0xcU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:487: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 487, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:489: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 489, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:493: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 493, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:495: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4789(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4789\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x11U)) != (((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                    | (IData)(
                                                              ((0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                   << 7U) 
                                                  | (0x7ff80U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xdU)))) 
                                                 | ((((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                       | (IData)(
                                                                 ((0x40U 
                                                                   == 
                                                                   (0xc0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                                     << 6U) 
                                                    | ((((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                          | (IData)(
                                                                    ((0x40U 
                                                                      == 
                                                                      (0xc0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                         << 5U) 
                                                        | (0x1ffe0U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xfU)))) 
                                                       | ((((((2U 
                                                               < 
                                                               (7U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 6U))) 
                                                              | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                             | (IData)(
                                                                       ((0x40U 
                                                                         == 
                                                                         (0xc0U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0x14U)) 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                           << 4U) 
                                                          | ((((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                               << 3U) 
                                                              | (0x7ff8U 
                                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x11U)))) 
                                                             | ((((((2U 
                                                                     < 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 6U))) 
                                                                    | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                   | (IData)(
                                                                             ((0x40U 
                                                                               == 
                                                                               (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                                  | ((~ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0x14U)) 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                                 << 2U) 
                                                                | ((((((2U 
                                                                        < 
                                                                        (7U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 6U))) 
                                                                       | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                      | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                     << 1U) 
                                                                    | (0x1ffeU 
                                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x13U)))) 
                                                                   | ((((2U 
                                                                         < 
                                                                         (7U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 6U))) 
                                                                        | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                       | (IData)(
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xc0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 0x14U)) 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:499: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 499, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:501: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 501, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4790(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4790\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h895e4d60__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x19U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:505: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 505, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:507: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 507, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
                       & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                         >> 0xcU))) 
                           | ((0x18U == (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                  >> 8U))) 
                              | ((0x190U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                >> 4U))) 
                                 | ((0x1a0U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                   >> 4U))) 
                                    | ((0x14U == (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 8U))) 
                                       | ((0x150U == 
                                           (0x3ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                               >> 4U))) 
                                          | ((0x160U 
                                              == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 4U))) 
                                             | ((0x10U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 8U))) 
                                                | ((0x110U 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                        >> 4U))) 
                                                   | ((0x120U 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                           >> 4U))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                             >> 4U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:565: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 565, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:567: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 567, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4791(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4791\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                         >> 0xcU))) 
                           | ((0x18U == (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                  >> 8U))) 
                              | ((0x190U == (0x3ffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                >> 4U))) 
                                 | ((0x1a0U == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                   >> 4U))) 
                                    | ((0x14U == (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 8U))) 
                                       | ((0x150U == 
                                           (0x3ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                               >> 4U))) 
                                          | ((0x160U 
                                              == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 4U))) 
                                             | ((0x10U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 8U))) 
                                                | ((0x110U 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                        >> 4U))) 
                                                   | ((0x120U 
                                                       == 
                                                       (0x3ffU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                           >> 4U))) 
                                                      | (0x200U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                             >> 4U))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:571: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 571, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:573: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 573, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4792(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4792\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:583: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 583, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:585: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 585, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:589: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 589, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:591: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 591, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4793(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4793\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:595: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 595, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:597: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 597, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:601: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 601, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:603: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 603, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4794(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4794\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) 
                     & ((0xfffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                        << 0xcU) | 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0x14U))) 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:607: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 607, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:609: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 609, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:613: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 613, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:615: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 615, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4795(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4795\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:619: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 619, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:621: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 621, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                   >> 4U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:625: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 625, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:627: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 627, "");
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4796(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4796\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_3;
    // Body
    VL_SHIFTR_WWI(513,513,10, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_1) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                        & __Vtemp_1[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:631: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 631, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:633: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 633, "");
        }
    }
    VL_SHIFTR_WWI(513,513,10, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 4U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                            & __Vtemp_3[0U]) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:637: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 637, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:639: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 639, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4797(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4797\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:643: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 643, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:645: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 645, "");
        }
    }
}

extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9cb9_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4798(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4798\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    VlWide<65>/*2079:0*/ __Vtemp_3;
    VlWide<65>/*2079:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<65>/*2079:0*/ __Vtemp_8;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:649: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 649, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:651: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 651, "");
        }
    }
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(65, __Vtemp_4, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_3);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(65, __Vtemp_6, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_5);
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(65, __Vtemp_8, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_7);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_2[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_4[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_6[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_8[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:655: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 655, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:657: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 657, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4799(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4799\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(2052,2052,12, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(65, __Vtemp_2, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size) 
                        != (7U & (__Vtemp_2[0U] >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:661: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 661, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:663: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 663, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid)) 
                       & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0xaU)) == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                      >> 4U)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:667: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 667, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:669: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 669, "");
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hebe77906_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4800(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4800\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_8;
    // Body
    VL_SHIFTL_WWI(513,513,10, __Vtemp_1, VTestDriver__ConstPool__CONST_hebe77906_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_4, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 4U)));
    VL_SHIFTL_WWI(513,513,10, __Vtemp_8, VTestDriver__ConstPool__CONST_hebe77906_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ ((0U != (((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                              ? 
                                                             __Vtemp_1[0U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h3dcda146_0[0U])) 
                                                         ^ 
                                                         (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                              ? 
                                                             __Vtemp_4[0U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h3dcda146_0[0U]))) 
                                                        | ((VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                                ? 
                                                               __Vtemp_1[1U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_h3dcda146_0[1U])) 
                                                           ^ 
                                                           (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                                ? 
                                                               __Vtemp_4[1U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))) 
                                                       | ((VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                               ? 
                                                              __Vtemp_1[2U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_h3dcda146_0[2U])) 
                                                          ^ 
                                                          (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                               ? 
                                                              __Vtemp_4[2U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))) 
                                                      | ((VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                              ? 
                                                             __Vtemp_1[3U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h3dcda146_0[3U])) 
                                                         ^ 
                                                         (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                              ? 
                                                             __Vtemp_4[3U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))) 
                                                     | ((VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                             ? 
                                                            __Vtemp_1[4U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_h3dcda146_0[4U])) 
                                                        ^ 
                                                        (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                             ? 
                                                            __Vtemp_4[4U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))) 
                                                    | ((VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                            ? 
                                                           __Vtemp_1[5U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h3dcda146_0[5U])) 
                                                       ^ 
                                                       (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                            ? 
                                                           __Vtemp_4[5U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))) 
                                                   | ((VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                           ? 
                                                          __Vtemp_1[6U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h3dcda146_0[6U])) 
                                                      ^ 
                                                      (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                           ? 
                                                          __Vtemp_4[6U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))) 
                                                  | ((VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_1[7U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h3dcda146_0[7U])) 
                                                     ^ 
                                                     (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                          ? 
                                                         __Vtemp_4[7U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))) 
                                                 | ((VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                         ? 
                                                        __Vtemp_1[8U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h3dcda146_0[8U])) 
                                                    ^ 
                                                    (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                         ? 
                                                        __Vtemp_4[8U]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))) 
                                                | ((VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_1[9U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h3dcda146_0[9U])) 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                        ? 
                                                       __Vtemp_4[9U]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))) 
                                               | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_1[0xaU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])) 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                       ? 
                                                      __Vtemp_4[0xaU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))) 
                                              | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_1[0xbU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])) 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                      ? 
                                                     __Vtemp_4[0xbU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))) 
                                             | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_1[0xcU]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])) 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                       ? 
                                                      __Vtemp_4[0xcU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))) 
                                            | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                    ? 
                                                   __Vtemp_1[0xdU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])) 
                                               ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                      ? 
                                                     __Vtemp_4[0xdU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))) 
                                           | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                   ? 
                                                  __Vtemp_1[0xeU]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])) 
                                              ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                     ? 
                                                    __Vtemp_4[0xeU]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))) 
                                          | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                  ? 
                                                 __Vtemp_1[0xfU]
                                                  : 
                                                 VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])) 
                                             ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                    ? 
                                                   __Vtemp_4[0xfU]
                                                    : 
                                                   VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))) 
                                         | ((VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                 ? 
                                                __Vtemp_1[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])) 
                                            ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_32)
                                                   ? 
                                                  __Vtemp_4[0x10U]
                                                   : 
                                                  VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]))))) 
                                 | (0U == (((((((((
                                                   ((((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                           ^ 
                                                           (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                                ? 
                                                               __Vtemp_8[0U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_h3dcda146_0[0U]))) 
                                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                             ^ 
                                                             (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                                  ? 
                                                                 __Vtemp_8[1U]
                                                                  : 
                                                                 VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                            ^ 
                                                            (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                                 ? 
                                                                __Vtemp_8[2U]
                                                                 : 
                                                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                           ^ 
                                                           (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                                ? 
                                                               __Vtemp_8[3U]
                                                                : 
                                                               VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                          ^ 
                                                          (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                               ? 
                                                              __Vtemp_8[4U]
                                                               : 
                                                              VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                         ^ 
                                                         (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                              ? 
                                                             __Vtemp_8[5U]
                                                              : 
                                                             VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                        ^ 
                                                        (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                             ? 
                                                            __Vtemp_8[6U]
                                                             : 
                                                            VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                       ^ 
                                                       (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                            ? 
                                                           __Vtemp_8[7U]
                                                            : 
                                                           VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                      ^ 
                                                      (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                           ? 
                                                          __Vtemp_8[8U]
                                                           : 
                                                          VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                     ^ 
                                                     (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                          ? 
                                                         __Vtemp_8[9U]
                                                          : 
                                                         VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                    ^ 
                                                    (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                         ? 
                                                        __Vtemp_8[0xaU]
                                                         : 
                                                        VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                   ^ 
                                                   (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                        ? 
                                                       __Vtemp_8[0xbU]
                                                        : 
                                                       VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                  ^ 
                                                  (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_8[0xcU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                 ^ 
                                                 (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_8[0xdU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                                ^ (
                                                   VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                       ? 
                                                      __Vtemp_8[0xeU]
                                                       : 
                                                      VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                               ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                      ? 
                                                     __Vtemp_8[0xfU]
                                                      : 
                                                     VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                              ^ (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                     ? 
                                                    __Vtemp_8[0x10U]
                                                     : 
                                                    VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:673: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 673, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:675: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 675, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:679: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 679, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:681: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 681, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4801(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4801\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h3dcda146_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h3dcda146_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h3dcda146_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h3dcda146_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h3dcda146_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h3dcda146_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h3dcda146_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h3dcda146_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h3dcda146_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h3dcda146_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:697: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/devices/tilelink/Plic.scala:362:83)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 697, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_29.sv:699: Assertion failed in %NTestDriver.testHarness.chiptop0.system.cbus.coupler_to_plic.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_29.sv", 699, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:168: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 168, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:170: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 170, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:172: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 172, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:174: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 174, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4802(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4802\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:178: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 178, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 180, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:184: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 184, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 186, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4803(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4803\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:190: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 190, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 192, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:196: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 196, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 198, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4804(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4804\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0x11U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 202, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 204, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x19U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 208, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 210, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4805(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4805\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 214, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 216, "");
        }
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 218, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 220, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 224, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 226, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4806(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4806\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (~ (IData)((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 230, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:232: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 232, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 236, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:238: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 238, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4807(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4807\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (2U < (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                     : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         << 0x1dU) 
                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 242, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 244, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (~ (IData)((0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                                 : 
                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 3U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 248, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:250: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 250, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4808(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4808\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0x11U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 254, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:256: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 256, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x19U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 260, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:262: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 262, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4809(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4809\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 266, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 268, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                           >> 0x10U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 272, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 274, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4810(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4810\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 278, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 280, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 284, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 286, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4811(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4811\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 290, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 292, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0x11U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 296, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 298, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4812(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4812\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x19U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel Get is corrupt (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 302, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 304, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 308, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 310, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4813(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4813\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 314, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 316, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))) 
                                     & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 320, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 322, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4814(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4814\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0U != (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x1dU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 3U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 326, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 328, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0x11U))) 
                        != ((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                       << 7U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                << 6U) 
                                                               & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                   << 5U) 
                                                                  & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                      << 4U) 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                   | ((~ 
                                                                       ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                      | ((~ 
                                                                          ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                         | ((~ 
                                                                             ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                                          | ((~ 
                                                                              ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 332, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 334, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4815(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4815\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                        & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 338, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 340, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode)))) 
                     & (0x200fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_62.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/rocket-chip/src/main/scala/devices/tilelink/BootROM.scala:84:18)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 344, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_62.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.bootrom_domain.bootrom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_62.sv", 346, "");
        }
    }
}
