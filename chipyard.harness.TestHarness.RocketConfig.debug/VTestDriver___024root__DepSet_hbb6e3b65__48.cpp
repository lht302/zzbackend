// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30ff_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h6000bedb_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9cb9_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6231(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6231\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<32>/*1023:0*/ __Vtemp_17;
    VlWide<32>/*1023:0*/ __Vtemp_21;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                      ? (1U | (0xeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                      : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_3, __Vtemp_2, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_3);
    VL_SEL_WWII(2052,8195, __Vtemp_5, __Vtemp_4, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_1), __Vtemp_5, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                             >> 2U)));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_44), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        VL_ASSIGN_W(2052,__Vtemp_14, VTestDriver__ConstPool__CONST_h6000bedb_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__valid = 0U;
    } else {
        VL_ASSIGN_W(2052,__Vtemp_14, __Vtemp_13);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__valid 
            = (0x1fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__valid 
                             & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop) 
                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data) 
                                       == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                                            ? ((0x14U 
                                                >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits))
                                                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__tail_ext__DOT__Memory
                                               [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits]
                                                : 0U)
                                            : 0U)))
                                    ? ((IData)(1U) 
                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits))
                                    : 0U))) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en)
                                                ? ((IData)(1U) 
                                                   << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_push_bits_index))
                                                : 0U)));
    }
    VL_AND_W(65, __Vtemp_1, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_14);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_17, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_21, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                             >> 0xbU)));
    __Vtemp_16[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[1U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[1U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[1U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[1U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))));
    __Vtemp_16[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[2U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[2U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[2U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[2U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))));
    __Vtemp_16[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[3U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[3U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[3U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[3U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))));
    __Vtemp_16[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[4U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[4U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[4U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[4U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))));
    __Vtemp_16[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[5U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[5U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[5U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[5U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))));
    __Vtemp_16[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[6U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[6U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[6U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[6U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))));
    __Vtemp_16[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[7U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[7U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[7U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[7U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))));
    __Vtemp_16[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[8U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[8U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[8U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[8U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))));
    __Vtemp_16[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[9U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_17[9U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[9U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                    ? __Vtemp_21[9U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))));
    __Vtemp_16[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xaU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xaU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))));
    __Vtemp_16[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xbU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xbU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))));
    __Vtemp_16[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xcU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xcU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))));
    __Vtemp_16[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xdU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xdU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))));
    __Vtemp_16[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xeU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xeU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))));
    __Vtemp_16[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                    ? __Vtemp_17[0xfU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                      ? __Vtemp_21[0xfU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))));
    __Vtemp_16[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                             ? VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]
                             : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                     ? __Vtemp_17[0x10U]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])) 
                                & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                                       ? __Vtemp_21[0x10U]
                                       : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h3dcda146_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                       ? __Vtemp_17[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50)
                         ? __Vtemp_21[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_16[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_16[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_16[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_16[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_16[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_16[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_16[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_16[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_16[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_16[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_16[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_16[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_16[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_16[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_16[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_16[0x10U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6232(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6232\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<65>/*2079:0*/ __Vtemp_15;
    VlWide<257>/*8223:0*/ __Vtemp_16;
    VlWide<257>/*8223:0*/ __Vtemp_17;
    VlWide<257>/*8223:0*/ __Vtemp_18;
    VlWide<65>/*2079:0*/ __Vtemp_19;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<65>/*2079:0*/ __Vtemp_21;
    VlWide<257>/*8223:0*/ __Vtemp_22;
    VlWide<257>/*8223:0*/ __Vtemp_23;
    VlWide<65>/*2079:0*/ __Vtemp_24;
    VlWide<65>/*2079:0*/ __Vtemp_25;
    VlWide<65>/*2079:0*/ __Vtemp_26;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<65>/*2079:0*/ __Vtemp_28;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                      ? (1U | (0xeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)))
                                      : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_3, __Vtemp_2, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_3);
    VL_SEL_WWII(2052,8195, __Vtemp_5, __Vtemp_4, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1), __Vtemp_5, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                             >> 9U)));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    VL_COND_WIWW(2052, __Vtemp_14, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_13);
    VL_AND_W(65, __Vtemp_1, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_14);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_1);
    VL_EXTEND_WI(8195,4, __Vtemp_16, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                       : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_17, __Vtemp_16, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_18, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_17);
    VL_SEL_WWII(2052,8195, __Vtemp_19, __Vtemp_18, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_20, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_1), __Vtemp_19, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_21, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_20);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_22, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U] 
                             >> 9U)));
    VL_AND_W(257, __Vtemp_23, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_22);
    VL_SEL_WWII(2052,8207, __Vtemp_24, __Vtemp_23, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_25, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_50), __Vtemp_24, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_26, __Vtemp_25);
    VL_AND_W(65, __Vtemp_27, __Vtemp_21, __Vtemp_26);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        VL_ASSIGN_W(2052,__Vtemp_28, VTestDriver__ConstPool__CONST_h6000bedb_0);
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full = 0U;
    } else {
        VL_ASSIGN_W(2052,__Vtemp_28, __Vtemp_27);
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sinkX__io_req_ready) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkX__DOT__x_q__DOT__do_enq;
        }
    }
    VL_AND_W(65, __Vtemp_15, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_28);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_15);
}

extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb814e974_0;
extern const VlWide<1026>/*32831:0*/ VTestDriver__ConstPool__CONST_h1b399a84_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_h55e2a60e_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb8146970_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb814e978_0;
extern const VlWide<512>/*16383:0*/ VTestDriver__ConstPool__CONST_hd4452834_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h129dfe9c_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b330f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6233(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6233\n"); );
    // Init
    VlWide<1026>/*32831:0*/ __Vtemp_1;
    VlWide<4097>/*131103:0*/ __Vtemp_2;
    VlWide<4097>/*131103:0*/ __Vtemp_3;
    VlWide<4097>/*131103:0*/ __Vtemp_4;
    VlWide<1026>/*32831:0*/ __Vtemp_5;
    VlWide<1026>/*32831:0*/ __Vtemp_6;
    VlWide<1026>/*32831:0*/ __Vtemp_7;
    VlWide<4097>/*131103:0*/ __Vtemp_8;
    VlWide<4097>/*131103:0*/ __Vtemp_9;
    VlWide<1026>/*32831:0*/ __Vtemp_10;
    VlWide<1026>/*32831:0*/ __Vtemp_11;
    VlWide<1026>/*32831:0*/ __Vtemp_12;
    VlWide<1026>/*32831:0*/ __Vtemp_13;
    VlWide<1026>/*32831:0*/ __Vtemp_14;
    VlWide<4097>/*131103:0*/ __Vtemp_15;
    VlWide<4097>/*131103:0*/ __Vtemp_16;
    VlWide<4097>/*131103:0*/ __Vtemp_17;
    VlWide<1026>/*32831:0*/ __Vtemp_18;
    VlWide<1026>/*32831:0*/ __Vtemp_19;
    VlWide<1026>/*32831:0*/ __Vtemp_20;
    VlWide<4097>/*131103:0*/ __Vtemp_21;
    VlWide<4097>/*131103:0*/ __Vtemp_22;
    VlWide<1026>/*32831:0*/ __Vtemp_23;
    VlWide<1026>/*32831:0*/ __Vtemp_24;
    VlWide<1026>/*32831:0*/ __Vtemp_25;
    VlWide<1026>/*32831:0*/ __Vtemp_26;
    VlWide<257>/*8223:0*/ __Vtemp_27;
    VlWide<512>/*16383:0*/ __Vtemp_28;
    VlWide<257>/*8223:0*/ __Vtemp_29;
    VlWide<257>/*8223:0*/ __Vtemp_30;
    VlWide<257>/*8223:0*/ __Vtemp_31;
    VlWide<512>/*16383:0*/ __Vtemp_32;
    VlWide<257>/*8223:0*/ __Vtemp_33;
    VlWide<257>/*8223:0*/ __Vtemp_34;
    VlWide<257>/*8223:0*/ __Vtemp_35;
    VlWide<257>/*8223:0*/ __Vtemp_36;
    VlWide<257>/*8223:0*/ __Vtemp_37;
    // Body
    VL_EXTEND_WI(131074,3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_0)
                                        ? (1U | (6U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                                    >> 5U)))
                                        : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_3, __Vtemp_2, 
                  (0xfffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                              >> 6U)));
    VL_AND_W(4097, __Vtemp_4, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_3);
    VL_SEL_WWII(32832,131074, __Vtemp_5, __Vtemp_4, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_0), __Vtemp_5, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_8, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  (0xfffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[2U] 
                              >> 0x10U)));
    VL_AND_W(4097, __Vtemp_9, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_8);
    VL_SEL_WWII(32832,131087, __Vtemp_10, __Vtemp_9, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_39), __Vtemp_10, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_12, __Vtemp_11);
    VL_AND_W(1026, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    VL_COND_WIWW(32832, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h1b399a84_0, __Vtemp_13);
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_EXTEND_WI(131075,4, __Vtemp_15, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_0)
                                         ? (1U | (0xeU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                                                     << 1U)))
                                         : 0U));
    VL_SHIFTL_WWI(131075,131075,16, __Vtemp_16, __Vtemp_15, 
                  (0xfffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                              >> 6U)));
    VL_AND_W(4097, __Vtemp_17, VTestDriver__ConstPool__CONST_hb814e978_0, __Vtemp_16);
    VL_SEL_WWII(32832,131075, __Vtemp_18, __Vtemp_17, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_19, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_0), __Vtemp_18, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_20, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight_opcodes, __Vtemp_19);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_21, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  (0xfffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[2U] 
                              >> 0x10U)));
    VL_AND_W(4097, __Vtemp_22, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_21);
    VL_SEL_WWII(32832,131087, __Vtemp_23, __Vtemp_22, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_24, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_39), __Vtemp_23, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_25, __Vtemp_24);
    VL_AND_W(1026, __Vtemp_26, __Vtemp_20, __Vtemp_25);
    VL_COND_WIWW(32832, __Vtemp_14, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h1b399a84_0, __Vtemp_26);
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight_opcodes, __Vtemp_14);
    VL_SHIFTL_WWI(16384,16384,14, __Vtemp_28, VTestDriver__ConstPool__CONST_hd4452834_0, 
                  (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__ram[0U] 
                              >> 8U)));
    VL_SEL_WWII(8208,16384, __Vtemp_29, __Vtemp_28, 0U, 0x2010U);
    VL_COND_WIWW(8208, __Vtemp_30, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_0), __Vtemp_29, VTestDriver__ConstPool__CONST_h129dfe9c_0);
    VL_OR_W(257, __Vtemp_31, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight, __Vtemp_30);
    VL_SHIFTL_WWI(16384,16384,14, __Vtemp_32, VTestDriver__ConstPool__CONST_hd4452834_0, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_back_q__DOT__ram[2U] 
                   >> 0x12U));
    VL_SEL_WWII(8208,16384, __Vtemp_33, __Vtemp_32, 0U, 0x2010U);
    VL_COND_WIWW(8208, __Vtemp_34, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT___GEN_39), __Vtemp_33, VTestDriver__ConstPool__CONST_h129dfe9c_0);
    VL_NOT_W(257, __Vtemp_35, __Vtemp_34);
    VL_AND_W(257, __Vtemp_36, __Vtemp_31, __Vtemp_35);
    VL_COND_WIWW(8208, __Vtemp_37, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h129dfe9c_0, __Vtemp_36);
    VL_AND_W(257, __Vtemp_27, VTestDriver__ConstPool__CONST_h42b330f7_0, __Vtemp_37);
    VL_ASSIGN_W(8208,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__monitor__DOT__inflight, __Vtemp_27);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6234(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6234\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
            ? 0U : (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__latch)
                               ? ((0x1f8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__maskedBeats_0)) 
                                  | (7U & ((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__maskedBeats_0) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1) 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])
                                                     ? 
                                                    (~ 
                                                     (0x3ffffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_bits_size)) 
                                                         >> 3U)))
                                                     : 0U)) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2) 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                                    ? 
                                                   (~ 
                                                    (0x3ffffU 
                                                     & (((IData)(0x3fU) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 5U))) 
                                                        >> 3U)))
                                                    : 0U)) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3) 
                                                   & (4U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode)))
                                                   ? 
                                                  (~ 
                                                   (0x3ffffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                   : 0U)) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4) 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])
                                                  ? 
                                                 (~ 
                                                  (0x3ffffU 
                                                   & (((IData)(0x3fU) 
                                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size)) 
                                                      >> 3U)))
                                                  : 0U)) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_5) 
                                                 & (4U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode)))
                                                 ? 
                                                (~ 
                                                 (0x3ffffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size)) 
                                                     >> 3U)))
                                                 : 0U)) 
                                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_6)
                                                ? (~ 
                                                   (0x3ffffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                : 0U)) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_7) 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                               ? (~ 
                                                  (0x3ffffU 
                                                   & (((IData)(0x3fU) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 5U))) 
                                                      >> 3U)))
                                               : 0U))))
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft) 
                                  - ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_valid))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6235(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6235\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_a_ready)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_valid)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__do_enq;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used) 
                & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___putbuffer_io_pop_valid_T)
                       ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___head_ext_R0_data))
                       : 0U))) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__freeIdx_lo)
                                   : 0U));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_mask)) 
                        << 0x31U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_data) 
                << 0x19U) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_mask)) 
                                       << 0x31U) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)) 
                                        << 0x14U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                                      << 0xaU) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_param) 
                                                                            << 3U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                     >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_data) 
                >> 7U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_data 
                                   >> 0x20U)) << 0x19U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__muxState_0) 
                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__muxState_1) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_corrupt))) 
                << 0x19U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_data 
                                      >> 0x20U)) >> 7U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[2U] 
                << 0xeU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[1U] 
                            >> 0x12U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[1U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[3U] 
                << 0xeU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[2U] 
                            >> 0x12U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[2U] 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[3U] 
                     >> 0x12U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_addr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__probes_toN)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6236(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6236\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__probes_toN)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__probes_toN)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__probes_toN)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6237(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6237\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__probes_toN)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__probes_toN)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probes_toN 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
            ? 0U : (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_sinkc_valid))) 
                     & ((((1U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))) | 
                          (2U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U)))) | 
                         (5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U)))) ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probe_bit)
                         : 0U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__probes_toN)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6238(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6238\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_en) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_1))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hbef73522__0)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h9ad2aaf8__0)
                    ? 0ULL : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfa797fb6__0)
                               ? (((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xfU)))
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h21e5166e__0)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data
                                   : 0ULL))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_1__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_1__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_en) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hbe02072f__0)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h3d85bcb4__0)
                    ? 0ULL : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h44bf819a__0)
                               ? (((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xfU)))
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h21e1e47d__0)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data
                                   : 0ULL))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_0__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_en) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_3))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h23921608__0)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h9a89c9d6__0)
                    ? 0ULL : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfbbd1aa0__0)
                               ? (((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xfU)))
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h219cf694__0)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data
                                   : 0ULL))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_3__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_3__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_en) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__regout_wen_2))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hbeb66095__0)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_bs_dat_data_r
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h9aad3963__0)
                    ? 0ULL : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfbb96a3d__0)
                               ? (((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0xfU)))
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_h21804c1b__0)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data
                                   : 0ULL))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT__cc_banks_2__DOT__cc_banks_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____Vcellinp__cc_banks_2__RW0_addr;
    }
}

