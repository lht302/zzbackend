// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestDriver__Syms.h"


extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e4f723a_0;

VL_ATTR_COLD void VTestDriver___024root__trace_full_0_sub_7(VTestDriver___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root__trace_full_0_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    bufp->fullBit(oldp+20910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_9));
    bufp->fullBit(oldp+20911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_10));
    bufp->fullBit(oldp+20912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_11));
    bufp->fullBit(oldp+20913,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_12));
    bufp->fullBit(oldp+20914,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_13));
    bufp->fullBit(oldp+20915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_14));
    bufp->fullBit(oldp+20916,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_15));
    __Vtemp_2[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refillError)) 
                              << 0x3eU) | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                             >> 0xcU))) 
                                            << 0x2aU) 
                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refillError)) 
                                               << 0x29U) 
                                              | (((QData)((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                                   >> 0xcU))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_wdata)))))));
    __Vtemp_2[1U] = ((0x80000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                     << 0x13U)) | (IData)(
                                                          ((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refillError)) 
                                                             << 0x3eU) 
                                                            | (((QData)((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                                                >> 0xcU))) 
                                                                << 0x2aU) 
                                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refillError)) 
                                                                   << 0x29U) 
                                                                  | (((QData)((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                                                >> 0xcU))) 
                                                                      << 0x15U) 
                                                                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_wdata)))))) 
                                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refillError) 
                      << 0x13U) | (0x7fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_paddr 
                                                  >> 0xdU)));
    bufp->fullWData(oldp+20917,(__Vtemp_2),84);
    bufp->fullWData(oldp+20920,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___tag_array_RW0_rdata),84);
    bufp->fullIData(oldp+20923,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_wdata),21);
    bufp->fullIData(oldp+20924,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0_RW0_rdata),21);
    bufp->fullIData(oldp+20925,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1_RW0_rdata),21);
    bufp->fullIData(oldp+20926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2_RW0_rdata),21);
    bufp->fullIData(oldp+20927,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3_RW0_rdata),21);
    bufp->fullBit(oldp+20928,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullCData(oldp+20929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),6);
    bufp->fullBit(oldp+20930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullCData(oldp+20931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),6);
    bufp->fullBit(oldp+20932,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullCData(oldp+20933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),6);
    bufp->fullBit(oldp+20934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullCData(oldp+20935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),6);
    bufp->fullBit(oldp+20936,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state))));
    bufp->fullBit(oldp+20937,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__tlb__io_req_valid));
    bufp->fullBit(oldp+20938,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_miss));
    bufp->fullQData(oldp+20939,((0x7fffffffffULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)),40);
    bufp->fullBit(oldp+20941,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__io_resp_pf_ld));
    bufp->fullBit(oldp+20942,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va) 
                               | (0U != ((((~ (((1U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))
                                                 ? 
                                                (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h2a31b9cb__0))
                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h2a31b9cb__0)) 
                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h4a30b31a__0))) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_heea7df84__0)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hdfec8156__0)) 
                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_ha3f6889c__0) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits)))))));
    bufp->fullBit(oldp+20943,((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__ae_ld_array) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->fullBit(oldp+20944,((0U != ((~ (((0x3000U 
                                            & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_px))) 
                                               << 0xcU)) 
                                           | ((0x800U 
                                               & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                           >> 7U)) 
                                                  << 0xbU)) 
                                              | ((0x400U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                              >> 7U)) 
                                                     << 0xaU)) 
                                                 | ((0x200U 
                                                     & ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                 >> 7U)) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                    >> 7U)) 
                                                           << 8U)) 
                                                       | ((0x80U 
                                                           & ((IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                                       >> 7U)) 
                                                              << 7U)) 
                                                          | ((0x40U 
                                                              & ((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                          >> 7U)) 
                                                                 << 6U)) 
                                                             | ((0x20U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                             >> 7U)) 
                                                                    << 5U)) 
                                                                | ((0x10U 
                                                                    & ((IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                                >> 7U)) 
                                                                       << 4U)) 
                                                                   | ((8U 
                                                                       & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                                >> 7U)) 
                                                                          << 3U)) 
                                                                      | ((4U 
                                                                          & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                                >> 7U)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                                >> 7U)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 7U))))))))))))))) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hefc31589__0))) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->fullBit(oldp+20945,((0U != (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)))));
    bufp->fullBit(oldp+20946,((0U != (((0x3000U & (
                                                   (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_c))) 
                                                   << 0xcU)) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_he2385d99__0)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits)))));
    bufp->fullBit(oldp+20947,((IData)((0U != (0x2fffU 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___io_resp_prefetchable_T))))));
    bufp->fullBit(oldp+20948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__tlb__io_kill));
    bufp->fullIData(oldp+20949,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_vpn),27);
    bufp->fullBit(oldp+20950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_tag_v));
    bufp->fullQData(oldp+20951,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_0),42);
    bufp->fullQData(oldp+20953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_1),42);
    bufp->fullQData(oldp+20955,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_2),42);
    bufp->fullQData(oldp+20957,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_data_3),42);
    bufp->fullBit(oldp+20959,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_0));
    bufp->fullBit(oldp+20960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_1));
    bufp->fullBit(oldp+20961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_2));
    bufp->fullBit(oldp+20962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_0_valid_3));
    bufp->fullIData(oldp+20963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_vpn),27);
    bufp->fullBit(oldp+20964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_tag_v));
    bufp->fullQData(oldp+20965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_0),42);
    bufp->fullQData(oldp+20967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_1),42);
    bufp->fullQData(oldp+20969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_2),42);
    bufp->fullQData(oldp+20971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_data_3),42);
    bufp->fullBit(oldp+20973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_0));
    bufp->fullBit(oldp+20974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_1));
    bufp->fullBit(oldp+20975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_2));
    bufp->fullBit(oldp+20976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_1_valid_3));
    bufp->fullIData(oldp+20977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_vpn),27);
    bufp->fullBit(oldp+20978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_tag_v));
    bufp->fullQData(oldp+20979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_0),42);
    bufp->fullQData(oldp+20981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_1),42);
    bufp->fullQData(oldp+20983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_2),42);
    bufp->fullQData(oldp+20985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_data_3),42);
    bufp->fullBit(oldp+20987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_0));
    bufp->fullBit(oldp+20988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_1));
    bufp->fullBit(oldp+20989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_2));
    bufp->fullBit(oldp+20990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_2_valid_3));
    bufp->fullIData(oldp+20991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_vpn),27);
    bufp->fullBit(oldp+20992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_tag_v));
    bufp->fullQData(oldp+20993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_0),42);
    bufp->fullQData(oldp+20995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_1),42);
    bufp->fullQData(oldp+20997,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_2),42);
    bufp->fullQData(oldp+20999,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_data_3),42);
    bufp->fullBit(oldp+21001,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_0));
    bufp->fullBit(oldp+21002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_1));
    bufp->fullBit(oldp+21003,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_2));
    bufp->fullBit(oldp+21004,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_3_valid_3));
    bufp->fullIData(oldp+21005,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_vpn),27);
    bufp->fullBit(oldp+21006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_tag_v));
    bufp->fullQData(oldp+21007,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_0),42);
    bufp->fullQData(oldp+21009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_1),42);
    bufp->fullQData(oldp+21011,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_2),42);
    bufp->fullQData(oldp+21013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_data_3),42);
    bufp->fullBit(oldp+21015,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_0));
    bufp->fullBit(oldp+21016,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_1));
    bufp->fullBit(oldp+21017,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_2));
    bufp->fullBit(oldp+21018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_4_valid_3));
    bufp->fullIData(oldp+21019,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_vpn),27);
    bufp->fullBit(oldp+21020,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_tag_v));
    bufp->fullQData(oldp+21021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_0),42);
    bufp->fullQData(oldp+21023,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_1),42);
    bufp->fullQData(oldp+21025,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_2),42);
    bufp->fullQData(oldp+21027,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_data_3),42);
    bufp->fullBit(oldp+21029,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_0));
    bufp->fullBit(oldp+21030,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_1));
    bufp->fullBit(oldp+21031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_2));
    bufp->fullBit(oldp+21032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_5_valid_3));
    bufp->fullIData(oldp+21033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_vpn),27);
    bufp->fullBit(oldp+21034,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_tag_v));
    bufp->fullQData(oldp+21035,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_0),42);
    bufp->fullQData(oldp+21037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_1),42);
    bufp->fullQData(oldp+21039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_2),42);
    bufp->fullQData(oldp+21041,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_data_3),42);
    bufp->fullBit(oldp+21043,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_0));
    bufp->fullBit(oldp+21044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_1));
    bufp->fullBit(oldp+21045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_2));
    bufp->fullBit(oldp+21046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_6_valid_3));
    bufp->fullIData(oldp+21047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_vpn),27);
    bufp->fullBit(oldp+21048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_tag_v));
    bufp->fullQData(oldp+21049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_0),42);
    bufp->fullQData(oldp+21051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_1),42);
    bufp->fullQData(oldp+21053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_2),42);
    bufp->fullQData(oldp+21055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_data_3),42);
    bufp->fullBit(oldp+21057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_0));
    bufp->fullBit(oldp+21058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_1));
    bufp->fullBit(oldp+21059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_2));
    bufp->fullBit(oldp+21060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sectored_entries_0_7_valid_3));
    bufp->fullCData(oldp+21061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level),2);
    bufp->fullIData(oldp+21062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_vpn),27);
    bufp->fullBit(oldp+21063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_tag_v));
    bufp->fullQData(oldp+21064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0),42);
    bufp->fullBit(oldp+21066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0));
    bufp->fullCData(oldp+21067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level),2);
    bufp->fullIData(oldp+21068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_vpn),27);
    bufp->fullBit(oldp+21069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_tag_v));
    bufp->fullQData(oldp+21070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0),42);
    bufp->fullBit(oldp+21072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0));
    bufp->fullCData(oldp+21073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level),2);
    bufp->fullIData(oldp+21074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_vpn),27);
    bufp->fullBit(oldp+21075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_tag_v));
    bufp->fullQData(oldp+21076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0),42);
    bufp->fullBit(oldp+21078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0));
    bufp->fullCData(oldp+21079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level),2);
    bufp->fullIData(oldp+21080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_vpn),27);
    bufp->fullBit(oldp+21081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_tag_v));
    bufp->fullQData(oldp+21082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0),42);
    bufp->fullBit(oldp+21084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0));
    bufp->fullCData(oldp+21085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level),2);
    bufp->fullIData(oldp+21086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_tag_vpn),27);
    bufp->fullQData(oldp+21087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0),42);
    bufp->fullBit(oldp+21089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0));
    bufp->fullCData(oldp+21090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state),2);
    bufp->fullCData(oldp+21091,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr),2);
    bufp->fullCData(oldp+21092,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_sectored_repl_addr),3);
    bufp->fullBit(oldp+21093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_valid));
    bufp->fullCData(oldp+21094,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_bits),3);
    bufp->fullQData(oldp+21095,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_gpa),39);
    bufp->fullBit(oldp+21097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__vm_enabled));
    bufp->fullBit(oldp+21098,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_level))));
    bufp->fullIData(oldp+21099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__mpu_ppn),28);
    bufp->fullCData(oldp+21100,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)
                                  ? 1U : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug) 
                                           << 2U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)))),3);
    bufp->fullBit(oldp+21101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__legal_address));
    bufp->fullBit(oldp+21102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_c));
    bufp->fullBit(oldp+21103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__deny_access_to_debug));
    bufp->fullBit(oldp+21104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_pr));
    bufp->fullBit(oldp+21105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_pw));
    bufp->fullBit(oldp+21106,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp));
    bufp->fullBit(oldp+21107,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_px));
    bufp->fullBit(oldp+21108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_eff));
    bufp->fullBit(oldp+21109,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_level))));
    bufp->fullBit(oldp+21110,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_level))));
    bufp->fullBit(oldp+21111,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_level))));
    bufp->fullBit(oldp+21112,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_level))));
    bufp->fullBit(oldp+21113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_0));
    bufp->fullBit(oldp+21114,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_1));
    bufp->fullBit(oldp+21115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_2));
    bufp->fullBit(oldp+21116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_3));
    bufp->fullBit(oldp+21117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_4));
    bufp->fullBit(oldp+21118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_5));
    bufp->fullBit(oldp+21119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_6));
    bufp->fullBit(oldp+21120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_7));
    bufp->fullBit(oldp+21121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_8));
    bufp->fullBit(oldp+21122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_9));
    bufp->fullBit(oldp+21123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_10));
    bufp->fullBit(oldp+21124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_11));
    bufp->fullBit(oldp+21125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hitsVec_12));
    bufp->fullSData(oldp+21126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__real_hits),13);
    bufp->fullSData(oldp+21127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hits),14);
    bufp->fullSData(oldp+21128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hdfec8156__0),14);
    bufp->fullSData(oldp+21129,((0x1fffU & (((1U & 
                                              ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv)) 
                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_sum)))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h2a31b9cb__0)
                                              : 0U) 
                                            | ((1U 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))
                                                ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h2a31b9cb__0))
                                                : 0U)))),13);
    bufp->fullSData(oldp+21130,((((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_pr))) 
                                              << 0xcU)) 
                                  | ((0x800U & ((IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                         >> 6U)) 
                                                << 0xbU)) 
                                     | ((0x400U & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                            >> 6U)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                        >> 6U)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                           >> 6U)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                              >> 6U)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                 >> 6U)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                    >> 6U)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                       >> 6U)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                          >> 6U)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                             >> 6U)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                                >> 6U)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 6U))))))))))))))) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hefc31589__0))),14);
    bufp->fullSData(oldp+21131,(((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_c))) 
                                             << 0xcU)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_he2385d99__0))),14);
    bufp->fullSData(oldp+21132,(((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp))) 
                                             << 0xcU)) 
                                 | ((0x800U & ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                        >> 5U)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                           >> 5U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                     >> 5U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                          >> 5U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                             >> 5U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                >> 5U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                   >> 5U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                      >> 5U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                         >> 5U)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                            >> 5U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                               >> 5U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 5U)))))))))))))))),14);
    bufp->fullSData(oldp+21133,(((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp))) 
                                             << 0xcU)) 
                                 | ((0x800U & ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                        >> 3U)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                           >> 3U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                     >> 3U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                          >> 3U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                             >> 3U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                >> 3U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                   >> 3U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                      >> 3U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                         >> 3U)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                            >> 3U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                               >> 3U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 3U)))))))))))))))),14);
    bufp->fullSData(oldp+21134,(((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp))) 
                                             << 0xcU)) 
                                 | ((0x800U & ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                        >> 4U)) 
                                               << 0xbU)) 
                                    | ((0x400U & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                           >> 4U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                     >> 4U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & ((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                          >> 4U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                             >> 4U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & ((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                >> 4U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                   >> 4U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                      >> 4U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                         >> 4U)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                            >> 4U)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                               >> 4U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 4U)))))))))))))))),14);
    bufp->fullBit(oldp+21135,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__bad_va));
    bufp->fullSData(oldp+21136,(((0U != (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s1_pc)))
                                  ? ((0x3000U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__newEntry_eff))) 
                                                 << 0xcU)) 
                                     | ((0x800U & ((IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                            >> 2U)) 
                                                   << 0xbU)) 
                                        | ((0x400U 
                                            & ((IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                        >> 2U)) 
                                               << 0xaU)) 
                                           | ((0x200U 
                                               & ((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                           >> 2U)) 
                                                  << 9U)) 
                                              | ((0x100U 
                                                  & ((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                              >> 2U)) 
                                                     << 8U)) 
                                                 | ((0x80U 
                                                     & ((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                                 >> 2U)) 
                                                        << 7U)) 
                                                    | ((0x40U 
                                                        & ((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                    >> 2U)) 
                                                           << 6U)) 
                                                       | ((0x20U 
                                                           & ((IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                       >> 2U)) 
                                                              << 5U)) 
                                                          | ((0x10U 
                                                              & ((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                          >> 2U)) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                             >> 2U)) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & ((IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                                >> 2U)) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & ((IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                                >> 2U)) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 2U)))))))))))))))
                                  : 0U)),14);
    bufp->fullSData(oldp+21137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__ae_ld_array),14);
    bufp->fullBit(oldp+21138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__tlb_miss));
    bufp->fullCData(oldp+21139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_vec_0),7);
    bufp->fullCData(oldp+21140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state_reg_1),3);
    bufp->fullBit(oldp+21141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_1));
    bufp->fullBit(oldp+21142,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_2));
    bufp->fullBit(oldp+21143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_3));
    bufp->fullBit(oldp+21144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_4));
    bufp->fullBit(oldp+21145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_6));
    bufp->fullBit(oldp+21146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_8));
    bufp->fullBit(oldp+21147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_leftOne_10));
    bufp->fullBit(oldp+21148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_9));
    bufp->fullBit(oldp+21149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits_rightOne_10));
    bufp->fullBit(oldp+21150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__multipleHits));
    bufp->fullBit(oldp+21151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_hits_1));
    bufp->fullBit(oldp+21152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_hits_2));
    bufp->fullBit(oldp+21153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_hits_3));
    bufp->fullCData(oldp+21154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_4),2);
    bufp->fullBit(oldp+21155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__invalidate_refill));
    bufp->fullBit(oldp+21156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_0));
    bufp->fullBit(oldp+21157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_1));
    bufp->fullBit(oldp+21158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_2));
    bufp->fullBit(oldp+21159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_3));
    bufp->fullBit(oldp+21160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_4));
    bufp->fullBit(oldp+21161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_5));
    bufp->fullBit(oldp+21162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_6));
    bufp->fullBit(oldp+21163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__sector_hits_7));
    bufp->fullCData(oldp+21164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__waddr_1),3);
    bufp->fullCData(oldp+21165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__hi_1),4);
    bufp->fullIData(oldp+21166,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21167,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21168,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21169,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21170,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21171,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21172,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21173,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21174,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21175,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 8U)))));
    bufp->fullBit(oldp+21176,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 7U)))));
    bufp->fullBit(oldp+21177,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 6U)))));
    bufp->fullBit(oldp+21178,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 5U)))));
    bufp->fullBit(oldp+21179,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 4U)))));
    bufp->fullBit(oldp+21180,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 3U)))));
    bufp->fullBit(oldp+21181,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 2U)))));
    bufp->fullBit(oldp+21182,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                             >> 1U)))));
    bufp->fullIData(oldp+21183,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21184,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21185,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21186,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21187,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21188,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21189,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21190,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21191,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21192,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 8U)))));
    bufp->fullBit(oldp+21193,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 7U)))));
    bufp->fullBit(oldp+21194,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 6U)))));
    bufp->fullBit(oldp+21195,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 5U)))));
    bufp->fullBit(oldp+21196,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 4U)))));
    bufp->fullBit(oldp+21197,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 3U)))));
    bufp->fullBit(oldp+21198,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 2U)))));
    bufp->fullBit(oldp+21199,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                             >> 1U)))));
    bufp->fullIData(oldp+21200,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21201,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21202,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21203,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21204,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21205,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21206,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21207,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21208,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21209,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 8U)))));
    bufp->fullBit(oldp+21210,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 7U)))));
    bufp->fullBit(oldp+21211,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 6U)))));
    bufp->fullBit(oldp+21212,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 5U)))));
    bufp->fullBit(oldp+21213,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 4U)))));
    bufp->fullBit(oldp+21214,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 3U)))));
    bufp->fullBit(oldp+21215,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 2U)))));
    bufp->fullBit(oldp+21216,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                             >> 1U)))));
    bufp->fullIData(oldp+21217,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21218,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21219,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21220,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21221,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21222,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21223,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21224,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21225,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21226,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 8U)))));
    bufp->fullBit(oldp+21227,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 7U)))));
    bufp->fullBit(oldp+21228,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 6U)))));
    bufp->fullBit(oldp+21229,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 5U)))));
    bufp->fullBit(oldp+21230,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 4U)))));
    bufp->fullBit(oldp+21231,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 3U)))));
    bufp->fullBit(oldp+21232,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 2U)))));
    bufp->fullBit(oldp+21233,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                             >> 1U)))));
    bufp->fullIData(oldp+21234,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21235,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21236,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21237,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21238,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21239,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21240,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21241,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21242,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21243,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 8U)))));
    bufp->fullBit(oldp+21244,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 7U)))));
    bufp->fullBit(oldp+21245,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 6U)))));
    bufp->fullBit(oldp+21246,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 5U)))));
    bufp->fullBit(oldp+21247,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 4U)))));
    bufp->fullBit(oldp+21248,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 3U)))));
    bufp->fullBit(oldp+21249,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 2U)))));
    bufp->fullBit(oldp+21250,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0 
                                             >> 1U)))));
    bufp->fullIData(oldp+21251,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21252,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21253,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21254,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21255,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21256,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21257,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21258,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21259,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21260,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 8U)))));
    bufp->fullBit(oldp+21261,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 7U)))));
    bufp->fullBit(oldp+21262,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 6U)))));
    bufp->fullBit(oldp+21263,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 5U)))));
    bufp->fullBit(oldp+21264,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 4U)))));
    bufp->fullBit(oldp+21265,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 3U)))));
    bufp->fullBit(oldp+21266,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 2U)))));
    bufp->fullBit(oldp+21267,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                             >> 1U)))));
    bufp->fullIData(oldp+21268,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21269,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21270,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21271,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21272,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21273,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21274,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21275,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21276,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21277,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 8U)))));
    bufp->fullBit(oldp+21278,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 7U)))));
    bufp->fullBit(oldp+21279,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 6U)))));
    bufp->fullBit(oldp+21280,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 5U)))));
    bufp->fullBit(oldp+21281,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 4U)))));
    bufp->fullBit(oldp+21282,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 3U)))));
    bufp->fullBit(oldp+21283,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 2U)))));
    bufp->fullBit(oldp+21284,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                             >> 1U)))));
    bufp->fullIData(oldp+21285,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21286,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21287,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21288,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21289,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21290,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21291,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21292,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21293,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21294,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 8U)))));
    bufp->fullBit(oldp+21295,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 7U)))));
    bufp->fullBit(oldp+21296,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 6U)))));
    bufp->fullBit(oldp+21297,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 5U)))));
    bufp->fullBit(oldp+21298,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 4U)))));
    bufp->fullBit(oldp+21299,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 3U)))));
    bufp->fullBit(oldp+21300,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 2U)))));
    bufp->fullBit(oldp+21301,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                             >> 1U)))));
    bufp->fullIData(oldp+21302,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21303,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21304,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21305,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21306,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21307,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21308,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21309,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21310,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21311,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 8U)))));
    bufp->fullBit(oldp+21312,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 7U)))));
    bufp->fullBit(oldp+21313,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 6U)))));
    bufp->fullBit(oldp+21314,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 5U)))));
    bufp->fullBit(oldp+21315,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 4U)))));
    bufp->fullBit(oldp+21316,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 3U)))));
    bufp->fullBit(oldp+21317,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 2U)))));
    bufp->fullBit(oldp+21318,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                             >> 1U)))));
    bufp->fullIData(oldp+21319,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21320,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21321,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21322,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21323,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21324,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21325,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21326,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21327,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21328,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 8U)))));
    bufp->fullBit(oldp+21329,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 7U)))));
    bufp->fullBit(oldp+21330,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 6U)))));
    bufp->fullBit(oldp+21331,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 5U)))));
    bufp->fullBit(oldp+21332,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 4U)))));
    bufp->fullBit(oldp+21333,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 3U)))));
    bufp->fullBit(oldp+21334,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 2U)))));
    bufp->fullBit(oldp+21335,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                             >> 1U)))));
    bufp->fullIData(oldp+21336,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21337,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21338,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21339,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21340,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21341,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21342,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21343,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21344,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21345,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 8U)))));
    bufp->fullBit(oldp+21346,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 7U)))));
    bufp->fullBit(oldp+21347,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 6U)))));
    bufp->fullBit(oldp+21348,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 5U)))));
    bufp->fullBit(oldp+21349,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 4U)))));
    bufp->fullBit(oldp+21350,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 3U)))));
    bufp->fullBit(oldp+21351,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 2U)))));
    bufp->fullBit(oldp+21352,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                             >> 1U)))));
    bufp->fullIData(oldp+21353,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21354,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21355,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21356,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21357,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21358,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21359,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21360,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21361,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21362,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 8U)))));
    bufp->fullBit(oldp+21363,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 7U)))));
    bufp->fullBit(oldp+21364,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 6U)))));
    bufp->fullBit(oldp+21365,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 5U)))));
    bufp->fullBit(oldp+21366,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 4U)))));
    bufp->fullBit(oldp+21367,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 3U)))));
    bufp->fullBit(oldp+21368,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 2U)))));
    bufp->fullBit(oldp+21369,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                             >> 1U)))));
    bufp->fullIData(oldp+21370,((0xfffffU & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                     >> 0x16U)))),20);
    bufp->fullBit(oldp+21371,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0x15U)))));
    bufp->fullBit(oldp+21372,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0x13U)))));
    bufp->fullBit(oldp+21373,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0x12U)))));
    bufp->fullBit(oldp+21374,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0x10U)))));
    bufp->fullBit(oldp+21375,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0xfU)))));
    bufp->fullBit(oldp+21376,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0xeU)))));
    bufp->fullBit(oldp+21377,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0xdU)))));
    bufp->fullBit(oldp+21378,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 0xcU)))));
    bufp->fullBit(oldp+21379,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 8U)))));
    bufp->fullBit(oldp+21380,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 7U)))));
    bufp->fullBit(oldp+21381,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 6U)))));
    bufp->fullBit(oldp+21382,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 5U)))));
    bufp->fullBit(oldp+21383,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 4U)))));
    bufp->fullBit(oldp+21384,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 3U)))));
    bufp->fullBit(oldp+21385,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 2U)))));
    bufp->fullBit(oldp+21386,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                             >> 1U)))));
    bufp->fullCData(oldp+21387,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__resp_valid_1)
                                  ? 1U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))),2);
    bufp->fullIData(oldp+21388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr),32);
    bufp->fullBit(oldp+21389,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_7)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                     ? 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit)
                                                      ? 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->fullBit(oldp+21390,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_7)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                     ? 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit)
                                                      ? 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->fullBit(oldp+21391,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_7)
                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_6)
                                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6))
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_5)
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5))
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_4)
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4))
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_3)
                                                ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_2)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_1)
                                                     ? 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
                                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1))
                                                     : 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit)
                                                      ? 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
                                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore))
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT____VdfgTmp_h7b4f7274__0)))))))))));
    bufp->fullBit(oldp+21392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit));
    bufp->fullBit(oldp+21393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore));
    bufp->fullBit(oldp+21394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_1));
    bufp->fullBit(oldp+21395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_1));
    bufp->fullBit(oldp+21396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_2));
    bufp->fullBit(oldp+21397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_2));
    bufp->fullBit(oldp+21398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_3));
    bufp->fullBit(oldp+21399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_3));
    bufp->fullBit(oldp+21400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_4));
    bufp->fullBit(oldp+21401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_4));
    bufp->fullBit(oldp+21402,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_5));
    bufp->fullBit(oldp+21403,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_5));
    bufp->fullBit(oldp+21404,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_6));
    bufp->fullBit(oldp+21405,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_6));
    bufp->fullBit(oldp+21406,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_hit_7));
    bufp->fullBit(oldp+21407,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__pmp__DOT__res_ignore_7));
    bufp->fullBit(oldp+21408,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__do_switch));
    bufp->fullBit(oldp+21409,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__l2_refill));
    bufp->fullCData(oldp+21410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state),3);
    bufp->fullBit(oldp+21411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalidated));
    bufp->fullCData(oldp+21412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count),2);
    bufp->fullIData(oldp+21413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_addr),27);
    bufp->fullBit(oldp+21414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_vstage1));
    bufp->fullBit(oldp+21415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_stage2));
    bufp->fullBit(oldp+21416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_req_dest));
    bufp->fullCData(oldp+21417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_count),2);
    bufp->fullSData(oldp+21418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_future),10);
    bufp->fullQData(oldp+21419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_ppn),44);
    bufp->fullCData(oldp+21421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_software),2);
    bufp->fullBit(oldp+21422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_d));
    bufp->fullBit(oldp+21423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_a));
    bufp->fullBit(oldp+21424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_g));
    bufp->fullBit(oldp+21425,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_u));
    bufp->fullBit(oldp+21426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_x));
    bufp->fullBit(oldp+21427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_w));
    bufp->fullBit(oldp+21428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_r));
    bufp->fullBit(oldp+21429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_v));
    bufp->fullSData(oldp+21430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__gpa_pgoff),12);
    bufp->fullBit(oldp+21431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2));
    bufp->fullBit(oldp+21432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__stage2_final));
    bufp->fullBit(oldp+21433,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__do_both_stages));
    bufp->fullIData(oldp+21434,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__vpn),27);
    bufp->fullBit(oldp+21435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid));
    bufp->fullQData(oldp+21436,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data),64);
    bufp->fullBit(oldp+21438,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v));
    bufp->fullBit(oldp+21439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__invalid_paddr));
    bufp->fullBit(oldp+21440,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__traverse));
    bufp->fullSData(oldp+21441,((0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_0)
                                            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__vpn
                                            : ((1U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__count))
                                                ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__vpn 
                                                   >> 9U)
                                                : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__vpn 
                                                   >> 0x12U))))),9);
    bufp->fullCData(oldp+21442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state_reg),7);
    bufp->fullCData(oldp+21443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__valid),8);
    bufp->fullIData(oldp+21444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_0),32);
    bufp->fullIData(oldp+21445,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_1),32);
    bufp->fullIData(oldp+21446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_2),32);
    bufp->fullIData(oldp+21447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_3),32);
    bufp->fullIData(oldp+21448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_4),32);
    bufp->fullIData(oldp+21449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_5),32);
    bufp->fullIData(oldp+21450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_6),32);
    bufp->fullIData(oldp+21451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tags_7),32);
    bufp->fullIData(oldp+21452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_0),20);
    bufp->fullIData(oldp+21453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_1),20);
    bufp->fullIData(oldp+21454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_2),20);
    bufp->fullIData(oldp+21455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_3),20);
    bufp->fullIData(oldp+21456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_4),20);
    bufp->fullIData(oldp+21457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_5),20);
    bufp->fullIData(oldp+21458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_6),20);
    bufp->fullIData(oldp+21459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__data_7),20);
    bufp->fullBit(oldp+21460,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__can_hit));
    bufp->fullQData(oldp+21461,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__tag),33);
    bufp->fullCData(oldp+21463,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__hits),8);
    bufp->fullBit(oldp+21464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_cache_hit));
    bufp->fullIData(oldp+21465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pmpHomogeneous_pgMask),32);
    bufp->fullBit(oldp+21466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__gf));
    bufp->fullBit(oldp+21467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__ae));
    bufp->fullBit(oldp+21468,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pf));
    bufp->fullBit(oldp+21469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__success));
    bufp->fullCData(oldp+21470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__hi),4);
    bufp->fullCData(oldp+21471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r),3);
    bufp->fullBit(oldp+21472,(((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state)) 
                               | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__state)))));
    bufp->fullBit(oldp+21473,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__tlb__io_kill)) 
                                     | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state))))));
    bufp->fullIData(oldp+21474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___arb_io_out_bits_bits_addr),27);
    bufp->fullBit(oldp+21475,(((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state))
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__r_need_gpa)
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__tlb__DOT__r_need_gpa))));
    bufp->fullBit(oldp+21476,((1U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state))));
    bufp->fullSData(oldp+21477,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)
                                  ? 0U : (0x3ffU & 
                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_future)
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_future)
                                                : (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                           >> 0x36U))))))),10);
    bufp->fullQData(oldp+21478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn),44);
    bufp->fullCData(oldp+21480,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)
                                  ? 0U : (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_reserved_for_software)
                                                 : 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_reserved_for_software)
                                                  : (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                             >> 8U))))))),2);
    bufp->fullBit(oldp+21481,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_d)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_d)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 7U))))))));
    bufp->fullBit(oldp+21482,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_a)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_a)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 6U))))))));
    bufp->fullBit(oldp+21483,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_g)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_g)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 5U))))))));
    bufp->fullBit(oldp+21484,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_u)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_u)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 4U))))))));
    bufp->fullBit(oldp+21485,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_x)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_x)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 3U))))))));
    bufp->fullBit(oldp+21486,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_w)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_w)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 2U))))))));
    bufp->fullBit(oldp+21487,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_r)
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_r)
                                             : (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_data 
                                                        >> 1U))))))));
    bufp->fullBit(oldp+21488,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_5)) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_25)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__r_pte_v)
                                   : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___r_pte_T_8)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_v)
                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__aux_pte_pte_v))))));
    bufp->fullCData(oldp+21489,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__maybe_full) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ptr_match)) 
                                  << 4U) | (0xfU & 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__enq_ptr_value) 
                                             - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__deq_ptr_value))))),5);
    bufp->fullCData(oldp+21490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__enq_ptr_value),4);
    bufp->fullCData(oldp+21491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__deq_ptr_value),4);
    bufp->fullBit(oldp+21492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__maybe_full));
    bufp->fullBit(oldp+21493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ptr_match));
    bufp->fullQData(oldp+21494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[0]),55);
    bufp->fullQData(oldp+21496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[1]),55);
    bufp->fullQData(oldp+21498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[2]),55);
    bufp->fullQData(oldp+21500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[3]),55);
    bufp->fullQData(oldp+21502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[4]),55);
    bufp->fullQData(oldp+21504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[5]),55);
    bufp->fullQData(oldp+21506,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[6]),55);
    bufp->fullQData(oldp+21508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[7]),55);
    bufp->fullQData(oldp+21510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[8]),55);
    bufp->fullQData(oldp+21512,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[9]),55);
    bufp->fullQData(oldp+21514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[10]),55);
    bufp->fullQData(oldp+21516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[11]),55);
    bufp->fullQData(oldp+21518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[12]),55);
    bufp->fullQData(oldp+21520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[13]),55);
    bufp->fullQData(oldp+21522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[14]),55);
    bufp->fullQData(oldp+21524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__ram_ext__DOT__Memory[15]),55);
    bufp->fullBit(oldp+21526,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__empty)))));
    bufp->fullCData(oldp+21527,((0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[0U])),5);
    bufp->fullQData(oldp+21528,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 5U)))),64);
    bufp->fullBit(oldp+21530,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__empty)))));
    bufp->fullCData(oldp+21531,((0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT___ram_ext_R0_data[0U])),5);
    bufp->fullQData(oldp+21532,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 5U)))),64);
    bufp->fullBit(oldp+21534,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__empty)))));
    bufp->fullCData(oldp+21535,((0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT___ram_ext_R0_data[0U])),5);
    bufp->fullQData(oldp+21536,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 5U)))),64);
    bufp->fullCData(oldp+21538,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__io_chosen_choice),2);
    bufp->fullCData(oldp+21539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_grantMask_lastGrant),2);
    bufp->fullBit(oldp+21540,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_grantMask_lastGrant))));
    bufp->fullBit(oldp+21541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_1));
    bufp->fullBit(oldp+21542,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_2));
    bufp->fullBit(oldp+21543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap));
    bufp->fullBit(oldp+21544,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap_1));
    bufp->fullBit(oldp+21545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__maybe_full));
    bufp->fullBit(oldp+21546,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap) 
                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap_1))));
    bufp->fullBit(oldp+21547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__empty));
    bufp->fullBit(oldp+21548,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap) 
                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__wrap_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__maybe_full))));
    bufp->fullWData(oldp+21549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT___ram_ext_R0_data),69);
    bufp->fullBit(oldp+21552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap));
    bufp->fullBit(oldp+21553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap_1));
    bufp->fullBit(oldp+21554,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__maybe_full));
    bufp->fullBit(oldp+21555,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap) 
                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap_1))));
    bufp->fullBit(oldp+21556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__empty));
    bufp->fullBit(oldp+21557,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap) 
                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__wrap_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__maybe_full))));
    bufp->fullWData(oldp+21558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT___ram_ext_R0_data),69);
    bufp->fullBit(oldp+21561,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap));
    bufp->fullBit(oldp+21562,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap_1));
    bufp->fullBit(oldp+21563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__maybe_full));
    bufp->fullBit(oldp+21564,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap) 
                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap_1))));
    bufp->fullBit(oldp+21565,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__empty));
    bufp->fullBit(oldp+21566,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap) 
                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__wrap_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__maybe_full))));
    bufp->fullWData(oldp+21567,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT___ram_ext_R0_data),69);
    bufp->fullBit(oldp+21570,((0x20U == (0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                  >> 5U)))));
    bufp->fullSData(oldp+21571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft),9);
    bufp->fullBit(oldp+21572,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+21573,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+21574,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_mask),2);
    bufp->fullCData(oldp+21575,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+21576,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__winner_0));
    bufp->fullBit(oldp+21577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__winner_1));
    bufp->fullBit(oldp+21578,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__state_0));
    bufp->fullBit(oldp+21579,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__state_1));
    bufp->fullBit(oldp+21580,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__muxState_0));
    bufp->fullBit(oldp+21581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__muxState_1));
    bufp->fullSData(oldp+21582,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+21583,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+21584,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+21585,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size),4);
    bufp->fullCData(oldp+21586,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source),5);
    bufp->fullIData(oldp+21587,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address),32);
    bufp->fullSData(oldp+21588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+21589,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+21590,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+21591,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_1),4);
    bufp->fullCData(oldp+21592,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_1),5);
    bufp->fullCData(oldp+21593,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__sink),3);
    bufp->fullBit(oldp+21594,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__denied));
    bufp->fullSData(oldp+21595,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_counter),9);
    bufp->fullCData(oldp+21596,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_2),3);
    bufp->fullCData(oldp+21597,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_2),2);
    bufp->fullCData(oldp+21598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_2),4);
    bufp->fullCData(oldp+21599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_2),5);
    bufp->fullIData(oldp+21600,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_1),32);
    bufp->fullSData(oldp+21601,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter),9);
    bufp->fullCData(oldp+21602,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_3),3);
    bufp->fullCData(oldp+21603,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__param_3),3);
    bufp->fullCData(oldp+21604,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__size_3),4);
    bufp->fullCData(oldp+21605,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__source_3),5);
    bufp->fullIData(oldp+21606,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__address_2),32);
    bufp->fullIData(oldp+21607,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight),17);
    bufp->fullWData(oldp+21608,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes),68);
    bufp->fullWData(oldp+21611,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes),136);
    bufp->fullSData(oldp+21616,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+21617,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+21618,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+21619,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+21620,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullIData(oldp+21621,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1),17);
    bufp->fullWData(oldp+21622,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1),136);
    bufp->fullSData(oldp+21627,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1),9);
    bufp->fullBit(oldp+21628,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1))));
    bufp->fullSData(oldp+21629,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+21630,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+21631,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullCData(oldp+21632,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2),8);
    bufp->fullSData(oldp+21633,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3),9);
    bufp->fullBit(oldp+21634,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3))));
    bufp->fullBit(oldp+21635,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source) 
                                         >> 4U)) | 
                                     (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source))))));
    bufp->fullBit(oldp+21636,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)))));
    bufp->fullBit(oldp+21637,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)))))));
    bufp->fullBit(oldp+21638,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+21639,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)))));
    bufp->fullBit(oldp+21640,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21641,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21642,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21643,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21644,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21645,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21646,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21647,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address)))))));
    bufp->fullCData(oldp+21648,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___mshrs_io_mem_acquire_bits_size)) 
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
                                 | ((0x40U & (((((2U 
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
                                    | ((0x20U & (((
                                                   ((2U 
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
                                       | ((0x10U & 
                                           (((((2U 
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
                                          | ((8U & 
                                              (((((2U 
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
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_address))))))))))))),8);
    bufp->fullBit(oldp+21649,((1U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 9U)) | 
                                     (0x10U == (0x1fU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                   >> 5U)))))));
    bufp->fullIData(oldp+21650,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                  ? (0x1ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_a_bits_source)))
                                  : 0U)),17);
    bufp->fullBit(oldp+21651,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullSData(oldp+21652,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter),9);
    bufp->fullIData(oldp+21653,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__address),32);
    bufp->fullSData(oldp+21654,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter),9);
    bufp->fullCData(oldp+21655,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__opcode_1),3);
    bufp->fullCData(oldp+21656,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__param_1),2);
    bufp->fullCData(oldp+21657,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__size_1),4);
    bufp->fullCData(oldp+21658,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__sink),3);
    bufp->fullBit(oldp+21659,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__denied));
    bufp->fullBit(oldp+21660,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight));
    bufp->fullCData(oldp+21661,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+21662,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+21663,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+21664,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+21665,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+21666,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+21667,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog),32);
    bufp->fullBit(oldp+21668,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_1));
    bufp->fullCData(oldp+21669,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__inflight_sizes_1),8);
    bufp->fullSData(oldp+21670,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+21671,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+21672,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__watchdog_1),32);
    bufp->fullBit(oldp+21673,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set_wo_ready));
    bufp->fullBit(oldp+21674,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+21675,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+21676,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain_1__DOT__sync_0) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain__DOT__sync_0))),2);
    bufp->fullBit(oldp+21677,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+21678,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+21679,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain_1__DOT__sync_1));
    bufp->fullBit(oldp+21680,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_1__DOT__chain__DOT__output_chain_1__DOT__sync_2));
    bufp->fullBit(oldp+21681,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_2__DOT__chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+21682,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_2__DOT__chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+21683,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_3__DOT__chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+21684,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__intsink_3__DOT__chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+21685,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_0)))));
    bufp->fullBit(oldp+21686,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_0))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__can_finish))));
    bufp->fullBit(oldp+21687,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_1)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_finish_valid))))));
    bufp->fullBit(oldp+21688,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_1)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_mem_finish_valid)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__can_finish))));
    bufp->fullBit(oldp+21689,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_10)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_66))))));
    bufp->fullBit(oldp+21690,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_10)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_66)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__can_finish))));
    bufp->fullBit(oldp+21691,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_11)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_65))))));
    bufp->fullBit(oldp+21692,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_11)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_65)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__can_finish))));
    bufp->fullBit(oldp+21693,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_12)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_64))))));
    bufp->fullBit(oldp+21694,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_12)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_64)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__can_finish))));
    bufp->fullBit(oldp+21695,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_13)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_63))))));
    bufp->fullBit(oldp+21696,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_13)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_63)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__can_finish))));
    bufp->fullBit(oldp+21697,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_14)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_62))))));
    bufp->fullBit(oldp+21698,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_14)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_62)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__can_finish))));
    bufp->fullBit(oldp+21699,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_15)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_61))))));
    bufp->fullBit(oldp+21700,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_15)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_61)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__can_finish))));
    bufp->fullBit(oldp+21701,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_2)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_47))))));
    bufp->fullBit(oldp+21702,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_2)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_47)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__can_finish))));
    bufp->fullBit(oldp+21703,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_3)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56))))));
    bufp->fullBit(oldp+21704,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_3)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_56)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__can_finish))));
    bufp->fullBit(oldp+21705,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_4)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55))))));
    bufp->fullBit(oldp+21706,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_4)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_55)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__can_finish))));
    bufp->fullBit(oldp+21707,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_5)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60))))));
    bufp->fullBit(oldp+21708,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_5)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_60)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__can_finish))));
    bufp->fullBit(oldp+21709,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_6)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59))))));
    bufp->fullBit(oldp+21710,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_6)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_59)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__can_finish))));
    bufp->fullBit(oldp+21711,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_7)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_58))))));
    bufp->fullBit(oldp+21712,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_7)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_58)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__can_finish))));
    bufp->fullBit(oldp+21713,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_8)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_57))))));
    bufp->fullBit(oldp+21714,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_8)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_57)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__can_finish))));
    bufp->fullBit(oldp+21715,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_9)
                                   : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_67))))));
    bufp->fullBit(oldp+21716,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT___io_enq_ready_output) 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft_1)
                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1_9)
                                    : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_67)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__can_finish))));
    bufp->fullBit(oldp+21717,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT___io_enq_ready_output) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___wb_io_release_valid))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__state_1)))));
    bufp->fullBit(oldp+21718,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT___io_enq_ready_output) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__beatsLeft))
                                   ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__readys_readys) 
                                      >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__state_1)))));
    bufp->fullQData(oldp+21719,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___same_cycle_resp_T_1)
                                  ? (0x1ffffffffULL 
                                     & (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)))
                                  : 0ULL)),33);
    bufp->fullQData(oldp+21721,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4))
                                  ? (0x1ffffffffULL 
                                     & (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source)))
                                  : 0ULL)),33);
    bufp->fullBit(oldp+21723,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT___same_cycle_resp_T_3) 
                               & (IData)(((6U == (6U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 5U))))))));
    bufp->fullIData(oldp+21724,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_4))
                                  ? (0x1ffffU & ((IData)(1U) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source)))
                                  : 0U)),17);
    bufp->fullBit(oldp+21725,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_3) 
                               & (IData)(((6U == (6U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9))) 
                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 5U))))))));
    bufp->fullQData(oldp+21726,((0xffffffffffULL & 
                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_xcpt) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_eret))
                                   ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_ret)
                                       ? ((0x20000000U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_inst)
                                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_24)
                                               ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_16
                                               : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_15)
                                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_mstatus_v)
                                               ? (~ 
                                                  ((0xfffffffffcULL 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | (QData)((IData)(
                                                                     (3U 
                                                                      & (1U 
                                                                         | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_vsepc)) 
                                                                            | (2U 
                                                                               & ((~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_misa 
                                                                                >> 2U))) 
                                                                                << 1U)))))))))
                                               : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___GEN_17))
                                       : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__trapToDebug)
                                           ? (QData)((IData)(
                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_debug)
                                                               ? 
                                                              (0x800U 
                                                               | (8U 
                                                                  & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__insn_break)) 
                                                                     << 3U)))
                                                               : 0x800U)))
                                           : (0xfffffffffcULL 
                                              & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__notDebugTVec_base) 
                                                   & (IData)(
                                                             (0x8000000000000000ULL 
                                                              == 
                                                              (0x80000000000000c0ULL 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__cause))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__notDebugTVec_base 
                                                                     >> 8U))) 
                                                    << 6U) 
                                                   | (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__cause)))))
                                                   : 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__notDebugTVec_base 
                                                   >> 2U)) 
                                                 << 2U))))
                                   : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb)
                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_reg_pc
                                       : (0xfffffffffeULL 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___mem_npc_T_4))))),40);
    bufp->fullBit(oldp+21728,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ldst_xcpt) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__fpu_kill_mem)))));
    bufp->fullBit(oldp+21729,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_trace_0_exception_output))));
    bufp->fullBit(oldp+21730,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__div_io_kill_REG))));
    bufp->fullBit(oldp+21731,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___req_arb_io_in_1_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_0_io_mem_req_valid))));
    bufp->fullBit(oldp+21732,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_0_io_mem_req_valid))));
    bufp->fullBit(oldp+21733,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___req_arb_io_in_1_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_1_io_mem_req_valid))));
    bufp->fullBit(oldp+21734,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_1_io_mem_req_valid))));
    bufp->fullBit(oldp+21735,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___req_arb_io_in_1_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_2_io_mem_req_valid))));
    bufp->fullBit(oldp+21736,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__asan_2_io_mem_req_valid))));
    bufp->fullSData(oldp+21737,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
                                  ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                           ? (1U | 
                                              (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid)
                                                 ? 
                                                (0x3fU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_bits_tag))
                                                 : 0U) 
                                               << 3U))
                                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                               ? (2U 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid)
                                                       ? 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_bits_tag))
                                                       : 0U) 
                                                     << 3U))
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                                   ? 
                                                  (3U 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid)
                                                        ? 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_bits_tag))
                                                        : 0U) 
                                                      << 3U))
                                                   : 
                                                  (4U 
                                                   | ((0x1f0U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                                          >> 3U)) 
                                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_fp) 
                                                         << 3U)))))))),9);
    bufp->fullCData(oldp+21738,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
                                  ? 0U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_cmd)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_cmd))
                                               : 0U)
                                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_cmd)
                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_cmd))
                                                   : 0U)
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_cmd)
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_cmd))
                                                    : 0U)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_ctrl_mem_cmd)))))),5);
    bufp->fullCData(oldp+21739,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
                                  ? 3U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_size)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_size))
                                               : 0U)
                                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_size)
                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_size))
                                                   : 0U)
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_size)
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_size))
                                                    : 0U)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_mem_size)))))),2);
    bufp->fullBit(oldp+21740,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)) 
                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                         ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_signed)
                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_signed)))
                                         : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                             ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid) 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_signed)
                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_signed)))
                                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                                 ? 
                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid) 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_signed)
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_signed)))
                                                 : 
                                                (~ 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ex_reg_inst 
                                                  >> 0xeU)))))))));
    bufp->fullCData(oldp+21741,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
                                  ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                           ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_dprv)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_dprv))
                                               : 3U)
                                           : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_dprv)
                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_dprv))
                                                   : 3U)
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid)
                                                    ? 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_dprv)
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_dprv))
                                                    : 3U)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_status_dprv)))))),2);
    bufp->fullBit(oldp+21742,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___ptw_io_mem_req_valid)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN)
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid)
                                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_replay_valid) 
                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT___nackq_io_deq_bits)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_1_dv)
                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__reqs_0_dv)))
                                    : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid)
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_replay_valid) 
                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT___nackq_io_deq_bits)
                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_1_dv)
                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__reqs_0_dv)))
                                        : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid)
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_replay_valid) 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT___nackq_io_deq_bits)
                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_1_dv)
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__reqs_0_dv)))
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___csr_io_status_dv)))))));
    bufp->fullBit(oldp+21743,((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_acquire_counter)) 
                                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_acquire_beats1))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_perf_acquire_T))));
    bufp->fullBit(oldp+21744,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid))));
    bufp->fullBit(oldp+21745,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en) 
                                >> 1U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid))));
    bufp->fullBit(oldp+21746,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en) 
                                >> 2U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid))));
    bufp->fullBit(oldp+21747,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_bits_way_en) 
                                >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid))));
    bufp->fullBit(oldp+21748,(((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21749,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21750,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21751,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_2)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21752,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_3)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21753,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_4)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21754,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_5)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21755,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_6)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21756,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_7)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21757,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_8)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21758,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_9)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21759,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_10)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21760,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_11)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21761,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_12)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21762,(((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__alloc_arb__DOT___grant_T_12) 
                                   | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__state)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready))));
    bufp->fullBit(oldp+21763,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__cacheable)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN))));
    bufp->fullBit(oldp+21764,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_27))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_16)))));
    bufp->fullBit(oldp+21765,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__mshrs__io_mem_grant_valid) 
                               & (0x200U == (0x3e0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
    bufp->fullBit(oldp+21766,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_0)))));
    bufp->fullBit(oldp+21767,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21768,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21769,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT__tag_array_MPORT_en)) 
                               & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))))));
    bufp->fullBit(oldp+21770,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_mem_acquire_valid_output))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_1)))));
    bufp->fullBit(oldp+21771,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_replay_valid)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21772,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21773,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21774,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_1_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_replay_valid)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))))));
    bufp->fullBit(oldp+21775,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_33))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_10)))));
    bufp->fullBit(oldp+21776,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_8)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21777,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21778,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21779,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_10_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_8)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__state))))));
    bufp->fullBit(oldp+21780,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_32))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_11)))));
    bufp->fullBit(oldp+21781,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_9)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21782,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21783,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21784,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_11_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_9)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__state))))));
    bufp->fullBit(oldp+21785,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_31))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_12)))));
    bufp->fullBit(oldp+21786,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_10)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21787,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21788,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21789,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_12_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_10)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__state))))));
    bufp->fullBit(oldp+21790,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_30))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_13)))));
    bufp->fullBit(oldp+21791,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_11)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21792,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21793,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21794,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_13_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_11)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__state))))));
    bufp->fullBit(oldp+21795,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_29))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_14)))));
    bufp->fullBit(oldp+21796,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_12)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21797,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21798,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21799,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_14_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_12)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__state))))));
    bufp->fullBit(oldp+21800,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_28))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_15)))));
    bufp->fullBit(oldp+21801,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___io_out_valid_T)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21802,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21803,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21804,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_15_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___io_out_valid_T)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__state))))));
    bufp->fullBit(oldp+21805,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_12))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_2)))));
    bufp->fullBit(oldp+21806,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21807,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21808,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21809,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_2_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__state))))));
    bufp->fullBit(oldp+21810,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_22))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_3)))));
    bufp->fullBit(oldp+21811,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21812,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21813,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21814,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_3_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_1)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__state))))));
    bufp->fullBit(oldp+21815,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_21))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_4)))));
    bufp->fullBit(oldp+21816,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_2)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21817,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21818,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21819,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_4_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_2)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__state))))));
    bufp->fullBit(oldp+21820,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_26))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_5)))));
    bufp->fullBit(oldp+21821,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_3)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21822,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21823,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21824,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_5_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_3)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__state))))));
    bufp->fullBit(oldp+21825,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_25))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_6)))));
    bufp->fullBit(oldp+21826,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_4)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21827,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21828,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21829,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_6_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_4)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__state))))));
    bufp->fullBit(oldp+21830,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_24))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_7)))));
    bufp->fullBit(oldp+21831,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_5)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21832,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21833,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21834,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_7_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_5)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__state))))));
    bufp->fullBit(oldp+21835,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_23))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_8)))));
    bufp->fullBit(oldp+21836,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_6)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21837,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21838,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21839,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_8_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_6)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__state))))));
    bufp->fullBit(oldp+21840,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__beatsLeft))
                                   ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___GEN_34))
                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__state_9)))));
    bufp->fullBit(oldp+21841,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_7)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21842,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__refill_done) 
                               & (IData)(vlSelf->__VdfgTmp_hbc2ad2ce__0))));
    bufp->fullBit(oldp+21843,(((IData)(vlSelf->__VdfgTmp_h922a7758__0) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT___rpq_io_enq_valid_T) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__sec_rdy))))));
    bufp->fullBit(oldp+21844,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___meta_read_arb_io_in_9_ready) 
                               & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__replay_arb__DOT___grant_T_7)) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready)) 
                                   & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__state))) 
                                  | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__state))))));
    bufp->fullBit(oldp+21845,(((~ (IData)((0U != (0x1fU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__lrsc_count) 
                                                     >> 2U))))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid))));
    bufp->fullBit(oldp+21846,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_out_valid)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21847,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__readArb__DOT___io_out_valid_T)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready))));
    bufp->fullBit(oldp+21848,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                               & (IData)((0x20000U 
                                          == (0x20200U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))));
    bufp->fullBit(oldp+21849,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_nack_output) 
                               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s2_id)))));
    bufp->fullBit(oldp+21850,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_valid) 
                               & (0U == (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_bits_tag))))));
    bufp->fullCData(oldp+21851,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_entry)
                                  : 0x1cU)),5);
    bufp->fullQData(oldp+21852,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                  ? (0x7ffffffffcULL 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_1)
                                  : (0x7ffffffffcULL 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc))),39);
    bufp->fullBit(oldp+21854,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_cfi)))));
    bufp->fullQData(oldp+21855,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_1
                                  : ((0x7ffffffffcULL 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_pc) 
                                     | (QData)((IData)(
                                                       (2U 
                                                        & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__taken_taken)) 
                                                           << 1U))))))),39);
    bufp->fullCData(oldp+21857,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid)
                                  ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9) 
                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                                         >> 7U)) ? 2U
                                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_ctrl_jalr) 
                                          & (1U == 
                                             ((0xcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                                                  >> 0x10U)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_inst 
                                                    >> 0xfU)))))
                                          ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9)))
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___GEN))),2);
    bufp->fullSData(oldp+21858,((0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT____VdfgTmp_h4d93a516__0)
                                            ? (((0x1fcU 
                                                 & ((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_1 
                                                             >> 4U)) 
                                                    << 2U)) 
                                                | (3U 
                                                   & ((IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_1 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_imem_btb_update_bits_br_pc_T_1 
                                                                 >> 0xbU))))) 
                                               ^ (0x1c0U 
                                                  & (((IData)(0xddU) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                                     << 1U)))
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__reset_waddr)))),9);
    bufp->fullBit(oldp+21859,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                                         >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT___GEN_0)))));
    bufp->fullBit(oldp+21860,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__btb__DOT____VdfgTmp_h4d93a516__0) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__mem_br_taken))));
    bufp->fullBit(oldp+21861,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_redirect) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___tlb_io_resp_miss) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_replay)))));
    bufp->fullCData(oldp+21862,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_nack_output) 
                                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT__s2_id)))
                                  ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__mem_resp_valid)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_27)
                                           : ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                               ? ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__pte_cache_hit)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_3)
                                                     ? 1U
                                                     : 2U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_xcpt_ae_ld_output)
                                                      ? 0U
                                                      : 5U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state))
                                                      ? 0U
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))
                                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT___GEN_20)
                                                   ? 
                                                  (1U 
                                                   & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__tlb__io_kill)) 
                                                      | (1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__state))))
                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__ptw__DOT__state)))))),3);
    bufp->fullBit(oldp+21863,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT___ctrl_T_1)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_resp_ready_output))));
    bufp->fullBit(oldp+21864,((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT___ctrl_T_2)) 
                                | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_grantMask_lastGrant))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_resp_ready_output))));
    bufp->fullBit(oldp+21865,((((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__empty)) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT___ctrl_T_2))) 
                                | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_1)) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb__DOT__ctrl_validMask_grantMask_lastGrant) 
                                         >> 1U)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_resp_ready_output))));
    bufp->fullBit(oldp+21866,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg));
    bufp->fullBit(oldp+21867,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h42f03b9a__0))));
    bufp->fullCData(oldp+21868,(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id),4);
    bufp->fullIData(oldp+21869,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                  ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                      << 0x1cU) | (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[0U] 
                                                   >> 4U))
                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)),32);
    bufp->fullCData(oldp+21870,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                           ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                               << 0x1cU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                                 >> 4U))
                                           : (~ (0x7fffU 
                                                 & (((IData)(0x7ffU) 
                                                     << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                    >> 3U)))))),8);
    bufp->fullCData(oldp+21871,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                        ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                            << 0x14U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                              >> 0xcU))
                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size)))),3);
    bufp->fullCData(oldp+21872,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                  ? (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                           >> 0xfU))
                                  : 1U)),2);
    bufp->fullBit(oldp+21873,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full) 
                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                  >> 0x11U))));
    bufp->fullCData(oldp+21874,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                  ? (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                             >> 0x12U))
                                  : 0U)),4);
    bufp->fullCData(oldp+21875,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                  ? (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                           >> 0x16U))
                                  : 1U)),3);
    bufp->fullCData(oldp+21876,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)
                                  ? (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram[1U] 
                                             >> 0x19U))
                                  : 0U)),4);
    bufp->fullBit(oldp+21877,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg));
    bufp->fullBit(oldp+21878,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___io_deq_valid_output));
    bufp->fullQData(oldp+21879,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                  ? (((QData)((IData)(
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[0U])))
                                  : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data)),64);
    bufp->fullCData(oldp+21881,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U]
                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)))),8);
    bufp->fullBit(oldp+21882,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)
                                      ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram[2U] 
                                         >> 8U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last)))));
    bufp->fullBit(oldp+21883,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_ready));
    bufp->fullBit(oldp+21884,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg));
    bufp->fullCData(oldp+21885,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg),4);
    bufp->fullCData(oldp+21886,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_resp_reg),2);
    bufp->fullBit(oldp+21887,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg));
    bufp->fullBit(oldp+21888,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h1a71d5b7__0))));
    bufp->fullBit(oldp+21889,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_ready));
    bufp->fullBit(oldp+21890,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_valid_reg));
    bufp->fullCData(oldp+21891,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg),4);
    bufp->fullQData(oldp+21892,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg),64);
    bufp->fullCData(oldp+21894,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_resp_reg),2);
    bufp->fullBit(oldp+21895,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg));
    bufp->fullSData(oldp+21896,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value),9);
    bufp->fullBit(oldp+21897,((0x1f3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value))));
    bufp->fullBit(oldp+21898,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_a_ready));
    bufp->fullBit(oldp+21899,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_buffer_out_a_valid));
    bufp->fullCData(oldp+21900,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+21901,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+21902,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size),3);
    bufp->fullCData(oldp+21903,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source),4);
    bufp->fullIData(oldp+21904,((0xfffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)),28);
    bufp->fullCData(oldp+21905,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+21906,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+21908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt));
    bufp->fullBit(oldp+21909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___mbus_auto_buffer_out_d_ready));
    bufp->fullBit(oldp+21910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_d_valid));
    bufp->fullCData(oldp+21911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read),3);
    bufp->fullCData(oldp+21912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_d_bits_size),3);
    bufp->fullCData(oldp+21913,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                                         >> 4U))),4);
    bufp->fullQData(oldp+21914,((((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7)))) 
                                  << 0x38U) | (((QData)((IData)(
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3)) 
                                                                         << 0x18U) 
                                                                        | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2)) 
                                                                            << 0x10U) 
                                                                           | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1)) 
                                                                               << 8U) 
                                                                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0)))))))))))),64);
    bufp->fullBit(oldp+21916,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___ram_auto_in_a_ready));
    bufp->fullBit(oldp+21917,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+21918,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+21919,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_param))),3);
    bufp->fullCData(oldp+21920,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size),2);
    bufp->fullCData(oldp+21921,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source),8);
    bufp->fullIData(oldp+21922,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_address),28);
    bufp->fullCData(oldp+21923,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                  ? 0xffU : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask))),8);
    bufp->fullBit(oldp+21924,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_corrupt))));
    bufp->fullBit(oldp+21925,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_d_ready));
    bufp->fullBit(oldp+21926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_full));
    bufp->fullCData(oldp+21927,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size),2);
    bufp->fullCData(oldp+21928,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source),8);
    bufp->fullCData(oldp+21929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+21930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+21931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+21932,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+21933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+21934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+21935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+21936,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+21937,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__gennum))));
    bufp->fullCData(oldp+21938,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aFragnum),3);
    bufp->fullBit(oldp+21939,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+21940,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+21941,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+21942,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+21943,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullCData(oldp+21944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__source),4);
    bufp->fullIData(oldp+21945,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__address),28);
    bufp->fullCData(oldp+21946,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+21947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+21948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullCData(oldp+21949,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__source_1),4);
    bufp->fullSData(oldp+21950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight),10);
    bufp->fullQData(oldp+21951,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),40);
    bufp->fullQData(oldp+21953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),40);
    bufp->fullCData(oldp+21955,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+21956,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+21957,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+21958,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+21959,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullSData(oldp+21960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_1),10);
    bufp->fullQData(oldp+21961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),40);
    bufp->fullCData(oldp+21963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+21964,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+21965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+21966,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+21967,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)))))));
    bufp->fullBit(oldp+21968,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+21969,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+21970,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21971,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21972,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21973,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21974,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21975,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+21976,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+21977,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))))));
    bufp->fullCData(oldp+21978,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_address))))))))))))),8);
    bufp->fullSData(oldp+21979,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                  ? (0x3ffU & ((IData)(1U) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                  : 0U)),10);
    bufp->fullBit(oldp+21980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+21981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullBit(oldp+21982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+21983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullCData(oldp+21984,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source))),4);
    bufp->fullIData(oldp+21985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___repeater_io_deq_bits_address),28);
    bufp->fullCData(oldp+21986,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask))),8);
    bufp->fullCData(oldp+21987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+21988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+21989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullCData(oldp+21990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_source),4);
    bufp->fullIData(oldp+21991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_address),28);
    bufp->fullCData(oldp+21992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+21993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullCData(oldp+21994,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7))),8);
    bufp->fullCData(oldp+21995,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6))),8);
    bufp->fullCData(oldp+21996,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5))),8);
    bufp->fullCData(oldp+21997,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4))),8);
    bufp->fullCData(oldp+21998,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3))),8);
    bufp->fullCData(oldp+21999,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2))),8);
    bufp->fullCData(oldp+22000,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1))),8);
    bufp->fullCData(oldp+22001,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0))),8);
    bufp->fullBit(oldp+22002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem_MPORT_en));
    bufp->fullBit(oldp+22003,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem_MPORT_1_en));
    bufp->fullBit(oldp+22004,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read));
    bufp->fullBit(oldp+22005,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_opcode))));
    bufp->fullBit(oldp+22006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_done));
    bufp->fullBit(oldp+22007,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG));
    bufp->fullCData(oldp+22008,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0),8);
    bufp->fullCData(oldp+22009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1),8);
    bufp->fullCData(oldp+22010,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2),8);
    bufp->fullCData(oldp+22011,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3),8);
    bufp->fullCData(oldp+22012,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4),8);
    bufp->fullCData(oldp+22013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5),8);
    bufp->fullCData(oldp+22014,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6),8);
    bufp->fullCData(oldp+22015,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7),8);
    bufp->fullSData(oldp+22016,((0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_address 
                                            >> 3U))),13);
    bufp->fullBit(oldp+22017,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT____Vcellinp__mem__RW0_en));
    bufp->fullQData(oldp+22018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT___mem_RW0_rdata),64);
    bufp->fullCData(oldp+22020,((0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data))),8);
    bufp->fullCData(oldp+22021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata),8);
    bufp->fullBit(oldp+22022,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask)))));
    bufp->fullCData(oldp+22023,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 8U)))),8);
    bufp->fullCData(oldp+22024,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata),8);
    bufp->fullBit(oldp+22025,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 1U)))));
    bufp->fullCData(oldp+22026,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x10U)))),8);
    bufp->fullCData(oldp+22027,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata),8);
    bufp->fullBit(oldp+22028,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 2U)))));
    bufp->fullCData(oldp+22029,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x18U)))),8);
    bufp->fullCData(oldp+22030,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata),8);
    bufp->fullBit(oldp+22031,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 3U)))));
    bufp->fullCData(oldp+22032,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x20U)))),8);
    bufp->fullCData(oldp+22033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata),8);
    bufp->fullBit(oldp+22034,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 4U)))));
    bufp->fullCData(oldp+22035,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x28U)))),8);
    bufp->fullCData(oldp+22036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata),8);
    bufp->fullBit(oldp+22037,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 5U)))));
    bufp->fullCData(oldp+22038,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x30U)))),8);
    bufp->fullCData(oldp+22039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata),8);
    bufp->fullBit(oldp+22040,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                        >> 6U)))));
    bufp->fullCData(oldp+22041,((0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_data 
                                                  >> 0x38U)))),8);
    bufp->fullCData(oldp+22042,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata),8);
    bufp->fullBit(oldp+22043,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__repeater__DOT__full) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_mask) 
                                  >> 7U))));
    bufp->fullBit(oldp+22044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+22047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0));
    bufp->fullSData(oldp+22060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0),13);
    bufp->fullBit(oldp+22061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter));
    bufp->fullCData(oldp+22062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+22063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+22064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__size),2);
    bufp->fullCData(oldp+22065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__source),8);
    bufp->fullIData(oldp+22066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__address),28);
    bufp->fullBit(oldp+22067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter));
    bufp->fullCData(oldp+22068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+22069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__size_1),2);
    bufp->fullCData(oldp+22070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__source_1),8);
    bufp->fullWData(oldp+22071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight),160);
    bufp->fullWData(oldp+22076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_opcodes),640);
    bufp->fullWData(oldp+22096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_sizes),640);
    bufp->fullBit(oldp+22116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1));
    bufp->fullBit(oldp+22117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter_1));
    bufp->fullIData(oldp+22118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+22119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_1),160);
    bufp->fullWData(oldp+22124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__inflight_sizes_1),640);
    bufp->fullBit(oldp+22144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__d_first_counter_2));
    bufp->fullIData(oldp+22145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+22146,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+22147,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))))));
    bufp->fullBit(oldp+22148,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+22149,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+22150,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))));
    bufp->fullBit(oldp+22151,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))));
    bufp->fullBit(oldp+22152,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))));
    bufp->fullBit(oldp+22153,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))));
    bufp->fullBit(oldp+22154,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))));
    bufp->fullBit(oldp+22155,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))));
    bufp->fullBit(oldp+22156,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))));
    bufp->fullBit(oldp+22157,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))))));
    bufp->fullCData(oldp+22158,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                    << 7U) 
                                                   & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                              << 7U))) 
                                 | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       << 6U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                          << 5U) 
                                                         & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h52f1e389__0))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h52f1e389__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h52f1e389__0)))))))))))))),8);
    __Vtemp_3[0U] = 1U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(160,160,8, __Vtemp_4, __Vtemp_3, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT___fragmenter_auto_out_a_bits_source));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT___same_cycle_resp_T_1) {
        __Vtemp_6[0U] = __Vtemp_4[0U];
        __Vtemp_6[1U] = __Vtemp_4[1U];
        __Vtemp_6[2U] = __Vtemp_4[2U];
        __Vtemp_6[3U] = __Vtemp_4[3U];
        __Vtemp_6[4U] = __Vtemp_4[4U];
    } else {
        __Vtemp_6[0U] = 0U;
        __Vtemp_6[1U] = 0U;
        __Vtemp_6[2U] = 0U;
        __Vtemp_6[3U] = 0U;
        __Vtemp_6[4U] = 0U;
    }
    bufp->fullWData(oldp+22159,(__Vtemp_6),160);
    bufp->fullBit(oldp+22164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+22165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+22166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter));
    bufp->fullCData(oldp+22167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+22168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+22169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size),2);
    bufp->fullSData(oldp+22170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source),14);
    bufp->fullIData(oldp+22171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__address),17);
    bufp->fullBit(oldp+22172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter));
    bufp->fullCData(oldp+22173,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__size_1),2);
    bufp->fullSData(oldp+22174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__source_1),14);
    bufp->fullWData(oldp+22175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight),8208);
    bufp->fullWData(oldp+22432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_opcodes),32832);
    bufp->fullWData(oldp+23458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_sizes),32832);
    bufp->fullBit(oldp+24484,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1));
    bufp->fullBit(oldp+24485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1));
    bufp->fullIData(oldp+24486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+24487,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)))));
    bufp->fullBit(oldp+24488,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))));
    bufp->fullBit(oldp+24489,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full)))));
    bufp->fullBit(oldp+24490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full));
    bufp->fullBit(oldp+24491,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__full)))));
    bufp->fullBit(oldp+24492,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__empty)))));
    bufp->fullCData(oldp+24493,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+24494,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),2);
    bufp->fullCData(oldp+24495,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))),3);
    bufp->fullSData(oldp+24496,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 8U))),10);
    bufp->fullBit(oldp+24497,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+24498,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x13U))));
    bufp->fullQData(oldp+24499,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x14U)))),64);
    bufp->fullBit(oldp+24501,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+24502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_a_ready));
    bufp->fullBit(oldp+24503,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    bufp->fullCData(oldp+24504,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U])),3);
    bufp->fullCData(oldp+24505,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                       >> 3U))),3);
    bufp->fullCData(oldp+24506,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                       >> 6U))),2);
    bufp->fullSData(oldp+24507,((0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                            >> 8U))),14);
    bufp->fullIData(oldp+24508,((0x3ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                                                << 0xaU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                                  >> 0x16U)))),26);
    bufp->fullCData(oldp+24509,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U] 
                                          >> 0x10U))),8);
    bufp->fullQData(oldp+24510,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[3U])) 
                                  << 0x28U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[2U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[1U])) 
                                                  >> 0x18U)))),64);
    bufp->fullBit(oldp+24512,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+24513,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))));
    bufp->fullBit(oldp+24514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_l2_ctrls_ctrl_in_d_valid));
    bufp->fullCData(oldp+24515,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[0U])),3);
    bufp->fullCData(oldp+24516,((3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[3U])),2);
    bufp->fullSData(oldp+24517,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[2U] 
                                 >> 0x12U)),14);
    bufp->fullQData(oldp+24518,(((1U & ((2U | ((8U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1)))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1)))) 
                                                      << 2U)) 
                                                  | (1U 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1)))))))) 
                                        >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex)))
                                  ? (((QData)((IData)(
                                                      VTestDriver__ConstPool__CONST_h4e4f723a_0[
                                                      (((IData)(0x3fU) 
                                                        + 
                                                        (0xffU 
                                                         & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U))) 
                                                       >> 5U)])) 
                                      << ((0U == (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U)))
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U))))) 
                                     | (((0U == (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U)))
                                          ? 0ULL : 
                                         ((QData)((IData)(
                                                          VTestDriver__ConstPool__CONST_h4e4f723a_0[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U))))) 
                                        | ((QData)((IData)(
                                                           VTestDriver__ConstPool__CONST_h4e4f723a_0[
                                                           (7U 
                                                            & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U) 
                                                               >> 5U))])) 
                                           >> (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex), 6U)))))
                                  : 0ULL)),64);
    bufp->fullBit(oldp+24520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_valid));
    bufp->fullCData(oldp+24521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode),3);
    bufp->fullCData(oldp+24522,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),2);
    bufp->fullCData(oldp+24523,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 5U))),4);
    bufp->fullSData(oldp+24524,((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),9);
    bufp->fullBit(oldp+24525,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+24526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_denied));
    bufp->fullQData(oldp+24527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_data),64);
    bufp->fullBit(oldp+24529,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_corrupt));
    bufp->fullCData(oldp+24530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__state),3);
    bufp->fullBit(oldp+24531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__nodeOut_a_valid));
    bufp->fullBit(oldp+24532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_in_d_valid));
    bufp->fullSData(oldp+24533,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),10);
    bufp->fullBit(oldp+24534,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))));
    bufp->fullBit(oldp+24535,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)))));
    bufp->fullCData(oldp+24536,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullBit(oldp+24537,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x14U))));
    bufp->fullQData(oldp+24538,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x15U)))),64);
    bufp->fullBit(oldp+24540,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+24541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_i_ready));
    bufp->fullCData(oldp+24542,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state),2);
    bufp->fullCData(oldp+24543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
    bufp->fullCData(oldp+24544,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
    bufp->fullCData(oldp+24545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size),4);
    bufp->fullSData(oldp+24546,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_source),10);
    bufp->fullIData(oldp+24547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address),29);
    bufp->fullCData(oldp+24548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
    bufp->fullQData(oldp+24549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
    bufp->fullBit(oldp+24551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
    bufp->fullCData(oldp+24552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut),4);
    bufp->fullQData(oldp+24553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_data),64);
    bufp->fullBit(oldp+24555,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_denied));
    bufp->fullBit(oldp+24556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt));
    bufp->fullBit(oldp+24557,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state))));
    bufp->fullBit(oldp+24558,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state))));
    bufp->fullQData(oldp+24559,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__wide_mask),64);
    bufp->fullQData(oldp+24561,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_a_ext),64);
    bufp->fullQData(oldp+24563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_d_ext),64);
    bufp->fullBit(oldp+24565,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
    bufp->fullBit(oldp+24566,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc));
    bufp->fullBit(oldp+24567,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1));
    bufp->fullBit(oldp+24568,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
    bufp->fullBit(oldp+24569,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2));
    bufp->fullBit(oldp+24570,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2));
    bufp->fullBit(oldp+24571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3));
    bufp->fullBit(oldp+24572,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3));
    bufp->fullBit(oldp+24573,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4));
    bufp->fullBit(oldp+24574,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4));
    bufp->fullBit(oldp+24575,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5));
    bufp->fullBit(oldp+24576,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5));
    bufp->fullSData(oldp+24577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__beatsLeft),9);
    bufp->fullBit(oldp+24578,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__beatsLeft))));
    bufp->fullBit(oldp+24579,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_0));
    bufp->fullBit(oldp+24580,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_1));
    bufp->fullBit(oldp+24581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__muxState_0));
    bufp->fullSData(oldp+24582,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_first_counter),9);
    bufp->fullBit(oldp+24583,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_first_counter))));
    bufp->fullBit(oldp+24584,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_cam_sel_0));
    bufp->fullBit(oldp+24585,((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullBit(oldp+24586,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_drop));
    bufp->fullBit(oldp+24587,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_replace));
    bufp->fullSData(oldp+24588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+24589,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+24590,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+24591,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+24592,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+24593,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__address),29);
    bufp->fullSData(oldp+24594,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+24595,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+24596,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+24597,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+24598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+24599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+24600,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+24601,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+24618,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+24683,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+24812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+24813,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+24814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+24815,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+24816,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_d_bits_opcode))));
    bufp->fullIData(oldp+24817,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+24818,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+24835,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+24964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+24965,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+24966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+24967,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x11U))) 
                               | ((0x18U == (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                  | ((0x190U == (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                     | ((0x1a0U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))) 
                                        | ((0x14U == 
                                            (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                           | ((0x150U 
                                               == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))) 
                                              | ((0x160U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))) 
                                                 | ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xdU))) 
                                                    | ((0x110U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 9U))) 
                                                       | ((0x120U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 9U))) 
                                                          | (0x200U 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 9U)))))))))))))));
    bufp->fullBit(oldp+24968,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)))));
    bufp->fullBit(oldp+24969,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))));
    bufp->fullSData(oldp+24970,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+24971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+24972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+24973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+24974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+24975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__address),29);
    bufp->fullSData(oldp+24976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+24977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+24978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+24979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+24980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+24981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+24982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+24983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+25000,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+25065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+25194,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+25195,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+25196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+25197,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+25198,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+25199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+25200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+25217,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+25346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+25347,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+25348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+25349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap));
    bufp->fullBit(oldp+25350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
    bufp->fullBit(oldp+25351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+25352,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+25353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__empty));
    bufp->fullBit(oldp+25354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
    bufp->fullWData(oldp+25355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),86);
    bufp->fullWData(oldp+25358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),86);
    bufp->fullWData(oldp+25361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),86);
    bufp->fullBit(oldp+25364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap));
    bufp->fullBit(oldp+25365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
    bufp->fullBit(oldp+25366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+25367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+25368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty));
    bufp->fullBit(oldp+25369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    bufp->fullWData(oldp+25370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),122);
    bufp->fullWData(oldp+25374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),122);
    bufp->fullCData(oldp+25378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+25379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+25380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+25381,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+25382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+25383,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+25384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+25385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+25386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+25387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+25388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+25389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+25390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__address),17);
    bufp->fullCData(oldp+25391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+25392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+25393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+25394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+25411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+25476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+25541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+25542,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+25543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+25544,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+25545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullBit(oldp+25546,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+25547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+25548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+25549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullSData(oldp+25550,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
    bufp->fullIData(oldp+25551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_address),17);
    bufp->fullCData(oldp+25552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+25553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullCData(oldp+25554,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+25555,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+25556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+25557,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+25558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+25559,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+25560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+25561,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+25562,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+25563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+25564,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+25565,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+25566,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address),26);
    bufp->fullCData(oldp+25567,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+25568,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+25569,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+25570,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+25571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+25588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+25653,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+25718,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+25719,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+25720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+25721,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+25722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+25723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+25740,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+25805,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+25806,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+25807,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+25808,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+25809,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+25810,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+25811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullSData(oldp+25812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
    bufp->fullIData(oldp+25813,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_address),26);
    bufp->fullCData(oldp+25814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+25815,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullCData(oldp+25816,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+25817,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+25818,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+25819,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+25820,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+25821,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+25822,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+25823,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+25824,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+25825,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+25826,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+25827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source),10);
    bufp->fullSData(oldp+25828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__address),12);
    bufp->fullCData(oldp+25829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+25830,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+25831,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+25832,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+25833,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+25850,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+25915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+25980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+25981,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+25982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+25983,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+25984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+25985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+26002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+26067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+26068,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+26069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullCData(oldp+26070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+26071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullSData(oldp+26072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
    bufp->fullSData(oldp+26073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_address),12);
    bufp->fullCData(oldp+26074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+26075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_a_ready));
    bufp->fullBit(oldp+26076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_valid));
    bufp->fullCData(oldp+26077,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])),3);
    bufp->fullCData(oldp+26078,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                       >> 3U))),2);
    bufp->fullCData(oldp+26079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+26080,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                           >> 0xbU))),10);
    bufp->fullBit(oldp+26081,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+26082,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                     >> 0x16U))));
    bufp->fullQData(oldp+26083,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                                  << 0x29U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                                                << 9U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                                  >> 0x17U)))),64);
    bufp->fullBit(oldp+26085,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U] 
                                     >> 0x17U))));
    bufp->fullBit(oldp+26086,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))));
    bufp->fullBit(oldp+26087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
    bufp->fullCData(oldp+26088,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                       >> 5U))),2);
    bufp->fullSData(oldp+26089,((0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                            >> 7U))),14);
    bufp->fullBit(oldp+26090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter));
    bufp->fullCData(oldp+26091,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+26092,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+26093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__size),2);
    bufp->fullSData(oldp+26094,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__source),14);
    bufp->fullIData(oldp+26095,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__address),26);
    bufp->fullBit(oldp+26096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter));
    bufp->fullCData(oldp+26097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+26098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+26099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__size_1),2);
    bufp->fullSData(oldp+26100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__source_1),14);
    bufp->fullBit(oldp+26101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+26102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+26103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight),8208);
    bufp->fullWData(oldp+26360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),32832);
    bufp->fullWData(oldp+27386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),32832);
    bufp->fullBit(oldp+28412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
    bufp->fullBit(oldp+28413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
    bufp->fullBit(oldp+28414,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U]))));
    bufp->fullIData(oldp+28415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+28416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1),8208);
    bufp->fullWData(oldp+28673,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),32832);
    bufp->fullBit(oldp+29699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
    bufp->fullIData(oldp+29700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullWData(oldp+29701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram),88);
    bufp->fullBit(oldp+29704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullWData(oldp+29705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram),121);
    bufp->fullCData(oldp+29709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+29710,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+29711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+29712,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+29713,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+29714,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+29715,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+29716,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+29717,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+29718,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+29719,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+29720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+29721,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+29722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+29723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+29724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__address),26);
    bufp->fullCData(oldp+29725,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+29726,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+29727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+29728,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+29729,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+29730,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+29731,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+29732,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+29749,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+29814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+29879,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+29880,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+29881,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+29882,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+29883,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+29884,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+29901,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+29966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+29967,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+29968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+29969,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                             >> 0x13U))) 
                               | ((0x18U == (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                >> 0xfU))) 
                                  | ((0x190U == (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                    >> 0xbU))) 
                                     | ((0x1a0U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                           >> 0xbU))) 
                                        | ((0x14U == 
                                            (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                >> 0xfU))) 
                                           | ((0x150U 
                                               == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                      >> 0xbU))) 
                                              | ((0x160U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                      >> 0xbU))) 
                                                 | ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                         >> 0xfU))) 
                                                    | ((0x110U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                            >> 0xbU))) 
                                                       | ((0x120U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                               >> 0xbU))) 
                                                          | (0x200U 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                                                                 >> 0xbU)))))))))))))));
    bufp->fullBit(oldp+29970,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+29971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+29972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+29973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullSData(oldp+29974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
    bufp->fullIData(oldp+29975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_address),26);
    bufp->fullCData(oldp+29976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+29977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+29978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_a_ready));
    bufp->fullCData(oldp+29979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum),3);
    bufp->fullCData(oldp+29980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dOrig),3);
    bufp->fullBit(oldp+29981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle));
    bufp->fullBit(oldp+29982,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum))));
    bufp->fullCData(oldp+29983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum),3);
    bufp->fullBit(oldp+29984,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))));
    bufp->fullBit(oldp+29985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r));
    bufp->fullCData(oldp+29986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+29987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+29988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+29989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+29990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+29991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__address),28);
    bufp->fullCData(oldp+29992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+29993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+29994,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+29995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+29996,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+30013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+30078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+30143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+30144,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+30145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+30146,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+30147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+30148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+30165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+30230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+30231,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+30232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+30233,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+30234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
    bufp->fullCData(oldp+30235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullCData(oldp+30236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
    bufp->fullSData(oldp+30237,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
    bufp->fullIData(oldp+30238,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_address),28);
    bufp->fullCData(oldp+30239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
    bufp->fullBit(oldp+30240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+30241,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))));
    bufp->fullBit(oldp+30242,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)))));
    bufp->fullCData(oldp+30243,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+30244,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),2);
    bufp->fullCData(oldp+30245,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U))),3);
    bufp->fullSData(oldp+30246,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 8U))),10);
    bufp->fullBit(oldp+30247,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+30248,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x13U))));
    bufp->fullQData(oldp+30249,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x14U)))),64);
    bufp->fullBit(oldp+30251,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0x14U))));
    bufp->fullCData(oldp+30252,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+30253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+30254,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+30255,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+30256,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+30257,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__address),21);
    bufp->fullCData(oldp+30258,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+30259,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+30260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+30261,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+30262,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+30263,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+30264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+30265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+30282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+30347,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+30412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+30413,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+30414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+30415,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+30416,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+30417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+30418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+30435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+30500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+30501,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+30502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+30503,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x10U))) 
                               | ((0x18U == (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xcU))) 
                                  | ((0x190U == (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U))) 
                                     | ((0x1a0U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 8U))) 
                                        | ((0x14U == 
                                            (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xcU))) 
                                           | ((0x150U 
                                               == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 8U))) 
                                              | ((0x160U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 8U))) 
                                                 | ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xcU))) 
                                                    | ((0x110U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 8U))) 
                                                       | ((0x120U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 8U))) 
                                                          | (0x200U 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 8U)))))))))))))));
    bufp->fullBit(oldp+30504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap));
    bufp->fullBit(oldp+30505,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
    bufp->fullBit(oldp+30506,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+30507,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+30508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__empty));
    bufp->fullBit(oldp+30509,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
    bufp->fullWData(oldp+30510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),85);
    bufp->fullWData(oldp+30513,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),85);
    bufp->fullWData(oldp+30516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),85);
    bufp->fullBit(oldp+30519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap));
    bufp->fullBit(oldp+30520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
    bufp->fullBit(oldp+30521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+30522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+30523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__empty));
    bufp->fullBit(oldp+30524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    bufp->fullWData(oldp+30525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),113);
    bufp->fullWData(oldp+30529,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),113);
    bufp->fullCData(oldp+30533,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
    bufp->fullCData(oldp+30534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+30535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+30536,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__size),3);
    bufp->fullSData(oldp+30537,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+30538,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__address),21);
    bufp->fullCData(oldp+30539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
    bufp->fullCData(oldp+30540,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+30541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__size_1),3);
    bufp->fullSData(oldp+30542,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+30543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+30560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+30625,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes),2052);
    bufp->fullCData(oldp+30690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
    bufp->fullBit(oldp+30691,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullCData(oldp+30692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
    bufp->fullBit(oldp+30693,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+30694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+30695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+30712,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),2052);
    bufp->fullCData(oldp+30777,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
    bufp->fullBit(oldp+30778,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+30779,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullSData(oldp+30780,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+30781,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+30782,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+30783,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+30784,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+30785,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__address),29);
    bufp->fullSData(oldp+30786,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+30787,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+30788,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+30789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+30790,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+30791,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+30792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+30793,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+30810,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+30875,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+31004,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+31005,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+31006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+31007,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+31008,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+31009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+31026,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+31155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+31156,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+31157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullIData(oldp+31158,(((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__state))
                                  ? 0x1000U : 0x2000000U)),29);
    bufp->fullQData(oldp+31159,(((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__state))
                                  ? 0x80000000ULL : 1ULL)),64);
    bufp->fullBit(oldp+31161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_in_1_d_valid));
    bufp->fullBit(oldp+31162,((0x200U == (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U)))));
    bufp->fullSData(oldp+31163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__beatsLeft),9);
    bufp->fullBit(oldp+31164,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+31165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__readys_mask),2);
    bufp->fullBit(oldp+31166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__state_0));
    bufp->fullBit(oldp+31167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__state_1));
    bufp->fullSData(oldp+31168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+31169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+31170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+31171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+31172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__source),9);
    bufp->fullIData(oldp+31173,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__address),29);
    bufp->fullSData(oldp+31174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+31175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+31176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+31177,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+31178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__source_1),9);
    bufp->fullBit(oldp+31179,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+31180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+31181,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__inflight),417);
    bufp->fullWData(oldp+31195,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes),1668);
    bufp->fullWData(oldp+31248,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes),3336);
    bufp->fullSData(oldp+31353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+31354,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+31355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+31356,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+31357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+31358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_1),417);
    bufp->fullWData(oldp+31372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1),3336);
    bufp->fullSData(oldp+31477,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+31478,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+31479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+31480,((1U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x11U)) 
                                     | ((0x18U == (0x1fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xdU))) 
                                        | ((0x190U 
                                            == (0x1ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                                           | ((0x1a0U 
                                               == (0x1ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))) 
                                              | ((0x14U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xdU))) 
                                                 | ((0x150U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 9U))) 
                                                    | ((0x160U 
                                                        == 
                                                        (0x1ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 9U))) 
                                                       | ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 0xdU))) 
                                                          | ((0x110U 
                                                              == 
                                                              (0x1ffU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 9U))) 
                                                             | (0x120U 
                                                                == 
                                                                (0x1ffU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 9U)))))))))))))));
    bufp->fullSData(oldp+31481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter),9);
    bufp->fullIData(oldp+31482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__address),29);
    bufp->fullSData(oldp+31483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter),9);
    bufp->fullCData(oldp+31484,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__opcode_1),3);
    bufp->fullCData(oldp+31485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__param_1),2);
    bufp->fullCData(oldp+31486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__size_1),4);
    bufp->fullBit(oldp+31487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__sink));
    bufp->fullBit(oldp+31488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__denied));
    bufp->fullBit(oldp+31489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight));
    bufp->fullCData(oldp+31490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes),4);
    bufp->fullCData(oldp+31491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes),8);
    bufp->fullSData(oldp+31492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+31493,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+31494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+31495,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+31496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr_wo_ready));
    bufp->fullIData(oldp+31497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__watchdog),32);
    bufp->fullBit(oldp+31498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_1));
    bufp->fullCData(oldp+31499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes_1),8);
    bufp->fullSData(oldp+31500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+31501,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
    bufp->fullBit(oldp+31502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr_1));
    bufp->fullIData(oldp+31503,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__watchdog_1),32);
    bufp->fullBit(oldp+31504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set_wo_ready));
    bufp->fullBit(oldp+31505,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))));
    bufp->fullBit(oldp+31506,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)))));
    bufp->fullCData(oldp+31507,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+31508,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),2);
    bufp->fullCData(oldp+31509,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 5U))),4);
    bufp->fullSData(oldp+31510,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),10);
    bufp->fullBit(oldp+31511,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+31512,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x14U))));
    bufp->fullQData(oldp+31513,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                  << 0x2bU) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                << 0xbU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                  >> 0x15U)))),64);
    bufp->fullBit(oldp+31515,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0x15U))));
    bufp->fullSData(oldp+31516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft),9);
    bufp->fullBit(oldp+31517,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft))));
    bufp->fullCData(oldp+31518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_mask),8);
    bufp->fullBit(oldp+31519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_0));
    bufp->fullBit(oldp+31520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_1));
    bufp->fullBit(oldp+31521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_2));
    bufp->fullBit(oldp+31522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_3));
    bufp->fullBit(oldp+31523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_4));
    bufp->fullBit(oldp+31524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_5));
    bufp->fullBit(oldp+31525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_6));
    bufp->fullBit(oldp+31526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_7));
    bufp->fullBit(oldp+31527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__latch));
    bufp->fullSData(oldp+31528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+31529,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+31530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+31531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+31532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source),10);
    bufp->fullIData(oldp+31533,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__address),29);
    bufp->fullSData(oldp+31534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+31535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+31536,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+31537,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+31538,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+31539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+31540,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+31541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+31558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+31623,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+31752,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+31753,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+31754,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+31755,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullIData(oldp+31756,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+31757,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+31774,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+31903,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+31904,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+31905,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+31906,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)))));
    bufp->fullBit(oldp+31907,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)))));
    bufp->fullCData(oldp+31908,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+31909,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),3);
    bufp->fullCData(oldp+31910,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))),4);
    bufp->fullSData(oldp+31911,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU))),10);
    bufp->fullSData(oldp+31912,((0x3fffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xcU) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x14U)))),14);
    bufp->fullCData(oldp+31913,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 2U))),8);
    bufp->fullQData(oldp+31914,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                  << 0x36U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0xaU)))),64);
    bufp->fullBit(oldp+31916,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                     >> 0xaU))));
    bufp->fullBit(oldp+31917,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))));
    bufp->fullBit(oldp+31918,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_valid));
    bufp->fullCData(oldp+31919,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode),3);
    bufp->fullCData(oldp+31920,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                         >> 6U))),4);
    bufp->fullSData(oldp+31921,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                           >> 0xaU))),10);
    bufp->fullBit(oldp+31922,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode))));
    bufp->fullSData(oldp+31923,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+31924,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+31925,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+31926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+31927,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source),10);
    bufp->fullSData(oldp+31928,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__address),14);
    bufp->fullSData(oldp+31929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+31930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+31931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__param_1),2);
    bufp->fullCData(oldp+31932,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+31933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__source_1),10);
    bufp->fullBit(oldp+31934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__sink));
    bufp->fullBit(oldp+31935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__denied));
    bufp->fullWData(oldp+31936,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+31953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+32018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+32147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+32148,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+32149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+32150,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+32151,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
    bufp->fullIData(oldp+32152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+32153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+32170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+32299,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+32300,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+32301,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+32302,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x11U))) 
                               | ((0x18U == (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                  | ((0x190U == (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                     | ((0x1a0U == 
                                         (0x3ffU & 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))) 
                                        | ((0x14U == 
                                            (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU))) 
                                           | ((0x150U 
                                               == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))) 
                                              | ((0x160U 
                                                  == 
                                                  (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U))) 
                                                 | ((0x10U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xdU))) 
                                                    | ((0x110U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 9U))) 
                                                       | ((0x120U 
                                                           == 
                                                           (0x3ffU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 9U))) 
                                                          | (0x200U 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 9U)))))))))))))));
    bufp->fullBit(oldp+32303,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap));
    bufp->fullBit(oldp+32304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
    bufp->fullBit(oldp+32305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full));
    bufp->fullBit(oldp+32306,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match));
    bufp->fullBit(oldp+32307,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__empty));
    bufp->fullBit(oldp+32308,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
    bufp->fullBit(oldp+32309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullWData(oldp+32310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),86);
    __Vtemp_9[0U] = (0x100000U | ((0x7ffe0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
                                               >> 1U)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode)));
    __Vtemp_9[1U] = 0U;
    __Vtemp_9[2U] = (0x200000U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode) 
                                  << 0x15U));
    bufp->fullWData(oldp+32313,(__Vtemp_9),86);
    bufp->fullWData(oldp+32316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),86);
    bufp->fullWData(oldp+32319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),86);
    bufp->fullBit(oldp+32322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap));
    bufp->fullBit(oldp+32323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
    bufp->fullBit(oldp+32324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full));
    bufp->fullBit(oldp+32325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match));
    bufp->fullBit(oldp+32326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__empty));
    bufp->fullBit(oldp+32327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
    bufp->fullBit(oldp+32328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
    bufp->fullWData(oldp+32329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),107);
    bufp->fullWData(oldp+32333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),107);
    bufp->fullWData(oldp+32337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),107);
    bufp->fullSData(oldp+32341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_beats1),9);
    bufp->fullSData(oldp+32342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter),9);
    bufp->fullBit(oldp+32343,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last));
    bufp->fullSData(oldp+32344,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__beats1),9);
    bufp->fullSData(oldp+32345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter),9);
    bufp->fullBit(oldp+32346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___q_io_deq_ready_T_3));
    bufp->fullBit(oldp+32347,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full));
    bufp->fullCData(oldp+32348,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U])),3);
    bufp->fullWData(oldp+32349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram),107);
    bufp->fullBit(oldp+32353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__do_enq));
    bufp->fullSData(oldp+32354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter),9);
    bufp->fullCData(oldp+32355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode),3);
    bufp->fullCData(oldp+32356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param),3);
    bufp->fullCData(oldp+32357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size),4);
    bufp->fullSData(oldp+32358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source),10);
    bufp->fullSData(oldp+32359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__address),14);
    bufp->fullSData(oldp+32360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter),9);
    bufp->fullCData(oldp+32361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode_1),3);
    bufp->fullCData(oldp+32362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size_1),4);
    bufp->fullSData(oldp+32363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1),10);
    bufp->fullWData(oldp+32364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight),513);
    bufp->fullWData(oldp+32381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes),2052);
    bufp->fullWData(oldp+32446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes),4104);
    bufp->fullSData(oldp+32575,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1),9);
    bufp->fullBit(oldp+32576,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1))));
    bufp->fullSData(oldp+32577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1),9);
    bufp->fullBit(oldp+32578,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
    bufp->fullBit(oldp+32579,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode))));
    bufp->fullIData(oldp+32580,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog),32);
    bufp->fullWData(oldp+32581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1),513);
    bufp->fullWData(oldp+32598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes_1),4104);
    bufp->fullSData(oldp+32727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2),9);
    bufp->fullBit(oldp+32728,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2))));
    bufp->fullIData(oldp+32729,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog_1),32);
    bufp->fullBit(oldp+32730,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x12U))))) 
                                     | ((0x18U == (0x3fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xeU))) 
                                        | ((0x190U 
                                            == (0x3ffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU))) 
                                           | ((0x1a0U 
                                               == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))) 
                                              | ((0x14U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xeU))) 
                                                 | ((0x150U 
                                                     == 
                                                     (0x3ffU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0xaU))) 
                                                    | ((0x160U 
                                                        == 
                                                        (0x3ffU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0xaU))) 
                                                       | ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 0xeU))) 
                                                          | ((0x110U 
                                                              == 
                                                              (0x3ffU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0xaU))) 
                                                             | ((0x120U 
                                                                 == 
                                                                 (0x3ffU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 0xaU))) 
                                                                | (0x200U 
                                                                   == 
                                                                   (0x3ffU 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xaU))))))))))))))));
    bufp->fullBit(oldp+32731,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+32732,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               | (IData)((0x80U == 
                                          (0x4000c0U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+32733,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               | (IData)((0x400080U 
                                          == (0x4000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+32734,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+32735,((IData)((0U == (0x600000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+32736,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x4000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x40U == 
                                          (0x6000c0U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+32737,((IData)((0x200000U == 
                                       (0x600000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+32738,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x4000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x200040U 
                                          == (0x6000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+32739,((IData)((0x400000U == 
                                       (0x600000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+32740,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)((0x400080U 
                                           == (0x4000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x400040U 
                                          == (0x6000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+32741,((IData)((0x600000U == 
                                       (0x600000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+32742,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)((0x400080U 
                                           == (0x4000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x600040U 
                                          == (0x6000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullCData(oldp+32743,(((0x80U & (((((2U < 
                                               (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                              | (IData)(
                                                        (0x400080U 
                                                         == 
                                                         (0x4000c0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             | (IData)(
                                                       (0x600040U 
                                                        == 
                                                        (0x6000c0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                            | (IData)(
                                                      (0x700000U 
                                                       == 
                                                       (0x700000U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                           << 7U)) 
                                 | ((0x40U & (((((2U 
                                                  < 
                                                  (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                                 | (IData)(
                                                           (0x400080U 
                                                            == 
                                                            (0x4000c0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                | (IData)(
                                                          (0x600040U 
                                                           == 
                                                           (0x6000c0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               | (IData)(
                                                         (0x600000U 
                                                          == 
                                                          (0x700000U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              << 6U)) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < 
                                                     (0xfU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))) 
                                                    | (IData)(
                                                              (0x400080U 
                                                               == 
                                                               (0x4000c0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                   | (IData)(
                                                             (0x400040U 
                                                              == 
                                                              (0x6000c0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  | (IData)(
                                                            (0x500000U 
                                                             == 
                                                             (0x700000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (0xfU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                               | (IData)(
                                                         (0x400080U 
                                                          == 
                                                          (0x4000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              | (IData)(
                                                        (0x400040U 
                                                         == 
                                                         (0x6000c0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             | (IData)(
                                                       (0x400000U 
                                                        == 
                                                        (0x700000U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                            << 4U)) 
                                          | ((8U & 
                                              (((((2U 
                                                   < 
                                                   (0xfU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            (0x80U 
                                                             == 
                                                             (0x4000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 | (IData)(
                                                           (0x200040U 
                                                            == 
                                                            (0x6000c0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x700000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 (0x80U 
                                                                  == 
                                                                  (0x4000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x200040U 
                                                                 == 
                                                                 (0x6000c0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x200000U 
                                                                == 
                                                                (0x700000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    (0x80U 
                                                                     == 
                                                                     (0x4000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x40U 
                                                                    == 
                                                                    (0x6000c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x100000U 
                                                                   == 
                                                                   (0x700000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x80U 
                                                                      == 
                                                                      (0x4000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x40U 
                                                                     == 
                                                                     (0x6000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (0x700000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))))))))))),8);
}
