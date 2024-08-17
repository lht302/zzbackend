// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__352(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__352\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [0xd3U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [0xd3U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((0xff800000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xd3U]) | (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                        [0xd4U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__353(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__353\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xe3U] << 0x18U) | (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                 [0xe4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xe3U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xe2U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xe2U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xe1U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xe1U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xe0U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xe0U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xdfU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdfU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xdeU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdeU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xddU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xddU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xdcU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdcU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xdbU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdbU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xdaU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xdaU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xd9U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xd9U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xd8U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xd8U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                              [0xd7U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0xd7U] >> 8U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                        [0xd5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                    [0xd6U])))) 
                              << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                      [0xd5U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                       [0xd6U])))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                 [0xd5U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                             [0xd6U]))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xff000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                           [0xd4U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                         [0xd5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                                          [0xd6U]))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                        [0xd4U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__354(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__354\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    VlWide<129>/*4127:0*/ __Vtemp_127;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x164U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x163U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x162U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x161U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x160U];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15fU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15eU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15dU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15cU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15bU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x15aU];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x159U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x158U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x157U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x156U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x155U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x154U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x153U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x152U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x151U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x150U];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14fU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14eU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14dU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14cU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14bU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x14aU];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x149U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x148U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x147U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x146U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x145U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x144U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x143U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x142U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x141U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x140U];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13fU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13eU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13dU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13cU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13bU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x13aU];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x139U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x138U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x137U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x136U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x135U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x134U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x133U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x132U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x131U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x130U];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12fU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12eU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12dU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12cU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12bU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x12aU];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x129U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x128U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
        [0x127U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                  [0x125U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                              [0x126U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                   [0x125U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                                                               [0x126U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x165U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x166U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x167U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x168U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x169U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16aU]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16bU]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16cU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16dU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16eU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x16fU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x170U]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x171U]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x172U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x173U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x174U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x175U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x176U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x177U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x178U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x179U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17aU]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17bU]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17cU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17dU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17eU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x17fU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x180U]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x181U]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x182U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x183U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x184U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x185U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x186U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x187U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x188U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x189U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18aU]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18bU]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18cU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18dU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18eU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x18fU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x190U]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x191U]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x192U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x193U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x194U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x195U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x196U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x197U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x198U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x199U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19aU]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19bU]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19cU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19dU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19eU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x19fU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x1a0U]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x1a1U]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x1a2U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x1a3U]);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_126, __Vtemp_125, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                  [0x1a4U]);
    VL_CONCAT_WWI(4100,4096,4, __Vtemp_127, __Vtemp_126, 
                  (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0x1a5U]));
    VL_CONCAT_WIW(4104,4,4100, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                   [0x124U] >> 0x1cU), __Vtemp_127);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__355(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__355\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                     [0x1a5U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((0xffc00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
            [0x1a5U]) | (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___RANDOM
                         [0x1a6U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__347(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__348(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__349(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__350(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__351(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__356(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__356\n"); );
    // Init
    VlWide<4>/*127:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM;
    VL_ZERO_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__347(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__348(vlSelf);
    VTestDriver___024root___eval_initial__TOP__349(vlSelf);
    VTestDriver___024root___eval_initial__TOP__350(vlSelf);
    VTestDriver___024root___eval_initial__TOP__351(vlSelf);
    VTestDriver___024root___eval_initial__TOP__352(vlSelf);
    VTestDriver___024root___eval_initial__TOP__353(vlSelf);
    VTestDriver___024root___eval_initial__TOP__354(vlSelf);
    VTestDriver___024root___eval_initial__TOP__355(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___RANDOM
                 [0U] >> 2U));
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0U][3U] 
        = (0x3ffffffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    VL_RANDOM_W(128, TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x80U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1U][3U] 
        = (0x3ffffffU & TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT___RANDOM_MEM[3U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__357(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__357\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___RANDOM
                 [0U] >> 2U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__358(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__358\n"); );
    // Init
    IData/*31:0*/ TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    VTestDriver___024root___eval_initial__TOP__356(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__357(vlSelf);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0U][2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U] 
        = TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT____Vlvbound_h74784e8d__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x60U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1U][2U] 
        = (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT___RANDOM_MEM[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__359(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__359\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[3U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[4U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[5U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM[6U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT____Vlvbound_h519e84e5__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [0U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_size 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                   [0U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                     [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_address 
        = ((0x1ff80000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                           [0U] >> 3U)) | (0x7ffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                                           [1U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__360(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__360\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_mask 
        = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                    [1U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                             [1U] >> 0x1bU))) << 0x3bU) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                               [2U])) << 0x1bU) | (QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                                                                   [3U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_bits_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [3U] >> 0x1bU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_a_0_lut 
        = ((0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                    [3U] >> 0x1cU)) | (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                                       [4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_data 
        = (((QData)((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                             [4U] >> 1U))) << 0x21U) 
           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                               [5U])) << 1U) | (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                                                                [6U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_d_0_corrupt 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__beatsLeft 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                     [6U] >> 3U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__361(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__361\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_0 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_1 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                 [6U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_first_counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___RANDOM
                     [6U] >> 0xeU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__362(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__362\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    VTestDriver___024root___eval_initial__TOP__358(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__359(vlSelf);
    VTestDriver___024root___eval_initial__TOP__360(vlSelf);
    VTestDriver___024root___eval_initial__TOP__361(vlSelf);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x1a7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT____Vlvbound_h49f26441__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x1a6U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM[vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT____Vlvbound_h49f26441__0;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter 
        = (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__size 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__address 
        = ((0x1c000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [0U] >> 3U)) | (0x3ffffffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [1U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__363(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__363\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter 
        = ((0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                      [1U] >> 0x17U)) | (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__param_1 
        = (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 6U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__size_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [2U] >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__source_1 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [2U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__sink 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__denied 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                 [2U] >> 0x17U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__364(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__364\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x11U] << 0x19U) | (0x1ffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                 [0x12U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x11U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0x10U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x10U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xfU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xfU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [0xeU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xeU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [0xdU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [0xcU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xcU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [0xbU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xbU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [0xaU] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xaU] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                             [9U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [9U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [8U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [8U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [7U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [7U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [6U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [6U] >> 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [5U] << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [5U] >> 7U) | ((IData)((((QData)((IData)(
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                     [3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                 [4U])))) 
                           << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                      [3U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                       [4U])))) >> 7U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                          [4U]))) >> 0x20U)) 
              << 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0xfU] 
        = ((0xfe000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [2U] << 1U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                      [3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                       [4U]))) 
                                                    >> 0x20U)) 
                                           >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight[0x10U] 
        = (0x1ffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [2U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__365(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__365\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x51U] << 0x1dU) | (0x1fffffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x52U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x51U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x50U] << 0x1dU));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x50U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4fU] << 0x1dU));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4fU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4eU] << 0x1dU));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4eU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4dU] << 0x1dU));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4dU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4cU] << 0x1dU));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4cU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4bU] << 0x1dU));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4bU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x4aU] << 0x1dU));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x4aU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x49U] << 0x1dU));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                       [0x49U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                         [0x48U] << 0x1dU));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x48U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x47U] 
                                           << 0x1dU));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x47U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x46U] 
                                           << 0x1dU));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x46U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x45U] 
                                           << 0x1dU));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x45U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x44U] 
                                           << 0x1dU));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x44U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x43U] 
                                           << 0x1dU));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x43U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                           [0x42U] 
                                           << 0x1dU));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x42U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x41U] 
                                            << 0x1dU));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x41U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x40U] 
                                            << 0x1dU));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x40U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3fU] 
                                            << 0x1dU));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3fU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3eU] 
                                            << 0x1dU));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3eU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3dU] 
                                            << 0x1dU));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3dU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3cU] 
                                            << 0x1dU));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3cU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3bU] 
                                            << 0x1dU));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3bU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x3aU] 
                                            << 0x1dU));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x3aU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x39U] 
                                            << 0x1dU));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x39U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x38U] 
                                            << 0x1dU));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x38U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x37U] 
                                            << 0x1dU));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x37U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x36U] 
                                            << 0x1dU));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x36U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x35U] 
                                            << 0x1dU));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x35U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x34U] 
                                            << 0x1dU));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x34U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x33U] 
                                            << 0x1dU));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x33U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x32U] 
                                            << 0x1dU));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x32U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x31U] 
                                            << 0x1dU));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x31U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x30U] 
                                            << 0x1dU));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x30U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2fU] 
                                            << 0x1dU));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2fU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2eU] 
                                            << 0x1dU));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2eU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2dU] 
                                            << 0x1dU));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2dU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2cU] 
                                            << 0x1dU));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2cU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2bU] 
                                            << 0x1dU));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2bU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x2aU] 
                                            << 0x1dU));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x2aU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x29U] 
                                            << 0x1dU));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x29U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x28U] 
                                            << 0x1dU));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x28U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x27U] 
                                            << 0x1dU));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x27U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x26U] 
                                            << 0x1dU));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x26U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x25U] 
                                            << 0x1dU));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x25U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x24U] 
                                            << 0x1dU));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x24U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x23U] 
                                            << 0x1dU));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x23U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x22U] 
                                            << 0x1dU));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x22U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x21U] 
                                            << 0x1dU));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x21U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x20U] 
                                            << 0x1dU));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x20U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1fU] 
                                            << 0x1dU));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1fU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1eU] 
                                            << 0x1dU));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1eU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1dU] 
                                            << 0x1dU));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1dU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1cU] 
                                            << 0x1dU));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1cU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1bU] 
                                            << 0x1dU));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1bU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x1aU] 
                                            << 0x1dU));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x1aU] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x19U] 
                                            << 0x1dU));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x19U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x18U] 
                                            << 0x1dU));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x18U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x17U] 
                                            << 0x1dU));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x17U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x16U] 
                                            << 0x1dU));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x16U] >> 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                            [0x15U] 
                                            << 0x1dU));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                          [0x15U] >> 3U) | ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                      [0x13U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                       [0x14U])))) 
                                            << 0x1dU));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x14U])))) 
                          >> 3U) | ((IData)(((((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                               [0x13U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                             >> 0x20U)) 
                                    << 0x1dU));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                  >> 0x20U)) >> 3U);
    VL_CONCAT_WIW(2052,7,2045, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x12U] >> 0x19U), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__366(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__366\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    VlWide<129>/*4127:0*/ __Vtemp_127;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x92U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x91U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x90U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8fU];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8eU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8dU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8cU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8bU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x8aU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x89U];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x88U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x87U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x86U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x85U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x84U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x83U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x82U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x81U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x80U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7fU];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7eU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7dU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7cU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7bU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x7aU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x79U];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x78U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x77U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x76U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x75U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x74U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x73U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x72U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x71U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x70U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6fU];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6eU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6dU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6cU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6bU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x6aU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x69U];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x68U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x67U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x66U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x65U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x64U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x63U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x62U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x61U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x60U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5fU];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5eU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5dU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5cU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5bU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x5aU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x59U];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x58U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x57U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x56U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x55U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                  [0x53U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                              [0x54U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                   [0x53U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                               [0x54U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x93U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x94U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x95U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x96U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x97U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x98U]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x99U]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9aU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9bU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9cU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9dU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9eU]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x9fU]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa0U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa1U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa2U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa3U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa4U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa5U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa6U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa7U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa8U]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xa9U]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xaaU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xabU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xacU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xadU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xaeU]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xafU]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb0U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb1U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb2U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb3U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb4U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb5U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb6U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb7U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb8U]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xb9U]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbaU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbbU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbcU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbdU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbeU]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xbfU]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc0U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc1U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc2U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc3U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc4U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc5U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc6U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc7U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc8U]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xc9U]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xcaU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xcbU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xccU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xcdU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xceU]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xcfU]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xd0U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xd1U]);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_126, __Vtemp_125, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0xd2U]);
    VL_CONCAT_WWI(4101,4096,5, __Vtemp_127, __Vtemp_126, 
                  (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0xd3U]));
    VL_CONCAT_WIW(4104,3,4101, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x52U] >> 0x1dU), __Vtemp_127);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__367(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__367\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [0xd3U] >> 5U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [0xd3U] >> 0xeU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
        = ((0xff800000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xd3U]) | (0x7fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                        [0xd4U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__368(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__368\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xe3U] << 0x18U) | (0xffffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                 [0xe4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xe3U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xe2U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xe2U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xe1U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xe1U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xe0U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xe0U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xdfU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdfU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xdeU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdeU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xddU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xddU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xdcU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdcU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xdbU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdbU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xdaU] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xdaU] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xd9U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xd9U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xd8U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xd8U] >> 8U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                              [0xd7U] << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0xd7U] >> 8U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                        [0xd5U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                    [0xd6U])))) 
                              << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                      [0xd5U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                       [0xd6U])))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                 [0xd5U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                             [0xd6U]))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xff000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                           [0xd4U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                         [0xd5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                                          [0xd6U]))) 
                                                       >> 0x20U)) 
                                              >> 8U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                        [0xd4U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__369(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__369\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    VlWide<129>/*4127:0*/ __Vtemp_127;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x164U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x163U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x162U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x161U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x160U];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15fU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15eU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15dU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15cU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15bU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x15aU];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x159U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x158U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x157U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x156U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x155U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x154U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x153U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x152U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x151U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x150U];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14fU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14eU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14dU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14cU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14bU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x14aU];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x149U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x148U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x147U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x146U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x145U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x144U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x143U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x142U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x141U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x140U];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13fU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13eU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13dU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13cU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13bU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x13aU];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x139U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x138U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x137U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x136U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x135U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x134U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x133U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x132U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x131U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x130U];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12fU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12eU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12dU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12cU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12bU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x12aU];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x129U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x128U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
        [0x127U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                  [0x125U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                              [0x126U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                   [0x125U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                                                               [0x126U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x165U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x166U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x167U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x168U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x169U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16aU]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16bU]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16cU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16dU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16eU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x16fU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x170U]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x171U]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x172U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x173U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x174U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x175U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x176U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x177U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x178U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x179U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17aU]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17bU]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17cU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17dU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17eU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x17fU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x180U]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x181U]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x182U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x183U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x184U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x185U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x186U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x187U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x188U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x189U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18aU]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18bU]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18cU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18dU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18eU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x18fU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x190U]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x191U]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x192U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x193U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x194U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x195U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x196U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x197U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x198U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x199U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19aU]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19bU]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19cU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19dU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19eU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x19fU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x1a0U]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x1a1U]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x1a2U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x1a3U]);
    VL_CONCAT_WWI(4096,4064,32, __Vtemp_126, __Vtemp_125, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                  [0x1a4U]);
    VL_CONCAT_WWI(4100,4096,4, __Vtemp_127, __Vtemp_126, 
                  (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x1a5U]));
    VL_CONCAT_WIW(4104,4,4100, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                   [0x124U] >> 0x1cU), __Vtemp_127);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__370(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__370\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                     [0x1a5U] >> 0xdU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
        = ((0xffc00000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
            [0x1a5U]) | (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___RANDOM
                         [0x1a6U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__371(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__371\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__362(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__363(vlSelf);
    VTestDriver___024root___eval_initial__TOP__364(vlSelf);
    VTestDriver___024root___eval_initial__TOP__365(vlSelf);
    VTestDriver___024root___eval_initial__TOP__366(vlSelf);
    VTestDriver___024root___eval_initial__TOP__367(vlSelf);
    VTestDriver___024root___eval_initial__TOP__368(vlSelf);
    VTestDriver___024root___eval_initial__TOP__369(vlSelf);
    VTestDriver___024root___eval_initial__TOP__370(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last_counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___RANDOM
                     [0U] >> 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT___RANDOM
                     [0U] >> 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x1a7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT____Vlvbound_h49f26441__0 
            = VL_RANDOM_I();
        if (VL_LIKELY((0x1a6U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM[vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i] 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT____Vlvbound_h49f26441__0;
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__unnamedblk1__DOT__i)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter 
        = (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                 [0U] >> 9U));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__372(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__372\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__param 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                 [0U] >> 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                     [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__address 
        = ((0x3800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0U] >> 0x12U)) | (0x7ffU & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                          [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                     [1U] >> 0xbU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__opcode_1 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                 [1U] >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__size_1 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [1U] >> 0x19U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__source_1 
        = ((0x380U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                      [1U] >> 0x16U)) | (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                         [2U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__373(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__373\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0x11U] << 0xaU) | (0x3ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0x12U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0x11U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0x10U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0x10U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xfU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xfU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0xeU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xeU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0xdU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0xcU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xcU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0xbU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xbU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [0xaU] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xaU] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                [9U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [9U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                              [8U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [8U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                              [7U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [7U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                              [6U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [6U] >> 0x16U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                              [5U] << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [5U] >> 0x16U) | ((IData)((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                        [3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                    [4U])))) 
                              << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                      [3U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                       [4U])))) >> 0x16U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                          [4U]))) >> 0x20U)) 
              << 0xaU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0xfU] 
        = ((0xfffffc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                           [2U] << 1U)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                      [3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                       [4U]))) 
                                                    >> 0x20U)) 
                                           >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight[0x10U] 
        = (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                     [2U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__374(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__374\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    // Body
    __Vtemp_62[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x51U] << 0xeU) | (0x3fffU 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                           [0x52U]));
    __Vtemp_62[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x51U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x50U] 
                                            << 0xeU));
    __Vtemp_62[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x50U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4fU] 
                                            << 0xeU));
    __Vtemp_62[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4fU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4eU] 
                                            << 0xeU));
    __Vtemp_62[4U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4eU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4dU] 
                                            << 0xeU));
    __Vtemp_62[5U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4dU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4cU] 
                                            << 0xeU));
    __Vtemp_62[6U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4cU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4bU] 
                                            << 0xeU));
    __Vtemp_62[7U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4bU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x4aU] 
                                            << 0xeU));
    __Vtemp_62[8U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x4aU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x49U] 
                                            << 0xeU));
    __Vtemp_62[9U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                       [0x49U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0x48U] 
                                            << 0xeU));
    __Vtemp_62[0xaU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x48U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x47U] 
                                              << 0xeU));
    __Vtemp_62[0xbU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x47U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x46U] 
                                              << 0xeU));
    __Vtemp_62[0xcU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x46U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x45U] 
                                              << 0xeU));
    __Vtemp_62[0xdU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x45U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x44U] 
                                              << 0xeU));
    __Vtemp_62[0xeU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x44U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x43U] 
                                              << 0xeU));
    __Vtemp_62[0xfU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x43U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                              [0x42U] 
                                              << 0xeU));
    __Vtemp_62[0x10U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x42U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x41U] 
                                               << 0xeU));
    __Vtemp_62[0x11U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x41U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x40U] 
                                               << 0xeU));
    __Vtemp_62[0x12U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x40U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3fU] 
                                               << 0xeU));
    __Vtemp_62[0x13U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3fU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3eU] 
                                               << 0xeU));
    __Vtemp_62[0x14U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3eU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3dU] 
                                               << 0xeU));
    __Vtemp_62[0x15U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3dU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3cU] 
                                               << 0xeU));
    __Vtemp_62[0x16U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3cU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3bU] 
                                               << 0xeU));
    __Vtemp_62[0x17U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3bU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x3aU] 
                                               << 0xeU));
    __Vtemp_62[0x18U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x3aU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x39U] 
                                               << 0xeU));
    __Vtemp_62[0x19U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x39U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x38U] 
                                               << 0xeU));
    __Vtemp_62[0x1aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x38U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x37U] 
                                               << 0xeU));
    __Vtemp_62[0x1bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x37U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x36U] 
                                               << 0xeU));
    __Vtemp_62[0x1cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x36U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x35U] 
                                               << 0xeU));
    __Vtemp_62[0x1dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x35U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x34U] 
                                               << 0xeU));
    __Vtemp_62[0x1eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x34U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x33U] 
                                               << 0xeU));
    __Vtemp_62[0x1fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x33U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x32U] 
                                               << 0xeU));
    __Vtemp_62[0x20U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x32U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x31U] 
                                               << 0xeU));
    __Vtemp_62[0x21U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x31U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x30U] 
                                               << 0xeU));
    __Vtemp_62[0x22U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x30U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2fU] 
                                               << 0xeU));
    __Vtemp_62[0x23U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2fU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2eU] 
                                               << 0xeU));
    __Vtemp_62[0x24U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2eU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2dU] 
                                               << 0xeU));
    __Vtemp_62[0x25U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2dU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2cU] 
                                               << 0xeU));
    __Vtemp_62[0x26U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2cU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2bU] 
                                               << 0xeU));
    __Vtemp_62[0x27U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2bU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x2aU] 
                                               << 0xeU));
    __Vtemp_62[0x28U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x2aU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x29U] 
                                               << 0xeU));
    __Vtemp_62[0x29U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x29U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x28U] 
                                               << 0xeU));
    __Vtemp_62[0x2aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x28U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x27U] 
                                               << 0xeU));
    __Vtemp_62[0x2bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x27U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x26U] 
                                               << 0xeU));
    __Vtemp_62[0x2cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x26U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x25U] 
                                               << 0xeU));
    __Vtemp_62[0x2dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x25U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x24U] 
                                               << 0xeU));
    __Vtemp_62[0x2eU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x24U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x23U] 
                                               << 0xeU));
    __Vtemp_62[0x2fU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x23U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x22U] 
                                               << 0xeU));
    __Vtemp_62[0x30U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x22U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x21U] 
                                               << 0xeU));
    __Vtemp_62[0x31U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x21U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x20U] 
                                               << 0xeU));
    __Vtemp_62[0x32U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x20U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1fU] 
                                               << 0xeU));
    __Vtemp_62[0x33U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1fU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1eU] 
                                               << 0xeU));
    __Vtemp_62[0x34U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1eU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1dU] 
                                               << 0xeU));
    __Vtemp_62[0x35U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1dU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1cU] 
                                               << 0xeU));
    __Vtemp_62[0x36U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1cU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1bU] 
                                               << 0xeU));
    __Vtemp_62[0x37U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1bU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x1aU] 
                                               << 0xeU));
    __Vtemp_62[0x38U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x1aU] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x19U] 
                                               << 0xeU));
    __Vtemp_62[0x39U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x19U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x18U] 
                                               << 0xeU));
    __Vtemp_62[0x3aU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x18U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x17U] 
                                               << 0xeU));
    __Vtemp_62[0x3bU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x17U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x16U] 
                                               << 0xeU));
    __Vtemp_62[0x3cU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x16U] >> 0x12U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                               [0x15U] 
                                               << 0xeU));
    __Vtemp_62[0x3dU] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                          [0x15U] >> 0x12U) | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                         [0x13U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                          [0x14U])))) 
                                               << 0xeU));
    __Vtemp_62[0x3eU] = (((IData)((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                [0x14U])))) 
                          >> 0x12U) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                  [0x13U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                   [0x14U]))) 
                                                >> 0x20U)) 
                                       << 0xeU));
    __Vtemp_62[0x3fU] = ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                    [0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                [0x14U]))) 
                                  >> 0x20U)) >> 0x12U);
    VL_CONCAT_WIW(2052,22,2030, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_opcodes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0x12U] >> 0xaU), __Vtemp_62);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__375(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__375\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x92U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x91U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x90U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8fU];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8eU];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8dU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8cU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8bU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x8aU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x89U];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x88U];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x87U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x86U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x85U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x84U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x83U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x82U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x81U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x80U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7fU];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7eU];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7dU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7cU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7bU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x7aU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x79U];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x78U];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x77U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x76U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x75U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x74U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x73U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x72U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x71U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x70U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6fU];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6eU];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6dU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6cU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6bU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x6aU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x69U];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x68U];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x67U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x66U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x65U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x64U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x63U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x62U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x61U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x60U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5fU];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5eU];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5dU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5cU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5bU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x5aU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x59U];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x58U];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x57U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x56U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x55U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                  [0x53U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                              [0x54U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                   [0x53U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                               [0x54U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x93U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x94U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x95U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x96U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x97U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x98U]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x99U]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9aU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9bU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9cU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9dU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9eU]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x9fU]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa0U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa1U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa2U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa3U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa4U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa5U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa6U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa7U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa8U]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xa9U]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xaaU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xabU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xacU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xadU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xaeU]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xafU]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb0U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb1U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb2U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb3U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb4U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb5U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb6U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb7U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb8U]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xb9U]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbaU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbbU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbcU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbdU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbeU]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xbfU]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc0U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc1U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc2U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc3U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc4U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc5U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc6U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc7U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc8U]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xc9U]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xcaU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xcbU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xccU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xcdU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xceU]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xcfU]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xd0U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0xd1U]);
    VL_CONCAT_WWI(4086,4064,22, __Vtemp_126, __Vtemp_125, 
                  (0x3fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0xd2U]));
    VL_CONCAT_WIW(4104,18,4086, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0x52U] >> 0xeU), __Vtemp_126);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__376(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__376\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__a_first_counter_1 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                     [0xd2U] >> 0x16U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1 
        = ((0x100U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                      [0xd2U] >> 0x17U)) | (0xffU & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                            [0xd3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog 
        = ((0xffffff00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xd3U]) | (0xffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                        [0xd4U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__377(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__377\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xe3U] << 9U) | (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                              [0xe4U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xe3U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xe2U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xe2U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xe1U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[3U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xe1U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xe0U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[4U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xe0U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xdfU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[5U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdfU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xdeU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[6U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdeU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xddU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[7U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xddU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xdcU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[8U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdcU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xdbU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[9U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdbU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xdaU] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xdaU] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xd9U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xd9U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xd8U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xd8U] >> 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                 [0xd7U] << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0xd7U] >> 0x17U) | ((IData)((((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                           [0xd5U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                            [0xd6U])))) 
                                 << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xeU] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                      [0xd5U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                       [0xd6U])))) 
            >> 0x17U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                    [0xd5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                [0xd6U]))) 
                                  >> 0x20U)) << 9U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((0xfffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                           [0xd4U] << 1U)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                         [0xd5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                                          [0xd6U]))) 
                                                       >> 0x20U)) 
                                              >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_1[0x10U] 
        = (0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                     [0xd4U] >> 0x1fU));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__378(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__378\n"); );
    // Init
    VlWide<64>/*2047:0*/ __Vtemp_62;
    VlWide<65>/*2079:0*/ __Vtemp_63;
    VlWide<66>/*2111:0*/ __Vtemp_64;
    VlWide<67>/*2143:0*/ __Vtemp_65;
    VlWide<68>/*2175:0*/ __Vtemp_66;
    VlWide<69>/*2207:0*/ __Vtemp_67;
    VlWide<70>/*2239:0*/ __Vtemp_68;
    VlWide<71>/*2271:0*/ __Vtemp_69;
    VlWide<72>/*2303:0*/ __Vtemp_70;
    VlWide<73>/*2335:0*/ __Vtemp_71;
    VlWide<74>/*2367:0*/ __Vtemp_72;
    VlWide<75>/*2399:0*/ __Vtemp_73;
    VlWide<76>/*2431:0*/ __Vtemp_74;
    VlWide<77>/*2463:0*/ __Vtemp_75;
    VlWide<78>/*2495:0*/ __Vtemp_76;
    VlWide<79>/*2527:0*/ __Vtemp_77;
    VlWide<80>/*2559:0*/ __Vtemp_78;
    VlWide<81>/*2591:0*/ __Vtemp_79;
    VlWide<82>/*2623:0*/ __Vtemp_80;
    VlWide<83>/*2655:0*/ __Vtemp_81;
    VlWide<84>/*2687:0*/ __Vtemp_82;
    VlWide<85>/*2719:0*/ __Vtemp_83;
    VlWide<86>/*2751:0*/ __Vtemp_84;
    VlWide<87>/*2783:0*/ __Vtemp_85;
    VlWide<88>/*2815:0*/ __Vtemp_86;
    VlWide<89>/*2847:0*/ __Vtemp_87;
    VlWide<90>/*2879:0*/ __Vtemp_88;
    VlWide<91>/*2911:0*/ __Vtemp_89;
    VlWide<92>/*2943:0*/ __Vtemp_90;
    VlWide<93>/*2975:0*/ __Vtemp_91;
    VlWide<94>/*3007:0*/ __Vtemp_92;
    VlWide<95>/*3039:0*/ __Vtemp_93;
    VlWide<96>/*3071:0*/ __Vtemp_94;
    VlWide<97>/*3103:0*/ __Vtemp_95;
    VlWide<98>/*3135:0*/ __Vtemp_96;
    VlWide<99>/*3167:0*/ __Vtemp_97;
    VlWide<100>/*3199:0*/ __Vtemp_98;
    VlWide<101>/*3231:0*/ __Vtemp_99;
    VlWide<102>/*3263:0*/ __Vtemp_100;
    VlWide<103>/*3295:0*/ __Vtemp_101;
    VlWide<104>/*3327:0*/ __Vtemp_102;
    VlWide<105>/*3359:0*/ __Vtemp_103;
    VlWide<106>/*3391:0*/ __Vtemp_104;
    VlWide<107>/*3423:0*/ __Vtemp_105;
    VlWide<108>/*3455:0*/ __Vtemp_106;
    VlWide<109>/*3487:0*/ __Vtemp_107;
    VlWide<110>/*3519:0*/ __Vtemp_108;
    VlWide<111>/*3551:0*/ __Vtemp_109;
    VlWide<112>/*3583:0*/ __Vtemp_110;
    VlWide<113>/*3615:0*/ __Vtemp_111;
    VlWide<114>/*3647:0*/ __Vtemp_112;
    VlWide<115>/*3679:0*/ __Vtemp_113;
    VlWide<116>/*3711:0*/ __Vtemp_114;
    VlWide<117>/*3743:0*/ __Vtemp_115;
    VlWide<118>/*3775:0*/ __Vtemp_116;
    VlWide<119>/*3807:0*/ __Vtemp_117;
    VlWide<120>/*3839:0*/ __Vtemp_118;
    VlWide<121>/*3871:0*/ __Vtemp_119;
    VlWide<122>/*3903:0*/ __Vtemp_120;
    VlWide<123>/*3935:0*/ __Vtemp_121;
    VlWide<124>/*3967:0*/ __Vtemp_122;
    VlWide<125>/*3999:0*/ __Vtemp_123;
    VlWide<126>/*4031:0*/ __Vtemp_124;
    VlWide<127>/*4063:0*/ __Vtemp_125;
    VlWide<128>/*4095:0*/ __Vtemp_126;
    // Body
    __Vtemp_62[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x164U];
    __Vtemp_62[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x163U];
    __Vtemp_62[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x162U];
    __Vtemp_62[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x161U];
    __Vtemp_62[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x160U];
    __Vtemp_62[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15fU];
    __Vtemp_62[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15eU];
    __Vtemp_62[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15dU];
    __Vtemp_62[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15cU];
    __Vtemp_62[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15bU];
    __Vtemp_62[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x15aU];
    __Vtemp_62[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x159U];
    __Vtemp_62[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x158U];
    __Vtemp_62[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x157U];
    __Vtemp_62[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x156U];
    __Vtemp_62[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x155U];
    __Vtemp_62[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x154U];
    __Vtemp_62[0x11U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x153U];
    __Vtemp_62[0x12U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x152U];
    __Vtemp_62[0x13U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x151U];
    __Vtemp_62[0x14U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x150U];
    __Vtemp_62[0x15U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14fU];
    __Vtemp_62[0x16U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14eU];
    __Vtemp_62[0x17U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14dU];
    __Vtemp_62[0x18U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14cU];
    __Vtemp_62[0x19U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14bU];
    __Vtemp_62[0x1aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x14aU];
    __Vtemp_62[0x1bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x149U];
    __Vtemp_62[0x1cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x148U];
    __Vtemp_62[0x1dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x147U];
    __Vtemp_62[0x1eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x146U];
    __Vtemp_62[0x1fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x145U];
    __Vtemp_62[0x20U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x144U];
    __Vtemp_62[0x21U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x143U];
    __Vtemp_62[0x22U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x142U];
    __Vtemp_62[0x23U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x141U];
    __Vtemp_62[0x24U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x140U];
    __Vtemp_62[0x25U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13fU];
    __Vtemp_62[0x26U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13eU];
    __Vtemp_62[0x27U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13dU];
    __Vtemp_62[0x28U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13cU];
    __Vtemp_62[0x29U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13bU];
    __Vtemp_62[0x2aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x13aU];
    __Vtemp_62[0x2bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x139U];
    __Vtemp_62[0x2cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x138U];
    __Vtemp_62[0x2dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x137U];
    __Vtemp_62[0x2eU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x136U];
    __Vtemp_62[0x2fU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x135U];
    __Vtemp_62[0x30U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x134U];
    __Vtemp_62[0x31U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x133U];
    __Vtemp_62[0x32U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x132U];
    __Vtemp_62[0x33U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x131U];
    __Vtemp_62[0x34U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x130U];
    __Vtemp_62[0x35U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12fU];
    __Vtemp_62[0x36U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12eU];
    __Vtemp_62[0x37U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12dU];
    __Vtemp_62[0x38U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12cU];
    __Vtemp_62[0x39U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12bU];
    __Vtemp_62[0x3aU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x12aU];
    __Vtemp_62[0x3bU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x129U];
    __Vtemp_62[0x3cU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x128U];
    __Vtemp_62[0x3dU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
        [0x127U];
    __Vtemp_62[0x3eU] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                  [0x125U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                              [0x126U]))));
    __Vtemp_62[0x3fU] = (IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                   [0x125U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                                               [0x126U]))) 
                                 >> 0x20U));
    VL_CONCAT_WWI(2080,2048,32, __Vtemp_63, __Vtemp_62, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x165U]);
    VL_CONCAT_WWI(2112,2080,32, __Vtemp_64, __Vtemp_63, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x166U]);
    VL_CONCAT_WWI(2144,2112,32, __Vtemp_65, __Vtemp_64, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x167U]);
    VL_CONCAT_WWI(2176,2144,32, __Vtemp_66, __Vtemp_65, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x168U]);
    VL_CONCAT_WWI(2208,2176,32, __Vtemp_67, __Vtemp_66, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x169U]);
    VL_CONCAT_WWI(2240,2208,32, __Vtemp_68, __Vtemp_67, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16aU]);
    VL_CONCAT_WWI(2272,2240,32, __Vtemp_69, __Vtemp_68, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16bU]);
    VL_CONCAT_WWI(2304,2272,32, __Vtemp_70, __Vtemp_69, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16cU]);
    VL_CONCAT_WWI(2336,2304,32, __Vtemp_71, __Vtemp_70, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16dU]);
    VL_CONCAT_WWI(2368,2336,32, __Vtemp_72, __Vtemp_71, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16eU]);
    VL_CONCAT_WWI(2400,2368,32, __Vtemp_73, __Vtemp_72, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x16fU]);
    VL_CONCAT_WWI(2432,2400,32, __Vtemp_74, __Vtemp_73, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x170U]);
    VL_CONCAT_WWI(2464,2432,32, __Vtemp_75, __Vtemp_74, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x171U]);
    VL_CONCAT_WWI(2496,2464,32, __Vtemp_76, __Vtemp_75, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x172U]);
    VL_CONCAT_WWI(2528,2496,32, __Vtemp_77, __Vtemp_76, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x173U]);
    VL_CONCAT_WWI(2560,2528,32, __Vtemp_78, __Vtemp_77, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x174U]);
    VL_CONCAT_WWI(2592,2560,32, __Vtemp_79, __Vtemp_78, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x175U]);
    VL_CONCAT_WWI(2624,2592,32, __Vtemp_80, __Vtemp_79, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x176U]);
    VL_CONCAT_WWI(2656,2624,32, __Vtemp_81, __Vtemp_80, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x177U]);
    VL_CONCAT_WWI(2688,2656,32, __Vtemp_82, __Vtemp_81, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x178U]);
    VL_CONCAT_WWI(2720,2688,32, __Vtemp_83, __Vtemp_82, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x179U]);
    VL_CONCAT_WWI(2752,2720,32, __Vtemp_84, __Vtemp_83, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17aU]);
    VL_CONCAT_WWI(2784,2752,32, __Vtemp_85, __Vtemp_84, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17bU]);
    VL_CONCAT_WWI(2816,2784,32, __Vtemp_86, __Vtemp_85, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17cU]);
    VL_CONCAT_WWI(2848,2816,32, __Vtemp_87, __Vtemp_86, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17dU]);
    VL_CONCAT_WWI(2880,2848,32, __Vtemp_88, __Vtemp_87, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17eU]);
    VL_CONCAT_WWI(2912,2880,32, __Vtemp_89, __Vtemp_88, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x17fU]);
    VL_CONCAT_WWI(2944,2912,32, __Vtemp_90, __Vtemp_89, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x180U]);
    VL_CONCAT_WWI(2976,2944,32, __Vtemp_91, __Vtemp_90, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x181U]);
    VL_CONCAT_WWI(3008,2976,32, __Vtemp_92, __Vtemp_91, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x182U]);
    VL_CONCAT_WWI(3040,3008,32, __Vtemp_93, __Vtemp_92, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x183U]);
    VL_CONCAT_WWI(3072,3040,32, __Vtemp_94, __Vtemp_93, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x184U]);
    VL_CONCAT_WWI(3104,3072,32, __Vtemp_95, __Vtemp_94, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x185U]);
    VL_CONCAT_WWI(3136,3104,32, __Vtemp_96, __Vtemp_95, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x186U]);
    VL_CONCAT_WWI(3168,3136,32, __Vtemp_97, __Vtemp_96, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x187U]);
    VL_CONCAT_WWI(3200,3168,32, __Vtemp_98, __Vtemp_97, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x188U]);
    VL_CONCAT_WWI(3232,3200,32, __Vtemp_99, __Vtemp_98, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x189U]);
    VL_CONCAT_WWI(3264,3232,32, __Vtemp_100, __Vtemp_99, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18aU]);
    VL_CONCAT_WWI(3296,3264,32, __Vtemp_101, __Vtemp_100, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18bU]);
    VL_CONCAT_WWI(3328,3296,32, __Vtemp_102, __Vtemp_101, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18cU]);
    VL_CONCAT_WWI(3360,3328,32, __Vtemp_103, __Vtemp_102, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18dU]);
    VL_CONCAT_WWI(3392,3360,32, __Vtemp_104, __Vtemp_103, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18eU]);
    VL_CONCAT_WWI(3424,3392,32, __Vtemp_105, __Vtemp_104, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x18fU]);
    VL_CONCAT_WWI(3456,3424,32, __Vtemp_106, __Vtemp_105, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x190U]);
    VL_CONCAT_WWI(3488,3456,32, __Vtemp_107, __Vtemp_106, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x191U]);
    VL_CONCAT_WWI(3520,3488,32, __Vtemp_108, __Vtemp_107, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x192U]);
    VL_CONCAT_WWI(3552,3520,32, __Vtemp_109, __Vtemp_108, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x193U]);
    VL_CONCAT_WWI(3584,3552,32, __Vtemp_110, __Vtemp_109, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x194U]);
    VL_CONCAT_WWI(3616,3584,32, __Vtemp_111, __Vtemp_110, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x195U]);
    VL_CONCAT_WWI(3648,3616,32, __Vtemp_112, __Vtemp_111, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x196U]);
    VL_CONCAT_WWI(3680,3648,32, __Vtemp_113, __Vtemp_112, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x197U]);
    VL_CONCAT_WWI(3712,3680,32, __Vtemp_114, __Vtemp_113, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x198U]);
    VL_CONCAT_WWI(3744,3712,32, __Vtemp_115, __Vtemp_114, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x199U]);
    VL_CONCAT_WWI(3776,3744,32, __Vtemp_116, __Vtemp_115, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19aU]);
    VL_CONCAT_WWI(3808,3776,32, __Vtemp_117, __Vtemp_116, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19bU]);
    VL_CONCAT_WWI(3840,3808,32, __Vtemp_118, __Vtemp_117, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19cU]);
    VL_CONCAT_WWI(3872,3840,32, __Vtemp_119, __Vtemp_118, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19dU]);
    VL_CONCAT_WWI(3904,3872,32, __Vtemp_120, __Vtemp_119, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19eU]);
    VL_CONCAT_WWI(3936,3904,32, __Vtemp_121, __Vtemp_120, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x19fU]);
    VL_CONCAT_WWI(3968,3936,32, __Vtemp_122, __Vtemp_121, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x1a0U]);
    VL_CONCAT_WWI(4000,3968,32, __Vtemp_123, __Vtemp_122, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x1a1U]);
    VL_CONCAT_WWI(4032,4000,32, __Vtemp_124, __Vtemp_123, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x1a2U]);
    VL_CONCAT_WWI(4064,4032,32, __Vtemp_125, __Vtemp_124, 
                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                  [0x1a3U]);
    VL_CONCAT_WWI(4085,4064,21, __Vtemp_126, __Vtemp_125, 
                  (0x1fffffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0x1a4U]));
    VL_CONCAT_WIW(4104,19,4085, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                   [0x124U] >> 0xdU), __Vtemp_126);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__379(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__379\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_2 
        = ((0x180U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                      [0x1a4U] >> 0x17U)) | (0x7fU 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                                             [0x1a5U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__watchdog_1 
        = ((0xffffff80U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
            [0x1a5U]) | (0x7fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___RANDOM
                         [0x1a6U]));
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__380(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__380\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    VTestDriver___024root___eval_initial__TOP__371(vlSelf);
    __Vilp = 0U;
    while ((__Vilp <= 0x41U)) {
        vlSelf->__Vm_traceActivity[__Vilp] = 1U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VTestDriver___024root___eval_initial__TOP__372(vlSelf);
    VTestDriver___024root___eval_initial__TOP__373(vlSelf);
    VTestDriver___024root___eval_initial__TOP__374(vlSelf);
    VTestDriver___024root___eval_initial__TOP__375(vlSelf);
    VTestDriver___024root___eval_initial__TOP__376(vlSelf);
    VTestDriver___024root___eval_initial__TOP__377(vlSelf);
    VTestDriver___024root___eval_initial__TOP__378(vlSelf);
    VTestDriver___024root___eval_initial__TOP__379(vlSelf);
    __Vtemp_1[0U] = 0x743d2564U;
    __Vtemp_1[1U] = 0x6d656f75U;
    __Vtemp_1[2U] = 0x6b5f7469U;
    __Vtemp_1[3U] = 0x656c696eU;
    __Vtemp_1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_1), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x6d656f75U;
    __Vtemp_2[2U] = 0x6b5f7469U;
    __Vtemp_2[3U] = 0x656c696eU;
    __Vtemp_2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32, VL_CVT_PACK_STR_NW(5, __Vtemp_2), 
                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM[2U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM[3U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[0U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                      [1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                       [2U])))) << 0xcU) 
           | (0xfffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
              [3U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[1U] 
        = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                      [1U])) << 0x20U) 
                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                       [2U])))) >> 0x14U) 
           | ((IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                          [2U]))) >> 0x20U)) 
              << 0xcU));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[2U] 
        = ((0xfffff000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                           [0U] << 0xbU)) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                                                        [1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                                                                         [2U]))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__ram[3U] 
        = (0xfffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
                     [0U] >> 0x15U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT__full 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__error__DOT__a_q__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__unnamedblk1__DOT__i = 0U;
}
