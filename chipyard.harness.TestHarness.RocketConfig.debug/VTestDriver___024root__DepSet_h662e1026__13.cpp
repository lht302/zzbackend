// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2163(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2163\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h43050403__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:871: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 871, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:873: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 873, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h43050403__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:877: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 877, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:879: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 879, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2164(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2164\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h43050403__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:883: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 883, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:885: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 885, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h43050403__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:889: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 889, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:891: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 891, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2165(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2165\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h43050403__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                  >> 1U)) != ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 0xfU))) 
                                                     | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xbU) 
                                                        & (0x10000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                    | (IData)(
                                                              ((0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                               & (0x8000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                   | (IData)(
                                                             (0xe00U 
                                                              == 
                                                              (0xe00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                             >> 0xfU))) 
                                                        | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0xbU) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                  & (0x8000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                      | (IData)(
                                                                (0xc00U 
                                                                 == 
                                                                 (0xe00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                >> 0xfU))) 
                                                           | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                               >> 0xbU) 
                                                              & (0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                          | (IData)(
                                                                    ((0x800U 
                                                                      == 
                                                                      (0xc00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                     & (0x8000U 
                                                                        == 
                                                                        (0x18000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                         | (IData)(
                                                                   (0xa00U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                   >> 0xfU))) 
                                                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x18000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                             | (IData)(
                                                                       ((0x800U 
                                                                         == 
                                                                         (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                        & (0x8000U 
                                                                           == 
                                                                           (0x18000U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                            | (IData)(
                                                                      (0x800U 
                                                                       == 
                                                                       (0xe00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      >> 0xfU))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0xbU)) 
                                                                    & (0x10000U 
                                                                       == 
                                                                       (0x18000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                | (IData)(
                                                                          ((0x400U 
                                                                            == 
                                                                            (0xc00U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                           & (0x8000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                               | (IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0xe00U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         >> 0xfU))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         >> 0xbU)) 
                                                                       & (0x10000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                   | (IData)(
                                                                             ((0x400U 
                                                                               == 
                                                                               (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                              & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                  | (IData)(
                                                                            (0x400U 
                                                                             == 
                                                                             (0xe00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                            >> 0xfU))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            >> 0xbU)) 
                                                                          & (0x10000U 
                                                                             == 
                                                                             (0x18000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                      | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                     | (IData)(
                                                                               (0x200U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                             >> 0xfU))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0xbU)) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                       | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:895: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 895, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:897: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 897, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2166(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2166\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:901: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 901, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:903: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 903, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:907: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 907, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:909: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 909, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2167(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2167\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:913: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 913, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:915: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 915, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:919: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 919, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:921: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 921, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2168(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2168\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:925: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 925, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:927: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 927, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4479e4de__0)) 
                     & (0U != (0xffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                          << 0x1fU) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 1U)) 
                                        & (~ ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 0xfU))) 
                                                     | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xbU) 
                                                        & (0x10000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                    | (IData)(
                                                              ((0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                               & (0x8000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                   | (IData)(
                                                             (0xe00U 
                                                              == 
                                                              (0xe00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                             >> 0xfU))) 
                                                        | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0xbU) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                  & (0x8000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                      | (IData)(
                                                                (0xc00U 
                                                                 == 
                                                                 (0xe00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                >> 0xfU))) 
                                                           | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                               >> 0xbU) 
                                                              & (0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                          | (IData)(
                                                                    ((0x800U 
                                                                      == 
                                                                      (0xc00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                     & (0x8000U 
                                                                        == 
                                                                        (0x18000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                         | (IData)(
                                                                   (0xa00U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                   >> 0xfU))) 
                                                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x18000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                             | (IData)(
                                                                       ((0x800U 
                                                                         == 
                                                                         (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                        & (0x8000U 
                                                                           == 
                                                                           (0x18000U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                            | (IData)(
                                                                      (0x800U 
                                                                       == 
                                                                       (0xe00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      >> 0xfU))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0xbU)) 
                                                                    & (0x10000U 
                                                                       == 
                                                                       (0x18000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                | (IData)(
                                                                          ((0x400U 
                                                                            == 
                                                                            (0xc00U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                           & (0x8000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                               | (IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0xe00U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         >> 0xfU))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         >> 0xbU)) 
                                                                       & (0x10000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                   | (IData)(
                                                                             ((0x400U 
                                                                               == 
                                                                               (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                              & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                  | (IData)(
                                                                            (0x400U 
                                                                             == 
                                                                             (0xe00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                            >> 0xfU))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            >> 0xbU)) 
                                                                          & (0x10000U 
                                                                             == 
                                                                             (0x18000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                      | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                     | (IData)(
                                                                               (0x200U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                             >> 0xfU))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0xbU)) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                       | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:931: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 931, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:933: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 933, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2169(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2169\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h430d0175__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:937: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Arithmetic type unsupported by master (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 937, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:939: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 939, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h430d0175__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:943: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 943, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:945: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 945, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2170(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2170\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h430d0175__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:949: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 949, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:951: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 951, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h430d0175__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:955: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 955, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:957: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 957, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2171(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2171\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h430d0175__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                  >> 1U)) != ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 0xfU))) 
                                                     | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xbU) 
                                                        & (0x10000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                    | (IData)(
                                                              ((0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                               & (0x8000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                   | (IData)(
                                                             (0xe00U 
                                                              == 
                                                              (0xe00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                             >> 0xfU))) 
                                                        | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0xbU) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                  & (0x8000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                      | (IData)(
                                                                (0xc00U 
                                                                 == 
                                                                 (0xe00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                >> 0xfU))) 
                                                           | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                               >> 0xbU) 
                                                              & (0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                          | (IData)(
                                                                    ((0x800U 
                                                                      == 
                                                                      (0xc00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                     & (0x8000U 
                                                                        == 
                                                                        (0x18000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                         | (IData)(
                                                                   (0xa00U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                   >> 0xfU))) 
                                                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x18000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                             | (IData)(
                                                                       ((0x800U 
                                                                         == 
                                                                         (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                        & (0x8000U 
                                                                           == 
                                                                           (0x18000U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                            | (IData)(
                                                                      (0x800U 
                                                                       == 
                                                                       (0xe00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      >> 0xfU))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0xbU)) 
                                                                    & (0x10000U 
                                                                       == 
                                                                       (0x18000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                | (IData)(
                                                                          ((0x400U 
                                                                            == 
                                                                            (0xc00U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                           & (0x8000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                               | (IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0xe00U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         >> 0xfU))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         >> 0xbU)) 
                                                                       & (0x10000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                   | (IData)(
                                                                             ((0x400U 
                                                                               == 
                                                                               (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                              & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                  | (IData)(
                                                                            (0x400U 
                                                                             == 
                                                                             (0xe00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                            >> 0xfU))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            >> 0xbU)) 
                                                                          & (0x10000U 
                                                                             == 
                                                                             (0x18000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                      | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                     | (IData)(
                                                                               (0x200U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                             >> 0xfU))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0xbU)) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                       | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:961: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 961, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:963: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 963, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2172(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2172\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h7a65abb9__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:967: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Logical type unsupported by client (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 967, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:969: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 969, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7a65abb9__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:973: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 973, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:975: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 975, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2173(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2173\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7a65abb9__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:979: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 979, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:981: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 981, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7a65abb9__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:985: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 985, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:987: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 987, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2174(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2174\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h7a65abb9__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                  >> 1U)) != ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 0xfU))) 
                                                     | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xbU) 
                                                        & (0x10000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                    | (IData)(
                                                              ((0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                               & (0x8000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                   | (IData)(
                                                             (0xe00U 
                                                              == 
                                                              (0xe00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                             >> 0xfU))) 
                                                        | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0xbU) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                  & (0x8000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                      | (IData)(
                                                                (0xc00U 
                                                                 == 
                                                                 (0xe00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                >> 0xfU))) 
                                                           | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                               >> 0xbU) 
                                                              & (0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                          | (IData)(
                                                                    ((0x800U 
                                                                      == 
                                                                      (0xc00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                     & (0x8000U 
                                                                        == 
                                                                        (0x18000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                         | (IData)(
                                                                   (0xa00U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                   >> 0xfU))) 
                                                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x18000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                             | (IData)(
                                                                       ((0x800U 
                                                                         == 
                                                                         (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                        & (0x8000U 
                                                                           == 
                                                                           (0x18000U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                            | (IData)(
                                                                      (0x800U 
                                                                       == 
                                                                       (0xe00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      >> 0xfU))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0xbU)) 
                                                                    & (0x10000U 
                                                                       == 
                                                                       (0x18000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                | (IData)(
                                                                          ((0x400U 
                                                                            == 
                                                                            (0xc00U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                           & (0x8000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                               | (IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0xe00U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         >> 0xfU))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         >> 0xbU)) 
                                                                       & (0x10000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                   | (IData)(
                                                                             ((0x400U 
                                                                               == 
                                                                               (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                              & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                  | (IData)(
                                                                            (0x400U 
                                                                             == 
                                                                             (0xe00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                            >> 0xfU))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            >> 0xbU)) 
                                                                          & (0x10000U 
                                                                             == 
                                                                             (0x18000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                      | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                     | (IData)(
                                                                               (0x200U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                             >> 0xfU))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0xbU)) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                       | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:991: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 991, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:993: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 993, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2175(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2175\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:997: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Hint type unsupported by client (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 997, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:999: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 999, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1003: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1003, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1005: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1005, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2176(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2176\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1009: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1009, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1011: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1011, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1015: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1015, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1017: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1017, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2177(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2177\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                  >> 1U)) != ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 0xfU))) 
                                                     | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xbU) 
                                                        & (0x10000U 
                                                           == 
                                                           (0x18000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                    | (IData)(
                                                              ((0xc00U 
                                                                == 
                                                                (0xc00U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                               & (0x8000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                   | (IData)(
                                                             (0xe00U 
                                                              == 
                                                              (0xe00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                             >> 0xfU))) 
                                                        | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0xbU) 
                                                           & (0x10000U 
                                                              == 
                                                              (0x18000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                       | (IData)(
                                                                 ((0xc00U 
                                                                   == 
                                                                   (0xc00U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                  & (0x8000U 
                                                                     == 
                                                                     (0x18000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                      | (IData)(
                                                                (0xc00U 
                                                                 == 
                                                                 (0xe00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                >> 0xfU))) 
                                                           | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                               >> 0xbU) 
                                                              & (0x10000U 
                                                                 == 
                                                                 (0x18000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                          | (IData)(
                                                                    ((0x800U 
                                                                      == 
                                                                      (0xc00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                     & (0x8000U 
                                                                        == 
                                                                        (0x18000U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                         | (IData)(
                                                                   (0xa00U 
                                                                    == 
                                                                    (0xe00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                   >> 0xfU))) 
                                                              | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU) 
                                                                 & (0x10000U 
                                                                    == 
                                                                    (0x18000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                             | (IData)(
                                                                       ((0x800U 
                                                                         == 
                                                                         (0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                        & (0x8000U 
                                                                           == 
                                                                           (0x18000U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                            | (IData)(
                                                                      (0x800U 
                                                                       == 
                                                                       (0xe00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      >> 0xfU))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0xbU)) 
                                                                    & (0x10000U 
                                                                       == 
                                                                       (0x18000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                | (IData)(
                                                                          ((0x400U 
                                                                            == 
                                                                            (0xc00U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                           & (0x8000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                               | (IData)(
                                                                         (0x600U 
                                                                          == 
                                                                          (0xe00U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         >> 0xfU))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         >> 0xbU)) 
                                                                       & (0x10000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                   | (IData)(
                                                                             ((0x400U 
                                                                               == 
                                                                               (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                              & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                  | (IData)(
                                                                            (0x400U 
                                                                             == 
                                                                             (0xe00U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                            >> 0xfU))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            >> 0xbU)) 
                                                                          & (0x10000U 
                                                                             == 
                                                                             (0x18000U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                      | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                     | (IData)(
                                                                               (0x200U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                             >> 0xfU))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0xbU)) 
                                                                           & (0x10000U 
                                                                              == 
                                                                              (0x18000U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                                       | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0xc00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                                & (0x8000U 
                                                                                == 
                                                                                (0x18000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0xe00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1021: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1021, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1023: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1023, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2178(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2178\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1762ad7__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1027: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1027, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1029: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1029, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                       >> 0xeU)) | 
                               (0U != (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0xcU)))))) 
                           | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                          >> 0x1aU)) 
                                  | (0U != (0x3fffU 
                                            & (0x2010U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                              | ((0U == ((0xffffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                             >> 0xcU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0xcU))))) 
                                 | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1dU)) 
                                        | (0U != (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0xcU)))))) 
                                    | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x1aU)) 
                                           | (0U != 
                                              (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x10U)))))) 
                                       | ((~ ((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1cU)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)))))) 
                                          | ((0U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0xcU)) 
                                             | ((~ (IData)(
                                                           (0x10000U 
                                                            != 
                                                            (0xffff0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                | ((0U 
                                                    == 
                                                    ((0xffe00U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0xcU)) 
                                                     | (0x1ffU 
                                                        & (0x100U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((0xffe00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU)) 
                                                        | (0x1ffU 
                                                           & (0x110U 
                                                              ^ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0xcU))))) 
                                                      | ((8U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0x1cU)) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1033: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1033, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1035: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1035, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2179(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2179\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1039: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1039, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1041: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1041, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1045: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1045, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1047: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1047, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2180(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2180\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1051: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1051, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1053: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1053, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1057: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1057, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1059: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1059, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2181(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2181\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                       >> 0xeU)) | 
                               (0U != (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0xcU)))))) 
                           | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                          >> 0x1aU)) 
                                  | (0U != (0x3fffU 
                                            & (0x2010U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                              | ((0U == ((0xffffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                             >> 0xcU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0xcU))))) 
                                 | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1dU)) 
                                        | (0U != (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0xcU)))))) 
                                    | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x1aU)) 
                                           | (0U != 
                                              (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x10U)))))) 
                                       | ((~ ((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1cU)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)))))) 
                                          | ((0U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0xcU)) 
                                             | ((~ (IData)(
                                                           (0x10000U 
                                                            != 
                                                            (0xffff0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                | ((0U 
                                                    == 
                                                    ((0xffe00U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0xcU)) 
                                                     | (0x1ffU 
                                                        & (0x100U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((0xffe00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU)) 
                                                        | (0x1ffU 
                                                           & (0x110U 
                                                              ^ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0xcU))))) 
                                                      | ((8U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0x1cU)) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1063: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1063, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1065: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1065, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2182(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2182\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1069: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1069, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1071: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1071, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1075: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1075, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1077: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1077, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2183(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2183\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1081: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1081, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1083: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1083, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1087: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1087, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1089: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1089, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2184(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2184\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7)) 
                           & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                   >> 4U)) | (0x10U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))) 
                              & (IData)(vlSelf->__VdfgTmp_h488f173a__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1093: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1093, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1095: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1095, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) & (IData)(vlSelf->__VdfgTmp_heeb3c483__0)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1099: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1099, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1101: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1101, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2185(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2185\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1105: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1105, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1107: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1107, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1111: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1111, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1113: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1113, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2186(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2186\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1117: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1117, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1119: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1119, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1123: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release carries invalid report param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1123, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1125: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1125, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2187(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2187\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7)) 
                           & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                   >> 4U)) | (0x10U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))) 
                              & (IData)(vlSelf->__VdfgTmp_h488f173a__0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1129: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1129, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1131: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1131, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) & (IData)(vlSelf->__VdfgTmp_heeb3c483__0)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1135: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1135, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1137: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1137, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2188(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2188\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1141: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1141, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1143: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1143, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1147: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1147, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1149: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1149, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2189(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2189\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1153: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1153, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1155: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1155, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                      & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1159: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1159, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1161: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1161, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2190(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2190\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                       >> 0xeU)) | 
                               (0U != (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0xcU)))))) 
                           | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                          >> 0x1aU)) 
                                  | (0U != (0x3fffU 
                                            & (0x2010U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                              | ((0U == ((0xffffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                             >> 0xcU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0xcU))))) 
                                 | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1dU)) 
                                        | (0U != (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0xcU)))))) 
                                    | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x1aU)) 
                                           | (0U != 
                                              (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x10U)))))) 
                                       | ((~ ((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1cU)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)))))) 
                                          | ((0U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0xcU)) 
                                             | ((~ (IData)(
                                                           (0x10000U 
                                                            != 
                                                            (0xffff0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                | ((0U 
                                                    == 
                                                    ((0xffe00U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0xcU)) 
                                                     | (0x1ffU 
                                                        & (0x100U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((0xffe00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU)) 
                                                        | (0x1ffU 
                                                           & (0x110U 
                                                              ^ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0xcU))))) 
                                                      | ((8U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0x1cU)) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1165: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1165, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1167: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1167, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2191(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2191\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1171: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1171, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1173: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1173, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1177: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1177, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1179: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1179, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2192(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2192\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1183: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1183, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1185: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1185, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                       >> 0xeU)) | 
                               (0U != (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0xcU)))))) 
                           | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                          >> 0x1aU)) 
                                  | (0U != (0x3fffU 
                                            & (0x2010U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                              | ((0U == ((0xffffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                             >> 0xcU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0xcU))))) 
                                 | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1dU)) 
                                        | (0U != (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0xcU)))))) 
                                    | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x1aU)) 
                                           | (0U != 
                                              (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x10U)))))) 
                                       | ((~ ((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1cU)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)))))) 
                                          | ((0U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0xcU)) 
                                             | ((~ (IData)(
                                                           (0x10000U 
                                                            != 
                                                            (0xffff0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                | ((0U 
                                                    == 
                                                    ((0xffe00U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0xcU)) 
                                                     | (0x1ffU 
                                                        & (0x100U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((0xffe00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU)) 
                                                        | (0x1ffU 
                                                           & (0x110U 
                                                              ^ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0xcU))))) 
                                                      | ((8U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0x1cU)) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1189: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1189, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1191: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1191, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2193(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2193\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1195: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1195, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1197: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1197, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1201: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1201, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1203: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1203, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2194(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2194\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1207: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1207, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1209: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1209, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                       >> 0xeU)) | 
                               (0U != (3U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0xcU)))))) 
                           | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                          >> 0x1aU)) 
                                  | (0U != (0x3fffU 
                                            & (0x2010U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                              | ((0U == ((0xffffeU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                             >> 0xcU)) 
                                         | (1U & (~ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0xcU))))) 
                                 | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1dU)) 
                                        | (0U != (0x1ffffU 
                                                  & (0x10020U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0xcU)))))) 
                                    | ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x1aU)) 
                                           | (0U != 
                                              (0x3ffU 
                                               & (0x200U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                   >> 0x10U)))))) 
                                       | ((~ ((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                >> 0x1cU)) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)))))) 
                                          | ((0U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0xcU)) 
                                             | ((~ (IData)(
                                                           (0x10000U 
                                                            != 
                                                            (0xffff0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                | ((0U 
                                                    == 
                                                    ((0xffe00U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0xcU)) 
                                                     | (0x1ffU 
                                                        & (0x100U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU))))) 
                                                   | ((0U 
                                                       == 
                                                       ((0xffe00U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0xcU)) 
                                                        | (0x1ffU 
                                                           & (0x110U 
                                                              ^ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0xcU))))) 
                                                      | ((8U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0x1cU)) 
                                                         | (~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1213: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1213, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1215: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1215, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2195(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2195\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1219: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1219, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1221: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1221, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1225: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1225, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1227: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1227, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2196(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2196\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1231: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1231, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1233: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1233, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1237: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1237, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1239: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1239, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2197(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2197\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1243: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1243, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1245: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1245, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1249: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1249, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1251: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1251, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2198(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2198\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1255: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1255, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1257: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1257, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1261: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1261, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1263: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1263, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2199(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2199\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 0x11U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1267: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1267, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1269: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1269, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 0xfU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1273: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1273, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1275: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1275, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2200(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2200\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                 >> 0xbU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1279: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1279, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1281: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1281, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                  >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1285: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1285, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1287: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1287, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2201(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2201\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 2U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1291: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1291, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1293: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1293, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter)))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 1U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1297: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1297, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1299: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1299, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2202(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2202\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 0x15U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_2))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1303: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1303, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1305: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1305, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 0x13U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_2))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1309: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1309, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1311: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1311, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2203(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2203\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                 >> 0xfU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_2))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1315: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1315, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1317: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1317, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)))) 
                     & ((0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                  >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_2))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1321: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1321, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1323: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1323, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2204(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2204\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter)))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                          << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                       >> 9U)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_1)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1327: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel addresss changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1327, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1329: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1329, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1333: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1333, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1335: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1335, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2205(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2205\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1339: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel param changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1339, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1341: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1341, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1345: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel size changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1345, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1347: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1347, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2206(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2206\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1351: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel source changed within multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1351, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1353: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1353, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_c_valid) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter)))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1357: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel address changed with multibeat operation (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1357, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1359: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1359, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2207(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2207\n"); );
    // Body
    if (VL_UNLIKELY((0x1ffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_2) 
                                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1363: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1363, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1365: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1365, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (~ ((0x1ffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight 
                                        >> (0x1fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             >> 5U)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1369: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1369, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1371: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1371, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2208(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2208\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                     & (~ (((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                   >> 0x11U)) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode))))
                                                   ? 
                                                  (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))))
                                                   : 0U)) 
                           | ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0x11U)) == 
                              ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))))
                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1375: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1375, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1377: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1377, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2209(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2209\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size) 
                        != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                    >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1381: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1381, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1383: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1383, "");
        }
    }
    VL_SHIFTR_WWI(68,68,7, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 3U)));
    VL_SHIFTR_WWI(68,68,7, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 3U)));
    VL_SHIFTR_WWI(68,68,7, __Vtemp_8, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 3U)));
    VL_SHIFTR_WWI(68,68,7, __Vtemp_11, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 3U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & (~ (((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                   >> 0x11U)) == ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * 
                                                       (7U 
                                                        & (__Vtemp_2[0U] 
                                                           >> 1U)))))
                                                   ? 
                                                  (7U 
                                                   & (0x911240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_5[0U] 
                                                              >> 1U))))))
                                                   : 0U)) 
                           | ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0x11U)) == 
                              ((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (__Vtemp_8[0U] 
                                                       >> 1U)))))
                                ? (7U & (0x951240U 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (__Vtemp_11[0U] 
                                                      >> 1U))))))
                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1387: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1387, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1389: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1389, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2210(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2210\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VL_SHIFTR_WWI(136,136,8, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes, 
                  (0xf8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 2U)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102) 
                      & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                 >> 0xbU)) != (0x7fU 
                                               & (__Vtemp_2[0U] 
                                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1393: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1393, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1395: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1395, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                           == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                        >> 5U)))) & 
                       (6U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0x11U)))) & 
                      (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1399: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1399, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1401: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1401, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2211(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2211\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x1ffffU & ((IData)(1U) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source)))
                                    : 0U) != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_102)
                                               ? (0x1ffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 5U))))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (0x1ffffU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source)))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1405: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1405, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1407: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1407, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset)) 
                           & (~ (((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1411: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1411, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1413: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1413, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2212(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2212\n"); );
    // Body
    if (VL_UNLIKELY((0x1ffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_6) 
                                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1417: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'C' channel re-used a source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1417, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1419: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1419, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (0xc0000U == (0xe0000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (~ ((0x1ffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1 
                                        >> (0x1fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             >> 5U)))) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3) 
                              & (IData)(((6U == (6U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                            == (0x1fU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 5U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1423: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1423, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1425: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1425, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2213(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2213\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                        & (0xc0000U == (0xe0000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                        == (0x1fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             >> 5U))))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                 >> 0xbU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1429: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1429, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1431: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1431, "");
        }
    }
    VL_SHIFTR_WWI(136,136,8, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xf8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                            >> 2U)));
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                        & (0xc0000U == (0xe0000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3) 
                             & (IData)(((6U == (6U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                           == (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                  >> 5U)))))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                 >> 0xbU)) != (0x7fU 
                                               & (__Vtemp_2[0U] 
                                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:1435: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1435, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:1437: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 1437, "");
        }
    }
}
