// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2113(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2113\n"); );
    // Body
    if (VL_UNLIKELY((((0U != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___same_cycle_resp_T_3) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4))
                               ? (0x1ffffffffULL & 
                                  (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source)))
                               : 0ULL)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4))
                          ? (0x1ffffffffULL & (1ULL 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source)))
                          : 0ULL) == ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT___io_deq_valid_output) 
                                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__d_first_counter_2))) 
                                       & (0xc0000U 
                                          == (0xe0000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))
                                       ? (0x1ffffffffULL 
                                          & (1ULL << 
                                             (0x3fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 5U))))
                                       : 0ULL))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1449: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency > 0 (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:57:150)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_46.sv:1451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1451, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset)) 
                           & (~ (((0ULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__inflight_1) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1455: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor: Assertion failed: TileLink timeout expired (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:57:150)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_46.sv:1457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1457, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2114(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2114\n"); );
    // Body
    if (VL_UNLIKELY((0xffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___d_first_T_3) 
                                & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__d_first_counter_3)) 
                                   & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__inflight_2) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                           >> 2U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1461: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:57:150)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_46.sv:1463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1463, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___widx_T_1) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (~ (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__d_set) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__inflight_2)) 
                                    >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_e_bits_sink))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1467: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at generators/rocket-chip/src/main/scala/tilelink/CrossingHelper.scala:57:150)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_46.sv:1469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.asource.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_46.sv", 1469, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2115(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2115\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                              & ((0U == ((0xf000U & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x10U)) 
                                         | (0xfffU 
                                            & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0x10U))))) 
                                 | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:349: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 349, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:351: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 351, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                          & ((0xdU 
                                              > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_30) 
                                                | ((0U 
                                                    == 
                                                    ((0xfffeU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         >> 0x10U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                            >> 0x10U))))) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:355: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 355, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:357: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 357, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2116(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2116\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:361: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 361, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:363: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 363, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:367: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 367, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:369: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 369, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2117(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2117\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:373: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 373, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:375: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 375, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:379: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 379, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:381: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 381, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2118(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2118\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:385: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 385, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:387: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 387, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                              & ((0U == ((0xf000U & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x10U)) 
                                         | (0xfffU 
                                            & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0x10U))))) 
                                 | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:391: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 391, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:393: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 393, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2119(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2119\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                          & ((0xdU 
                                              > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_30) 
                                                | ((0U 
                                                    == 
                                                    ((0xfffeU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         >> 0x10U)) 
                                                     | (1U 
                                                        & (~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                            >> 0x10U))))) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:397: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 397, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:399: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 399, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:403: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 403, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:405: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 405, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2120(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2120\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:409: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 409, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:411: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 411, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:415: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 415, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:417: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 417, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2121(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2121\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:421: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 421, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:423: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 423, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:427: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 427, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:429: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 429, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2122(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2122\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:433: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 433, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:435: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 435, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:439: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 439, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:441: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 441, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2123(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2123\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_23)) 
                           | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                              & (((((((((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xdU)) 
                                        | (0U == ((0xfffeU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0x10U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         >> 0x10U)))))) 
                                       | (0U == ((0x7ff00U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0xdU)) 
                                                 | ((0xf0U 
                                                     & (0x80U 
                                                        ^ 
                                                        (0x7fff0U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                            >> 0xdU)))) 
                                                    | (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                          >> 0xcU)))))) 
                                      | (0U == ((0xfc00U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0x10U)) 
                                                | (0x3ffU 
                                                   & (0x200U 
                                                      ^ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                       >> 0x10U)))))) 
                                     | (0U == ((0xfc000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU)) 
                                               | (0x3fffU 
                                                  & (0x2010U 
                                                     ^ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xcU)))))) 
                                    | (0U == ((0xf000U 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0x10U)) 
                                              | (0xfffU 
                                                 & (0x800U 
                                                    ^ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0x10U)))))) 
                                   | (0U == ((0x3cU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0x1aU)) 
                                             | (3U 
                                                & (~ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0x1aU)))))) 
                                  | (0U == ((0xe0000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU)) 
                                            | (0x1ffffU 
                                               & (0x10020U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU)))))) 
                                 | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 445, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:447: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 447, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2124(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2124\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 451, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:453: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 453, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 457, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:459: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2125(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2125\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 463, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:465: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 465, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 469, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:471: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2126(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2126\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_23)) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                 & ((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                            >> 0xdU)) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 475, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:477: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 477, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 481, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:483: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2127(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2127\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:487: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 487, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:489: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 489, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:493: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 493, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:495: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2128(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2128\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:499: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 499, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:501: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 501, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2129(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2129\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_23)) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                 & ((0U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                            >> 0xdU)) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:505: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 505, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:507: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 507, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:511: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 511, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:513: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 513, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2130(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2130\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:517: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 517, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:519: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 519, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:523: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 523, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:525: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 525, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2131(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2131\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                               & (~ ((0x80U & (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & (((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                        << 7U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                          << 5U)))) 
                                                | (((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                  << 7U))) 
                                     | ((0x40U & ((
                                                   (((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                     << 6U) 
                                                    | (0xffffffc0U 
                                                       & (((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                           << 6U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                             << 4U)))) 
                                                   | (((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                      << 6U)) 
                                                  | ((IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                     << 6U))) 
                                        | ((0x20U & 
                                            (((((2U 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                      << 5U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                        << 3U)))) 
                                              | (((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        (5U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                << 5U))) 
                                           | ((0x10U 
                                               & (((((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                           << 4U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                             << 2U)))) 
                                                   | (((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                      << 4U)) 
                                                  | ((IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                     << 4U))) 
                                              | ((8U 
                                                  & (((((2U 
                                                         < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                        | ((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                      | (IData)(
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                             & (IData)(
                                                                       (2U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((((2U 
                                                               < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                              | ((~ 
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                   >> 2U)) 
                                                                 & (2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                & (IData)(
                                                                          (0U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                    >> 2U)) 
                                                                  & (2U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                              | ((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            == 
                                                                            (6U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                             | (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:529: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 529, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:531: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 531, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2132(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2132\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & ((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_30) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:535: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 535, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:537: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 537, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:541: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 541, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:543: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 543, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2133(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2133\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:547: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 547, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:549: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 549, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:553: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 553, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:555: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 555, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2134(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2134\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:559: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 559, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:561: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 561, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2135(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2135\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & ((4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_30) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_h033361d2__0)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:565: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 565, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:567: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 567, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:571: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 571, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:573: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 573, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2136(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2136\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:577: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 577, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:579: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 579, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:583: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 583, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:585: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 585, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2137(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2137\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:589: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 589, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:591: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 591, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2138(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2138\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_15) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_23)) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                 & ((0U == ((0xf000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U)) 
                                            | (0xfffU 
                                               & (0x800U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0x10U))))) 
                                    | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                              >> 0x1cU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:595: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 595, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:597: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 597, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                               >> 4U)) | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:601: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 601, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:603: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 603, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2139(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2139\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:607: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 607, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:609: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 609, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & (0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:613: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 613, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:615: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 615, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2140(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2140\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_acquire_valid_output) 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_tileClockGroup_rockettile_2_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_opcode)))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:619: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 619, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:621: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 621, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2141(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2141\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (0xe0000U == (0xe0000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:625: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 625, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:627: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 627, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2192bac__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:631: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 631, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:633: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 633, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2142(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2142\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2192bac__0)) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:637: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 637, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:639: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 639, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2192bac__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:643: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 643, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:645: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 645, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2143(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2143\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2192bac__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:649: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 649, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:651: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 651, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2192bac__0)) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:655: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 655, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:657: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 657, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2144(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2144\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea7c0ccf__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:661: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 661, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:663: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 663, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea7c0ccf__0)) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:667: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 667, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:669: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 669, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2145(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2145\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea7c0ccf__0)) 
                     & (0x18000U == (0x18000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:673: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 673, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:675: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 675, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea7c0ccf__0)) 
                     & (0x10000U == (0x18000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:679: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 679, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:681: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 681, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2146(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2146\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea7c0ccf__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:685: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 685, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:687: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 687, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea70cc77__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:691: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 691, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:693: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 693, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2147(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2147\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea70cc77__0)) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:697: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 697, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:699: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 699, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea70cc77__0)) 
                     & (0x18000U == (0x18000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:703: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 703, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:705: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 705, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2148(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2148\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea70cc77__0)) 
                     & (0x10000U == (0x18000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:709: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 709, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:711: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 711, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hea70cc77__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 1U)) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:715: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 715, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:717: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 717, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2149(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2149\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2067663__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:721: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 721, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:723: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 723, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2067663__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:727: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 727, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:729: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 729, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2150(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2150\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb2067663__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:733: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 733, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:735: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 735, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hbb7a767e__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:739: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 739, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:741: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 741, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2151(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2151\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hbb7a767e__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:745: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 745, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:747: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 747, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hbb7a767e__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 1U)) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:751: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 751, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:753: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 753, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2152(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2152\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb20e5615__0)) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                               >> 9U)) | (0x10U == 
                                          (0x1fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 5U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:757: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 757, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:759: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 759, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb20e5615__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:763: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 763, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:765: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 765, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2153(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2153\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb20e5615__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:769: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 769, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:771: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 771, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_2_reset))) 
                     & (0xe00000U == (0xe00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:775: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel has invalid opcode (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 775, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:777: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 777, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2154(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2154\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & (~ (((IData)((0x30000U == (0x7a000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                               >> 0xfU)))) 
                           & ((((((((((0U == (0x7ffffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                  << 0xaU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 0x16U)))) 
                                      | (~ ((0U != 
                                             (0x3ffffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                  << 9U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 0x17U)))) 
                                            | (0U != 
                                               (3U 
                                                & (~ 
                                                   ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     << 0xbU) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0x15U)))))))) 
                                     | (~ ((0U != (0x7fffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 6U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0x1aU)))) 
                                           | (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 0x19U))))) 
                                    | (0U == ((0x7ff00U 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                   << 0xaU) 
                                                  | (0x300U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                        >> 0x16U)))) 
                                              | ((0xf0U 
                                                  & (0x80U 
                                                     ^ 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       << 0xaU) 
                                                      | (0x3f0U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0x16U))))) 
                                                 | (0xfU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0x15U)))))) 
                                   | (~ (IData)(((0U 
                                                  != 
                                                  (0x1f8U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])) 
                                                 | (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (0x200U 
                                                        ^ 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          << 7U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                            >> 0x19U))))))))) 
                                  | (~ (IData)(((0U 
                                                 != 
                                                 (0x1f8U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])) 
                                                | (0U 
                                                   != 
                                                   (0x3fffU 
                                                    & (0x2010U 
                                                       ^ 
                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                         << 0xbU) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           >> 0x15U))))))))) 
                                 | (~ (IData)(((0U 
                                                != 
                                                (0x1e0U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])) 
                                               | (0U 
                                                  != 
                                                  (0xfffU 
                                                   & (0x800U 
                                                      ^ 
                                                      ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        << 7U) 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0x19U))))))))) 
                                | (~ (IData)(((0U != 
                                               (0x1e0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])) 
                                              | (0U 
                                                 != 
                                                 (3U 
                                                  & (~ 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x1dU) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                         >> 3U))))))))) 
                               | (~ (IData)(((0U != 
                                              (0x1c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])) 
                                             | (0U 
                                                != 
                                                (0x1ffffU 
                                                 & (0x10020U 
                                                    ^ 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                      << 0xbU) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                        >> 0x15U))))))))) 
                              | (8U == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 5U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:781: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Probe type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 781, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:783: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 783, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2155(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2155\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:787: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 787, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:789: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 789, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:793: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 793, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:795: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 795, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2156(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2156\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:799: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 799, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:801: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 801, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & (0x180000U == (0x180000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:805: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe carries invalid cap param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 805, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:807: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 807, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2157(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2157\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:811: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 811, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:813: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 813, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2158(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2158\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_h4318bd8c__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:817: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 817, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:819: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 819, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:823: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Get type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 823, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:825: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 825, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2159(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2159\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_ok))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:829: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get carries unmanaged address (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 829, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:831: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 831, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
                     & (((0x10U == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                         << 4U) != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:835: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get carries source that is not first source (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 835, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:837: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 837, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2160(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2160\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 0xfU)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                             << 0x17U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                               >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:841: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get address not aligned to size (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 841, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:843: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 843, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:847: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get carries invalid param (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 847, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:849: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 849, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2161(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2161\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:853: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get contains invalid mask (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 853, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:855: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 855, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__2162(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__2162\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (IData)(vlSelf->__VdfgTmp_hb1705eef__0)) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:859: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get is corrupt (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 859, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:861: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 861, "");
        }
    }
    if (VL_UNLIKELY(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                     & (IData)(vlSelf->__VdfgTmp_h43050403__0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_44.sv:865: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries PutFull type which is unexpected using diplomatic parameters (connected at generators/rocket-chip/src/main/scala/rocket/HellaCache.scala:271:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 865, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Fatal: TLMonitor_44.sv:867: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.element_reset_domain_rockettile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TLMonitor_44.sv", 867, "");
        }
    }
}
