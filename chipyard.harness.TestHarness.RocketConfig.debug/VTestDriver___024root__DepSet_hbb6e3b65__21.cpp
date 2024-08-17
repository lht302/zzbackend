// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1692(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1692\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__csr_wen) 
           & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_114)));
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_1_cmd = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_0_cmd = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__cmd_amo_logical 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
           | ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
              | ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                 | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1693(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1693\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__cmd_lrsc 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__cmd_amo_arithmetic 
        = ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
           | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
              | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                    | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_1_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_0 = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_11 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_14 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__lfsr_prng__io_increment) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_0 
            = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_15) 
                 ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13)) 
                ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_12)) 
               ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_10));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_11 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_10;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_14 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_12;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_u;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_ppn 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_debug_breakpoint 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__r) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_load)) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__w) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_store)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_28 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_mem)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___dcache_kill_mem_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_31 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_pc_valid)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_30)));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rxs2 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_57));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1694(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1694\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_rocc 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_63));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_29));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd 
            = (((0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v))
                ? 0x15U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___id_ctrl_decoder_decoded_orMatrixOutputs_T_65));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_signed = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_1_signed = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1695(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1695\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_0_signed = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_0_size = 0U;
    }
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___inflight_T) 
         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot) 
               >> 1U)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_size = 0U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___inflight_T) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot) 
            >> 1U))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_1_size = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1696(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1696\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_bits_tag 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_tag)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_tag));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_bits_tag 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_tag)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_tag));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_bits_tag 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_tag)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_tag));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT___replayq_io_replay_bits_tag 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT___nackq_io_deq_bits)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_1_tag)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__reqs_0_tag));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_mem_size 
            = (3U & (((((0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)) 
                        | (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd))) 
                       | (0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd))) 
                      | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_ctrl_mem_cmd)))
                      ? (((IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2))) 
                          << 1U) | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1)))
                      : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
                         >> 0xcU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h4affc1d8__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word) 
           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_data));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_data 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_req_data;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en 
            = (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_way));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_data 
            = (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                           >> 1U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en 
            = (0xfU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__req_way_en)) 
                                 << 0x3cU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__req_way_en)) 
                                               << 0x38U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__req_way_en)) 
                                                  << 0x34U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__req_way_en)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__req_way_en)) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__req_way_en)) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__req_way_en)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__req_way_en)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__req_way_en) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__req_way_en) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__req_way_en) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__req_way_en) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_way_en) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_way_en) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_way_en) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_way_en)))))))))))))))))) 
                               >> (0x3fU & VL_SHIFTL_III(6,6,32, 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 5U)), 2U)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1697(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1697\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__nodeOut_d_ready 
        = (1U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                     >> 0x11U)) | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_addr 
        = (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_valid)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s3_req_addr)
                      : ((0xbfU >= (0xffU & ((IData)(0xcU) 
                                             * (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 5U)))))
                          ? (((0U == (0x1fU & ((IData)(0xcU) 
                                               * (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                     >> 5U)))))
                               ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_69[
                                       (((IData)(0xbU) 
                                         + (0xffU & 
                                            ((IData)(0xcU) 
                                             * (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 5U))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0xcU) 
                                            * (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                  >> 5U))))))) 
                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_69[
                                (7U & (((IData)(0xcU) 
                                        * (0xfU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 5U))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0xcU) 
                                          * (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              >> 5U))))))
                          : 0U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT__logic_and 
        = ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
           | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT__logic_xor 
        = ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
           | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)));
    vlSelf->__VdfgTmp_hcc119254__0 = (1U & (~ ((2U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                               | (3U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_replay 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_replay_REG) 
           & (5U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1f27e23d__0 
        = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
           | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              | ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                 | ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                    | ((0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                       | ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                          | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                             | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                   | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1698(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1698\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT____Vcellinp__ram_ext__W0_data[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed)) 
                    << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size)) 
                                  << 0x36U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                                << 0x31U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag)) 
                                                   << 0x28U) 
                                                  | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT____Vcellinp__ram_ext__W0_data[1U] 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__sdq_alloc_id) 
            << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed)) 
                                   << 0x38U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size)) 
                                                 << 0x36U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag)) 
                                                       << 0x28U) 
                                                      | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)))) 
                                 >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT____Vcellinp__ram_ext__W0_data[2U] 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__sdq_alloc_id) 
           >> 4U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_lrsc_addr_match 
        = ((0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrsc_count) 
                            >> 2U))) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrsc_addr 
                                        == (0x3ffffffffULL 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                               >> 6U))));
    vlSelf->__VdfgTmp_hac97ff42__0 = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr) 
                                            | (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__cacheable 
        = (1U & ((0U == ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                         >> 0x1fU)) 
                                << 3U)) | ((6U & (4U 
                                                  ^ 
                                                  ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                            >> 0x1aU)) 
                                                   << 1U))) 
                                           | (1U & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                            >> 0x10U)))))) 
                 | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                            >> 0x1fU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1699(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1699\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1700(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1700\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_2;
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__idx_match 
        = ((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__req_addr 
                             >> 6U))) == (0x3fU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                           >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word 
                                              >> 0x20U))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_eret 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___exception_T) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_ret));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut)) 
                 & (~ ((~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                          >> 0x1dU)))) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T 
        = ((((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                             >> 0x1dU))) << 0x18U) 
            | (0xffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                             << 4U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U] 
                                       >> 0x1cU)))) 
           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h6e2738c4__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma_io_in_bits_req_rm 
        = (7U & ((7U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_inst 
                               >> 0xcU))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_frm)
                  : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_inst 
                     >> 0xcU)));
    __Vtemp_2[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[0U];
    __Vtemp_2[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[1U];
    __Vtemp_2[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[2U];
    __Vtemp_2[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__CDom_absSigSum[3U];
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    VL_SHIFTL_WWI(171,171,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_CDom_CAlignDist));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[2U] 
        = __Vtemp_3[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[3U] 
        = __Vtemp_3[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[4U] 
        = __Vtemp_3[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___CDom_mainSig_T[5U] 
        = (0x7ffU & __Vtemp_3[5U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_reduced4SigExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((0x1000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])
                                             ? 0x1fU
                                             : ((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                     >> 0xaU)))
                                                 ? 0x1fU
                                                 : 
                                                ((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                      >> 8U)))
                                                  ? 0x1eU
                                                  : 
                                                 ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                       >> 6U)))
                                                   ? 0x1eU
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                        >> 4U)))
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                                         >> 2U)))
                                                     ? 0x1dU
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U]))
                                                      ? 0x1cU
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                        >> 0x1eU))
                                                       ? 0x1cU
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                            >> 0x1cU)))
                                                        ? 0x1bU
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                             >> 0x1aU)))
                                                         ? 0x1bU
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                              >> 0x18U)))
                                                          ? 0x1aU
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                               >> 0x16U)))
                                                           ? 0x1aU
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                >> 0x14U)))
                                                            ? 0x19U
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                 >> 0x12U)))
                                                             ? 0x19U
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                  >> 0x10U)))
                                                              ? 0x18U
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                   >> 0xeU)))
                                                               ? 0x18U
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                    >> 0xcU)))
                                                                ? 0x17U
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (3U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                     >> 0xaU)))
                                                                 ? 0x17U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                      >> 8U)))
                                                                  ? 0x16U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                       >> 6U)))
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                        >> 4U)))
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                         >> 2U)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U]))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                        >> 0x1eU))
                                                                       ? 0x14U
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                            >> 0x1cU)))
                                                                        ? 0x13U
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                             >> 0x1aU)))
                                                                         ? 0x13U
                                                                         : 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                              >> 0x18U)))
                                                                          ? 0x12U
                                                                          : 
                                                                         ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                               >> 0x16U)))
                                                                           ? 0x12U
                                                                           : 
                                                                          ((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x14U)))
                                                                            ? 0x11U
                                                                            : 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x12U)))
                                                                             ? 0x11U
                                                                             : 
                                                                            ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0x10U)))
                                                                              ? 0x10U
                                                                              : 
                                                                             ((0U 
                                                                               != 
                                                                               (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xeU)))
                                                                               ? 0x10U
                                                                               : 
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xcU)))
                                                                                ? 0xfU
                                                                                : 
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 0xaU)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 8U)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 6U)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 4U)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 2U)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U]))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1eU))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1cU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1aU)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x18U)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x16U)))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x14U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x12U)))
                                                                                 ? 9U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x10U)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xeU)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xcU)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xaU)))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 8U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 6U)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 4U)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 2U)))
                                                                                 ? 5U
                                                                                 : 4U))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1701(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1701\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2 
        = ((0x1000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U])
            ? 0U : ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                  >> 0xaU))) ? 1U : 
                    ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                   >> 8U))) ? 2U : 
                     ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                    >> 6U))) ? 3U : 
                      ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                     >> 4U))) ? 4U : 
                       ((0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U] 
                                      >> 2U))) ? 5U
                         : ((0U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U]))
                             ? 6U : ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                             >> 0x1eU))
                                      ? 7U : ((0U != 
                                               (3U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                   >> 0x1cU)))
                                               ? 8U
                                               : ((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                       >> 0x1aU)))
                                                   ? 9U
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                        >> 0x18U)))
                                                    ? 0xaU
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (3U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                         >> 0x16U)))
                                                     ? 0xbU
                                                     : 
                                                    ((0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                          >> 0x14U)))
                                                      ? 0xcU
                                                      : 
                                                     ((0U 
                                                       != 
                                                       (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                           >> 0x12U)))
                                                       ? 0xdU
                                                       : 
                                                      ((0U 
                                                        != 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                            >> 0x10U)))
                                                        ? 0xeU
                                                        : 
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                             >> 0xeU)))
                                                         ? 0xfU
                                                         : 
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                              >> 0xcU)))
                                                          ? 0x10U
                                                          : 
                                                         ((0U 
                                                           != 
                                                           (3U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                               >> 0xaU)))
                                                           ? 0x11U
                                                           : 
                                                          ((0U 
                                                            != 
                                                            (3U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                >> 8U)))
                                                            ? 0x12U
                                                            : 
                                                           ((0U 
                                                             != 
                                                             (3U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                 >> 6U)))
                                                             ? 0x13U
                                                             : 
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                  >> 4U)))
                                                              ? 0x14U
                                                              : 
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U] 
                                                                   >> 2U)))
                                                               ? 0x15U
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U]))
                                                                ? 0x16U
                                                                : 
                                                               ((0U 
                                                                 != 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                  >> 0x1eU))
                                                                 ? 0x17U
                                                                 : 
                                                                ((0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                      >> 0x1cU)))
                                                                  ? 0x18U
                                                                  : 
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                       >> 0x1aU)))
                                                                   ? 0x19U
                                                                   : 
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                        >> 0x18U)))
                                                                    ? 0x1aU
                                                                    : 
                                                                   ((0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                         >> 0x16U)))
                                                                     ? 0x1bU
                                                                     : 
                                                                    ((0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                          >> 0x14U)))
                                                                      ? 0x1cU
                                                                      : 
                                                                     ((0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                           >> 0x12U)))
                                                                       ? 0x1dU
                                                                       : 
                                                                      ((0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                            >> 0x10U)))
                                                                        ? 0x1eU
                                                                        : 
                                                                       ((0U 
                                                                         != 
                                                                         (3U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                             >> 0xeU)))
                                                                         ? 0x1fU
                                                                         : 
                                                                        ((0U 
                                                                          != 
                                                                          (3U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                              >> 0xcU)))
                                                                          ? 0x20U
                                                                          : 
                                                                         ((0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                               >> 0xaU)))
                                                                           ? 0x21U
                                                                           : 
                                                                          ((0U 
                                                                            != 
                                                                            (3U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 8U)))
                                                                            ? 0x22U
                                                                            : 
                                                                           ((0U 
                                                                             != 
                                                                             (3U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 6U)))
                                                                             ? 0x23U
                                                                             : 
                                                                            ((0U 
                                                                              != 
                                                                              (3U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 4U)))
                                                                              ? 0x24U
                                                                              : 
                                                                             ((0U 
                                                                               != 
                                                                               (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U] 
                                                                                >> 2U)))
                                                                               ? 0x25U
                                                                               : 
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U]))
                                                                                ? 0x26U
                                                                                : 
                                                                               ((0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1eU))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1cU)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x1aU)))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x18U)))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x16U)))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x14U)))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x12U)))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0x10U)))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xeU)))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xcU)))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 0xaU)))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 8U)))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 6U)))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 4U)))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U] 
                                                                                >> 2U)))
                                                                                 ? 0x35U
                                                                                 : 0x36U))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1702(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1702\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_postMul_io_rawOut_isInf 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notNaN_isInfProd) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_pipe_b_isInfC));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_2][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_2][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_2][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__dfma__io_in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___dfma_io_in_valid_T) 
           & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_0][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_0][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_0][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_1][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_1][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_ra_1][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1ff36051__0 
        = (1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                     >> 0xbU)) & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                          >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 
        = ((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp))
            ? 0ULL : (0x1fffffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0 
                                             >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4 
        = (1U & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                      >> 0xbU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h3152f987__0)) 
                 | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sig 
                            >> 0x37U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x3ffffffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                                   - ((((QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                                    >> 0x36U))))) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                                      >> 0x35U)) 
                                                             | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))))))) 
                                         << 0x35U) 
                                        | (0x1fffffffffffffULL 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                                  ? 0ULL
                                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z))))) 
                                      | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                          ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                             << 1U)
                                          : 0ULL))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1703(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1703\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__store 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_typeTagOut))
            ? (((QData)((IData)((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]))) 
                << 0x3fU) | (((QData)((IData)((0x7ffU 
                                               & ((VL_GTS_III(13, 0x402U, 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                               >> 0x14U))
                                                    ? 0U
                                                    : 
                                                   ((IData)(0x3ffU) 
                                                    + 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                      << 0xcU) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                        >> 0x14U)))) 
                                                  | (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__invalidExc))))))) 
                              << 0x34U) | (((QData)((IData)(
                                                            (0xfffffU 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_fractOut_1 
                                                                        >> 0x20U))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((7U 
                                                               == 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                                >> 0x1dU))
                                                               ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h7f154979__0
                                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__store_unrecoded_fractOut_1)))))))
            : (((QData)((IData)(((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                         >> 0x1dU))
                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h7f154979__0
                                  : (VL_GTS_III(13, 0x402U, 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                 >> 0x14U))
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___store_unrecoded_denormFract_T_1)
                                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf)
                                          ? 0U : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U]))))) 
                << 0x20U) | (QData)((IData)(((7U == 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x1dU))
                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT____VdfgTmp_h7f154979__0
                                              : (VL_GTS_III(13, 0x402U, 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                             >> 0x14U))
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___store_unrecoded_denormFract_T_1)
                                                  : 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_isInf)
                                                   ? 0U
                                                   : 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[0U])))))));
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_6[0U] = 0xffffffffU;
    __Vtemp_6[1U] = 0xffffffffU;
    __Vtemp_6[2U] = 1U;
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_wflags) {
        if ((7U == (7U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                            << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                      >> 0x1dU)) & 
                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                            << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                                      >> 0x1dU)))))) {
            __Vtemp_12[0U] = 0U;
            __Vtemp_12[1U] = 0xe0080000U;
            __Vtemp_12[2U] = 0U;
        } else if ((1U & ((~ ((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                                      >> 0x1dU)) | 
                              ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm)) 
                               == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT___dcmp_io_lt) 
                                   | (VL_GTS_IWW(65, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1) 
                                      & VL_LTS_IWW(65, __Vtemp_6, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2)))))) 
                          | (7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U] 
                                    >> 0x1dU))))) {
            __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U];
            __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U];
            __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U];
        } else {
            __Vtemp_12[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[0U];
            __Vtemp_12[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[1U];
            __Vtemp_12[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U];
        }
    } else {
        __Vtemp_12[0U] = (IData)((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))));
        __Vtemp_12[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U]))) 
                                  >> 0x20U));
        __Vtemp_12[2U] = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm))
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U] 
                                    ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U])
                                 : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_rm) 
                                    ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in2[2U])));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT___GEN) {
        if ((7U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U] 
                    >> 0x1dU))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] = 0xe0080000U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[0U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[1U];
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__in_pipe_b_in1[2U];
        }
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[0U] 
            = __Vtemp_12[0U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[1U] 
            = __Vtemp_12[1U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__fsgnjMux_data[2U] 
            = __Vtemp_12[2U];
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1704(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1704\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
        = ((0x1ffffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT____VdfgTmp_h6faa7e30__0)
                            ? VL_SHIFTL_III(25,25,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_sig, 1U)
                            : 0U) | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___fractB_Z_T_10)) 
                                     << 0x18U))) | 
           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___sigX_Z_T_7)
             ? 0x2800000U : 0U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
        = ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__oddSqrt_S)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady))
             ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig 
                << 1U) : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___sigX_Z_T_7)
                                  ? ((0x6000000U & 
                                      (((((IData)((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut) 
                                                       >> 6U)))) 
                                          << 1U) | 
                                         (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x13U))) 
                                        - (IData)(1U)) 
                                       << 0x19U)) | 
                                     (0x1ffffffU & 
                                      VL_SHIFTL_III(25,25,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_a_sig, 3U)))
                                  : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                            ? 0U : 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem_Z 
                                            << 1U))));
    if ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
         >> 0x1fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact 
            = (0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                      >> 0x1dU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact 
            = (0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                      >> 0x1dU));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h75128a05__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1705(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1705\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictReturn 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__count)) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn)) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictBranch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_h7c18a2f8__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr 
        = (0x7fffffffffULL & ((0x7ffffffffcULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc) 
                              + (QData)((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)
                                                   ? 1U
                                                   : 2U) 
                                                 << 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI)
                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn)
                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn))
                ? 3U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall)
                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR))
                         ? 2U : (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI)
                                           ? (0x63U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))
                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch))))))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1)
                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn_1)
                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1))
                ? 3U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall_1)
                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR_1))
                         ? 2U : (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1)
                                           ? (0x63U 
                                              == (0x7fU 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))
                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch_1)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hd0a6013e__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hdce55190__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set_wo_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__masterNodeOut_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hfdfba2fc__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__wrong_path)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_57));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1706(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1706\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_57)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_valid)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay_REG));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
                     + (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x19U > (0x3ffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))));
    __Vtemp_2[0U] = (IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_2[1U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                        ? (0x1000000U | ((0x800000U 
                                          & ((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                          >> 0x1dU)))) 
                                             << 0x17U)) 
                                         | (0x7fffffU 
                                            & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                        : (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                            >> 0x1dU))) 
                            << 0x17U) | (0x7fffffU 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                      << 0x15U) | (IData)(((0x1fffffffffffffULL 
                                            & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                       ? (0x1000000U | ((0x800000U 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                         >> 0x1dU)))) 
                                            << 0x17U)) 
                                        | (0x7fffffU 
                                           & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                       : (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                           >> 0x1dU))) 
                           << 0x17U) | (0x7fffffU & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                     >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                                    ? 0U
                                                    : 
                                                   ((0x4aU 
                                                     > 
                                                     (0x3ffU 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                                     ? 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T))
                                                     : 0x4aU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_3[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                             ? 0U : 
                                            ((0x4aU 
                                              > (0x3ffU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T)))
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T) 
                                                    >> 2U))
                                              : 0x12U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1707(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1707\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp) 
                                 << 1U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_sExp)) 
                     + (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___cycleNum_T_15 
        = (0x1fU & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
                    | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S))
                         ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                             ? (0x18U | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__classify_out_expOut))))
                             : 0x1aU) : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))
                                                ? 0U
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
                                                   - (IData)(1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___GEN 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___cycleNum_T_15 
        = (0x3fU & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering)) 
                    | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__normalCase_S))
                         ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__mem_ctrl_sqrt)
                             ? ((0x100000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])
                                 ? 0x35U : 0x36U) : 0x37U)
                         : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__entering) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__skipCycle2))
                                   ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__cycleNum) 
                                           - (IData)(1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlSelf->__VdfgTmp_h9833eedd__0 = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
                                        >> 0x1fU) ? 0xfffU
                                        : 0x1ffU) & 
                                      ((IData)(0x780U) 
                                       + ((0x80U | (IData)(vlSelf->__VdfgTmp_h6e761599__0)) 
                                          + (3U & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                           >> 0x35U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1708(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1708\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_14 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xfU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6dcfb235__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h72b9d335__0 
        = ((0x100U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x17U)) << 8U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h6dcfb235__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_24 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf905e409__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h0074be98__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf905e409__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h184c6a56__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h29876021__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he149b148__0 
        = ((0x400U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h29876021__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8b804e1c__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9acb7bdb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h500d5586__0 
        = ((0x400U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h9acb7bdb__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hef9ee057__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf6d9ea20__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hbffacb4b__0 
        = ((0x400U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hf6d9ea20__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_42 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xfU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5c6c237d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h63d6404d__0 
        = ((0x100U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x17U)) << 8U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h5c6c237d__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1709(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1709\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_npc_misaligned 
        = (1U & ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                             >> 2U))) & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence)) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4 
                                                    >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hf125d89e__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_5) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__wrong_path));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_61 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)) 
              & (0x30000U == (0x30000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_34 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_29) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_btb_resp_bits_bridx) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
                 & (0x30000U == (0x30000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictJump_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1) 
            & (0x6fU == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_3))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictReturn_1 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__count)) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn_1)) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hed2dbd38__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1) 
            & (0x63U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1) 
            & ((0x6fU == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)) 
               | ((0x67U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)) 
                  | ((0x63U == (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken))))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
              & ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_3)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR_1) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch_1) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken)))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1710(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1710\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___bpu_io_debug_if 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__x) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___bpu_io_xcpt_if 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__x));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd 
        = ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
                          ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[
                                  (((IData)(4U) + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))) 
                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[
                           (7U & (((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_42_bits 
        = ((0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
            ? ((0x1000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
                ? ((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                    >> 2U))) ? (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))))
                    : ((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                        >> 7U))) ? 
                       (0xe7U | ((0x1f00000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 0x12U)) 
                                 | (0xf8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 8U))))
                        : (0x100073U | ((0x1e00000U 
                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                            << 0x12U)) 
                                        | (0xf8000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                              << 8U))))))
                : ((0x1f00000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                  << 0x12U)) | ((0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                     >> 2U)))
                                                 ? 
                                                (0x33U 
                                                 | (0xf80U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))
                                                 : 
                                                ((0xf8000U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                     << 8U)) 
                                                 | ((0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         >> 7U)))
                                                     ? 0x67U
                                                     : 0x1fU)))))
            : ((0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                ? (0x13000U | ((0x1c000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                               << 0x18U)) 
                               | ((0x2000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0xdU)) 
                                  | ((0x1800000U & 
                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x12U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0)))))
                : ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                    ? (0x12000U | ((0xc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                  << 0x18U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                        << 0xdU)) | 
                                      ((0x1c00000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x12U)) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0)))))
                    : ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                        ? (0x13007U | ((0x1c000000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                              << 0xdU)) 
                                          | ((0x1800000U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                        : ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                            ? (0x1013U | ((0x2000000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0x12U)) 
                                             | ((0xf8000U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                    << 8U)) 
                                                | (0xf80U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                            : ((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                ? (0x41000U | (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 0xcU)))) 
                                                << 0x1cU) 
                                               | ((0xc000000U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                      << 0x15U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         << 0x17U)) 
                                                     | ((0x38000U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                            << 8U)) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0))))))
                                : ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                    ? (0x40000U | (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   >> 0xcU)))) 
                                                    << 0x1cU) 
                                                   | ((0xc000000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 0x15U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             << 0x17U)) 
                                                         | ((0x38000U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                << 8U)) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0))))))
                                    : ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                        ? (0x6fU | 
                                           ((0x80000000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     << 0x12U)) 
                                                                 | (0x1ff000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 0xcU)))) 
                                                                       << 0xcU)))))))))))
                                        : ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                            ? ((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                    >> 0xaU)))
                                                ? (0x840433U 
                                                   | (((0U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                            >> 5U))) 
                                                       << 0x1eU) 
                                                      | ((0x700000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                << 8U)) 
                                                            | ((((0x17U 
                                                                  >= 
                                                                  (0x1fU 
                                                                   & ((IData)(3U) 
                                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2))))
                                                                  ? 
                                                                 (7U 
                                                                  & ((0x680f80U 
                                                                      | (0x3fU 
                                                                         & (((1U 
                                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)) 
                                                                             << 5U) 
                                                                            | ((1U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)) 
                                                                               << 2U)))) 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(3U) 
                                                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2)))))
                                                                  : 0U) 
                                                                << 0xcU) 
                                                               | ((0x380U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                  | (8U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 9U))))))))
                                                : (0x13U 
                                                   | ((((2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             >> 0xaU)))
                                                         ? 
                                                        (0x11dU 
                                                         | ((0x3f8000U 
                                                             & ((- (IData)(
                                                                           (1U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                               >> 0xcU)))) 
                                                                << 0xfU)) 
                                                            | ((0x7c00U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   << 8U)) 
                                                               | (0xe0U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     >> 2U)))))
                                                         : 
                                                        (0x115U 
                                                         | (((1U 
                                                              == 
                                                              (3U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  >> 0xaU))) 
                                                             << 0x14U) 
                                                            | ((0x8000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   << 3U)) 
                                                               | ((0x7c00U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      << 8U)) 
                                                                  | (0xe0U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 2U))))))) 
                                                       << 0xaU) 
                                                      | (0x380U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))))
                                            : ((0xbU 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   >> 0xcU)))) 
                                                    << 0x1dU) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                            >> 7U))) 
                                                       | (2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                              >> 7U))))
                                                       ? 
                                                      ((0x18000000U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                           << 0x18U)) 
                                                       | ((0x4000000U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                              << 0x15U)) 
                                                          | ((0x2000000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                 << 0x17U)) 
                                                             | ((0x1000000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    << 0x12U)) 
                                                                | ((0xf8000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       << 8U)) 
                                                                   | ((0xf80U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                      | ((IData)(
                                                                                ((0U 
                                                                                != 
                                                                                (0x7cU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
                                                                                | (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 0xcU))))))))
                                                                          ? 0x13U
                                                                          : 0x1fU)))))))
                                                       : 
                                                      (0x37U 
                                                       | ((0x1ffe0000U 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                             >> 0xcU)))) 
                                                              << 0x11U)) 
                                                          | ((0x1f000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                 << 0xaU)) 
                                                             | ((0xf80U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                | ((0U 
                                                                    == 
                                                                    ((0xfe0U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 0xcU)))) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                           >> 2U)))) 
                                                                   << 3U)))))))
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                    ? 
                                                   (0x13U 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       >> 0xcU)))) 
                                                        << 0x19U) 
                                                       | ((0x1f00000U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                              << 0x12U)) 
                                                          | (0xf80U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))))
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                     ? 
                                                    (0x1bU 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 0xcU)))) 
                                                         << 0x19U) 
                                                        | ((0x1f00000U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               << 0x12U)) 
                                                           | ((0xf8000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  << 8U)) 
                                                              | ((0xf80U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                 | ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         >> 7U))) 
                                                                    << 2U))))))
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                      ? 
                                                     (0x13U 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         >> 0xcU)))) 
                                                          << 0x19U) 
                                                         | ((0x1f00000U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                << 0x12U)) 
                                                            | ((0xf8000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   << 8U)) 
                                                               | (0xf80U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                       ? 
                                                      (0x843023U 
                                                       | ((0xc000000U 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                              << 0x15U)) 
                                                          | ((0x2000000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                 << 0xdU)) 
                                                             | ((0x700000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    << 0x12U)) 
                                                                | ((0x38000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       << 8U)) 
                                                                   | (0xc00U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))))))
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                        ? 
                                                       (0x842023U 
                                                        | ((0x4000000U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               << 0x15U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  << 0xdU)) 
                                                              | ((0x700000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     << 0x12U)) 
                                                                 | ((0x38000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        << 8U)) 
                                                                    | ((0xc00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                       | (0x200U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                             << 3U))))))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                         ? 
                                                        (0x843027U 
                                                         | ((0xc000000U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                << 0x15U)) 
                                                            | ((0x2000000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   << 0xdU)) 
                                                               | ((0x700000U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      << 0x12U)) 
                                                                  | ((0x38000U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         << 8U)) 
                                                                     | (0xc00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))))))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                          ? 
                                                         (0x84203fU 
                                                          | ((0x4000000U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                 << 0x15U)) 
                                                             | ((0x2000000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    << 0xdU)) 
                                                                | ((0x700000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       << 0x12U)) 
                                                                   | ((0x38000U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                          << 8U)) 
                                                                      | ((0xc00U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                                         | (0x200U 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                               << 3U))))))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                           ? 
                                                          (0x43403U 
                                                           | ((0xc000000U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  << 0x15U)) 
                                                              | ((0x3800000U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     << 0xdU)) 
                                                                 | ((0x38000U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        << 8U)) 
                                                                    | (0x380U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                          << 5U))))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                            ? 
                                                           (0x42403U 
                                                            | ((0x4000000U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   << 0x15U)) 
                                                               | ((0x3800000U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      << 0xdU)) 
                                                                  | ((0x400000U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         << 0x10U)) 
                                                                     | ((0x38000U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                            << 8U)) 
                                                                        | (0x380U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                              << 5U)))))))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                                                             ? 
                                                            (0x43407U 
                                                             | ((0xc000000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    << 0x15U)) 
                                                                | ((0x3800000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       << 0xdU)) 
                                                                   | ((0x38000U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                          << 8U)) 
                                                                      | (0x380U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                            << 5U))))))
                                                             : 
                                                            (0x10400U 
                                                             | ((0x3c000000U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    << 0x13U)) 
                                                                | ((0x3000000U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                       << 0xdU)) 
                                                                   | ((0x800000U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                          << 0x12U)) 
                                                                      | ((0x400000U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                             << 0x10U)) 
                                                                         | ((0x380U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                << 5U)) 
                                                                            | ((0U 
                                                                                != 
                                                                                (0xffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 5U)))
                                                                                ? 0x13U
                                                                                : 0x1fU)))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1711(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1711\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_hb57cac85__0 
        = ((0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
           | ((0x1eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
              | ((0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                 | ((0x1cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                    | ((0x1bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                       | ((0x1aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                          | ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                             | (0x18U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_3) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_4) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_5) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_6) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_7) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_8) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_9) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_2) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_ma_ld_output))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_bits_tag 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs_io_resp_ready_REG)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mmios_0__DOT__req_tag)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_tag));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1712(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1712\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT____VdfgTmp_h2bc77714__0)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_dprv) 
              >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__max_count 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___max_count_T)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_count)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0)
            ? 0xfffff000U : ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count))
                              ? 0xffe00000U : 0xc0000000U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___wb_io_meta_read_valid 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__wb__DOT__data_req_cnt) 
               >> 3U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__wb__DOT__active));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1713(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1713\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_47 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_49 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_50 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_51 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_52 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_53 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_54 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_56 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h30999a28__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT____VdfgTmp_ha36c20d2__0 
        = ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
           | ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
              | ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                 | ((0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                    | ((0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_cmd)) 
                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__cmd_amo_arithmetic))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1714(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1714\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lfsr_prng__DOT__state_13;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__next_inflight_onehot 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__inflight))
            ? (2U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__inflight) 
                         >> 1U)) << 1U)) : 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__next_inflight_onehot 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__inflight))
            ? (2U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__inflight) 
                         >> 1U)) << 1U)) : 1U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1715(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1715\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__next_inflight_onehot 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__inflight))
            ? (2U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__inflight) 
                         >> 1U)) << 1U)) : 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__next_inflight_onehot 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__inflight))
            ? (2U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__inflight) 
                         >> 1U)) << 1U)) : 1U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1 
        = ((0x9fU >= (0xffU & ((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
            ? (0x1fU & (((0U == (0x1fU & ((IData)(5U) 
                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))
                          ? 0U : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_2[
                                  (((IData)(4U) + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))) 
                                   >> 5U)] << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))) 
                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_2[
                           (7U & (((IData)(5U) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                  >> 5U))] >> (0x1fU 
                                               & ((IData)(5U) 
                                                  * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))))))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT____VdfgTmp_heeeaf45e__0 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
           | ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h1f27e23d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_sc_fail 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_lrsc_addr_match)) 
           & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_cmd)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___amoalu_io_mask_T 
        = (((IData)(vlSelf->__VdfgTmp_hac97ff42__0) 
            << 1U) | (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_15_io_idx_match 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__state)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__idx_match));
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h5b97e007_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1716(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1716\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h6d6b088d__0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size))
            ? (- (IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed) 
                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                             >> 0x1fU)))) : (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word 
                                                     >> 0x20U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clockGroupCombiner_auto_clock_group_combiner_out_member_allClocks_tileClockGroup_rockettile_1_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___refill_fire_T) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_6 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_5;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    __Vtemp_1[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U];
    __Vtemp_1[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U];
    __Vtemp_1[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U];
    __Vtemp_1[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U];
    __Vtemp_1[4U] = 0U;
    __Vtemp_1[5U] = 0U;
    __Vtemp_1[6U] = 0U;
    __Vtemp_1[7U] = 0U;
    VL_SHIFTL_WWI(236,236,7, __Vtemp_2, __Vtemp_1, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[0U] 
           & __Vtemp_2[0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[1U] 
           & __Vtemp_2[1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[2U] 
           & __Vtemp_2[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[3U] 
           & __Vtemp_2[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[4U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[4U] 
           & __Vtemp_2[4U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[5U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[5U] 
           & __Vtemp_2[5U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[6U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[6U] 
           & __Vtemp_2[6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[7U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[7U] 
           & __Vtemp_2[7U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_signProd 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[2U] 
            ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[2U]) 
           ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_fmaCmd) 
              >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_1 
        = (0x3fffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                        >> 0x14U) + (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                     >> 0x14U)) - (IData)(0x7c8U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1717(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1717\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in1[0U] 
        = (IData)(((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                      >> 0x1fU))) << 0x20U) 
                    | (QData)((IData)(((0x80000000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                           << 0xbU)) 
                                       | (0x7fffffffU 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                   | ((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[2U] 
                                           << 4U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                           >> 0x1cU))))
                       ? 0ULL : 0xe0400000ULL)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in1[1U] 
        = (IData)((((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                       >> 0x1fU))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0x80000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                       << 0xbU)) 
                                                   | (0x7fffffffU 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U]))))) 
                    | ((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[2U] 
                                            << 4U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                              >> 0x1cU))))
                        ? 0ULL : 0xe0400000ULL)) >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in1[2U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in1_expOut_expCode 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                  >> 0x12U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                      >> 0x1dU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fpiu_io_in_bits_req_in1_expOut_commonCase_T_2 
        = (0xfffU & ((IData)(0x700U) + ((0x100U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[1U] 
                                                   >> 0xcU)) 
                                        | (0xffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R2_data[0U] 
                                            >> 0x17U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in2[0U] 
        = (IData)(((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                      >> 0x1fU))) << 0x20U) 
                    | (QData)((IData)(((0x80000000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                           << 0xbU)) 
                                       | (0x7fffffffU 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U]))))) 
                   | ((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[2U] 
                                           << 4U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                           >> 0x1cU))))
                       ? 0ULL : 0xe0400000ULL)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in2[1U] 
        = (IData)((((((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                       >> 0x1fU))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0x80000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                                       << 0xbU)) 
                                                   | (0x7fffffffU 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U]))))) 
                    | ((0x1fU == (0x1fU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[2U] 
                                            << 4U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                              >> 0x1cU))))
                        ? 0ULL : 0xe0400000ULL)) >> 0x20U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT____Vcellinp__sfma__io_in_bits_in2[2U] = 0U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu_io_in_bits_req_in2_expOut_expCode 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                  >> 0x12U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                      >> 0x1dU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___fpiu_io_in_bits_req_in2_expOut_commonCase_T_2 
        = (0xfffU & ((IData)(0x700U) + ((0x100U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[1U] 
                                                   >> 0xcU)) 
                                        | (0xffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT___regfile_ext_R1_data[0U] 
                                            >> 0x17U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1718(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1718\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_swap23 
            = (0xfffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___decoder_decoded_T_6));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren3 
            = (0x1fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fp_decoder__DOT___decoder_decoded_T));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he47dfd16__0 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 
            << 1U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h0863dd5d__0 
            << 2U) | (QData)((IData)((1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___common_underflow_T_4) 
                                            << 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x1fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                          - (((0x2000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                              | ((0x1000000U & ((0xff000000U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                                                | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                    & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))) 
                                                   << 0x18U))) 
                                 | (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                                     ? 0U
                                                     : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z))))) 
                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                    << 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h81b9d7ae__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1719(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1719\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h81b9d7ae__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_21 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_pf_inst) 
            << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_gf_inst) 
                       << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hc7dfad2e__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictJump) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictReturn));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hfdfba2fc__0) 
               & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall) 
                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn))) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hfdfba2fc__0) 
               & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI_1) 
                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviCall_1) 
                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rviReturn_1))) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid_1) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR_1) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1720(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1720\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__tlb__io_req_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__isZero_Z) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTS_III(4, 2U, (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                        >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN 
        = ((((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                     >> 0x12U)))) << 5U) 
            | (((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0xeU)))) 
                << 4U) | (((IData)((0U != (0xfU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 0xaU)))) 
                           << 3U) | (((IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 6U)))) 
                                      << 2U) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                              >> 2U)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))))) 
           & ((0x20U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                 >> 0xeU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0xfU)) << 4U)) 
                 | ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0x10U)) << 3U)) 
                    | ((4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                       >> 0x11U)) << 2U)) 
                       | ((2U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                          >> 0x12U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                                          >> 0x13U)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1721(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1721\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h1fd5dacb__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_pipe_b_isZero) 
           | VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & (VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp)) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                 | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_pipe_b)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTS_III(4, 2U, (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                        >> 7U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x7fffffffffffffULL & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T) 
                                    & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)) 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                                   ? ((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
                                        & ((~ (IData)(
                                                      (0U 
                                                       != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T))) 
                                           & (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T)))
                                        ? (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___GEN_2)
                                        : 0x7fffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                                     >> 1U) 
                                                    | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he47dfd16__0))))
                                   : ((0x3fffffffffffffULL 
                                       & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_he47dfd16__0) 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                             >> 1U))) 
                                      | (((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__roundingMode_Z)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h27edd7a7__0
                                          : 0ULL))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_0[0U] 
        = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h9833eedd__0)) 
                    << 0x34U) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
                                  >> 0x1fU) ? (0xfffffffffffffULL 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                  : 0ULL)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_0[1U] 
        = ((0xefefffffU | (- (IData)((7U != (7U & ((IData)(vlSelf->__VdfgTmp_h9833eedd__0) 
                                                   >> 9U)))))) 
           & (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h9833eedd__0)) 
                        << 0x34U) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
                                      >> 0x1fU) ? (0xfffffffffffffULL 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                      : 0ULL)) >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT___GEN_0[2U] 
        = ((1U | (- (IData)((7U != (7U & ((IData)(vlSelf->__VdfgTmp_h9833eedd__0) 
                                          >> 9U)))))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_sign));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1722(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1722\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_6 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h72b9d335__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h05e4c8f4__0 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h72b9d335__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he17b0cdf__0 
        = ((0x400U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x15U)) << 0xaU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h0074be98__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hb66410c3__0 
        = ((0x400U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h0074be98__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_118 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h184c6a56__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_120 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h184c6a56__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_122 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he149b148__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_124 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_he149b148__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_126 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8b804e1c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_128 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h8b804e1c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_130 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h500d5586__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_132 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h500d5586__0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1723(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1723\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_106 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hef9ee057__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_104 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hef9ee057__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_108 
        = ((0x800U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x14U)) << 0xbU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hbffacb4b__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___decoded_decoded_T_110 
        = ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_hbffacb4b__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h3688b5dc__0 
        = ((0x200U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                      >> 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h63d6404d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h7544da5c__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT____VdfgTmp_h63d6404d__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & ((~ ((0U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                        >> 0x26U)))) 
                  | (3U == (3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                          >> 0x26U)))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_satp_mode) 
                 >> 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__samePage 
        = ((0x1ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__r_btb_update_pipe_b_pc 
                                  >> 0xeU))) == (0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__res_value 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
            >> 9U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory
           [(((0x1fcU & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 4U)) << 2U)) | 
              (3U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                              >> 2U)) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 0xbU))))) 
             ^ (0x1c0U & (((IData)(0xddU) * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__history)) 
                          << 1U)))]);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1724(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1724\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_118 
        = (0x7ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_vpn 
                         ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                    >> 0xcU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_58 
        = (0x3ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_vpn 
                        >> 9U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                          >> 0x15U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_18 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_73 
        = (0x3ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_vpn 
                        >> 9U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                          >> 0x15U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_88 
        = (0x3ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_vpn 
                        >> 9U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                          >> 0x15U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_36 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_103 
        = (0x3ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_vpn 
                        >> 9U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                          >> 0x15U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_24 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_6 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1725(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1725\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_12 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_30 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___hitsVec_T_42 
        = (0x1ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_vpn 
                          >> 2U) ^ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                            >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___pageHit_T_5 
        = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_5 
           == (0x1ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                     >> 0xeU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT____VdfgTmp_h7a058903__0 
        = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_4 
             == (0x1ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                       >> 0xeU)))) 
            << 4U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_3 
                        == (0x1ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                  >> 0xeU)))) 
                       << 3U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_2 
                                   == (0x1ffffffU & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                             >> 0xeU)))) 
                                  << 2U) | (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_1 
                                              == (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                             >> 0xeU)))) 
                                             << 1U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__pages_0 
                                               == (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xeU))))))));
    __Vtemp_3[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0);
    __Vtemp_3[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0 
                                          >> 0x20U)));
    __Vtemp_3[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_3[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_3[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_3[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3 
                              >> 0x20U)) >> 2U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
        = ((0xa7U >= (0xffU & ((IData)(0x2aU) * (3U 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU))))))
            ? (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_3[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_3[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))))
            : 0ULL);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1726(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1726\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_9;
    // Body
    __Vtemp_3[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0);
    __Vtemp_3[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0 
                                          >> 0x20U)));
    __Vtemp_3[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_3[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_3[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_3[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3 
                              >> 0x20U)) >> 2U);
    __Vtemp_6[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0);
    __Vtemp_6[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0 
                                          >> 0x20U)));
    __Vtemp_6[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_6[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_6[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_6[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3 
                              >> 0x20U)) >> 2U);
    __Vtemp_9[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0);
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0 
                                          >> 0x20U)));
    __Vtemp_9[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_9[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_9[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_9[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3 
                              >> 0x20U)) >> 2U);
    if ((0xa7U >= (0xffU & ((IData)(0x2aU) * (3U & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_3[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_3[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_6[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_6[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_6[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_9[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_9[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_9[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 = 0ULL;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1727(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1727\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_3;
    VlWide<6>/*191:0*/ __Vtemp_6;
    VlWide<6>/*191:0*/ __Vtemp_9;
    // Body
    __Vtemp_3[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_0);
    __Vtemp_3[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_0 
                                          >> 0x20U)));
    __Vtemp_3[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_3[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_3[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_3[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3 
                              >> 0x20U)) >> 2U);
    __Vtemp_6[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_0);
    __Vtemp_6[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_0 
                                          >> 0x20U)));
    __Vtemp_6[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_6[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_6[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_6[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3 
                              >> 0x20U)) >> 2U);
    __Vtemp_9[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_0);
    __Vtemp_9[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_0 
                                          >> 0x20U)));
    __Vtemp_9[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_9[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_9[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_9[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3 
                              >> 0x20U)) >> 2U);
    if ((0xa7U >= (0xffU & ((IData)(0x2aU) * (3U & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU))))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_3[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_3[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_6[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_6[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_6[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
            = (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_9[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_9[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_9[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 = 0ULL;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1728(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1728\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_3;
    // Body
    __Vtemp_3[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0);
    __Vtemp_3[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1) 
                      << 0xaU) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0 
                                          >> 0x20U)));
    __Vtemp_3[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2) 
                      << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1) 
                                    >> 0x16U) | ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1 
                                                          >> 0x20U)) 
                                                 << 0xaU)));
    __Vtemp_3[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3) 
                      << 0x1eU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2) 
                                    >> 0xcU) | ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2 
                                                         >> 0x20U)) 
                                                << 0x14U)));
    __Vtemp_3[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3) 
                      >> 2U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3 
                                         >> 0x20U)) 
                                << 0x1eU));
    __Vtemp_3[5U] = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3 
                              >> 0x20U)) >> 2U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
        = ((0xa7U >= (0xffU & ((IData)(0x2aU) * (3U 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU))))))
            ? (0x3ffffffffffULL & (((QData)((IData)(
                                                    __Vtemp_3[
                                                    (((IData)(0x29U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x2aU) 
                                                          * 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                      >> 0xcU)))))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & ((IData)(0x2aU) 
                                                   * 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                               >> 0xcU))))))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((IData)(0x2aU) 
                                             * (3U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0xcU)))))))) 
                                   | (((0U == (0x1fU 
                                               & ((IData)(0x2aU) 
                                                  * 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU))))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_3[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x2aU) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                                >> 0xcU)))))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x2aU) 
                                                       * 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                   >> 0xcU)))))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_3[
                                                         (7U 
                                                          & (((IData)(0x2aU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                                          >> 0xcU)))) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & ((IData)(0x2aU) 
                                                * (3U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                              >> 0xcU)))))))))
            : 0ULL);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_0) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_7) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_14 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_14) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_1) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_2) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_3) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_4) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_5) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_6) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1729(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1729\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_8) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_9) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_10) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_11 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_11) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_12) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_13 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_13) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_15 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_15) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_21 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_21) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_16 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_16) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_17 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_17) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_18 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_18) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_19 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_19) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_20 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_20) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1730(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1730\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_22 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_22) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_23 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_23) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_24 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_24) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_25 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_25) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_26 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_26) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxHit_T_27 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxs_27) 
           == (0x1fffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                  >> 1U))));
    vlSelf->__VdfgTmp_hf62503d5__0 = ((0xc0000U & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                            >> 0x28U)) 
                                                   << 0x12U)) 
                                      | ((0x3fe00U 
                                          & ((((0U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level))
                                                ? (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                           >> 0x15U))
                                                : 0U) 
                                              | (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                         >> 0x1fU))) 
                                             << 9U)) 
                                         | (0x1ffU 
                                            & (((2U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level))
                                                 ? 0U
                                                 : (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                            >> 0xcU))) 
                                               | (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                          >> 0x16U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_34 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_npc_misaligned));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_flush 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_34) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___taken_T_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predictBranch_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_hed2dbd38__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1731(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1731\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN_22 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___bpu_io_xcpt_if) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_pf_inst) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_ae_inst) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt0_gf_inst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___fp_data_hazard_wb_T_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd) 
           == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst 
                        >> 7U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___fp_data_hazard_mem_T_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd) 
           == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                        >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_hb57cac85__0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2 
            = (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                        >> 0x14U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2 
            = (0x1fU & (((0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                         | ((0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                            | ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                               | ((0x14U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                  | ((0x13U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                     | ((0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                        | ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                           | (0x10U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))))))))
                         ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                            >> 2U) : (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                       | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))
                                       ? 0U : (8U | 
                                               (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                   >> 2U))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            = ((0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                ? (0x13023U | ((0x1c000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                               << 0x13U)) 
                               | ((0x2000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0xdU)) 
                                  | ((0x1f00000U & 
                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x12U)) | 
                                     (0xc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                : ((0x16U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                    ? (0x12023U | ((0xc000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                  << 0x13U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                        << 0xdU)) | 
                                      ((0x1f00000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x12U)) 
                                       | (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                    : ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                        ? (0x13027U | ((0x1c000000U 
                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0x12U)) 
                                             | (0xc00U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)))))
                        : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_42_bits)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1732(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1732\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___GEN_139) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_need_gpa 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___GEN_139) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__r_need_gpa 
            = (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits));
    }
    if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_ptw_req_valid = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_bits_bits_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__r_refill_tag;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_ptw_req_valid = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_bits_bits_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_refill_tag;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_32 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_ready_T_2 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__l2_refill))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)) 
           | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_s1_kill 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s1_id)) 
           && (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v 
        = (1U & ((~ ((IData)((0ULL != (0xeULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data))) 
                     & (((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count) 
                             >> 1U)) & (0U != (0x1ffU 
                                               & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                          >> 0xaU))))) 
                        | ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count)) 
                           & (0U != (0x1ffU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                       >> 0x13U)))))))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data)));
}