extern const VlWide<2048>/*65535:0*/ VTestDriver__ConstPool__CONST_h59295a2e_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6239(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6239\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        __Vtemp_8[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0;
        __Vtemp_8[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1;
        __Vtemp_8[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2;
        __Vtemp_8[3U] = 0U;
        __Vtemp_8[4U] = 0U;
        __Vtemp_8[5U] = 0U;
        __Vtemp_8[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0);
        __Vtemp_8[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                 >> 0x20U));
        __Vtemp_8[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad);
        __Vtemp_8[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                 >> 0x20U));
        __Vtemp_8[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1);
        __Vtemp_8[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                   >> 0x20U));
        __Vtemp_8[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2);
        __Vtemp_8[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2 
                                   >> 0x20U));
        __Vtemp_8[0xeU] = 0U;
        __Vtemp_8[0xfU] = 0U;
        __Vtemp_9[0U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x15U)))
                                     : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                                        >> 0x17U)))
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0xcU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0x14U)))
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3)
                                                        ? 
                                                       ((1U 
                                                         & ((0x84U 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                 << 6U) 
                                                                | (((0U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                    << 5U) 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                       << 4U) 
                                                                      | (((IData)(
                                                                                (0x3ffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN))) 
                                                                          << 3U) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)))))))))) 
                                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          __Vtemp_8[
                                                                          (((IData)(0x3fU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              __Vtemp_8[
                                                                              (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp_8[
                                                                               (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U) 
                                                                                >> 5U))])) 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))))
                                                         : 0ULL)
                                                        : 0ULL) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4)
                                                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data
                                                           : 0ULL) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5)
                                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_data
                                                              : 0ULL) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6)
                                                                 ? 
                                                                ((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                      >> 0xdU)))
                                                                  ? 0ULL
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                   << 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                     ? 0x20U
                                                                     : 
                                                                    ((IData)(0x40U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                  | (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                       ? 0ULL
                                                                       : 
                                                                      ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                     | ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (0x7ffU 
                                                                                & (VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))))
                                                                 : 0ULL) 
                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7)
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                       << 0xcU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                         >> 0x14U)))
                                                                   : 0ULL))))))))) 
                          << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_denied) 
                                        << 0x14U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_sink) 
                                         << 0x13U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                            << 9U) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size) 
                                               << 5U) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_param) 
                                                  << 3U) 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode)))))));
        __Vtemp_9[1U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x15U)))
                                     : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                                        >> 0x17U)))
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0xcU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0x14U)))
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3)
                                                        ? 
                                                       ((1U 
                                                         & ((0x84U 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                 << 6U) 
                                                                | (((0U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                    << 5U) 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                       << 4U) 
                                                                      | (((IData)(
                                                                                (0x3ffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN))) 
                                                                          << 3U) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)))))))))) 
                                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          __Vtemp_8[
                                                                          (((IData)(0x3fU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              __Vtemp_8[
                                                                              (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp_8[
                                                                               (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U) 
                                                                                >> 5U))])) 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))))
                                                         : 0ULL)
                                                        : 0ULL) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4)
                                                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data
                                                           : 0ULL) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5)
                                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_data
                                                              : 0ULL) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6)
                                                                 ? 
                                                                ((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                      >> 0xdU)))
                                                                  ? 0ULL
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                   << 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                     ? 0x20U
                                                                     : 
                                                                    ((IData)(0x40U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                  | (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                       ? 0ULL
                                                                       : 
                                                                      ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                     | ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (0x7ffU 
                                                                                & (VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))))
                                                                 : 0ULL) 
                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7)
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                       << 0xcU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                         >> 0x14U)))
                                                                   : 0ULL))))))))) 
                          >> 0xbU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0xbU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x15U)))
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                                                      << 0x29U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                                                         << 9U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                                           >> 0x17U)))
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                            << 0xcU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                              >> 0x14U)))
                                                        : 0ULL) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3)
                                                           ? 
                                                          ((1U 
                                                            & ((0x84U 
                                                                | (((0U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                    << 6U) 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                       << 5U) 
                                                                      | (((0U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                          << 4U) 
                                                                         | (((IData)(
                                                                                (0x3ffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN))) 
                                                                             << 3U) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)))))))))) 
                                                               >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex)))
                                                            ? 
                                                           (((QData)((IData)(
                                                                             __Vtemp_8[
                                                                             (((IData)(0x3fU) 
                                                                               + 
                                                                               (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                              >> 5U)])) 
                                                             << 
                                                             ((0U 
                                                               == 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                               ? 0x20U
                                                               : 
                                                              ((IData)(0x40U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                            | (((0U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                                 ? 0ULL
                                                                 : 
                                                                ((QData)((IData)(
                                                                                __Vtemp_8[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                                >> 5U)])) 
                                                                 << 
                                                                 ((IData)(0x20U) 
                                                                  - 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                               | ((QData)((IData)(
                                                                                __Vtemp_8[
                                                                                (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U) 
                                                                                >> 5U))])) 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))))
                                                            : 0ULL)
                                                           : 0ULL) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4)
                                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data
                                                              : 0ULL) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5)
                                                                 ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_data
                                                                 : 0ULL) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6)
                                                                    ? 
                                                                   ((0U 
                                                                     != 
                                                                     (7U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                         >> 0xdU)))
                                                                     ? 0ULL
                                                                     : 
                                                                    (((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                      << 
                                                                      ((0U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                        ? 0x20U
                                                                        : 
                                                                       ((IData)(0x40U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                     | (((0U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                          ? 0ULL
                                                                          : 
                                                                         ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                          << 
                                                                          ((IData)(0x20U) 
                                                                           - 
                                                                           (0x1fU 
                                                                            & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                        | ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (0x7ffU 
                                                                                & (VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))))
                                                                    : 0ULL) 
                                                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7)
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                          << 0xcU) 
                                                                         | ((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                            >> 0x14U)))
                                                                      : 0ULL)))))))) 
                                               >> 0x20U)) 
                                      << 0x15U));
        __Vtemp_9[2U] = ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x2bU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xbU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x15U)))
                                     : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[2U])) 
                                                   << 0x29U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[1U])) 
                                                      << 9U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram[0U])) 
                                                        >> 0x17U)))
                                                  : 0ULL) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                      << 0x2cU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                         << 0xcU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                           >> 0x14U)))
                                                     : 0ULL) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3)
                                                        ? 
                                                       ((1U 
                                                         & ((0x84U 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                 << 6U) 
                                                                | (((0U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                    << 5U) 
                                                                   | (((0U 
                                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)) 
                                                                       << 4U) 
                                                                      | (((IData)(
                                                                                (0x3ffU 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN))) 
                                                                          << 3U) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (0U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT___GEN)))))))))) 
                                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          __Vtemp_8[
                                                                          (((IData)(0x3fU) 
                                                                            + 
                                                                            (0x1ffU 
                                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                            ? 0x20U
                                                            : 
                                                           ((IData)(0x40U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                         | (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                                              ? 0ULL
                                                              : 
                                                             ((QData)((IData)(
                                                                              __Vtemp_8[
                                                                              (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                                            | ((QData)((IData)(
                                                                               __Vtemp_8[
                                                                               (0xfU 
                                                                                & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U) 
                                                                                >> 5U))])) 
                                                               >> 
                                                               (0x1fU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))))
                                                         : 0ULL)
                                                        : 0ULL) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4)
                                                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data
                                                           : 0ULL) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5)
                                                              ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_data
                                                              : 0ULL) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6)
                                                                 ? 
                                                                ((0U 
                                                                  != 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                                      >> 0xdU)))
                                                                  ? 0ULL
                                                                  : 
                                                                 (((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                   << 
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                     ? 0x20U
                                                                     : 
                                                                    ((IData)(0x40U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                  | (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U)))
                                                                       ? 0ULL
                                                                       : 
                                                                      ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xffffU 
                                                                                & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                                                >> 5U)])) 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))) 
                                                                     | ((QData)((IData)(
                                                                                VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                                                (0x7ffU 
                                                                                & (VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U) 
                                                                                >> 5U))])) 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))))))
                                                                 : 0ULL) 
                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7)
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                                    << 0x2cU) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                                       << 0xcU) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                                         >> 0x14U)))
                                                                   : 0ULL)))))))) 
                                  >> 0x20U)) >> 0xbU);
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = __Vtemp_9[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_9[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_corrupt) 
                << 0x15U) | __Vtemp_9[2U]);
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6241(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6241\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[0U] 
            = (IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full)
                        ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[3U])) 
                            << 0x26U) | (((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[2U])) 
                                          << 6U) | 
                                         ((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[1U])) 
                                          >> 0x1aU)))
                        : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_data));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[1U] 
            = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full)
                         ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[3U])) 
                             << 0x26U) | (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[2U])) 
                                           << 6U) | 
                                          ((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[1U])) 
                                           >> 0x1aU)))
                         : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_data) 
                       >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[2U] 
            = ((0x100U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__full)
                            ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__ram[3U] 
                               >> 0x1aU) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_corrupt)) 
                          << 8U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_mask));
        if ((0x27U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_addr))) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[0U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[0U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[1U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[1U];
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0[2U] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT____Vlvbound_hc7a98ec1__0[2U];
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_addr;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6242(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6242\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap) 
                     - (IData)(1U)));
    }
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9ca1_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f1ca9_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h5edd179d_0;
extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6245(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6245\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<32>/*1023:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<65>/*2079:0*/ __Vtemp_15;
    VlWide<65>/*2079:0*/ __Vtemp_16;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<65>/*2079:0*/ __Vtemp_21;
    VlWide<64>/*2047:0*/ __Vtemp_26;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<65>/*2079:0*/ __Vtemp_28;
    VlWide<65>/*2079:0*/ __Vtemp_29;
    VlWide<65>/*2079:0*/ __Vtemp_30;
    VlWide<65>/*2079:0*/ __Vtemp_31;
    VlWide<65>/*2079:0*/ __Vtemp_35;
    VlWide<65>/*2079:0*/ __Vtemp_36;
    // Body
    __Vtemp_2[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                              >> 0xaU));
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_3, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_2);
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    __Vtemp_6[6U] = 0U;
    __Vtemp_6[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_7, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_6);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_3[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_7[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_1[7U];
    VL_EXTEND_WI(2051,4, __Vtemp_12, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_13, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_14, __Vtemp_13, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_15, __Vtemp_12, __Vtemp_14);
    VL_AND_W(65, __Vtemp_16, VTestDriver__ConstPool__CONST_h614f9ca1_0, __Vtemp_15);
    VL_SHIFTL_WWI(2063,2063,10, __Vtemp_20, VTestDriver__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_21, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_20);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_11[1U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_11[2U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_11[3U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_11[4U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_11[5U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_11[6U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_11[7U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_11[8U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_11[9U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_11[0xaU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_11[0xbU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_11[0xcU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_11[0xdU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_11[0xeU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_11[0xfU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_11[0x10U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_11[0x11U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_11[0x12U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_11[0x13U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_11[0x14U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_11[0x15U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_11[0x16U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_11[0x17U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_11[0x18U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_11[0x19U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_11[0x1aU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_11[0x1bU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_11[0x1cU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_11[0x1dU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_11[0x1eU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_11[0x1fU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[1U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[1U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_11[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[2U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[2U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_11[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[3U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[3U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_11[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[4U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[4U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_11[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[5U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[5U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_11[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[6U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[6U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_11[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[7U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[7U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_11[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[8U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[8U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[8U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_11[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[9U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[9U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[9U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_11[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xaU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xaU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_11[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xbU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xbU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_11[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xcU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xcU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_11[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xdU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xdU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_11[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xeU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xeU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_11[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xfU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xfU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_11[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x10U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x10U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_11[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x11U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x11U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_11[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x12U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x12U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_11[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x13U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x13U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_11[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x14U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x14U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_11[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x15U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x15U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_11[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x16U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x16U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_11[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x17U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x17U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_11[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x18U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x18U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_11[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x19U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x19U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_11[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1aU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1aU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_11[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1bU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1bU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_11[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1cU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1cU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_11[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1dU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1dU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_11[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1eU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1eU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_11[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1fU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1fU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_16[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_21[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_11[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_11[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_11[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_11[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_11[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_11[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_11[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_11[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_11[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_11[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_11[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_11[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_11[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_11[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_11[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_11[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_11[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_11[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_11[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_11[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_11[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_11[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_11[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_11[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_11[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_11[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_11[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_11[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_11[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_11[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_11[0x1fU];
    VL_EXTEND_WI(2052,5, __Vtemp_27, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0x1eU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                       : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_28, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)));
    VL_CONCAT_WWI(2052,2049,3, __Vtemp_29, __Vtemp_28, 0U);
    VL_SHIFTL_WWW(2052,2052,2052, __Vtemp_30, __Vtemp_27, __Vtemp_29);
    VL_AND_W(65, __Vtemp_31, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_30);
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_35, VTestDriver__ConstPool__CONST_h5edd179d_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source) 
                   << 3U));
    VL_AND_W(65, __Vtemp_36, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_35);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_26[__Vilp] = VTestDriver__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h6be9aa18_0[0U];
    } else {
        __Vtemp_26[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[1U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[1U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])));
        __Vtemp_26[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[2U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[2U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])));
        __Vtemp_26[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[3U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[3U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])));
        __Vtemp_26[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[4U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[4U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])));
        __Vtemp_26[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[5U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[5U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])));
        __Vtemp_26[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[6U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[6U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])));
        __Vtemp_26[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[7U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[7U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])));
        __Vtemp_26[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[8U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[8U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[8U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])));
        __Vtemp_26[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[9U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[9U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[9U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])));
        __Vtemp_26[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xaU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xaU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])));
        __Vtemp_26[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xbU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xbU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])));
        __Vtemp_26[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xcU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xcU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])));
        __Vtemp_26[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xdU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xdU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])));
        __Vtemp_26[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xeU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xeU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])));
        __Vtemp_26[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xfU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xfU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])));
        __Vtemp_26[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x10U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x10U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])));
        __Vtemp_26[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x11U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x11U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x11U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])));
        __Vtemp_26[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x12U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x12U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x12U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])));
        __Vtemp_26[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x13U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x13U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x13U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])));
        __Vtemp_26[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x14U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x14U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x14U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])));
        __Vtemp_26[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x15U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x15U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x15U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])));
        __Vtemp_26[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x16U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x16U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x16U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])));
        __Vtemp_26[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x17U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x17U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x17U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])));
        __Vtemp_26[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x18U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x18U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x18U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])));
        __Vtemp_26[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x19U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x19U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x19U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])));
        __Vtemp_26[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])));
        __Vtemp_26[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])));
        __Vtemp_26[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])));
        __Vtemp_26[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])));
        __Vtemp_26[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])));
        __Vtemp_26[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])));
        __Vtemp_26[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x20U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x20U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x20U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])));
        __Vtemp_26[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x21U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x21U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x21U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])));
        __Vtemp_26[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x22U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x22U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x22U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])));
        __Vtemp_26[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x23U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x23U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x23U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])));
        __Vtemp_26[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x24U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x24U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x24U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])));
        __Vtemp_26[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x25U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x25U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x25U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])));
        __Vtemp_26[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x26U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x26U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x26U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])));
        __Vtemp_26[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x27U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x27U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x27U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])));
        __Vtemp_26[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x28U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x28U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x28U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])));
        __Vtemp_26[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x29U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x29U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x29U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])));
        __Vtemp_26[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])));
        __Vtemp_26[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])));
        __Vtemp_26[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])));
        __Vtemp_26[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])));
        __Vtemp_26[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])));
        __Vtemp_26[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x2fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])));
        __Vtemp_26[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x30U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x30U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x30U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])));
        __Vtemp_26[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x31U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x31U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x31U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])));
        __Vtemp_26[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x32U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x32U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x32U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])));
        __Vtemp_26[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x33U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x33U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x33U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])));
        __Vtemp_26[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x34U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x34U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x34U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])));
        __Vtemp_26[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x35U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x35U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x35U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])));
        __Vtemp_26[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x36U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x36U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x36U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])));
        __Vtemp_26[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x37U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x37U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x37U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])));
        __Vtemp_26[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x38U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x38U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x38U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])));
        __Vtemp_26[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x39U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x39U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x39U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])));
        __Vtemp_26[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])));
        __Vtemp_26[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])));
        __Vtemp_26[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])));
        __Vtemp_26[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])));
        __Vtemp_26[0x3eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])));
        __Vtemp_26[0x3fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0x3fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_31[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_36[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])));
    }
    __Vilp = 1U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[__Vilp] 
            = __Vtemp_26[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6246(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6246\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<32>/*1023:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<65>/*2079:0*/ __Vtemp_15;
    VlWide<65>/*2079:0*/ __Vtemp_16;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<65>/*2079:0*/ __Vtemp_21;
    VlWide<64>/*2047:0*/ __Vtemp_26;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<65>/*2079:0*/ __Vtemp_28;
    VlWide<65>/*2079:0*/ __Vtemp_29;
    VlWide<65>/*2079:0*/ __Vtemp_30;
    VlWide<65>/*2079:0*/ __Vtemp_31;
    VlWide<65>/*2079:0*/ __Vtemp_35;
    VlWide<65>/*2079:0*/ __Vtemp_36;
    // Body
    __Vtemp_2[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                              >> 0xaU));
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_3, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_2);
    __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    __Vtemp_6[6U] = 0U;
    __Vtemp_6[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_7, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_6);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_3[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_7[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_1[7U];
    VL_EXTEND_WI(2051,4, __Vtemp_12, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_13, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_14, __Vtemp_13, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_15, __Vtemp_12, __Vtemp_14);
    VL_AND_W(65, __Vtemp_16, VTestDriver__ConstPool__CONST_h614f9ca1_0, __Vtemp_15);
    VL_SHIFTL_WWI(2063,2063,10, __Vtemp_20, VTestDriver__ConstPool__CONST_h9cfc9aaf_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(65, __Vtemp_21, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_20);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_11[1U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U];
        __Vtemp_11[2U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U];
        __Vtemp_11[3U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U];
        __Vtemp_11[4U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U];
        __Vtemp_11[5U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U];
        __Vtemp_11[6U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U];
        __Vtemp_11[7U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U];
        __Vtemp_11[8U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U];
        __Vtemp_11[9U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U];
        __Vtemp_11[0xaU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU];
        __Vtemp_11[0xbU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU];
        __Vtemp_11[0xcU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU];
        __Vtemp_11[0xdU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU];
        __Vtemp_11[0xeU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU];
        __Vtemp_11[0xfU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU];
        __Vtemp_11[0x10U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U];
        __Vtemp_11[0x11U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U];
        __Vtemp_11[0x12U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U];
        __Vtemp_11[0x13U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U];
        __Vtemp_11[0x14U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U];
        __Vtemp_11[0x15U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U];
        __Vtemp_11[0x16U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U];
        __Vtemp_11[0x17U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U];
        __Vtemp_11[0x18U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U];
        __Vtemp_11[0x19U] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U];
        __Vtemp_11[0x1aU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        __Vtemp_11[0x1bU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        __Vtemp_11[0x1cU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        __Vtemp_11[0x1dU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        __Vtemp_11[0x1eU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        __Vtemp_11[0x1fU] = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[1U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[1U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_11[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[2U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[2U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_11[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[3U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[3U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_11[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[4U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[4U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_11[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[5U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[5U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_11[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[6U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[6U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_11[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[7U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[7U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_11[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[8U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[8U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_11[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[9U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[9U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_11[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xaU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xaU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_11[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xbU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xbU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_11[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xcU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xcU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_11[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xdU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xdU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_11[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xeU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xeU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_11[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xfU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xfU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_11[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x10U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x10U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_11[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x11U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x11U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_11[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x12U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x12U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_11[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x13U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x13U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_11[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x14U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x14U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_11[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x15U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x15U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_11[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x16U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x16U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_11[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x17U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x17U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_11[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x18U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x18U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_11[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x19U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x19U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_11[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1aU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1aU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_11[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1bU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1bU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_11[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1cU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1cU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_11[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1dU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1dU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_11[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1eU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1eU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_11[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1fU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1fU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_16[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_21[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_11[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_11[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_11[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_11[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_11[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_11[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_11[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_11[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_11[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_11[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_11[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_11[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_11[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_11[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_11[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_11[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_11[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_11[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_11[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_11[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_11[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_11[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_11[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_11[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_11[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_11[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_11[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_11[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_11[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_11[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_11[0x1fU];
    VL_EXTEND_WI(2052,5, __Vtemp_27, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0x1eU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)))
                                       : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_28, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)));
    VL_CONCAT_WWI(2052,2049,3, __Vtemp_29, __Vtemp_28, 0U);
    VL_SHIFTL_WWW(2052,2052,2052, __Vtemp_30, __Vtemp_27, __Vtemp_29);
    VL_AND_W(65, __Vtemp_31, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_30);
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_35, VTestDriver__ConstPool__CONST_h5edd179d_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_source) 
                   << 3U));
    VL_AND_W(65, __Vtemp_36, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_35);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_26[__Vilp] = VTestDriver__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h6be9aa18_0[0U];
    } else {
        __Vtemp_26[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[1U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[1U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])));
        __Vtemp_26[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[2U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[2U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])));
        __Vtemp_26[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[3U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[3U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])));
        __Vtemp_26[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[4U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[4U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])));
        __Vtemp_26[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[5U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[5U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])));
        __Vtemp_26[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[6U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[6U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])));
        __Vtemp_26[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[7U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[7U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])));
        __Vtemp_26[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[8U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[8U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])));
        __Vtemp_26[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_31[9U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_36[9U] : 
                                VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])));
        __Vtemp_26[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xaU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xaU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xaU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])));
        __Vtemp_26[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xbU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xbU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xbU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])));
        __Vtemp_26[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xcU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xcU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xcU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])));
        __Vtemp_26[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xdU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xdU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xdU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])));
        __Vtemp_26[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xeU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xeU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xeU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])));
        __Vtemp_26[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0xfU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_31[0xfU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_36[0xfU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])));
        __Vtemp_26[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x10U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x10U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x10U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])));
        __Vtemp_26[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x11U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x11U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x11U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])));
        __Vtemp_26[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x12U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x12U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x12U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])));
        __Vtemp_26[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x13U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x13U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x13U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])));
        __Vtemp_26[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x14U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x14U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x14U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])));
        __Vtemp_26[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x15U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x15U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x15U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])));
        __Vtemp_26[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x16U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x16U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x16U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])));
        __Vtemp_26[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x17U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x17U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x17U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])));
        __Vtemp_26[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x18U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x18U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x18U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])));
        __Vtemp_26[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x19U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x19U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x19U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])));
        __Vtemp_26[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])));
        __Vtemp_26[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])));
        __Vtemp_26[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])));
        __Vtemp_26[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])));
        __Vtemp_26[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])));
        __Vtemp_26[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x1fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x1fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])));
        __Vtemp_26[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x20U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x20U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x20U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])));
        __Vtemp_26[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x21U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x21U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x21U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])));
        __Vtemp_26[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x22U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x22U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x22U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])));
        __Vtemp_26[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x23U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x23U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x23U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])));
        __Vtemp_26[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x24U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x24U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x24U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])));
        __Vtemp_26[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x25U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x25U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x25U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])));
        __Vtemp_26[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x26U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x26U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x26U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])));
        __Vtemp_26[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x27U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x27U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x27U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])));
        __Vtemp_26[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x28U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x28U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x28U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])));
        __Vtemp_26[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x29U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x29U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x29U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])));
        __Vtemp_26[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])));
        __Vtemp_26[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])));
        __Vtemp_26[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])));
        __Vtemp_26[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])));
        __Vtemp_26[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])));
        __Vtemp_26[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x2fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x2fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x2fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])));
        __Vtemp_26[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x30U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x30U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x30U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])));
        __Vtemp_26[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x31U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x31U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x31U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])));
        __Vtemp_26[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x32U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x32U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x32U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])));
        __Vtemp_26[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x33U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x33U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x33U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])));
        __Vtemp_26[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x34U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x34U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x34U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])));
        __Vtemp_26[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x35U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x35U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x35U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])));
        __Vtemp_26[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x36U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x36U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x36U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])));
        __Vtemp_26[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x37U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x37U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x37U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])));
        __Vtemp_26[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x38U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x38U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x38U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])));
        __Vtemp_26[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x39U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x39U]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x39U]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])));
        __Vtemp_26[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3aU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3aU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])));
        __Vtemp_26[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3bU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3bU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])));
        __Vtemp_26[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3cU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3cU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])));
        __Vtemp_26[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3dU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3dU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])));
        __Vtemp_26[0x3eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3eU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3eU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])));
        __Vtemp_26[0x3fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0x3fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_31[0x3fU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_36[0x3fU]
                                    : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_31[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_36[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])));
    }
    __Vilp = 1U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes[__Vilp] 
            = __Vtemp_26[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
