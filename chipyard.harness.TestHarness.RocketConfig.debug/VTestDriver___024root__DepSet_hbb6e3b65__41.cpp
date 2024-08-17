// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h6000bedb_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6097(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6097\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<65>/*2079:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<32>/*1023:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<257>/*8223:0*/ __Vtemp_15;
    VlWide<257>/*8223:0*/ __Vtemp_16;
    VlWide<65>/*2079:0*/ __Vtemp_17;
    VlWide<65>/*2079:0*/ __Vtemp_18;
    VlWide<65>/*2079:0*/ __Vtemp_19;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<32>/*1023:0*/ __Vtemp_22;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<257>/*8223:0*/ __Vtemp_28;
    VlWide<257>/*8223:0*/ __Vtemp_29;
    VlWide<65>/*2079:0*/ __Vtemp_30;
    VlWide<65>/*2079:0*/ __Vtemp_31;
    VlWide<65>/*2079:0*/ __Vtemp_32;
    VlWide<65>/*2079:0*/ __Vtemp_33;
    // Body
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_2, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_3, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_2);
    VL_SEL_WWII(2052,8207, __Vtemp_4, __Vtemp_3, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_5, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___GEN_45), __Vtemp_4, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_6, __Vtemp_5);
    VL_AND_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_6);
    VL_COND_WIWW(2052, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_7);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_1);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_9, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_8[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_8[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_8[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_8[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_8[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_8[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_8[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_8[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_8[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_8[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_8[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_8[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_8[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_8[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_8[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_8[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        __Vtemp_8[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_8[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_8[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_8[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_8[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_8[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_8[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_8[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_8[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                ? __Vtemp_9[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_8[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xaU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_8[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xbU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_8[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xcU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_8[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xdU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_8[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xeU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_8[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                  ? __Vtemp_9[0xfU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_8[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_9[0x10U]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45)
                      ? __Vtemp_9[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_8[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_8[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_8[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_8[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_8[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_8[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_8[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_8[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_8[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_8[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_8[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_8[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_8[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_8[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_8[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_8[0x10U];
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_15, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_16, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_15);
    VL_SEL_WWII(2052,8207, __Vtemp_17, __Vtemp_16, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_18, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT___GEN_45), __Vtemp_17, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_19, __Vtemp_18);
    VL_AND_W(65, __Vtemp_20, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_19);
    VL_COND_WIWW(2052, __Vtemp_14, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_20);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_14);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_22, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_21[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_21[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_21[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_21[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_21[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_21[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_21[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_21[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_21[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_21[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_21[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_21[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_21[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_21[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_21[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_21[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        __Vtemp_21[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[1U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_21[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[2U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_21[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[3U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_21[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[4U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_21[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[5U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_21[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[6U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_21[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[7U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_21[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[8U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[8U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_21[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[9U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                 ? __Vtemp_22[9U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_21[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xaU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xaU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_21[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xbU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xbU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_21[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xcU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xcU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_21[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xdU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xdU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_21[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xeU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xeU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_21[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xfU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                   ? __Vtemp_22[0xfU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_21[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0x10U] 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                                    ? __Vtemp_22[0x10U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45)
                      ? __Vtemp_22[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_21[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_21[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_21[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_21[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_21[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_21[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_21[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_21[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_21[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_21[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_21[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_21[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_21[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_21[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_21[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_21[0x10U];
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_28, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_29, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_28);
    VL_SEL_WWII(2052,8207, __Vtemp_30, __Vtemp_29, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_31, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT___GEN_45), __Vtemp_30, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_32, __Vtemp_31);
    VL_AND_W(65, __Vtemp_33, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_32);
    VL_COND_WIWW(2052, __Vtemp_27, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_33);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_27);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0)) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__d_first_counter_1)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6098(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6098\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___GEN_0)) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___a_first_T_1) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___d_first_T_2))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog);
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_1)
                    ? 0U : (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_first_counter_1) 
                                      - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__do_enq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog_1);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1);
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0)) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__a_first_counter_1)));
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h5edd179d_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f1ca9_0;
extern const VlWide<64>/*2047:0*/ VTestDriver__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha68013b1_0;
extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_h88c8960f_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6099(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6099\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_2;
    IData/*31:0*/ __Vilp;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_4;
    VlWide<64>/*2047:0*/ __Vtemp_8;
    VlWide<65>/*2079:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<17>/*543:0*/ __Vtemp_16;
    VlWide<32>/*1023:0*/ __Vtemp_17;
    VlWide<129>/*4127:0*/ __Vtemp_22;
    VlWide<257>/*8223:0*/ __Vtemp_23;
    VlWide<257>/*8223:0*/ __Vtemp_24;
    VlWide<129>/*4127:0*/ __Vtemp_25;
    VlWide<129>/*4127:0*/ __Vtemp_26;
    VlWide<129>/*4127:0*/ __Vtemp_27;
    VlWide<129>/*4127:0*/ __Vtemp_28;
    VlWide<17>/*543:0*/ __Vtemp_29;
    VlWide<32>/*1023:0*/ __Vtemp_30;
    // Body
    __Vtemp_3[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 9U));
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    __Vtemp_3[5U] = 0U;
    __Vtemp_3[6U] = 0U;
    __Vtemp_3[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_4, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_3);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vtemp_2[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_2[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_2[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_2[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_2[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_2[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_2[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog_1 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___d_first_T_2)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog_1));
        __Vtemp_2[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_2[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_2[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_2[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_2[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_2[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_2[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_4[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                      ? __Vtemp_4[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_2[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_2[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_2[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_2[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_2[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_2[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_2[7U];
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_9, VTestDriver__ConstPool__CONST_h5edd179d_0, 
                  (0x7f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    VL_AND_W(65, __Vtemp_10, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_9);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_8[__Vilp] = VTestDriver__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = VTestDriver__ConstPool__CONST_h6be9aa18_0[0U];
    } else {
        __Vtemp_8[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[1U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])));
        __Vtemp_8[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[2U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])));
        __Vtemp_8[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[3U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])));
        __Vtemp_8[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[4U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])));
        __Vtemp_8[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[5U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])));
        __Vtemp_8[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[6U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])));
        __Vtemp_8[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[7U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])));
        __Vtemp_8[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[8U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])));
        __Vtemp_8[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                ? __Vtemp_10[9U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])));
        __Vtemp_8[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xaU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])));
        __Vtemp_8[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xbU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])));
        __Vtemp_8[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xcU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])));
        __Vtemp_8[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xdU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])));
        __Vtemp_8[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xeU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])));
        __Vtemp_8[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                  ? __Vtemp_10[0xfU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])));
        __Vtemp_8[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x10U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])));
        __Vtemp_8[0x11U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x11U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])));
        __Vtemp_8[0x12U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x12U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])));
        __Vtemp_8[0x13U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x13U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])));
        __Vtemp_8[0x14U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x14U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])));
        __Vtemp_8[0x15U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x15U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])));
        __Vtemp_8[0x16U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x16U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])));
        __Vtemp_8[0x17U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x17U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])));
        __Vtemp_8[0x18U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x18U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])));
        __Vtemp_8[0x19U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x19U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])));
        __Vtemp_8[0x1aU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])));
        __Vtemp_8[0x1bU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])));
        __Vtemp_8[0x1cU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])));
        __Vtemp_8[0x1dU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])));
        __Vtemp_8[0x1eU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])));
        __Vtemp_8[0x1fU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x1fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])));
        __Vtemp_8[0x20U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x20U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x20U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])));
        __Vtemp_8[0x21U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x21U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x21U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])));
        __Vtemp_8[0x22U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x22U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x22U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])));
        __Vtemp_8[0x23U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x23U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x23U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])));
        __Vtemp_8[0x24U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x24U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x24U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])));
        __Vtemp_8[0x25U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x25U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x25U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])));
        __Vtemp_8[0x26U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x26U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x26U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])));
        __Vtemp_8[0x27U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x27U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x27U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])));
        __Vtemp_8[0x28U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x28U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x28U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])));
        __Vtemp_8[0x29U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x29U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x29U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])));
        __Vtemp_8[0x2aU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2aU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])));
        __Vtemp_8[0x2bU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2bU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])));
        __Vtemp_8[0x2cU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2cU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])));
        __Vtemp_8[0x2dU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2dU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])));
        __Vtemp_8[0x2eU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2eU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])));
        __Vtemp_8[0x2fU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x2fU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x2fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])));
        __Vtemp_8[0x30U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x30U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x30U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])));
        __Vtemp_8[0x31U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x31U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x31U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])));
        __Vtemp_8[0x32U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x32U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x32U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])));
        __Vtemp_8[0x33U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x33U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x33U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])));
        __Vtemp_8[0x34U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x34U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x34U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])));
        __Vtemp_8[0x35U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x35U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x35U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])));
        __Vtemp_8[0x36U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x36U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x36U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])));
        __Vtemp_8[0x37U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x37U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x37U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])));
        __Vtemp_8[0x38U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x38U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x38U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])));
        __Vtemp_8[0x39U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x39U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x39U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])));
        __Vtemp_8[0x3aU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3aU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])));
        __Vtemp_8[0x3bU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3bU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])));
        __Vtemp_8[0x3cU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3cU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])));
        __Vtemp_8[0x3dU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3dU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])));
        __Vtemp_8[0x3eU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3eU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])));
        __Vtemp_8[0x3fU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x3fU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                                   ? __Vtemp_10[0x3fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___GEN_57)
                      ? __Vtemp_10[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])));
    }
    __Vilp = 1U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[__Vilp] 
            = __Vtemp_8[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_17, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog_1 = 0U;
        __Vtemp_16[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_16[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_16[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_16[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_16[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_16[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_16[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_16[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_16[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_16[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_16[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_16[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_16[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_16[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_16[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_16[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T_3))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog_1));
        __Vtemp_16[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[1U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_16[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[2U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_16[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[3U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_16[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[4U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_16[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[5U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_16[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[6U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_16[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[7U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_16[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[8U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_16[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_17[9U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_16[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xaU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_16[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xbU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_16[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xcU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_16[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xdU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_16[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xeU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_16[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_17[0xfU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_16[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U] 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                                    ? __Vtemp_17[0x10U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60)
                      ? __Vtemp_17[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_16[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_16[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_16[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_16[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_16[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_16[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_16[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_16[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_16[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_16[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_16[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_16[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_16[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_16[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_16[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_16[0x10U];
    VL_SHIFTL_WWI(8207,8207,13, __Vtemp_23, VTestDriver__ConstPool__CONST_ha68013b1_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 3U));
    VL_AND_W(257, __Vtemp_24, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_23);
    VL_SEL_WWII(4104,8207, __Vtemp_25, __Vtemp_24, 0U, 0x1008U);
    VL_COND_WIWW(4104, __Vtemp_26, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT___GEN_60), __Vtemp_25, VTestDriver__ConstPool__CONST_h88c8960f_0);
    VL_NOT_W(129, __Vtemp_27, __Vtemp_26);
    VL_AND_W(129, __Vtemp_28, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_27);
    VL_COND_WIWW(4104, __Vtemp_22, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h88c8960f_0, __Vtemp_28);
    VL_ASSIGN_W(4104,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_22);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_30, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_29[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_29[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_29[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_29[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_29[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_29[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_29[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_29[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_29[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_29[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_29[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_29[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_29[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_29[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_29[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_29[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        __Vtemp_29[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[1U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_29[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[2U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_29[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[3U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_29[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[4U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_29[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[5U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_29[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[6U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_29[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[7U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_29[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[8U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[8U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_29[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[9U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                 ? __Vtemp_30[9U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_29[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xaU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xaU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_29[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xbU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xbU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_29[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xcU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xcU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_29[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xdU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xdU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_29[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xeU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xeU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_29[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xfU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                   ? __Vtemp_30[0xfU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_29[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0x10U] 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                                    ? __Vtemp_30[0x10U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60)
                      ? __Vtemp_30[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_29[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_29[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_29[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_29[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_29[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_29[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_29[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_29[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_29[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_29[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_29[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_29[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_29[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_29[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_29[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_29[0x10U];
}

extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb814e974_0;
extern const VlWide<1026>/*32831:0*/ VTestDriver__ConstPool__CONST_h1b399a84_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_h55e2a60e_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb8146970_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6100(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6100\n"); );
    // Init
    VlWide<129>/*4127:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<129>/*4127:0*/ __Vtemp_4;
    VlWide<129>/*4127:0*/ __Vtemp_5;
    VlWide<129>/*4127:0*/ __Vtemp_6;
    VlWide<129>/*4127:0*/ __Vtemp_7;
    VlWide<1026>/*32831:0*/ __Vtemp_10;
    VlWide<4097>/*131103:0*/ __Vtemp_11;
    VlWide<4097>/*131103:0*/ __Vtemp_12;
    VlWide<4097>/*131103:0*/ __Vtemp_13;
    VlWide<1026>/*32831:0*/ __Vtemp_14;
    VlWide<1026>/*32831:0*/ __Vtemp_15;
    VlWide<1026>/*32831:0*/ __Vtemp_16;
    VlWide<4097>/*131103:0*/ __Vtemp_17;
    VlWide<4097>/*131103:0*/ __Vtemp_18;
    VlWide<1026>/*32831:0*/ __Vtemp_19;
    VlWide<1026>/*32831:0*/ __Vtemp_20;
    VlWide<1026>/*32831:0*/ __Vtemp_21;
    VlWide<1026>/*32831:0*/ __Vtemp_22;
    VlWide<1026>/*32831:0*/ __Vtemp_23;
    VlWide<4097>/*131103:0*/ __Vtemp_24;
    VlWide<4097>/*131103:0*/ __Vtemp_25;
    VlWide<4097>/*131103:0*/ __Vtemp_26;
    VlWide<1026>/*32831:0*/ __Vtemp_27;
    VlWide<1026>/*32831:0*/ __Vtemp_28;
    VlWide<1026>/*32831:0*/ __Vtemp_29;
    VlWide<4097>/*131103:0*/ __Vtemp_30;
    VlWide<4097>/*131103:0*/ __Vtemp_31;
    VlWide<1026>/*32831:0*/ __Vtemp_32;
    VlWide<1026>/*32831:0*/ __Vtemp_33;
    VlWide<1026>/*32831:0*/ __Vtemp_34;
    VlWide<1026>/*32831:0*/ __Vtemp_35;
    // Body
    VL_SHIFTL_WWI(8207,8207,13, __Vtemp_2, VTestDriver__ConstPool__CONST_ha68013b1_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 3U));
    VL_AND_W(257, __Vtemp_3, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_2);
    VL_SEL_WWII(4104,8207, __Vtemp_4, __Vtemp_3, 0U, 0x1008U);
    VL_COND_WIWW(4104, __Vtemp_5, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT___GEN_60), __Vtemp_4, VTestDriver__ConstPool__CONST_h88c8960f_0);
    VL_NOT_W(129, __Vtemp_6, __Vtemp_5);
    VL_AND_W(129, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_6);
    VL_COND_WIWW(4104, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h88c8960f_0, __Vtemp_7);
    VL_ASSIGN_W(4104,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_1);
    VL_EXTEND_WI(131074,3, __Vtemp_11, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN)
                                         ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size) 
                                                  << 1U))
                                         : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_12, __Vtemp_11, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_13, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_12);
    VL_SEL_WWII(32832,131074, __Vtemp_14, __Vtemp_13, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_15, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN), __Vtemp_14, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_16, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_15);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_17, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_18, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_17);
    VL_SEL_WWII(32832,131087, __Vtemp_19, __Vtemp_18, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_20, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT___GEN_38), __Vtemp_19, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_21, __Vtemp_20);
    VL_AND_W(1026, __Vtemp_22, __Vtemp_16, __Vtemp_21);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2 = 0U;
        VL_ASSIGN_W(32832,__Vtemp_10, VTestDriver__ConstPool__CONST_h1b399a84_0);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___d_first_T_3))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__watchdog_1));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid)
                      ? (0xffU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))
                      : 0U)));
        VL_ASSIGN_W(32832,__Vtemp_10, __Vtemp_22);
    }
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_10);
    VL_EXTEND_WI(131074,3, __Vtemp_24, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT___GEN)
                                         ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size) 
                                                  << 1U))
                                         : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_25, __Vtemp_24, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_26, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_25);
    VL_SEL_WWII(32832,131074, __Vtemp_27, __Vtemp_26, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_28, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT___GEN), __Vtemp_27, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_28);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_30, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_31, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_30);
    VL_SEL_WWII(32832,131087, __Vtemp_32, __Vtemp_31, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_33, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT___GEN_38), __Vtemp_32, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_34, __Vtemp_33);
    VL_AND_W(1026, __Vtemp_35, __Vtemp_29, __Vtemp_34);
    VL_COND_WIWW(32832, __Vtemp_23, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h1b399a84_0, __Vtemp_35);
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_23);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6101(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6101\n"); );
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
    VlWide<1026>/*32831:0*/ __Vtemp_15;
    VlWide<4097>/*131103:0*/ __Vtemp_16;
    VlWide<4097>/*131103:0*/ __Vtemp_17;
    VlWide<4097>/*131103:0*/ __Vtemp_18;
    VlWide<1026>/*32831:0*/ __Vtemp_19;
    VlWide<1026>/*32831:0*/ __Vtemp_20;
    VlWide<1026>/*32831:0*/ __Vtemp_21;
    VlWide<4097>/*131103:0*/ __Vtemp_22;
    VlWide<4097>/*131103:0*/ __Vtemp_23;
    VlWide<1026>/*32831:0*/ __Vtemp_24;
    VlWide<1026>/*32831:0*/ __Vtemp_25;
    VlWide<1026>/*32831:0*/ __Vtemp_26;
    VlWide<1026>/*32831:0*/ __Vtemp_27;
    // Body
    VL_EXTEND_WI(131074,3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN)
                                        ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_4, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_3);
    VL_SEL_WWII(32832,131074, __Vtemp_5, __Vtemp_4, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN), __Vtemp_5, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_8, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_9, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_8);
    VL_SEL_WWII(32832,131087, __Vtemp_10, __Vtemp_9, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT___GEN_38), __Vtemp_10, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_12, __Vtemp_11);
    VL_AND_W(1026, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    VL_COND_WIWW(32832, __Vtemp_1, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h1b399a84_0, __Vtemp_13);
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_EXTEND_WI(131074,3, __Vtemp_16, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT___GEN)
                                         ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size) 
                                                  << 1U))
                                         : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_17, __Vtemp_16, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_18, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_17);
    VL_SEL_WWII(32832,131074, __Vtemp_19, __Vtemp_18, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_20, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT___GEN), __Vtemp_19, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_21, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_sizes, __Vtemp_20);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_22, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_23, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_22);
    VL_SEL_WWII(32832,131087, __Vtemp_24, __Vtemp_23, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_25, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT___GEN_37), __Vtemp_24, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_26, __Vtemp_25);
    VL_AND_W(1026, __Vtemp_27, __Vtemp_21, __Vtemp_26);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2 = 0U;
        VL_ASSIGN_W(32832,__Vtemp_15, VTestDriver__ConstPool__CONST_h1b399a84_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__inflight_2) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__d_set)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid)
                      ? (0xffU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))
                      : 0U)));
        VL_ASSIGN_W(32832,__Vtemp_15, __Vtemp_27);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog));
    }
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_sizes, __Vtemp_15);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6102(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6102\n"); );
    // Init
    VlWide<1026>/*32831:0*/ __Vtemp_7;
    VlWide<4097>/*131103:0*/ __Vtemp_8;
    VlWide<4097>/*131103:0*/ __Vtemp_9;
    VlWide<4097>/*131103:0*/ __Vtemp_10;
    VlWide<1026>/*32831:0*/ __Vtemp_11;
    VlWide<1026>/*32831:0*/ __Vtemp_12;
    VlWide<1026>/*32831:0*/ __Vtemp_13;
    VlWide<4097>/*131103:0*/ __Vtemp_14;
    VlWide<4097>/*131103:0*/ __Vtemp_15;
    VlWide<1026>/*32831:0*/ __Vtemp_16;
    VlWide<1026>/*32831:0*/ __Vtemp_17;
    VlWide<1026>/*32831:0*/ __Vtemp_18;
    VlWide<1026>/*32831:0*/ __Vtemp_19;
    // Body
    VL_EXTEND_WI(131074,3, __Vtemp_8, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN)
                                        ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_9, __Vtemp_8, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_10, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_9);
    VL_SEL_WWII(32832,131074, __Vtemp_11, __Vtemp_10, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_12, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN), __Vtemp_11, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_13, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, __Vtemp_12);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_14, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_15, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_14);
    VL_SEL_WWII(32832,131087, __Vtemp_16, __Vtemp_15, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_17, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT___GEN_25), __Vtemp_16, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_18, __Vtemp_17);
    VL_AND_W(1026, __Vtemp_19, __Vtemp_13, __Vtemp_18);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog = 0U;
        VL_ASSIGN_W(32832,__Vtemp_7, VTestDriver__ConstPool__CONST_h1b399a84_0);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog);
        }
        if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_valid))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter 
                = (0x1ffU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__beats1)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter) 
                                 - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___GEN_0))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__watchdog));
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_deq) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT__do_enq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog);
        }
        VL_ASSIGN_W(32832,__Vtemp_7, __Vtemp_19);
    }
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, __Vtemp_7);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6103(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6103\n"); );
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
    // Body
    VL_EXTEND_WI(131074,3, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN)
                                        ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(131074,131074,16, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_4, VTestDriver__ConstPool__CONST_hb814e974_0, __Vtemp_3);
    VL_SEL_WWII(32832,131074, __Vtemp_5, __Vtemp_4, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN), __Vtemp_5, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_8, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_9, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_8);
    VL_SEL_WWII(32832,131087, __Vtemp_10, __Vtemp_9, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_38), __Vtemp_10, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_12, __Vtemp_11);
    VL_AND_W(1026, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        VL_ASSIGN_W(32832,__Vtemp_1, VTestDriver__ConstPool__CONST_h1b399a84_0);
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog = 0U;
    } else {
        VL_ASSIGN_W(32832,__Vtemp_1, __Vtemp_13);
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__watchdog);
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___a_first_T_1) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___d_first_T_2))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__binder__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog);
        }
    }
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
}

extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9ca1_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h9cfc9aaf_0;
extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_hd6b7ba52_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6104(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6104\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_1;
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
    // Body
    __Vtemp_2[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                              >> 0xaU));
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_3, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_2);
    __Vtemp_6[0U] = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 9U));
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    __Vtemp_6[5U] = 0U;
    __Vtemp_6[6U] = 0U;
    __Vtemp_6[7U] = 0U;
    VL_SHIFTL_WWW(256,256,256, __Vtemp_7, VTestDriver__ConstPool__CONST_h4e9f510d_0, __Vtemp_6);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 = 0U;
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[0U] 
            = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[1U] : VTestDriver__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[2U] : VTestDriver__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[3U] : VTestDriver__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[4U] : VTestDriver__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[5U] : VTestDriver__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[6U] : VTestDriver__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_3[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_7[7U] : VTestDriver__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_3[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_7[0U] : VTestDriver__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_1[7U];
    VL_EXTEND_WI(2051,4, __Vtemp_12, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_13, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)));
    VL_CONCAT_WWI(2051,2049,2, __Vtemp_14, __Vtemp_13, 0U);
    VL_SHIFTL_WWW(2051,2051,2051, __Vtemp_15, __Vtemp_12, __Vtemp_14);
    VL_AND_W(65, __Vtemp_16, VTestDriver__ConstPool__CONST_h614f9ca1_0, __Vtemp_15);
    VL_SHIFTL_WWI(2063,2063,10, __Vtemp_20, VTestDriver__ConstPool__CONST_h9cfc9aaf_0, 
                  (0x3fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 7U)));
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
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U];
    } else {
        __Vtemp_11[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[1U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[1U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[1U])));
        __Vtemp_11[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[2U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[2U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[2U])));
        __Vtemp_11[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[3U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[3U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[3U])));
        __Vtemp_11[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[4U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[4U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[4U])));
        __Vtemp_11[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[5U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[5U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[5U])));
        __Vtemp_11[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[6U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[6U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[6U])));
        __Vtemp_11[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[7U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[7U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[7U])));
        __Vtemp_11[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[8U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[8U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[8U])));
        __Vtemp_11[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                               ? __Vtemp_16[9U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])) 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                 ? __Vtemp_21[9U] : 
                                VTestDriver__ConstPool__CONST_hd6b7ba52_0[9U])));
        __Vtemp_11[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xaU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xaU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xaU])));
        __Vtemp_11[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xbU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xbU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xbU])));
        __Vtemp_11[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xcU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xcU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xcU])));
        __Vtemp_11[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xdU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xdU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xdU])));
        __Vtemp_11[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xeU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xeU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xeU])));
        __Vtemp_11[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_16[0xfU]
                                 : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_21[0xfU]
                                   : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0xfU])));
        __Vtemp_11[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x10U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x10U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x10U])));
        __Vtemp_11[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x11U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x11U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x11U])));
        __Vtemp_11[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x12U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x12U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x12U])));
        __Vtemp_11[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x13U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x13U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x13U])));
        __Vtemp_11[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x14U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x14U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x14U])));
        __Vtemp_11[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x15U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x15U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x15U])));
        __Vtemp_11[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x16U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x16U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x16U])));
        __Vtemp_11[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x17U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x17U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x17U])));
        __Vtemp_11[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x18U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x18U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x18U])));
        __Vtemp_11[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x19U]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x19U]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x19U])));
        __Vtemp_11[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1aU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1aU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
        __Vtemp_11[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1bU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1bU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
        __Vtemp_11[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1cU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1cU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
        __Vtemp_11[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1dU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1dU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
        __Vtemp_11[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1eU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1eU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
        __Vtemp_11[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                  ? __Vtemp_16[0x1fU]
                                  : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                    ? __Vtemp_21[0x1fU]
                                    : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_16[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_21[0U] : VTestDriver__ConstPool__CONST_hd6b7ba52_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_11[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_11[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_11[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_11[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = __Vtemp_11[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = __Vtemp_11[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = __Vtemp_11[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = __Vtemp_11[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
        = __Vtemp_11[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = __Vtemp_11[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = __Vtemp_11[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = __Vtemp_11[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = __Vtemp_11[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = __Vtemp_11[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = __Vtemp_11[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = __Vtemp_11[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = __Vtemp_11[0x11U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = __Vtemp_11[0x12U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = __Vtemp_11[0x13U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = __Vtemp_11[0x14U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = __Vtemp_11[0x15U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = __Vtemp_11[0x16U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = __Vtemp_11[0x17U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = __Vtemp_11[0x18U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = __Vtemp_11[0x19U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = __Vtemp_11[0x1aU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = __Vtemp_11[0x1bU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = __Vtemp_11[0x1cU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = __Vtemp_11[0x1dU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = __Vtemp_11[0x1eU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = __Vtemp_11[0x1fU];
}

extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9cb9_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6105(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6105\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<65>/*2079:0*/ __Vtemp_2;
    VlWide<65>/*2079:0*/ __Vtemp_3;
    VlWide<65>/*2079:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    // Body
    VL_EXTEND_WI(2052,5, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                      ? (1U | (0x1eU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                      : 0U));
    VL_EXTEND_WI(2049,8, __Vtemp_3, (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU)));
    VL_CONCAT_WWI(2052,2049,3, __Vtemp_4, __Vtemp_3, 0U);
    VL_SHIFTL_WWW(2052,2052,2052, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_AND_W(65, __Vtemp_6, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_5);
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp_10, VTestDriver__ConstPool__CONST_h5edd179d_0, 
                  (0x7f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    VL_AND_W(65, __Vtemp_11, VTestDriver__ConstPool__CONST_h614f1ca9_0, __Vtemp_10);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vilp = 1U;
        while ((__Vilp <= 0x3fU)) {
            __Vtemp_1[__Vilp] = VTestDriver__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestDriver__ConstPool__CONST_h6be9aa18_0[0U];
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1 = 0U;
    } else {
        __Vtemp_1[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[1U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[1U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[1U])));
        __Vtemp_1[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[2U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[2U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[2U])));
        __Vtemp_1[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[3U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[3U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[3U])));
        __Vtemp_1[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[4U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[4U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[4U])));
        __Vtemp_1[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[5U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[5U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[5U])));
        __Vtemp_1[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[6U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[6U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[6U])));
        __Vtemp_1[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[7U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[7U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[7U])));
        __Vtemp_1[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[8U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[8U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[8U])));
        __Vtemp_1[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[9U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                              ? __Vtemp_6[9U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                ? __Vtemp_11[9U] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[9U])));
        __Vtemp_1[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xaU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xaU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xaU])));
        __Vtemp_1[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xbU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xbU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xbU])));
        __Vtemp_1[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xcU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xcU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xcU])));
        __Vtemp_1[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xdU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xdU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xdU])));
        __Vtemp_1[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xeU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xeU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xeU])));
        __Vtemp_1[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
                            | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                ? __Vtemp_6[0xfU] : 
                               VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])) 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                  ? __Vtemp_11[0xfU]
                                  : VTestDriver__ConstPool__CONST_h6be9aa18_0[0xfU])));
        __Vtemp_1[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x10U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x10U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x10U])));
        __Vtemp_1[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x11U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x11U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x11U])));
        __Vtemp_1[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x12U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x12U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x12U])));
        __Vtemp_1[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x13U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x13U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x13U])));
        __Vtemp_1[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x14U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x14U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x14U])));
        __Vtemp_1[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x15U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x15U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x15U])));
        __Vtemp_1[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x16U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x16U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x16U])));
        __Vtemp_1[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x17U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x17U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x17U])));
        __Vtemp_1[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x18U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x18U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x18U])));
        __Vtemp_1[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x19U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x19U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x19U])));
        __Vtemp_1[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1aU])));
        __Vtemp_1[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1bU])));
        __Vtemp_1[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1cU])));
        __Vtemp_1[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1dU])));
        __Vtemp_1[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1eU])));
        __Vtemp_1[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x1fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x1fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x1fU])));
        __Vtemp_1[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x20U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x20U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x20U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x20U])));
        __Vtemp_1[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x21U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x21U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x21U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x21U])));
        __Vtemp_1[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x22U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x22U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x22U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x22U])));
        __Vtemp_1[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x23U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x23U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x23U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x23U])));
        __Vtemp_1[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x24U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x24U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x24U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x24U])));
        __Vtemp_1[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x25U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x25U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x25U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x25U])));
        __Vtemp_1[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x26U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x26U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x26U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x26U])));
        __Vtemp_1[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x27U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x27U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x27U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x27U])));
        __Vtemp_1[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x28U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x28U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x28U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x28U])));
        __Vtemp_1[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x29U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x29U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x29U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x29U])));
        __Vtemp_1[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2aU])));
        __Vtemp_1[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2bU])));
        __Vtemp_1[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2cU])));
        __Vtemp_1[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2dU])));
        __Vtemp_1[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2eU])));
        __Vtemp_1[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x2fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x2fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x2fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x2fU])));
        __Vtemp_1[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x30U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x30U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x30U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x30U])));
        __Vtemp_1[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x31U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x31U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x31U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x31U])));
        __Vtemp_1[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x32U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x32U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x32U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x32U])));
        __Vtemp_1[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x33U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x33U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x33U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x33U])));
        __Vtemp_1[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x34U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x34U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x34U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x34U])));
        __Vtemp_1[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x35U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x35U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x35U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x35U])));
        __Vtemp_1[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x36U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x36U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x36U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x36U])));
        __Vtemp_1[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x37U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x37U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x37U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x37U])));
        __Vtemp_1[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x38U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x38U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x38U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x38U])));
        __Vtemp_1[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x39U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x39U]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x39U]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x39U])));
        __Vtemp_1[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3aU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3aU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3aU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3aU])));
        __Vtemp_1[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3bU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3bU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3bU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3bU])));
        __Vtemp_1[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3cU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3cU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3cU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3cU])));
        __Vtemp_1[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3dU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3dU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3dU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3dU])));
        __Vtemp_1[0x3eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3eU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3eU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3eU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3eU])));
        __Vtemp_1[0x3fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0x3fU] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                                 ? __Vtemp_6[0x3fU]
                                 : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                                   ? __Vtemp_11[0x3fU]
                                   : VTestDriver__ConstPool__CONST_h6be9aa18_0[0x3fU])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_1)
                    ? __Vtemp_6[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT___GEN_56)
                      ? __Vtemp_11[0U] : VTestDriver__ConstPool__CONST_h6be9aa18_0[0U])));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_d_ready) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1 
                = (0x1ffU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_beats1)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                                 - (IData)(1U))));
        }
    }
    __Vilp = 1U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__inflight_sizes[__Vilp] 
            = __Vtemp_1[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_done)) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6106(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6106\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode))
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_size)) 
                                          >> 3U))) : 
                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                          - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6107(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6107\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6108(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6108\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___q_io_deq_ready_T_3) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__c_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__acknum) 
                             - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6109(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6109\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6110(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6110\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT___widx_T_1) 
                   & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount)))) 
               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT___GEN_0) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6111(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6111\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6112(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6112\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___q_io_deq_ready_T_3) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter 
                = (0x1ffU & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_beats1)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6113(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6113\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<17>/*543:0*/ __Vtemp_14;
    VlWide<32>/*1023:0*/ __Vtemp_15;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<257>/*8223:0*/ __Vtemp_21;
    VlWide<257>/*8223:0*/ __Vtemp_22;
    VlWide<65>/*2079:0*/ __Vtemp_23;
    VlWide<65>/*2079:0*/ __Vtemp_24;
    VlWide<65>/*2079:0*/ __Vtemp_25;
    VlWide<65>/*2079:0*/ __Vtemp_26;
    // Body
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_2, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 = 0U;
        __Vtemp_1[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_1[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_1[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_1[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_1[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_1[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_1[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_1[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_1[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_1[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_1[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_1[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_1[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_1[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_1[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_1[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size)) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                                 - (IData)(1U))));
        }
        __Vtemp_1[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_1[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_1[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_1[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_1[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_1[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_1[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_1[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[8U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_1[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[9U] 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                ? __Vtemp_2[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_1[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xaU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_1[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xbU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_1[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xcU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_1[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xdU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_1[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xeU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_1[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU] 
                           & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                  ? __Vtemp_2[0xfU]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_1[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                                   ? __Vtemp_2[0x10U]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51)
                      ? __Vtemp_2[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_1[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_1[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_1[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_1[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_1[0x10U];
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_51), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_12);
    VL_COND_WIWW(2052, __Vtemp_7, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_13);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_7);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_15, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        __Vtemp_14[1U] = VTestDriver__ConstPool__CONST_h3dcda146_0[1U];
        __Vtemp_14[2U] = VTestDriver__ConstPool__CONST_h3dcda146_0[2U];
        __Vtemp_14[3U] = VTestDriver__ConstPool__CONST_h3dcda146_0[3U];
        __Vtemp_14[4U] = VTestDriver__ConstPool__CONST_h3dcda146_0[4U];
        __Vtemp_14[5U] = VTestDriver__ConstPool__CONST_h3dcda146_0[5U];
        __Vtemp_14[6U] = VTestDriver__ConstPool__CONST_h3dcda146_0[6U];
        __Vtemp_14[7U] = VTestDriver__ConstPool__CONST_h3dcda146_0[7U];
        __Vtemp_14[8U] = VTestDriver__ConstPool__CONST_h3dcda146_0[8U];
        __Vtemp_14[9U] = VTestDriver__ConstPool__CONST_h3dcda146_0[9U];
        __Vtemp_14[0xaU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU];
        __Vtemp_14[0xbU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU];
        __Vtemp_14[0xcU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU];
        __Vtemp_14[0xdU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU];
        __Vtemp_14[0xeU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU];
        __Vtemp_14[0xfU] = VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU];
        __Vtemp_14[0x10U] = VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h3dcda146_0[0U];
    } else {
        __Vtemp_14[1U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[1U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[1U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[1U])));
        __Vtemp_14[2U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[2U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[2U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])));
        __Vtemp_14[3U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[3U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[3U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[3U])));
        __Vtemp_14[4U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[4U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[4U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[4U])));
        __Vtemp_14[5U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[5U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[5U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[5U])));
        __Vtemp_14[6U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[6U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[6U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[6U])));
        __Vtemp_14[7U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[7U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[7U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[7U])));
        __Vtemp_14[8U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[8U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[8U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[8U])));
        __Vtemp_14[9U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[9U] 
                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                 ? __Vtemp_15[9U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[9U])));
        __Vtemp_14[0xaU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xaU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xaU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])));
        __Vtemp_14[0xbU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xbU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xbU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])));
        __Vtemp_14[0xcU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xcU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xcU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])));
        __Vtemp_14[0xdU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xdU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xdU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])));
        __Vtemp_14[0xeU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xeU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xeU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])));
        __Vtemp_14[0xfU] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xfU] 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                   ? __Vtemp_15[0xfU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])));
        __Vtemp_14[0x10U] = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0x10U] 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                                    ? __Vtemp_15[0x10U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0U] 
            = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0U] 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52)
                      ? __Vtemp_15[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_14[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_14[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_14[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_14[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_14[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_14[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_14[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_14[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_14[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_14[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_14[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_14[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_14[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_14[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_14[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_14[0x10U];
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_21, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    VL_AND_W(257, __Vtemp_22, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_21);
    VL_SEL_WWII(2052,8207, __Vtemp_23, __Vtemp_22, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_24, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_52), __Vtemp_23, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_25, __Vtemp_24);
    VL_AND_W(65, __Vtemp_26, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_25);
    VL_COND_WIWW(2052, __Vtemp_20, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_26);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1, __Vtemp_20);
}
