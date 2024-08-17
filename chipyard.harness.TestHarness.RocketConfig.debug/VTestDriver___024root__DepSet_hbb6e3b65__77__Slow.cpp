// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__804(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__804\n"); );
    // Body
    vlSelf->__VdfgTmp_h2aaa9915__0 = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source 
        = ((0x3ff0U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             << 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                       << 4U)) | ((8U & ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle)
                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r))) 
                                         << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->__VdfgTmp_h57b9b0e6__0 = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__805(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__805\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_hi 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
           & (4U | (3U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                             >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_6_a_valid) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)) 
              & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 0xaU)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_6_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bus_named_pbus_bus_xing_out_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_5_a_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_a_valid) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)) 
              & ((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 0xaU)) == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_hi 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
           & (4U | (3U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                             >> 1U)))));
    vlSelf->__VdfgTmp_hf8641a95__0 = (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address) 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__806(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__806\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop 
        = ((4U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode)) 
           & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
            << 4U) | ((8U & ((~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r))) 
                             << 3U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode) 
            >> 2U) & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_hi 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
           & (4U | (3U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                             >> 1U)))));
    vlSelf->__VdfgTmp_h4ea0fea1__0 = (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                               | (0x38U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0) 
                                                       | (0x3ffU 
                                                          & (((IData)(0x3fU) 
                                                              << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                                             >> 3U)))) 
                                                     << 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop 
        = ((4U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode)) 
           & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h6d6b088d__0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size))
            ? (- (IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed) 
                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                             >> 0x1fU)))) : (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word 
                                                     >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed_1 
        = (0xffffU & ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                     >> 1U))) ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                                                 >> 0x10U)
                       : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__807(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__807\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h6d6b088d__0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_size))
            ? (- (IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_signed) 
                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__cache_resp_bits_data_zeroed 
                             >> 0x1fU)))) : (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_data_word 
                                                     >> 0x20U)));
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 0x18U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                  >> 0x17U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 8U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                               >> 7U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_h7c18a2f8__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & ((0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
               | ((0x67U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                  | ((0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken))))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken)))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__808(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__808\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__inst 
        = ((3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))
            ? (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1 
        = (1U & ((((3U & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
                   - (IData)(1U)) & (3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                           - (IData)(1U)) >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_pf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_he138e84a__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_gf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h197a38ca__0));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 7U)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   >> 7U)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      >> 7U)))) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         >> 7U)))) 
                                                     << 0x28U) 
                                                    | (0xffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           (8U 
                                                                            | (7U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              (8U 
                                                                               | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                              << 0x1eU) 
                                                             | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                 << 0x19U) 
                                                                | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                    << 0x14U) 
                                                                   | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                       << 0xfU) 
                                                                      | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                          << 0xaU) 
                                                                         | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                             << 5U) 
                                                                            | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))));
    __Vtemp_1[1U] = (0x80000000U | (IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  >> 7U)))) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     >> 7U)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 7U)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                           >> 7U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                              >> 7U)))) 
                                                          << 0x28U) 
                                                         | (0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                   << 0x1eU) 
                                                                  | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                      << 0x19U) 
                                                                     | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                         << 0x14U) 
                                                                        | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                            << 0xfU) 
                                                                           | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                               << 0xaU) 
                                                                              | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                                << 5U) 
                                                                                | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_13[3U] = ((0xe0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0x16U)) | 
                      ((0x1f000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x11U)) | 
                       ((0xf80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0xcU)) | (
                                                   (0x7c000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 7U)) 
                                                   | ((0x3e00U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 2U)) 
                                                      | ((0x1f0U 
                                                          & (((0x1000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
                                                               ? 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 1U)
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 0U)) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 8U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[0U] 
        = __Vtemp_1[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[2U] 
        = (0x200U | ((0x80000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     << 0x18U)) | (
                                                   (0x7c000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 0x13U)) 
                                                   | ((0x3e00000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 0xeU)) 
                                                      | ((0x1f0000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             << 9U)) 
                                                         | (0x1c0U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 1U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[3U] 
        = __Vtemp_13[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[4U] 
        = ((0xf8000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                           << 0x14U)) | ((0x7c00000U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                             << 0xfU)) 
                                         | ((0x3e0000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 0xaU)) 
                                            | ((0x1f000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                   << 5U)) 
                                               | ((0xf80U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                  | ((0x7cU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         >> 5U)) 
                                                     | (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                           >> 0xaU))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__810(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__810\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                  >> 0xaU)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0 
        = ((0xf80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
           | ((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                               >> 7U))) ? 3U : 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0 
        = (0x63U | ((0xc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                    | ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                  << 5U)) | (0x80U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 5U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2 
        = ((0x18U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                     << 3U)) | (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      >> 0xdU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 0x18U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                  >> 0x17U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 8U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                               >> 7U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_h7c18a2f8__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & ((0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
               | ((0x67U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                  | ((0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken))))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken)))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__811(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__811\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__inst 
        = ((3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))
            ? (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1 
        = (1U & ((((3U & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
                   - (IData)(1U)) & (3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                           - (IData)(1U)) >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_pf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_he138e84a__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_gf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h197a38ca__0));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 7U)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   >> 7U)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      >> 7U)))) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         >> 7U)))) 
                                                     << 0x28U) 
                                                    | (0xffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           (8U 
                                                                            | (7U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              (8U 
                                                                               | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                              << 0x1eU) 
                                                             | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                 << 0x19U) 
                                                                | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                    << 0x14U) 
                                                                   | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                       << 0xfU) 
                                                                      | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                          << 0xaU) 
                                                                         | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                             << 5U) 
                                                                            | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))));
    __Vtemp_1[1U] = (0x80000000U | (IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  >> 7U)))) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     >> 7U)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 7U)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                           >> 7U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                              >> 7U)))) 
                                                          << 0x28U) 
                                                         | (0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                   << 0x1eU) 
                                                                  | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                      << 0x19U) 
                                                                     | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                         << 0x14U) 
                                                                        | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                            << 0xfU) 
                                                                           | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                               << 0xaU) 
                                                                              | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                                << 5U) 
                                                                                | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_13[3U] = ((0xe0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0x16U)) | 
                      ((0x1f000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x11U)) | 
                       ((0xf80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0xcU)) | (
                                                   (0x7c000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 7U)) 
                                                   | ((0x3e00U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 2U)) 
                                                      | ((0x1f0U 
                                                          & (((0x1000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
                                                               ? 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 1U)
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 0U)) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 8U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[0U] 
        = __Vtemp_1[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[2U] 
        = (0x200U | ((0x80000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     << 0x18U)) | (
                                                   (0x7c000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 0x13U)) 
                                                   | ((0x3e00000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 0xeU)) 
                                                      | ((0x1f0000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             << 9U)) 
                                                         | (0x1c0U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 1U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[3U] 
        = __Vtemp_13[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[4U] 
        = ((0xf8000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                           << 0x14U)) | ((0x7c00000U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                             << 0xfU)) 
                                         | ((0x3e0000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 0xaU)) 
                                            | ((0x1f000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                   << 5U)) 
                                               | ((0xf80U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                  | ((0x7cU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         >> 5U)) 
                                                     | (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                           >> 0xaU))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__813(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__813\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                  >> 0xaU)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0 
        = ((0xf80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
           | ((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                               >> 7U))) ? 3U : 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0 
        = (0x63U | ((0xc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                    | ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                  << 5U)) | (0x80U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 5U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2 
        = ((0x18U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                     << 3U)) | (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      >> 0xdU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__bs_adr_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp) 
           & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter)) 
              | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__empty)) 
                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__empty)) 
              & (((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter)))) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_h28a0dc67__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_h7cdc56a0__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__empty))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR_1) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 0x18U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                                  >> 0x17U)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__814(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__814\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcReturn 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
           & (1U == ((0xcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                              >> 8U)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                               >> 7U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____VdfgTmp_h7c18a2f8__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_prevRVI) 
            & ((0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
               | ((0x67U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                  | ((0x63U == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_partial_insn))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken))))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_valid) 
              & ((0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN_1)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJALR) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcJR) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_rvcBranch) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_predict_taken)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__inst 
        = ((3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))
            ? (0xffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT___GEN_1 
        = (1U & ((((3U & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
                   - (IData)(1U)) & (3U != (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst))) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
                           - (IData)(1U)) >> 1U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__815(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__815\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_13;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_pf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_he138e84a__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_gf_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h197a38ca__0));
    __Vtemp_1[0U] = (IData)((((QData)((IData)((7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 7U)))) 
                              << 0x3cU) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)))) 
                                            << 0x37U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                   >> 7U)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                      >> 7U)))) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                         >> 7U)))) 
                                                     << 0x28U) 
                                                    | (0xffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           (8U 
                                                                            | (7U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                           << 0x23U) 
                                                          | (((QData)((IData)(
                                                                              (8U 
                                                                               | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                              << 0x1eU) 
                                                             | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                 << 0x19U) 
                                                                | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                    << 0x14U) 
                                                                   | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                       << 0xfU) 
                                                                      | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                          << 0xaU) 
                                                                         | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                             << 5U) 
                                                                            | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))));
    __Vtemp_1[1U] = (0x80000000U | (IData)(((((QData)((IData)(
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                  >> 7U)))) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                     >> 7U)))) 
                                                 << 0x37U) 
                                                | (((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                        >> 7U)))) 
                                                    << 0x32U) 
                                                   | (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                           >> 7U)))) 
                                                       << 0x2dU) 
                                                      | (((QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                              >> 7U)))) 
                                                          << 0x28U) 
                                                         | (0xffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                << 0x23U) 
                                                               | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                   << 0x1eU) 
                                                                  | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                      << 0x19U) 
                                                                     | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                         << 0x14U) 
                                                                        | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                            << 0xfU) 
                                                                           | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                               << 0xaU) 
                                                                              | (((QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U))))) 
                                                                                << 5U) 
                                                                                | (QData)((IData)(
                                                                                (8U 
                                                                                | (7U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                                >> 2U)))))))))))))))))) 
                                            >> 0x20U)));
    __Vtemp_13[3U] = ((0xe0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0x16U)) | 
                      ((0x1f000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x11U)) | 
                       ((0xf80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      << 0xcU)) | (
                                                   (0x7c000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 7U)) 
                                                   | ((0x3e00U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 2U)) 
                                                      | ((0x1f0U 
                                                          & (((0x1000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)
                                                               ? 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 1U)
                                                               : 
                                                              ((0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                    >> 2U)))
                                                                ? 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                                >> 7U)
                                                                : 0U)) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 8U))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[0U] 
        = __Vtemp_1[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[2U] 
        = (0x200U | ((0x80000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     << 0x18U)) | (
                                                   (0x7c000000U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                       << 0x13U)) 
                                                   | ((0x3e00000U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                          << 0xeU)) 
                                                      | ((0x1f0000U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                             << 9U)) 
                                                         | (0x1c0U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                               >> 1U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[3U] 
        = __Vtemp_13[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1[4U] 
        = ((0xf8000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                           << 0x14U)) | ((0x7c00000U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                             << 0xfU)) 
                                         | ((0x3e0000U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                << 0xaU)) 
                                            | ((0x1f000U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                   << 5U)) 
                                               | ((0xf80U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                                                  | ((0x7cU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                         >> 5U)) 
                                                     | (3U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                           >> 0xaU))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__817(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__817\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_s_funct_T_2 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                  >> 0xaU)) | (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                     >> 5U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h5115230c__0 
        = ((0xf80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
           | ((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                               >> 7U))) ? 3U : 0x1fU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT____VdfgTmp_h8bcf0086__0 
        = (0x63U | ((0xc00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst) 
                    | ((0x300U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                  << 5U)) | (0x80U 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                                >> 5U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2 
        = ((0x18U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                     << 3U)) | (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst 
                                      >> 0xdU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_114 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_a_valid) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_b_valid) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_c_valid) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_d_valid) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_e_valid) 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_x_valid) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_dir_valid))))))) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_valid) 
                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_set) 
                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_set))) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_valid) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_set) 
                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_set))))) 
              & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_a_valid)) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__full))) 
                 & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_b_valid)) 
                     | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain))))) 
                    & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_c_valid)) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceC_io_req_ready)) 
                       & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_d_valid)) 
                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy))) 
                          & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_e_valid)) 
                              | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__full))) 
                             & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_x_valid)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__full))) 
                                & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_4_io_schedule_bits_dir_valid)) 
                                   | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__full)))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__818(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__818\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_160 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_a_valid) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_b_valid) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_c_valid) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_d_valid) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_e_valid) 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_x_valid) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_dir_valid))))))) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_a_valid)) 
               | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__full))) 
              & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_b_valid)) 
                  | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain))))) 
                 & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_c_valid)) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceC_io_req_ready)) 
                    & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_d_valid)) 
                        | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy))) 
                       & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_e_valid)) 
                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__full))) 
                          & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_x_valid)) 
                              | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__full))) 
                             & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_6_io_schedule_bits_dir_valid)) 
                                | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__full))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_request_T_137 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_a_valid) 
            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_b_valid) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_c_valid) 
                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_d_valid) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_e_valid) 
                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_x_valid) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_dir_valid))))))) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_valid) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_set) 
                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_set)))) 
              & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_a_valid)) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__full))) 
                 & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_b_valid)) 
                     | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain))))) 
                    & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_c_valid)) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceC_io_req_ready)) 
                       & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_d_valid)) 
                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy))) 
                          & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_e_valid)) 
                              | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__full))) 
                             & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_x_valid)) 
                                 | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__full))) 
                                & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshrs_5_io_schedule_bits_dir_valid)) 
                                   | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write_q__DOT__full)))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__821(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__821\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft))
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_0_valid)))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_0) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_valid)) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_3) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_0_valid))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_0_valid) 
            << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_valid) 
                       << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_1_valid)))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_2) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_valid)) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_3) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_1_valid))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_1_valid) 
            << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_valid) 
                       << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__beatsLeft))
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_valid))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_0) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__state_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__winner_0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__a_a_valid));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__822(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__822\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___freeIdx_T_3 
        = (0x7fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__freeIdx_lo) 
                     >> 9U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__freeIdx_lo) 
                               >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_49 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
           & ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__source_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__source_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx) 
              != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
                   << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                              << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN 
        = ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used) 
           & (1ULL | ((QData)((IData)((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_12 
                                          | VL_SHIFTL_III(32,32,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_12, 0x10U))))) 
                      << 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN 
        = ((((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                     >> 0x12U)))) << 5U) 
            | (((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0xeU)))) 
                << 4U) | (((IData)((0U != (0xfU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 0xaU)))) 
                           << 3U) | (((IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 6U)))) 
                                      << 2U) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                              >> 2U)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))))) 
           & ((0x20U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                 >> 0xeU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0xfU)) << 4U)) 
                 | ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0x10U)) << 3U)) 
                    | ((4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                       >> 0x11U)) << 2U)) 
                       | ((2U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                          >> 0x12U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                                          >> 0x13U)))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__824(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__824\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN 
        = ((((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                     >> 0x10U)))) << 0xcU) 
            | (((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                        >> 0xcU)))) 
                << 0xbU) | (((IData)((0U != (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                              >> 8U)))) 
                             << 0xaU) | (((IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                       >> 4U)))) 
                                          << 9U) | 
                                         (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U]))) 
                                           << 8U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                      >> 0x1cU))) 
                                            << 7U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                            >> 0x18U)))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                               >> 0x14U)))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                  >> 0x10U)))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                     >> 0xcU)))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                        >> 8U)))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                           >> 4U)))) 
                                                              << 1U) 
                                                             | (0U 
                                                                != 
                                                                (0xfU 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))))))))) 
           & ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                          >> 0xcU)) | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                  >> 0xeU)) 
                                       | ((0x400U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                            >> 0x10U)) 
                                          | ((0x200U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                 >> 0x12U)) 
                                             | ((0x100U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                    >> 0x14U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                       >> 0x16U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                          >> 0x18U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                             >> 0x1aU)) 
                                                         | ((0x10U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                   << 2U)) 
                                                               | ((4U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U]) 
                                                                  | ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                           >> 4U)))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__825(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__825\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN 
        = ((((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                     >> 0x12U)))) << 5U) 
            | (((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                        >> 0xeU)))) 
                << 4U) | (((IData)((0U != (0xfU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 0xaU)))) 
                           << 3U) | (((IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                   >> 6U)))) 
                                      << 2U) | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                              >> 2U)))) 
                                                 << 1U) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))))) 
           & ((0x20U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                 >> 0xeU)) << 5U)) 
              | ((0x10U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0xfU)) << 4U)) 
                 | ((8U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                    >> 0x10U)) << 3U)) 
                    | ((4U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                       >> 0x11U)) << 2U)) 
                       | ((2U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                          >> 0x12U)) 
                                 << 1U)) | (1U & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
                                                          >> 0x13U)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___GEN 
        = ((((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                     >> 0x10U)))) << 0xcU) 
            | (((IData)((0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                        >> 0xcU)))) 
                << 0xbU) | (((IData)((0U != (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                              >> 8U)))) 
                             << 0xaU) | (((IData)((0U 
                                                   != 
                                                   (0xfU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                       >> 4U)))) 
                                          << 9U) | 
                                         (((IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U]))) 
                                           << 8U) | 
                                          (((IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                      >> 0x1cU))) 
                                            << 7U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                            >> 0x18U)))) 
                                               << 6U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                               >> 0x14U)))) 
                                                  << 5U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                  >> 0x10U)))) 
                                                     << 4U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                     >> 0xcU)))) 
                                                        << 3U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                        >> 8U)))) 
                                                           << 2U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U] 
                                                                           >> 4U)))) 
                                                              << 1U) 
                                                             | (0U 
                                                                != 
                                                                (0xfU 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))))))))) 
           & ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                          >> 0xcU)) | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                  >> 0xeU)) 
                                       | ((0x400U & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                            >> 0x10U)) 
                                          | ((0x200U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                 >> 0x12U)) 
                                             | ((0x100U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                    >> 0x14U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                       >> 0x16U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                          >> 0x18U)) 
                                                      | ((0x20U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
                                                             >> 0x1aU)) 
                                                         | ((0x10U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                   << 2U)) 
                                                               | ((4U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U]) 
                                                                  | ((2U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                         >> 2U)) 
                                                                     | (1U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
                                                                           >> 4U)))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__826(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__826\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_28 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__d_first_counter_1)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_15 
        = (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_12 
                              | VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_12, 0x10U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__index 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T) 
           ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
              << 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
            << 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__index 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T) 
           ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
              << 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
            << 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__index 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T) 
           ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
              << 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT____VdfgTmp_h4434c2cc__0) 
            << 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT___index_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_d_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_data 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__full)
            ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                << 0x2bU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                              << 0xbU) | ((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                          >> 0x15U)))
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_d_bits_data);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_5_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_0_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3) 
           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_5_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_0_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3) 
           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__827(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__827\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_5_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___wb_req_arb_io_in_0_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__wb_req_arb__DOT___grant_T_3) 
           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__VdfgTmp_hfe3ace25__0) 
                                                    >> 3U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__VdfgTmp_hfe3ace25__0) 
                                                          >> 2U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_hfe3ace25__0) 
                                                                          >> 1U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__VdfgTmp_hfe3ace25__0))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h6f0cee50__0))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                                                >> 2U))) 
                                                                                & (IData)(vlSelf->__VdfgTmp_ha2485eba__0))))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)((IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_hc2889e75__0))))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)((IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__VdfgTmp_h2048cec4__0) 
                                                    >> 3U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__VdfgTmp_h2048cec4__0) 
                                                          >> 2U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h2048cec4__0) 
                                                                          >> 1U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h2048cec4__0))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h6f0cee50__0))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                                                >> 2U))) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h2e11d344__0))))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)((IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_hac97ff42__0))))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)((IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__828(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__828\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT__wmask 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__VdfgTmp_h4d72e706__0) 
                                                    >> 3U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__VdfgTmp_h4d72e706__0) 
                                                          >> 2U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h4d72e706__0) 
                                                                          >> 1U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h4d72e706__0))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__amoalu__DOT____VdfgTmp_h6f0cee50__0))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr 
                                                                                >> 2U))) 
                                                                                & (IData)(vlSelf->__VdfgTmp_h2d1bd722__0))))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)((IData)(
                                                                                ((0ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)) 
                                                                                & (IData)(vlSelf->__VdfgTmp_hda87fa07__0))))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)((IData)(
                                                                                (0ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_req_addr)))))))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT___dmInner_auto_dmi_in_d_bits_data 
        = ((1U & ((0U == (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 0x27U))))
                   ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                              >> 0x2dU)) : ((~ ((4U 
                                                 == 
                                                 (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                             >> 0x27U)))) 
                                                | ((5U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                >> 0x27U)))) 
                                                   | ((6U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                   >> 0x27U)))) 
                                                      | ((7U 
                                                          == 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                      >> 0x27U)))) 
                                                         | ((8U 
                                                             == 
                                                             (0x3fU 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                         >> 0x27U)))) 
                                                            | ((9U 
                                                                == 
                                                                (0x3fU 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                            >> 0x27U)))) 
                                                               | ((0xaU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                               >> 0x27U)))) 
                                                                  | ((0xbU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                     | ((0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                        | ((0x13U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                           | ((0x16U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                              | ((0x17U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x18U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x20U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x21U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x22U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x24U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x25U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x26U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x27U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x28U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x29U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2cU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | ((0x2fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))) 
                                                                                | (0x32U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                                >> 0x27U)))))))))))))))))))))))))))))))))) 
                                            | (~ (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x2dU))))))
            ? ((0U == (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x27U))))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs)
                : ((4U == (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                            >> 0x27U))))
                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT____VdfgTmp_h904f7711__0
                    : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_5))
            : 0U);
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h5b97e007_0;

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__829(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__829\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<8>/*255:0*/ __Vtemp_9;
    VlWide<8>/*255:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<8>/*255:0*/ __Vtemp_15;
    // Body
    __Vtemp_2[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_2[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_3[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_3[3U]);
    __Vtemp_4[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U];
    __Vtemp_4[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U];
    __Vtemp_4[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U];
    __Vtemp_4[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U];
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    VL_SHIFTL_WWI(236,236,7, __Vtemp_5, __Vtemp_4, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[0U] 
           & __Vtemp_5[0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[1U] 
           & __Vtemp_5[1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[2U] 
           & __Vtemp_5[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[3U] 
           & __Vtemp_5[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[4U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[4U] 
           & __Vtemp_5[4U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[5U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[5U] 
           & __Vtemp_5[5U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[6U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[6U] 
           & __Vtemp_5[6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[7U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[7U] 
           & __Vtemp_5[7U]);
    __Vtemp_7[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_7[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                             >> 0x20U));
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_8, __Vtemp_7, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_8[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_8[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_8[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_8[3U]);
    __Vtemp_9[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U];
    __Vtemp_9[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U];
    __Vtemp_9[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U];
    __Vtemp_9[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U];
    __Vtemp_9[4U] = 0U;
    __Vtemp_9[5U] = 0U;
    __Vtemp_9[6U] = 0U;
    __Vtemp_9[7U] = 0U;
    VL_SHIFTL_WWI(236,236,7, __Vtemp_10, __Vtemp_9, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[0U] 
           & __Vtemp_10[0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[1U] 
           & __Vtemp_10[1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[2U] 
           & __Vtemp_10[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[3U] 
           & __Vtemp_10[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[4U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[4U] 
           & __Vtemp_10[4U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[5U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[5U] 
           & __Vtemp_10[5U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[6U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[6U] 
           & __Vtemp_10[6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[7U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[7U] 
           & __Vtemp_10[7U]);
    __Vtemp_12[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum);
    __Vtemp_12[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum 
                              >> 0x20U));
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    VL_SHIFTL_WWI(114,114,6, __Vtemp_13, __Vtemp_12, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = __Vtemp_13[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = __Vtemp_13[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = __Vtemp_13[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (0x3ffffU & __Vtemp_13[3U]);
    __Vtemp_14[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[0U];
    __Vtemp_14[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[1U];
    __Vtemp_14[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[2U];
    __Vtemp_14[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_absSigSum[3U];
    __Vtemp_14[4U] = 0U;
    __Vtemp_14[5U] = 0U;
    __Vtemp_14[6U] = 0U;
    __Vtemp_14[7U] = 0U;
    VL_SHIFTL_WWI(236,236,7, __Vtemp_15, __Vtemp_14, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT__notCDom_normDistReduced2) 
                   << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[0U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[0U] 
           & __Vtemp_15[0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[1U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[1U] 
           & __Vtemp_15[1U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[2U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[2U] 
           & __Vtemp_15[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[3U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[3U] 
           & __Vtemp_15[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[4U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[4U] 
           & __Vtemp_15[4U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[5U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[5U] 
           & __Vtemp_15[5U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[6U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[6U] 
           & __Vtemp_15[6U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___notCDom_mainSig_T[7U] 
        = (VTestDriver__ConstPool__CONST_h5b97e007_0[7U] 
           & __Vtemp_15[7U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_15 
        = (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_12 
                              | VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___freeOH_T_12, 0x10U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_isSupported)) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__beatsLeft))
            ? ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__winner_1 
        = ((2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_3) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__830(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__830\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_3) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_3) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T) 
                                   >> 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7)) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4 
        = (IData)((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83 
        = ((0xf000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                       >> 0x10U)) | (0xfffU & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0x10U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T) 
                                   >> 1U) : 0U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__831(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__831\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7)) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4 
        = (IData)((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83 
        = ((0xf000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                       >> 0x10U)) | (0xfffU & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0x10U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx 
        = ((0xfffffff8U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0) 
                            << 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T))) 
           | (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T)
                      : 0U) ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_valid__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT___widx_incremented_T) 
                                   >> 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1 
        = ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7)) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4 
        = (IData)((6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83 
        = ((0xf000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                       >> 0x10U)) | (0xfffU & (0x800U 
                                               ^ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0x10U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__832(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__832\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h3f6fcfea__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__resetSynchronizer__DOT__nodeOut_member_allClocks_uncore_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_opcode)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_first_counter)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) 
           & ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___GEN_51 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___GEN_40 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_npc_misaligned 
        = (1U & ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                             >> 2U))) & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence)) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4 
                                                    >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1));
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_hf7a460f1_0;

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__833(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__833\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_npc_misaligned 
        = (1U & ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                             >> 2U))) & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence)) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4 
                                                    >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_npc_misaligned 
        = (1U & ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                             >> 2U))) & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_sfence)) 
                                         & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4 
                                                    >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_paddr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)));
    VL_SHIFTR_WWI(256,256,6, __Vtemp_1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                    >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0 
        = (__Vtemp_1[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_2[0U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_2[1U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                                   << 6U));
    __Vtemp_2[2U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                                   << 6U));
    __Vtemp_2[3U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                                   << 6U));
    __Vtemp_2[4U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                                   << 6U));
    __Vtemp_2[5U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                                   << 6U));
    __Vtemp_2[6U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                                   << 6U));
    __Vtemp_2[7U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_2);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1 
        = (__Vtemp_3[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_hd50d5543_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h06bcac45_0;

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__834(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__834\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    __Vtemp_1[0U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_1[1U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                                   << 6U));
    __Vtemp_1[2U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                                   << 6U));
    __Vtemp_1[3U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                                   << 6U));
    __Vtemp_1[4U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                                   << 6U));
    __Vtemp_1[5U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                                   << 6U));
    __Vtemp_1[6U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                                   << 6U));
    __Vtemp_1[7U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_1);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2 
        = (__Vtemp_2[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_3[0U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_3[1U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                                   << 6U));
    __Vtemp_3[2U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                                   << 6U));
    __Vtemp_3[3U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                                   << 6U));
    __Vtemp_3[4U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                                   << 6U));
    __Vtemp_3[5U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                                   << 6U));
    __Vtemp_3[6U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                                   << 6U));
    __Vtemp_3[7U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_3);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3 
        = (__Vtemp_4[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_paddr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)));
    VL_SHIFTR_WWI(256,256,6, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                    >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0 
        = (__Vtemp_5[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_6[0U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_6[1U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                                   << 6U));
    __Vtemp_6[2U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                                   << 6U));
    __Vtemp_6[3U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                                   << 6U));
    __Vtemp_6[4U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                                   << 6U));
    __Vtemp_6[5U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                                   << 6U));
    __Vtemp_6[6U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                                   << 6U));
    __Vtemp_6[7U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1 
        = (__Vtemp_7[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__835(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__835\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<8>/*255:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    __Vtemp_1[0U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_1[1U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                                   << 6U));
    __Vtemp_1[2U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                                   << 6U));
    __Vtemp_1[3U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                                   << 6U));
    __Vtemp_1[4U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                                   << 6U));
    __Vtemp_1[5U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                                   << 6U));
    __Vtemp_1[6U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                                   << 6U));
    __Vtemp_1[7U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_1);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2 
        = (__Vtemp_2[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_3[0U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_3[1U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                                   << 6U));
    __Vtemp_3[2U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                                   << 6U));
    __Vtemp_3[3U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                                   << 6U));
    __Vtemp_3[4U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                                   << 6U));
    __Vtemp_3[5U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                                   << 6U));
    __Vtemp_3[6U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                                   << 6U));
    __Vtemp_3[7U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_3);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3 
        = (__Vtemp_4[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_paddr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)));
    VL_SHIFTR_WWI(256,256,6, __Vtemp_5, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, 
                  (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                    >> 6U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0 
        = (__Vtemp_5[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_6[0U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_6[1U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                                   << 6U));
    __Vtemp_6[2U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                                   << 6U));
    __Vtemp_6[3U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                                   << 6U));
    __Vtemp_6[4U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                                   << 6U));
    __Vtemp_6[5U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                                   << 6U));
    __Vtemp_6[6U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                                   << 6U));
    __Vtemp_6[7U] = ((VTestDriver__ConstPool__CONST_hf7a460f1_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hf7a460f1_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_6);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1 
        = (__Vtemp_7[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__836(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__836\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_1[1U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                                   << 6U));
    __Vtemp_1[2U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                                   << 6U));
    __Vtemp_1[3U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                                   << 6U));
    __Vtemp_1[4U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                                   << 6U));
    __Vtemp_1[5U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                                   << 6U));
    __Vtemp_1[6U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                                   << 6U));
    __Vtemp_1[7U] = ((VTestDriver__ConstPool__CONST_hd50d5543_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_hd50d5543_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_1);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2 
        = (__Vtemp_2[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    __Vtemp_3[0U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      << 6U) | (0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc 
                                                 >> 6U))));
    __Vtemp_3[1U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[0U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                                   << 6U));
    __Vtemp_3[2U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[1U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                                   << 6U));
    __Vtemp_3[3U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[2U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                                   << 6U));
    __Vtemp_3[4U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[3U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                                   << 6U));
    __Vtemp_3[5U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[4U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                                   << 6U));
    __Vtemp_3[6U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[5U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                                   << 6U));
    __Vtemp_3[7U] = ((VTestDriver__ConstPool__CONST_h06bcac45_0[6U] 
                      >> 0x1aU) | (VTestDriver__ConstPool__CONST_h06bcac45_0[7U] 
                                   << 6U));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_4, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__vb_array, __Vtemp_3);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3 
        = (__Vtemp_4[0U] & ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3_RW0_rdata) 
                            == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_hcee66223__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x1fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                          - (((0x2000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                              | ((0x1000000U & ((0xff000000U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                                                | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                    & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))) 
                                                   << 0x18U))) 
                                 | (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                                     ? 0U
                                                     : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z))))) 
                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                    << 1U) : 0U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__837(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__837\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__trialRem 
        = (0x1fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__rem 
                          - (((0x2000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                              | ((0x1000000U & ((0xff000000U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9) 
                                                | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                                    & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))) 
                                                   << 0x18U))) 
                                 | (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT___trialTerm_T_9 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)
                                                     ? 0U
                                                     : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__fractB_Z))))) 
                             | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__inReady)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sqrtOp_Z))
                                 ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                    << 1U) : 0U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___GEN_50 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_req_valid_T_2) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxPageUpdate_T_1 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                  >> 5U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPageRepl 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__samePage)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH)
            : ((0x3eU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                         << 1U)) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                                          >> 5U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__838(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__838\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxPageUpdate_T_1 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                  >> 5U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPageRepl 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__samePage)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH)
            : ((0x3eU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                         << 1U)) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                                          >> 5U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___idxPageUpdate_T_1 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                  >> 5U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__tgtPageRepl 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__samePage)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH)
            : ((0x3eU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                         << 1U)) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                                          >> 5U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)((0xffU & (- (IData)((IData)(
                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_1) 
                                                             >> 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signext_a_T_24)))))))) 
               << 0x38U) | (((QData)((IData)((0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_1) 
                                                                >> 2U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_0)))))))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_1) 
                                                                              >> 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_a_T)))))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_1))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signext_a_T_24))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_0)))) 
                                                                       << 0x10U)) 
                                                                   | (0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_a_T)))) 
                                                                         << 8U)))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__839(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__839\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)((0xffU & (- (IData)((IData)(
                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_3) 
                                                             >> 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signext_d_T_24)))))))) 
               << 0x38U) | (((QData)((IData)((0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_3) 
                                                                >> 2U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_2)))))))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_3) 
                                                                              >> 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_d_T)))))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_3))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signext_d_T_24))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___GEN_2)))) 
                                                                       << 0x10U)) 
                                                                   | (0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT___signbit_d_T)))) 
                                                                         << 8U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)((0xffU & (- (IData)((IData)(
                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_3) 
                                                             >> 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signext_a_T_24)))))))) 
               << 0x38U) | (((QData)((IData)((0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_3) 
                                                                >> 2U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_2)))))))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_3) 
                                                                              >> 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_a_T)))))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_3))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signext_a_T_24))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_2)))) 
                                                                       << 0x10U)) 
                                                                   | (0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_a_T)))) 
                                                                         << 8U)))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__840(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__840\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)((0xffU & (- (IData)((IData)(
                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_5) 
                                                             >> 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signext_d_T_24)))))))) 
               << 0x38U) | (((QData)((IData)((0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_5) 
                                                                >> 2U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_4)))))))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_5) 
                                                                              >> 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_d_T)))))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_5))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signext_d_T_24))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_4)))) 
                                                                       << 0x10U)) 
                                                                   | (0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___signbit_d_T)))) 
                                                                         << 8U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_3 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_2 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__841(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__841\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_1 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_0 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_7 
        = (QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0 
                            << 9U) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_addr 
                                                        >> 3U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__x 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT__en) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
              & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  ? (((0x7fffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_pc) 
                      >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
                     ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  : (((0x7ffffffff0ULL & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_pc 
                                              >> 4U)) 
                                          << 4U)) | (QData)((IData)(
                                                                    (0xfU 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_pc)) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_hfdb5cacb__0)))))) 
                     == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_h1eab07f6__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_h7f795ac6__0 
        = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  ? (((0x7fffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata) 
                      >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_address) 
                     ^ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))
                  : (((0x7ffffffff0ULL & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata 
                                              >> 4U)) 
                                          << 4U)) | (QData)((IData)(
                                                                    (0xfU 
                                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_wdata)) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_hfdb5cacb__0)))))) 
                     == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__bpu__DOT____VdfgTmp_h1eab07f6__0)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__842(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__842\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT____VdfgTmp_h2dcb83e2__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_h84207a5c__0)) 
                 & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr 
                            >> 2U))));
    vlSelf->__VdfgTmp_h9b436f0e__0 = ((IData)(vlSelf->__VdfgTmp_h84207a5c__0)
                                       ? 0U : (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_eq_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6b748640__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_eq_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6b748640__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_eq_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6b748640__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_eq_2 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0)) 
                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6b748640__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_acc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_ha05d2b95__0) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0)) 
              & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__rsize))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__get_acquire_a_mask_acc_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_ha05d2b95__0) 
           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT__rsize)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__tsi2tl__DOT____VdfgTmp_h6a8956dd__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_3 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_2 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__843(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__843\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_1 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_0 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_7 
        = (QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0 
                            << 9U) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_addr 
                                                        >> 3U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3 
        = (7U & (~ (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_3)) 
                     | ((2U & ((0x7ffffffeU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7) 
                                               >> 1U)) 
                               | (0xfffffffeU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_3)))) 
                        | (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4) 
                                  >> 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_3))))) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4) 
                       | ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7)) 
                          | (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___GEN_4) 
                                   >> 2U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_10 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_10) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_9));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__success 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__ae) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pf) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__gf)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__844(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__844\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__traverse)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____VdfgTmp_h31ae5a68__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__success 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__ae) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pf) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__gf)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__traverse)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____VdfgTmp_h31ae5a68__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__success 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__ae) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pf) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__gf)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__traverse)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____VdfgTmp_h31ae5a68__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_0) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_3) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___state_vec_0_T_6 
        = (IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT___r_sectored_hit_bits_T_2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_3 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_2 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_1 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___s1_tag_eq_way_WIRE_0 
        = ((0xfffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_R0_data) 
           == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_7 
        = (QData)((IData)(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____VdfgTmp_h2a24c885__0 
                            << 9U) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_req_addr 
                                                        >> 3U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hits 
        = ((0x2000U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled)) 
                       << 0xdU)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__845(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__845\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__tlb_miss 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__vm_enabled) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__bad_va)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__real_hits))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_leftOne_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__hitsVec_6) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__multipleHits_rightOne_6));
    __Vtemp_2[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn);
    __Vtemp_2[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_3, __Vtemp_2, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U] 
        = __Vtemp_3[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
        = __Vtemp_3[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[2U] 
        = __Vtemp_3[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[3U] 
        = (0x7fffffffU & __Vtemp_3[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589dafc0__0 
        = (0U != (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589ddd54__0 
        = (0U != (0x3ffU & VL_SHIFTL_III(10,10,6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->__VdfgTmp_hb0ff614b__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    __Vtemp_5[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn);
    __Vtemp_5[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_6, __Vtemp_5, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U] 
        = __Vtemp_6[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
        = __Vtemp_6[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[2U] 
        = __Vtemp_6[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[3U] 
        = (0x7fffffffU & __Vtemp_6[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589dafc0__0 
        = (0U != (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589ddd54__0 
        = (0U != (0x3ffU & VL_SHIFTL_III(10,10,6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->__VdfgTmp_h1b3edad1__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    __Vtemp_8[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn);
    __Vtemp_8[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                             >> 0x20U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_8[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_9, __Vtemp_8, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U] 
        = __Vtemp_9[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U] 
        = __Vtemp_9[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[2U] 
        = __Vtemp_9[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[3U] 
        = (0x7fffffffU & __Vtemp_9[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589dafc0__0 
        = (0U != (0x7fffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h589ddd54__0 
        = (0U != (0x3ffU & VL_SHIFTL_III(10,10,6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn), (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist))));
    vlSelf->__VdfgTmp_hd8e87ed8__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_absIn 
                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_adjustedNormDist));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__846(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__846\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h75128a05__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h75128a05__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___ibuf_io_inst_0_bits_xcpt1_ae_inst 
        = ((3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT__inst)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ibuf__DOT____VdfgTmp_h75128a05__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound 
        = ((0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundPosBit_T) 
           | (0U != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___anyRoundExtra_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox__DOT__q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox__DOT__q__DOT__ptr_match) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox__DOT__q__DOT__maybe_full))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_q_rocc_1_in_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_1__DOT__q__DOT__do_enq 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_1__DOT__q__DOT__ptr_match) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_1__DOT__q__DOT__maybe_full))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_q_rocc_1_in_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_2) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_9) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_11));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_2) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_9) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_11));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_2) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_5));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_12 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_9) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_11));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h8ed5379d__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__847(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__847\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_hae7bb7e4__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_inexact))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__848(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__848\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_h8ed5379d__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))))));
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
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__849(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__849\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr 
        = (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
            & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                 >> 0x1fU) & ((3U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                            >> 0x13U))) 
                              | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6)))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne) 
                  & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT___roundIncr_near_even_T_6))))) 
           | (((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
               & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                    >> 0x1fU) & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U] 
                                 >> 0x13U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__magJustBelowOne))) 
              | (((IData)(vlSelf->__VdfgTmp_hae7bb7e4__0) 
                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))) 
                 | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                    & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_inexact))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_20 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_16) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_18));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_5 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3) 
                  >> 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_25 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_23) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_24));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_20 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_16) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_18));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_5 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3) 
                  >> 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_25 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_23) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_24));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__850(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__850\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_20 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_16) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_18));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_5 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3) 
                  >> 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___io_resp_bits_entry_T_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_25 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__leftOne_23) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__rightOne_24));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_5_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_67 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_40) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_58 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_44)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_5_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_67 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_40) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_58 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_44)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_5_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_67 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_40) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_3_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_58 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_42) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_44)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT___widx_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_output));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__851(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__851\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_4_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_57 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_43)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_6_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_66 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_39) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT___widx_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_output));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_4_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_57 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_43)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_6_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_66 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_39) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___widx_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_mem_finish_valid_output));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_4_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_57 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_43)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__winner_1_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_6_io_mem_finish_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_66 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_39) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_41)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb__DOT___grant_T_3) 
           | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb__DOT___grant_T_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__meta_read_arb__DOT___grant_T_3) 
           | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state)));
}
