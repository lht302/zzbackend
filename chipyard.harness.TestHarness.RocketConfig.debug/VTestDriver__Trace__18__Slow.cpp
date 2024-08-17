// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestDriver__Syms.h"


extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hebe77906_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;
extern const VlWide<14>/*447:0*/ VTestDriver__ConstPool__CONST_h41ec5e41_0;
extern const VlWide<14>/*447:0*/ VTestDriver__ConstPool__CONST_h862f0a8c_0;
extern const VlWide<14>/*447:0*/ VTestDriver__ConstPool__CONST_h71be9d22_0;

VL_ATTR_COLD void VTestDriver___024root__trace_full_0_sub_12(VTestDriver___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root__trace_full_0_sub_12\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<32>/*1023:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<14>/*447:0*/ __Vtemp_8;
    VlWide<14>/*447:0*/ __Vtemp_10;
    VlWide<14>/*447:0*/ __Vtemp_11;
    VlWide<14>/*447:0*/ __Vtemp_13;
    VlWide<14>/*447:0*/ __Vtemp_14;
    VlWide<14>/*447:0*/ __Vtemp_17;
    VlWide<14>/*447:0*/ __Vtemp_18;
    VlWide<14>/*447:0*/ __Vtemp_20;
    VlWide<14>/*447:0*/ __Vtemp_21;
    VlWide<14>/*447:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    // Body
    bufp->fullCData(oldp+75484,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                    << 7U) 
                                                   & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))) 
                                              << 7U))) 
                                 | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                       << 6U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                          << 5U) 
                                                         & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0)))))))))))))),8);
    bufp->fullBit(oldp+75485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullCData(oldp+75486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+75487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+75488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__winner_0));
    bufp->fullBit(oldp+75489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__winner_1));
    bufp->fullBit(oldp+75490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0));
    bufp->fullBit(oldp+75491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1));
    bufp->fullBit(oldp+75492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullIData(oldp+75493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data[0U]),32);
    bufp->fullIData(oldp+75494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_0),32);
    bufp->fullIData(oldp+75495,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_1),32);
    bufp->fullIData(oldp+75496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_2),32);
    bufp->fullIData(oldp+75497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_3),32);
    bufp->fullIData(oldp+75498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_4),32);
    bufp->fullIData(oldp+75499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_5),32);
    bufp->fullIData(oldp+75500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_6),32);
    bufp->fullIData(oldp+75501,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__mem_7),32);
    bufp->fullWData(oldp+75502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__data),164);
    bufp->fullBit(oldp+75508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_121));
    bufp->fullBit(oldp+75509,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_156));
    bufp->fullBit(oldp+75510,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))));
    bufp->fullBit(oldp+75511,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartExceptionWrEn));
    bufp->fullBit(oldp+75512,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartHaltedWrEn));
    bufp->fullBit(oldp+75513,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_156) 
                               & (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_womask_T_288)))));
    bufp->fullCData(oldp+75514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_oindex_1),8);
    bufp->fullBit(oldp+75515,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_87));
    bufp->fullBit(oldp+75516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_150));
    bufp->fullBit(oldp+75517,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_39));
    bufp->fullBit(oldp+75518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_103));
    bufp->fullBit(oldp+75519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_174));
    bufp->fullBit(oldp+75520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_130));
    bufp->fullBit(oldp+75521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_23));
    bufp->fullBit(oldp+75522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_111));
    bufp->fullBit(oldp+75523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_71));
    bufp->fullBit(oldp+75524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_63));
    bufp->fullBit(oldp+75525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_190));
    bufp->fullBit(oldp+75526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_7));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                              << 7U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                        >> 0x19U))));
    bufp->fullWData(oldp+75527,(__Vtemp_1),1024);
    bufp->fullBit(oldp+75559,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hartResumingWrEn));
    bufp->fullBit(oldp+75560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+75561,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
    bufp->fullBit(oldp+75562,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))))));
    bufp->fullBit(oldp+75563,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+75564,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))));
    bufp->fullBit(oldp+75565,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))));
    bufp->fullBit(oldp+75566,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))))));
    bufp->fullBit(oldp+75567,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))));
    bufp->fullBit(oldp+75568,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))))));
    bufp->fullBit(oldp+75569,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))));
    bufp->fullBit(oldp+75570,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))))));
    bufp->fullBit(oldp+75571,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))));
    bufp->fullBit(oldp+75572,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))))));
    bufp->fullCData(oldp+75573,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                    << 7U) 
                                                   & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))) 
                                              << 7U))) 
                                 | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                       << 6U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                          << 5U) 
                                                         & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_hf8641a95__0))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_hf8641a95__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_hf8641a95__0)))))))))))))),8);
    bufp->fullBit(oldp+75574,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_2));
    bufp->fullBit(oldp+75575,((0U == (3U & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                            >> 3U)))));
    bufp->fullBit(oldp+75576,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm));
    bufp->fullBit(oldp+75577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
    bufp->fullBit(oldp+75578,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
    bufp->fullBit(oldp+75579,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm));
    bufp->fullBit(oldp+75580,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode))));
    bufp->fullBit(oldp+75581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_10));
    bufp->fullBit(oldp+75582,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_woready_12));
    bufp->fullBit(oldp+75583,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm)))));
    bufp->fullBit(oldp+75584,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+75585,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size))));
    bufp->fullBit(oldp+75586,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size))))));
    bufp->fullBit(oldp+75587,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+75588,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size))));
    bufp->fullBit(oldp+75589,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))));
    bufp->fullBit(oldp+75590,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))))));
    bufp->fullBit(oldp+75591,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))));
    bufp->fullBit(oldp+75592,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))))));
    bufp->fullBit(oldp+75593,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))));
    bufp->fullBit(oldp+75594,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))))));
    bufp->fullBit(oldp+75595,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))));
    bufp->fullBit(oldp+75596,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))))));
    bufp->fullCData(oldp+75597,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                    << 7U) 
                                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))) 
                                              << 7U))) 
                                 | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                       << 6U) 
                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                          << 5U) 
                                                         & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                     << 4U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                       | ((~ 
                                                           ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                                                      | ((1U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                                                         | ((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h0cc739ed__0)))))))))))))),8);
    bufp->fullBit(oldp+75598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq));
    bufp->fullCData(oldp+75600,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory
                                [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value]),8);
    bufp->fullSData(oldp+75601,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__shifter),9);
    bufp->fullBit(oldp+75602,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full)))));
    bufp->fullCData(oldp+75603,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                 >> 0x18U)),8);
    bufp->fullCData(oldp+75604,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__deq_ptr_value),8);
    bufp->fullBit(oldp+75605,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ptr_match));
    bufp->fullBit(oldp+75606,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full));
    bufp->fullBit(oldp+75607,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq));
    bufp->fullBit(oldp+75608,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_deq));
    bufp->fullBit(oldp+75609,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))));
    bufp->fullBit(oldp+75610,(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75611,(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75612,(vlSelf->TestDriver__DOT__testHarness__DOT__harnessBinderReset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+75613,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_opcode),3);
    bufp->fullCData(oldp+75614,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_size),2);
    bufp->fullBit(oldp+75615,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_source));
    bufp->fullIData(oldp+75616,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_data),32);
    bufp->fullCData(oldp+75617,((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x34U)))),3);
    bufp->fullCData(oldp+75618,((7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x31U)))),3);
    bufp->fullCData(oldp+75619,((3U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 0x2fU)))),2);
    bufp->fullBit(oldp+75620,((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 0x2eU)))));
    bufp->fullSData(oldp+75621,((0x1ffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 0x25U)))),9);
    bufp->fullCData(oldp+75622,((0xfU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 0x21U)))),4);
    bufp->fullIData(oldp+75623,((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                         >> 1U))),32);
    bufp->fullBit(oldp+75624,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))));
    bufp->fullCData(oldp+75625,((4U == (7U & (IData)(
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 0x34U))))),3);
    bufp->fullBit(oldp+75626,((0x17U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75627,((0x16U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullCData(oldp+75628,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs),3);
    bufp->fullBit(oldp+75629,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hamaskFull_0));
    bufp->fullBit(oldp+75630,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hamaskFull_1));
    bufp->fullBit(oldp+75631,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hamaskFull_2));
    bufp->fullBit(oldp+75632,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_0));
    bufp->fullBit(oldp+75633,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_1));
    bufp->fullBit(oldp+75634,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__hrmaskReg_2));
    bufp->fullBit(oldp+75635,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allnonexistent));
    bufp->fullBit(oldp+75636,((4U == (7U & (IData)(
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 0x34U))))));
    bufp->fullBit(oldp+75637,((4U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75638,((5U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75639,((6U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75640,((7U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75641,((8U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75642,((9U == (0x3fU & (IData)(
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                       >> 0x27U))))));
    bufp->fullBit(oldp+75643,((0xaU == (0x3fU & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                         >> 0x27U))))));
    bufp->fullBit(oldp+75644,((0xbU == (0x3fU & (IData)(
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                         >> 0x27U))))));
    bufp->fullBit(oldp+75645,((0x20U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75646,((0x21U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75647,((0x22U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75648,((0x23U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75649,((0x24U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75650,((0x25U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75651,((0x26U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75652,((0x27U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75653,((0x28U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75654,((0x29U == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75655,((0x2aU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75656,((0x2bU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75657,((0x2cU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75658,((0x2dU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75659,((0x2eU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75660,((0x2fU == (0x3fU & (IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                          >> 0x27U))))));
    bufp->fullBit(oldp+75661,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume));
    bufp->fullBit(oldp+75662,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract));
    bufp->fullBit(oldp+75663,((1U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x30U)) 
                                     | (IData)((0x800000000000ULL 
                                                == 
                                                (0x804000000000ULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))))));
    bufp->fullBit(oldp+75664,((1U & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                              >> 0x30U)) 
                                     | (IData)((0x804000000000ULL 
                                                == 
                                                (0x804000000000ULL 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))))));
    bufp->fullCData(oldp+75665,(((8U & ((((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 0x30U)) 
                                          | (IData)(
                                                    (0x804000000000ULL 
                                                     == 
                                                     (0x804000000000ULL 
                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                         | (IData)(
                                                   (0x6000000000ULL 
                                                    == 
                                                    (0x6000000000ULL 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                  >> 0x30U)) 
                                                         | (IData)(
                                                                   (0x804000000000ULL 
                                                                    == 
                                                                    (0x804000000000ULL 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                                        | (IData)(
                                                                  (0x4000000000ULL 
                                                                   == 
                                                                   (0x6000000000ULL 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                     >> 0x30U)) 
                                                            | (IData)(
                                                                      (0x800000000000ULL 
                                                                       == 
                                                                       (0x804000000000ULL 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                                           | (IData)(
                                                                     (0x2000000000ULL 
                                                                      == 
                                                                      (0x6000000000ULL 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (((IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                                      >> 0x30U)) 
                                                             | (IData)(
                                                                       (0x800000000000ULL 
                                                                        == 
                                                                        (0x804000000000ULL 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)))) 
                                                            | (IData)(
                                                                      (0ULL 
                                                                       == 
                                                                       (0x6000000000ULL 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg))))))))),4);
    bufp->fullQData(oldp+75666,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),55);
    bufp->fullQData(oldp+75668,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_opcode)) 
                                  << 0x28U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_size)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_source)) 
                                                   << 0x23U) 
                                                  | ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__mem_0_data)) 
                                                     << 1U))))),43);
    bufp->fullBit(oldp+75670,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75671,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75672,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75673,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75674,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75675,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75676,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75677,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75678,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullIData(oldp+75679,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT___dmInner_auto_dmi_in_d_bits_data),32);
    bufp->fullBit(oldp+75680,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_43));
    bufp->fullBit(oldp+75681,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_11));
    bufp->fullBit(oldp+75682,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_66));
    bufp->fullBit(oldp+75683,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_105));
    bufp->fullBit(oldp+75684,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_121));
    bufp->fullBit(oldp+75685,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_47));
    bufp->fullBit(oldp+75686,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_23));
    bufp->fullBit(oldp+75687,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_125));
    bufp->fullBit(oldp+75688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_113));
    bufp->fullBit(oldp+75689,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_58));
    bufp->fullBit(oldp+75690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_54));
    bufp->fullBit(oldp+75691,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_130));
    bufp->fullBit(oldp+75692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_27));
    bufp->fullBit(oldp+75693,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_94));
    bufp->fullBit(oldp+75694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_62));
    bufp->fullBit(oldp+75695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_90));
    bufp->fullBit(oldp+75696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_50));
    bufp->fullBit(oldp+75697,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_117));
    bufp->fullBit(oldp+75698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_7));
    bufp->fullBit(oldp+75699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_19));
    bufp->fullBit(oldp+75700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_35));
    bufp->fullBit(oldp+75701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_109));
    bufp->fullBit(oldp+75702,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_15));
    bufp->fullBit(oldp+75703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_3));
    bufp->fullBit(oldp+75704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_woready_39));
    bufp->fullBit(oldp+75705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_43));
    bufp->fullBit(oldp+75706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11));
    bufp->fullBit(oldp+75707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_66));
    bufp->fullBit(oldp+75708,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_105));
    bufp->fullBit(oldp+75709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_121));
    bufp->fullBit(oldp+75710,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_47));
    bufp->fullBit(oldp+75711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23));
    bufp->fullBit(oldp+75712,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_125));
    bufp->fullBit(oldp+75713,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_113));
    bufp->fullBit(oldp+75714,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_58));
    bufp->fullBit(oldp+75715,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54));
    bufp->fullBit(oldp+75716,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_130));
    bufp->fullBit(oldp+75717,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27));
    bufp->fullBit(oldp+75718,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_94));
    bufp->fullBit(oldp+75719,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_62));
    bufp->fullBit(oldp+75720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_90));
    bufp->fullBit(oldp+75721,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_117));
    bufp->fullBit(oldp+75722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7));
    bufp->fullBit(oldp+75723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19));
    bufp->fullBit(oldp+75724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35));
    bufp->fullBit(oldp+75725,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_109));
    bufp->fullBit(oldp+75726,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15));
    bufp->fullBit(oldp+75727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3));
    bufp->fullBit(oldp+75728,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_39));
    bufp->fullCData(oldp+75729,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumeAcks),3);
    bufp->fullBit(oldp+75730,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__resumereq));
    bufp->fullBit(oldp+75731,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4));
    bufp->fullBit(oldp+75732,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_5));
    bufp->fullBit(oldp+75733,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_6));
    bufp->fullBit(oldp+75734,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_7));
    bufp->fullBit(oldp+75735,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_24));
    bufp->fullBit(oldp+75736,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_25));
    bufp->fullBit(oldp+75737,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_26));
    bufp->fullBit(oldp+75738,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_27));
    bufp->fullBit(oldp+75739,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56));
    bufp->fullBit(oldp+75740,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_57));
    bufp->fullBit(oldp+75741,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_58));
    bufp->fullBit(oldp+75742,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_59));
    bufp->fullBit(oldp+75743,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_8));
    bufp->fullBit(oldp+75744,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_9));
    bufp->fullBit(oldp+75745,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_10));
    bufp->fullBit(oldp+75746,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_11));
    bufp->fullBit(oldp+75747,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_20));
    bufp->fullBit(oldp+75748,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_21));
    bufp->fullBit(oldp+75749,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_22));
    bufp->fullBit(oldp+75750,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_23));
    bufp->fullBit(oldp+75751,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36));
    bufp->fullBit(oldp+75752,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_37));
    bufp->fullBit(oldp+75753,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_38));
    bufp->fullBit(oldp+75754,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_39));
    bufp->fullBit(oldp+75755,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12));
    bufp->fullBit(oldp+75756,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_13));
    bufp->fullBit(oldp+75757,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_14));
    bufp->fullBit(oldp+75758,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_15));
    bufp->fullBit(oldp+75759,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_16));
    bufp->fullBit(oldp+75760,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_17));
    bufp->fullBit(oldp+75761,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_18));
    bufp->fullBit(oldp+75762,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_19));
    bufp->fullBit(oldp+75763,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0));
    bufp->fullBit(oldp+75764,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_1));
    bufp->fullBit(oldp+75765,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_2));
    bufp->fullBit(oldp+75766,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_3));
    bufp->fullBit(oldp+75767,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60));
    bufp->fullBit(oldp+75768,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_61));
    bufp->fullBit(oldp+75769,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_62));
    bufp->fullBit(oldp+75770,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_63));
    bufp->fullBit(oldp+75771,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40));
    bufp->fullBit(oldp+75772,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_41));
    bufp->fullBit(oldp+75773,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_42));
    bufp->fullBit(oldp+75774,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_43));
    bufp->fullBit(oldp+75775,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecdataWrEnMaybe));
    bufp->fullBit(oldp+75776,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexecprogbufWrEnMaybe));
    bufp->fullBit(oldp+75777,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20));
    bufp->fullBit(oldp+75778,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_21));
    bufp->fullBit(oldp+75779,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_22));
    bufp->fullBit(oldp+75780,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_23));
    bufp->fullBit(oldp+75781,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24));
    bufp->fullBit(oldp+75782,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_25));
    bufp->fullBit(oldp+75783,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_26));
    bufp->fullBit(oldp+75784,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_27));
    bufp->fullBit(oldp+75785,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4));
    bufp->fullBit(oldp+75786,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_5));
    bufp->fullBit(oldp+75787,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_6));
    bufp->fullBit(oldp+75788,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_7));
    bufp->fullBit(oldp+75789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52));
    bufp->fullBit(oldp+75790,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_53));
    bufp->fullBit(oldp+75791,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_54));
    bufp->fullBit(oldp+75792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_55));
    bufp->fullBit(oldp+75793,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0));
    bufp->fullBit(oldp+75794,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_1));
    bufp->fullBit(oldp+75795,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_2));
    bufp->fullBit(oldp+75796,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_3));
    bufp->fullBit(oldp+75797,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8));
    bufp->fullBit(oldp+75798,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_9));
    bufp->fullBit(oldp+75799,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_10));
    bufp->fullBit(oldp+75800,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_11));
    bufp->fullBit(oldp+75801,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnMaybe));
    bufp->fullBit(oldp+75802,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48));
    bufp->fullBit(oldp+75803,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_49));
    bufp->fullBit(oldp+75804,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_50));
    bufp->fullBit(oldp+75805,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_51));
    bufp->fullBit(oldp+75806,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_12));
    bufp->fullBit(oldp+75807,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_13));
    bufp->fullBit(oldp+75808,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_14));
    bufp->fullBit(oldp+75809,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_15));
    bufp->fullBit(oldp+75810,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28));
    bufp->fullBit(oldp+75811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_29));
    bufp->fullBit(oldp+75812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_30));
    bufp->fullBit(oldp+75813,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_31));
    bufp->fullBit(oldp+75814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_28));
    bufp->fullBit(oldp+75815,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_29));
    bufp->fullBit(oldp+75816,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_30));
    bufp->fullBit(oldp+75817,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_31));
    bufp->fullBit(oldp+75818,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44));
    bufp->fullBit(oldp+75819,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_45));
    bufp->fullBit(oldp+75820,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_46));
    bufp->fullBit(oldp+75821,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_47));
    bufp->fullBit(oldp+75822,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32));
    bufp->fullBit(oldp+75823,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_33));
    bufp->fullBit(oldp+75824,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_34));
    bufp->fullBit(oldp+75825,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_35));
    bufp->fullBit(oldp+75826,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEnMaybe));
    bufp->fullBit(oldp+75827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16));
    bufp->fullBit(oldp+75828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_17));
    bufp->fullBit(oldp+75829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_18));
    bufp->fullBit(oldp+75830,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_19));
    bufp->fullBit(oldp+75831,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0));
    bufp->fullBit(oldp+75832,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4));
    bufp->fullBit(oldp+75833,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_8));
    bufp->fullBit(oldp+75834,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_12));
    bufp->fullBit(oldp+75835,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_16));
    bufp->fullBit(oldp+75836,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_20));
    bufp->fullBit(oldp+75837,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_24));
    bufp->fullBit(oldp+75838,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_28));
    bufp->fullBit(oldp+75839,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0));
    bufp->fullBit(oldp+75840,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4));
    bufp->fullBit(oldp+75841,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8));
    bufp->fullBit(oldp+75842,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12));
    bufp->fullBit(oldp+75843,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16));
    bufp->fullBit(oldp+75844,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20));
    bufp->fullBit(oldp+75845,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24));
    bufp->fullBit(oldp+75846,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28));
    bufp->fullBit(oldp+75847,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32));
    bufp->fullBit(oldp+75848,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36));
    bufp->fullBit(oldp+75849,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40));
    bufp->fullBit(oldp+75850,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44));
    bufp->fullBit(oldp+75851,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48));
    bufp->fullBit(oldp+75852,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52));
    bufp->fullBit(oldp+75853,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56));
    bufp->fullBit(oldp+75854,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60));
    bufp->fullBit(oldp+75855,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__autoexec));
    bufp->fullBit(oldp+75856,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn));
    bufp->fullBit(oldp+75857,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75858,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive));
    bufp->fullBit(oldp+75859,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray));
    bufp->fullBit(oldp+75860,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray));
    bufp->fullBit(oldp+75861,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_gray));
    bufp->fullBit(oldp+75862,((1U & (~ (IData)(vlSelf->__VdfgTmp_h40f73a86__0)))));
    bufp->fullBit(oldp+75863,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75864,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75865,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75866,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75867,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75868,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75869,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75870,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75871,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75872,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75873,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75874,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75875,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75876,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75877,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75878,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75879,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75880,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75881,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75882,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75883,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75884,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75885,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75886,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+75887,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+75888,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+75889,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+75890,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+75891,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__monitor__DOT__b_first_done));
    bufp->fullCData(oldp+75892,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__index),3);
    bufp->fullCData(oldp+75893,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__index),3);
    bufp->fullBit(oldp+75894,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_io_mem_resp_valid));
    bufp->fullBit(oldp+75895,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_cmd_valid_output));
    bufp->fullBit(oldp+75896,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT__do_enq));
    bufp->fullBit(oldp+75897,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_mem_wb));
    bufp->fullBit(oldp+75898,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)))));
    bufp->fullBit(oldp+75899,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_resp_ready));
    bufp->fullBit(oldp+75900,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid));
    bufp->fullBit(oldp+75901,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_bht_update_valid));
    bufp->fullBit(oldp+75902,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_imem_flush_icache));
    bufp->fullBit(oldp+75903,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_req_ready));
    bufp->fullBit(oldp+75904,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_s2_nack));
    bufp->fullBit(oldp+75905,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_valid));
    bufp->fullBit(oldp+75906,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_dmem_resp_val));
    bufp->fullBit(oldp+75907,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid));
    bufp->fullBit(oldp+75908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killx));
    bufp->fullBit(oldp+75909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common));
    bufp->fullBit(oldp+75910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb));
    bufp->fullBit(oldp+75911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss));
    bufp->fullBit(oldp+75912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_ex));
    bufp->fullBit(oldp+75913,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard));
    bufp->fullBit(oldp+75914,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb_common));
    bufp->fullBit(oldp+75915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb));
    bufp->fullBit(oldp+75916,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_valid));
    bufp->fullBit(oldp+75917,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_replay));
    bufp->fullCData(oldp+75918,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr),5);
    bufp->fullBit(oldp+75919,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen));
    bufp->fullBit(oldp+75920,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid));
    bufp->fullBit(oldp+75921,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen));
    bufp->fullBit(oldp+75922,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen))));
    bufp->fullCData(oldp+75923,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr),5);
    bufp->fullQData(oldp+75924,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata),64);
    bufp->fullQData(oldp+75926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0),64);
    bufp->fullQData(oldp+75928,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_1),64);
    bufp->fullBit(oldp+75930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld));
    bufp->fullBit(oldp+75931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd));
    bufp->fullBit(oldp+75932,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen))));
    bufp->fullBit(oldp+75933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killm));
    bufp->fullCData(oldp+75934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall),7);
    bufp->fullBit(oldp+75935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN));
    bufp->fullBit(oldp+75936,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld)))));
    bufp->fullCData(oldp+75937,((0x1fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr)))),5);
    bufp->fullBit(oldp+75938,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en));
    bufp->fullBit(oldp+75939,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_1_req_ready_output));
    bufp->fullBit(oldp+75940,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_s2_nack));
    bufp->fullBit(oldp+75941,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__s0_req_fire));
    bufp->fullBit(oldp+75942,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+75943,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+75944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+75945,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+75946,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+75947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+75948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready));
    bufp->fullBit(oldp+75949,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid));
    bufp->fullBit(oldp+75950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid));
    bufp->fullBit(oldp+75951,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_3)))));
    bufp->fullBit(oldp+75952,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_s1_kill));
    bufp->fullBit(oldp+75953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_nack_output));
    bufp->fullBit(oldp+75954,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_valid));
    bufp->fullBit(oldp+75955,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked));
    bufp->fullBit(oldp+75956,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_nack));
    bufp->fullBit(oldp+75957,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack_miss));
    bufp->fullBit(oldp+75958,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack));
    bufp->fullBit(oldp+75959,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_nack)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_req_valid_T_2))));
    bufp->fullBit(oldp+75960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid));
    bufp->fullBit(oldp+75961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_req_valid_T_2));
    bufp->fullBit(oldp+75962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__dtlb__io_sfence_valid));
    bufp->fullBit(oldp+75963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__invalidate_refill));
    bufp->fullBit(oldp+75964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__lfsr_prng__io_increment));
    bufp->fullBit(oldp+75965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_req_ready_output));
    bufp->fullBit(oldp+75966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN));
    bufp->fullBit(oldp+75967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__mshrs__io_mem_grant_valid));
    bufp->fullBit(oldp+75968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready));
    bufp->fullBit(oldp+75969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__sdq_enq));
    bufp->fullBit(oldp+75970,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__free_sdq));
    bufp->fullBit(oldp+75971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready));
    bufp->fullBit(oldp+75972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_req_sec_val));
    bufp->fullBit(oldp+75973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+75974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_mem_grant_valid));
    bufp->fullBit(oldp+75975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_done));
    bufp->fullBit(oldp+75976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__sec_rdy));
    bufp->fullBit(oldp+75977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+75978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+75979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+75980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+75981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_1__io_mem_grant_valid));
    bufp->fullBit(oldp+75982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_done));
    bufp->fullBit(oldp+75983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__sec_rdy));
    bufp->fullBit(oldp+75984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+75985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+75986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+75987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+75988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_10__io_mem_grant_valid));
    bufp->fullBit(oldp+75989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__refill_done));
    bufp->fullBit(oldp+75990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__sec_rdy));
    bufp->fullBit(oldp+75991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+75992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+75993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+75994,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+75995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_11__io_mem_grant_valid));
    bufp->fullBit(oldp+75996,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__refill_done));
    bufp->fullBit(oldp+75997,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__sec_rdy));
    bufp->fullBit(oldp+75998,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+75999,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76000,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76001,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_12__io_mem_grant_valid));
    bufp->fullBit(oldp+76003,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__refill_done));
    bufp->fullBit(oldp+76004,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__sec_rdy));
    bufp->fullBit(oldp+76005,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76007,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76008,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_13__io_mem_grant_valid));
    bufp->fullBit(oldp+76010,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__refill_done));
    bufp->fullBit(oldp+76011,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__sec_rdy));
    bufp->fullBit(oldp+76012,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76014,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76015,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76016,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_14__io_mem_grant_valid));
    bufp->fullBit(oldp+76017,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__refill_done));
    bufp->fullBit(oldp+76018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__sec_rdy));
    bufp->fullBit(oldp+76019,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76020,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76022,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76023,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_15__io_mem_grant_valid));
    bufp->fullBit(oldp+76024,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__refill_done));
    bufp->fullBit(oldp+76025,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__sec_rdy));
    bufp->fullBit(oldp+76026,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76027,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76028,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76029,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76030,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_2__io_mem_grant_valid));
    bufp->fullBit(oldp+76031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__refill_done));
    bufp->fullBit(oldp+76032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__sec_rdy));
    bufp->fullBit(oldp+76033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76034,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76035,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_mem_grant_valid));
    bufp->fullBit(oldp+76038,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__refill_done));
    bufp->fullBit(oldp+76039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__sec_rdy));
    bufp->fullBit(oldp+76040,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76041,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76042,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76043,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_4__io_mem_grant_valid));
    bufp->fullBit(oldp+76045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__refill_done));
    bufp->fullBit(oldp+76046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__sec_rdy));
    bufp->fullBit(oldp+76047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_5__io_mem_grant_valid));
    bufp->fullBit(oldp+76052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__refill_done));
    bufp->fullBit(oldp+76053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__sec_rdy));
    bufp->fullBit(oldp+76054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_6__io_mem_grant_valid));
    bufp->fullBit(oldp+76059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__refill_done));
    bufp->fullBit(oldp+76060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__sec_rdy));
    bufp->fullBit(oldp+76061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_7__io_mem_grant_valid));
    bufp->fullBit(oldp+76066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__refill_done));
    bufp->fullBit(oldp+76067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__sec_rdy));
    bufp->fullBit(oldp+76068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_8__io_mem_grant_valid));
    bufp->fullBit(oldp+76073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__refill_done));
    bufp->fullBit(oldp+76074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__sec_rdy));
    bufp->fullBit(oldp+76075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_9__io_mem_grant_valid));
    bufp->fullBit(oldp+76080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__refill_done));
    bufp->fullBit(oldp+76081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__sec_rdy));
    bufp->fullBit(oldp+76082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76083,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__wb__io_release_ready));
    bufp->fullBit(oldp+76086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_1_d_valid));
    bufp->fullBit(oldp+76087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_redirect));
    bufp->fullBit(oldp+76088,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s0_valid));
    bufp->fullBit(oldp+76089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_btb_update_valid));
    bufp->fullQData(oldp+76090,((0x7fffffffffULL & 
                                 VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U))),39);
    bufp->fullBit(oldp+76092,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0) 
                               & (IData)((0x1fffffffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                             >> 2U))))));
    bufp->fullBit(oldp+76093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1_MPORT_2_en));
    bufp->fullBit(oldp+76094,(((~ (IData)((0x1fffffffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                              >> 2U)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0))));
    bufp->fullBit(oldp+76095,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid))));
    bufp->fullBit(oldp+76096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid));
    bufp->fullBit(oldp+76097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_one_beat));
    bufp->fullBit(oldp+76098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en));
    bufp->fullSData(oldp+76099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr),9);
    bufp->fullBit(oldp+76100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_en));
    bufp->fullBit(oldp+76101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_1__RW0_en));
    bufp->fullBit(oldp+76103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___refill_fire_T));
    bufp->fullCData(oldp+76105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_addr),6);
    bufp->fullBit(oldp+76106,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_en));
    bufp->fullBit(oldp+76107,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__do_deq));
    bufp->fullBit(oldp+76109,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__latch));
    bufp->fullCData(oldp+76110,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+76111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_done));
    bufp->fullBit(oldp+76112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set));
    bufp->fullBit(oldp+76113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_wo_ready));
    bufp->fullBit(oldp+76114,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_1));
    bufp->fullBit(oldp+76115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+76130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+76131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__monitor__DOT__b_first_done));
    bufp->fullCData(oldp+76132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__index),3);
    bufp->fullCData(oldp+76133,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__index),3);
    bufp->fullBit(oldp+76134,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76135,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76136,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76137,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_resp_valid));
    bufp->fullBit(oldp+76139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_valid));
    bufp->fullBit(oldp+76140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_3_resp_valid));
    bufp->fullBit(oldp+76141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_4_resp_valid));
    bufp->fullBit(oldp+76142,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_cmd_valid_output));
    bufp->fullBit(oldp+76143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT__do_enq));
    bufp->fullBit(oldp+76144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_mem_wb));
    bufp->fullBit(oldp+76145,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)))));
    bufp->fullBit(oldp+76146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_imem_resp_ready));
    bufp->fullBit(oldp+76147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid));
    bufp->fullBit(oldp+76148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_imem_bht_update_valid));
    bufp->fullBit(oldp+76149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_imem_flush_icache));
    bufp->fullBit(oldp+76150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_5_req_ready));
    bufp->fullBit(oldp+76151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_5_s2_nack));
    bufp->fullBit(oldp+76152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_valid_mem));
    bufp->fullBit(oldp+76153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_dmem_resp_val));
    bufp->fullBit(oldp+76154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid));
    bufp->fullBit(oldp+76155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killx));
    bufp->fullBit(oldp+76156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common));
    bufp->fullBit(oldp+76157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_resp_ready_output));
    bufp->fullBit(oldp+76158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb));
    bufp->fullBit(oldp+76159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss));
    bufp->fullBit(oldp+76160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_ex));
    bufp->fullBit(oldp+76161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard));
    bufp->fullBit(oldp+76162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb_common));
    bufp->fullBit(oldp+76163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb));
    bufp->fullBit(oldp+76164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_valid));
    bufp->fullBit(oldp+76165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_replay));
    bufp->fullCData(oldp+76166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr),5);
    bufp->fullBit(oldp+76167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen));
    bufp->fullBit(oldp+76168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid));
    bufp->fullBit(oldp+76169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen));
    bufp->fullBit(oldp+76170,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen))));
    bufp->fullCData(oldp+76171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr),5);
    bufp->fullQData(oldp+76172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata),64);
    bufp->fullQData(oldp+76174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0),64);
    bufp->fullQData(oldp+76176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_1),64);
    bufp->fullBit(oldp+76178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld));
    bufp->fullBit(oldp+76179,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd));
    bufp->fullBit(oldp+76180,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen))));
    bufp->fullBit(oldp+76181,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killm));
    bufp->fullCData(oldp+76182,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall),7);
    bufp->fullBit(oldp+76183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN));
    bufp->fullBit(oldp+76184,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld)))));
    bufp->fullCData(oldp+76185,((0x1fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr)))),5);
    bufp->fullBit(oldp+76186,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en));
    bufp->fullBit(oldp+76187,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_1_req_ready_output));
    bufp->fullBit(oldp+76188,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid));
    bufp->fullBit(oldp+76189,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_s2_nack));
    bufp->fullBit(oldp+76190,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__s0_req_fire));
    bufp->fullBit(oldp+76191,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76192,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76193,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76194,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76195,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76197,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76198,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_2_req_ready_output));
    bufp->fullBit(oldp+76200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid));
    bufp->fullBit(oldp+76201,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_s2_nack));
    bufp->fullBit(oldp+76202,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__s0_req_fire));
    bufp->fullBit(oldp+76203,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76205,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76207,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76209,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76210,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76211,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_3_req_ready_output));
    bufp->fullBit(oldp+76212,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid));
    bufp->fullBit(oldp+76213,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_3_s2_nack));
    bufp->fullBit(oldp+76214,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__s0_req_fire));
    bufp->fullBit(oldp+76215,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76217,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76218,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76219,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76220,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76221,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76222,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76223,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_4_req_ready_output));
    bufp->fullBit(oldp+76224,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcIF_3_io_cache_req_valid));
    bufp->fullBit(oldp+76225,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_4_s2_nack));
    bufp->fullBit(oldp+76226,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__s0_req_fire));
    bufp->fullBit(oldp+76227,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76228,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76229,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76231,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76233,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcIF_3__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready));
    bufp->fullBit(oldp+76236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid));
    bufp->fullBit(oldp+76237,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid));
    bufp->fullBit(oldp+76238,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_3)))));
    bufp->fullBit(oldp+76239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_valid));
    bufp->fullQData(oldp+76240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr),40);
    bufp->fullBit(oldp+76242,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_phys));
    bufp->fullBit(oldp+76243,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_nack_output));
    bufp->fullBit(oldp+76244,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_valid));
    bufp->fullBit(oldp+76245,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked));
    bufp->fullBit(oldp+76246,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_nack));
    bufp->fullBit(oldp+76247,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack_miss));
    bufp->fullBit(oldp+76248,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack));
    bufp->fullBit(oldp+76249,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_valid));
    bufp->fullSData(oldp+76250,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_bits_addr),12);
    bufp->fullBit(oldp+76251,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid));
    bufp->fullSData(oldp+76252,((0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_bits_addr) 
                                           >> 3U))),9);
    bufp->fullBit(oldp+76253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_0_0_0__R0_en));
    bufp->fullBit(oldp+76254,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_1_0_0__R0_en));
    bufp->fullBit(oldp+76255,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_2_0_0__R0_en));
    bufp->fullBit(oldp+76256,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_3_0_0__R0_en));
    bufp->fullBit(oldp+76257,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__lfsr_prng__io_increment));
    bufp->fullBit(oldp+76258,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___metaReadArb_io_out_valid));
    bufp->fullCData(oldp+76259,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___metaReadArb_io_out_bits_idx),6);
    bufp->fullBit(oldp+76260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT____Vcellinp__tag_array__R0_en));
    bufp->fullCData(oldp+76261,((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                  >> 6U)))),6);
    bufp->fullBit(oldp+76262,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_req_ready_output));
    bufp->fullBit(oldp+76263,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN));
    bufp->fullBit(oldp+76264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__mshrs__io_mem_grant_valid));
    bufp->fullBit(oldp+76265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready));
    bufp->fullBit(oldp+76266,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__sdq_enq));
    bufp->fullBit(oldp+76267,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__free_sdq));
    bufp->fullBit(oldp+76268,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready));
    bufp->fullBit(oldp+76269,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val));
    bufp->fullBit(oldp+76270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76271,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_mem_grant_valid));
    bufp->fullBit(oldp+76272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_done));
    bufp->fullBit(oldp+76273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__sec_rdy));
    bufp->fullBit(oldp+76274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76276,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76277,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76278,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_1__io_mem_grant_valid));
    bufp->fullBit(oldp+76279,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_done));
    bufp->fullBit(oldp+76280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__sec_rdy));
    bufp->fullBit(oldp+76281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76283,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76284,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76285,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_10__io_mem_grant_valid));
    bufp->fullBit(oldp+76286,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__refill_done));
    bufp->fullBit(oldp+76287,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__sec_rdy));
    bufp->fullBit(oldp+76288,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76289,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76290,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76291,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76292,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_11__io_mem_grant_valid));
    bufp->fullBit(oldp+76293,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__refill_done));
    bufp->fullBit(oldp+76294,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__sec_rdy));
    bufp->fullBit(oldp+76295,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76297,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76298,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76299,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_12__io_mem_grant_valid));
    bufp->fullBit(oldp+76300,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__refill_done));
    bufp->fullBit(oldp+76301,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__sec_rdy));
    bufp->fullBit(oldp+76302,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76303,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76306,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_13__io_mem_grant_valid));
    bufp->fullBit(oldp+76307,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__refill_done));
    bufp->fullBit(oldp+76308,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__sec_rdy));
    bufp->fullBit(oldp+76309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_14__io_mem_grant_valid));
    bufp->fullBit(oldp+76314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__refill_done));
    bufp->fullBit(oldp+76315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__sec_rdy));
    bufp->fullBit(oldp+76316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_15__io_mem_grant_valid));
    bufp->fullBit(oldp+76321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__refill_done));
    bufp->fullBit(oldp+76322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__sec_rdy));
    bufp->fullBit(oldp+76323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_2__io_mem_grant_valid));
    bufp->fullBit(oldp+76328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__refill_done));
    bufp->fullBit(oldp+76329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__sec_rdy));
    bufp->fullBit(oldp+76330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_mem_grant_valid));
    bufp->fullBit(oldp+76335,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__refill_done));
    bufp->fullBit(oldp+76336,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__sec_rdy));
    bufp->fullBit(oldp+76337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76338,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76339,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76340,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_4__io_mem_grant_valid));
    bufp->fullBit(oldp+76342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__refill_done));
    bufp->fullBit(oldp+76343,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__sec_rdy));
    bufp->fullBit(oldp+76344,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76347,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_5__io_mem_grant_valid));
    bufp->fullBit(oldp+76349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__refill_done));
    bufp->fullBit(oldp+76350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__sec_rdy));
    bufp->fullBit(oldp+76351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76352,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_6__io_mem_grant_valid));
    bufp->fullBit(oldp+76356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__refill_done));
    bufp->fullBit(oldp+76357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__sec_rdy));
    bufp->fullBit(oldp+76358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_7__io_mem_grant_valid));
    bufp->fullBit(oldp+76363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__refill_done));
    bufp->fullBit(oldp+76364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__sec_rdy));
    bufp->fullBit(oldp+76365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_8__io_mem_grant_valid));
    bufp->fullBit(oldp+76370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__refill_done));
    bufp->fullBit(oldp+76371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__sec_rdy));
    bufp->fullBit(oldp+76372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76376,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_9__io_mem_grant_valid));
    bufp->fullBit(oldp+76377,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__refill_done));
    bufp->fullBit(oldp+76378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__sec_rdy));
    bufp->fullBit(oldp+76379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_deq));
    bufp->fullSData(oldp+76382,((0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr))),12);
    bufp->fullBit(oldp+76383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__wb__io_release_ready));
    bufp->fullBit(oldp+76384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_1_d_valid));
    bufp->fullBit(oldp+76385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_redirect));
    bufp->fullBit(oldp+76386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s0_valid));
    bufp->fullBit(oldp+76387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_btb_update_valid));
    bufp->fullQData(oldp+76388,((0x7fffffffffULL & 
                                 VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U))),39);
    bufp->fullBit(oldp+76390,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0) 
                               & (IData)((0x1fffffffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                             >> 2U))))));
    bufp->fullBit(oldp+76391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1_MPORT_2_en));
    bufp->fullBit(oldp+76392,(((~ (IData)((0x1fffffffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                              >> 2U)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0))));
    bufp->fullBit(oldp+76393,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid))));
    bufp->fullBit(oldp+76394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid));
    bufp->fullBit(oldp+76395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_one_beat));
    bufp->fullBit(oldp+76396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en));
    bufp->fullSData(oldp+76397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr),9);
    bufp->fullBit(oldp+76398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_en));
    bufp->fullBit(oldp+76399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_1__RW0_en));
    bufp->fullBit(oldp+76401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76402,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___refill_fire_T));
    bufp->fullCData(oldp+76403,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_addr),6);
    bufp->fullBit(oldp+76404,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_en));
    bufp->fullBit(oldp+76405,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76406,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__mem_acc_fifo_row__DOT__do_deq));
    bufp->fullBit(oldp+76407,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__do_deq));
    bufp->fullBit(oldp+76408,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__do_deq));
    bufp->fullBit(oldp+76409,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__do_deq));
    bufp->fullBit(oldp+76410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_3_q__DOT__do_deq));
    bufp->fullBit(oldp+76411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__latch));
    bufp->fullCData(oldp+76412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+76413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_done));
    bufp->fullBit(oldp+76414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set));
    bufp->fullBit(oldp+76415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_wo_ready));
    bufp->fullBit(oldp+76416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_1));
    bufp->fullBit(oldp+76417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76425,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+76432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+76433,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__b_first_done));
    bufp->fullCData(oldp+76434,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__index),3);
    bufp->fullCData(oldp+76435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__index),3);
    bufp->fullBit(oldp+76436,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76437,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76438,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_req_ready) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___req_arb_io_in_1_ready))));
    bufp->fullBit(oldp+76439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_resp_valid));
    bufp->fullBit(oldp+76440,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_resp_valid));
    bufp->fullBit(oldp+76441,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_3_resp_valid));
    bufp->fullBit(oldp+76442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_cmd_valid_output));
    bufp->fullBit(oldp+76443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT__do_enq));
    bufp->fullBit(oldp+76444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_mem_wb));
    bufp->fullBit(oldp+76445,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb)))));
    bufp->fullBit(oldp+76446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_resp_ready));
    bufp->fullBit(oldp+76447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_btb_update_valid));
    bufp->fullBit(oldp+76448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_bht_update_valid));
    bufp->fullBit(oldp+76449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_imem_flush_icache));
    bufp->fullBit(oldp+76450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_4_req_ready));
    bufp->fullBit(oldp+76451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_4_s2_nack));
    bufp->fullBit(oldp+76452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_4_resp_valid));
    bufp->fullBit(oldp+76453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_dmem_resp_val));
    bufp->fullBit(oldp+76454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___core_io_fpu_valid));
    bufp->fullBit(oldp+76455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killx));
    bufp->fullBit(oldp+76456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__killm_common));
    bufp->fullBit(oldp+76457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___io_rocc_resp_ready_output));
    bufp->fullBit(oldp+76458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__take_pc_wb));
    bufp->fullBit(oldp+76459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_dcache_miss));
    bufp->fullBit(oldp+76460,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_ex));
    bufp->fullBit(oldp+76461,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard));
    bufp->fullBit(oldp+76462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb_common));
    bufp->fullBit(oldp+76463,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__replay_wb));
    bufp->fullBit(oldp+76464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_valid));
    bufp->fullBit(oldp+76465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__dmem_resp_replay));
    bufp->fullCData(oldp+76466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_waddr),5);
    bufp->fullBit(oldp+76467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen));
    bufp->fullBit(oldp+76468,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_valid));
    bufp->fullBit(oldp+76469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen));
    bufp->fullBit(oldp+76470,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ll_wen))));
    bufp->fullCData(oldp+76471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr),5);
    bufp->fullQData(oldp+76472,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__coreMonitorBundle_wrdata),64);
    bufp->fullQData(oldp+76474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_0),64);
    bufp->fullQData(oldp+76476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__id_rs_1),64);
    bufp->fullBit(oldp+76478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld));
    bufp->fullBit(oldp+76479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killd));
    bufp->fullBit(oldp+76480,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_set_sboard)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__wb_wen))));
    bufp->fullBit(oldp+76481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_killm));
    bufp->fullCData(oldp+76482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall),7);
    bufp->fullBit(oldp+76483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT___GEN));
    bufp->fullBit(oldp+76484,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__ctrl_stalld)))));
    bufp->fullCData(oldp+76485,((0x1fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__rf_waddr)))),5);
    bufp->fullBit(oldp+76486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT____Vcellinp__rf_ext__W0_en));
    bufp->fullBit(oldp+76487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_1_req_ready_output));
    bufp->fullBit(oldp+76488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_io_cache_req_valid));
    bufp->fullBit(oldp+76489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_1_s2_nack));
    bufp->fullBit(oldp+76490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__s0_req_fire));
    bufp->fullBit(oldp+76491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76495,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_2_req_ready_output));
    bufp->fullBit(oldp+76500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_1_io_cache_req_valid));
    bufp->fullBit(oldp+76501,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_2_s2_nack));
    bufp->fullBit(oldp+76502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__s0_req_fire));
    bufp->fullBit(oldp+76503,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76505,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76506,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76507,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76509,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_1__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76511,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcacheArb__DOT___io_requestor_3_req_ready_output));
    bufp->fullBit(oldp+76512,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcIF_2_io_cache_req_valid));
    bufp->fullBit(oldp+76513,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_requestor_3_s2_nack));
    bufp->fullBit(oldp+76514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__s0_req_fire));
    bufp->fullBit(oldp+76515,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___replayq_io_req_ready));
    bufp->fullBit(oldp+76516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT____Vcellinp__replayq__io_nack_valid));
    bufp->fullBit(oldp+76517,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__replay_complete));
    bufp->fullBit(oldp+76518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nack_head));
    bufp->fullBit(oldp+76519,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nack_head)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT____Vcellinp__replayq__io_nack_valid))));
    bufp->fullBit(oldp+76520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nackq__DOT__do_enq));
    bufp->fullBit(oldp+76521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT__replayq__DOT__nackq__DOT__do_deq));
    bufp->fullBit(oldp+76522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcIF_2__DOT___req_arb_io_in_1_ready));
    bufp->fullBit(oldp+76523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_a_ready));
    bufp->fullBit(oldp+76524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_b_valid));
    bufp->fullBit(oldp+76525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_0_d_valid));
    bufp->fullBit(oldp+76526,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN_3)))));
    bufp->fullBit(oldp+76527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_valid));
    bufp->fullQData(oldp+76528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr),40);
    bufp->fullBit(oldp+76530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_phys));
    bufp->fullBit(oldp+76531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_s1_kill));
    bufp->fullBit(oldp+76532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___io_cpu_s2_nack_output));
    bufp->fullBit(oldp+76533,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_io_cpu_resp_valid));
    bufp->fullBit(oldp+76534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_valid_masked));
    bufp->fullBit(oldp+76535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_nack));
    bufp->fullBit(oldp+76536,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack_miss));
    bufp->fullBit(oldp+76537,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s2_nack));
    bufp->fullBit(oldp+76538,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__s1_nack)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_req_valid_T_2))));
    bufp->fullBit(oldp+76539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_valid));
    bufp->fullSData(oldp+76540,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_bits_addr),12);
    bufp->fullBit(oldp+76541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___writeArb_io_out_valid));
    bufp->fullSData(oldp+76542,((0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___readArb_io_out_bits_addr) 
                                           >> 3U))),9);
    bufp->fullBit(oldp+76543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_0_0_0__R0_en));
    bufp->fullBit(oldp+76544,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_1_0_0__R0_en));
    bufp->fullBit(oldp+76545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_2_0_0__R0_en));
    bufp->fullBit(oldp+76546,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__data__DOT____Vcellinp__array_3_0_0__R0_en));
    bufp->fullBit(oldp+76547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___dtlb_io_req_valid_T_2));
    bufp->fullBit(oldp+76548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__dtlb__io_sfence_valid));
    bufp->fullBit(oldp+76549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__dtlb__DOT__invalidate_refill));
    bufp->fullBit(oldp+76550,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__lfsr_prng__io_increment));
    bufp->fullBit(oldp+76551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___metaReadArb_io_out_valid));
    bufp->fullCData(oldp+76552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___metaReadArb_io_out_bits_idx),6);
    bufp->fullBit(oldp+76553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__meta__DOT____Vcellinp__tag_array__R0_en));
    bufp->fullCData(oldp+76554,((0x3fU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr 
                                                  >> 6U)))),6);
    bufp->fullBit(oldp+76555,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT___io_req_ready_output));
    bufp->fullBit(oldp+76556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___GEN));
    bufp->fullBit(oldp+76557,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__mshrs__io_mem_grant_valid));
    bufp->fullBit(oldp+76558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__readArb__io_out_ready));
    bufp->fullBit(oldp+76559,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__sdq_enq));
    bufp->fullBit(oldp+76560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__free_sdq));
    bufp->fullBit(oldp+76561,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__alloc_arb__io_out_ready));
    bufp->fullBit(oldp+76562,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_req_sec_val));
    bufp->fullBit(oldp+76563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76564,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_0__io_mem_grant_valid));
    bufp->fullBit(oldp+76565,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_done));
    bufp->fullBit(oldp+76566,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__sec_rdy));
    bufp->fullBit(oldp+76567,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76568,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76569,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76570,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_1__io_mem_grant_valid));
    bufp->fullBit(oldp+76572,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_done));
    bufp->fullBit(oldp+76573,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__sec_rdy));
    bufp->fullBit(oldp+76574,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76575,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76576,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76578,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_10__io_mem_grant_valid));
    bufp->fullBit(oldp+76579,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__refill_done));
    bufp->fullBit(oldp+76580,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__sec_rdy));
    bufp->fullBit(oldp+76581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76582,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76583,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_10__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76584,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76585,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_11__io_mem_grant_valid));
    bufp->fullBit(oldp+76586,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__refill_done));
    bufp->fullBit(oldp+76587,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__sec_rdy));
    bufp->fullBit(oldp+76588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76589,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76590,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_11__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76591,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76592,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_12__io_mem_grant_valid));
    bufp->fullBit(oldp+76593,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__refill_done));
    bufp->fullBit(oldp+76594,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__sec_rdy));
    bufp->fullBit(oldp+76595,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76596,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76597,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_12__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_13__io_mem_grant_valid));
    bufp->fullBit(oldp+76600,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__refill_done));
    bufp->fullBit(oldp+76601,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__sec_rdy));
    bufp->fullBit(oldp+76602,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76603,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76604,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_13__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76605,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76606,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_14__io_mem_grant_valid));
    bufp->fullBit(oldp+76607,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__refill_done));
    bufp->fullBit(oldp+76608,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__sec_rdy));
    bufp->fullBit(oldp+76609,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76610,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76611,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_14__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76612,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76613,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_15__io_mem_grant_valid));
    bufp->fullBit(oldp+76614,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__refill_done));
    bufp->fullBit(oldp+76615,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__sec_rdy));
    bufp->fullBit(oldp+76616,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76617,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76618,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_15__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76619,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76620,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_2__io_mem_grant_valid));
    bufp->fullBit(oldp+76621,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__refill_done));
    bufp->fullBit(oldp+76622,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__sec_rdy));
    bufp->fullBit(oldp+76623,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76624,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76625,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_2__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76626,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76627,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_3__io_mem_grant_valid));
    bufp->fullBit(oldp+76628,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__refill_done));
    bufp->fullBit(oldp+76629,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__sec_rdy));
    bufp->fullBit(oldp+76630,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76631,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76632,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_3__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76633,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76634,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_4__io_mem_grant_valid));
    bufp->fullBit(oldp+76635,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__refill_done));
    bufp->fullBit(oldp+76636,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__sec_rdy));
    bufp->fullBit(oldp+76637,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76638,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76639,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_4__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76640,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76641,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_5__io_mem_grant_valid));
    bufp->fullBit(oldp+76642,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__refill_done));
    bufp->fullBit(oldp+76643,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__sec_rdy));
    bufp->fullBit(oldp+76644,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76645,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76646,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_5__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76647,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76648,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_6__io_mem_grant_valid));
    bufp->fullBit(oldp+76649,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__refill_done));
    bufp->fullBit(oldp+76650,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__sec_rdy));
    bufp->fullBit(oldp+76651,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76652,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76653,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_6__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76654,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76655,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_7__io_mem_grant_valid));
    bufp->fullBit(oldp+76656,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__refill_done));
    bufp->fullBit(oldp+76657,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__sec_rdy));
    bufp->fullBit(oldp+76658,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76659,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76660,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_7__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76661,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76662,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_8__io_mem_grant_valid));
    bufp->fullBit(oldp+76663,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__refill_done));
    bufp->fullBit(oldp+76664,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__sec_rdy));
    bufp->fullBit(oldp+76665,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76666,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76667,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_8__DOT__rpq__DOT__do_deq));
    bufp->fullBit(oldp+76668,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT___io_req_sec_rdy_output));
    bufp->fullBit(oldp+76669,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT____Vcellinp__mshrs_9__io_mem_grant_valid));
    bufp->fullBit(oldp+76670,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__refill_done));
    bufp->fullBit(oldp+76671,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__sec_rdy));
    bufp->fullBit(oldp+76672,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__grantackq__DOT__do_enq));
    bufp->fullBit(oldp+76673,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_enq));
    bufp->fullBit(oldp+76674,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__mshrs__DOT__mshrs_9__DOT__rpq__DOT__do_deq));
    bufp->fullSData(oldp+76675,((0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcacheArb_io_mem_req_bits_addr))),12);
    bufp->fullBit(oldp+76676,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT____Vcellinp__wb__io_release_ready));
    bufp->fullBit(oldp+76677,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___tlMasterXbar_auto_in_1_d_valid));
    bufp->fullBit(oldp+76678,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s2_redirect));
    bufp->fullBit(oldp+76679,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__s0_valid));
    bufp->fullBit(oldp+76680,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT____Vcellinp__btb__io_btb_update_valid));
    bufp->fullQData(oldp+76681,((0x7fffffffffULL & 
                                 VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U))),39);
    bufp->fullBit(oldp+76683,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0) 
                               & (IData)((0x1fffffffffULL 
                                          & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                             >> 2U))))));
    bufp->fullBit(oldp+76684,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1_MPORT_2_en));
    bufp->fullBit(oldp+76685,(((~ (IData)((0x1fffffffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT___io_cpu_npc_T, 1U) 
                                              >> 2U)))) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____VdfgTmp_h9518d69a__0))));
    bufp->fullBit(oldp+76686,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid))));
    bufp->fullBit(oldp+76687,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__s0_valid));
    bufp->fullBit(oldp+76688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__refill_one_beat));
    bufp->fullBit(oldp+76689,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array_MPORT_en));
    bufp->fullSData(oldp+76690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr),9);
    bufp->fullBit(oldp+76691,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_en));
    bufp->fullBit(oldp+76692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76693,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_1__RW0_en));
    bufp->fullBit(oldp+76694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT___refill_fire_T));
    bufp->fullCData(oldp+76696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_addr),6);
    bufp->fullBit(oldp+76697,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT____Vcellinp__tag_array__RW0_en));
    bufp->fullBit(oldp+76698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+76699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_0_q__DOT__do_deq));
    bufp->fullBit(oldp+76700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_1_q__DOT__do_deq));
    bufp->fullBit(oldp+76701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__respArb_io_in_2_q__DOT__do_deq));
    bufp->fullBit(oldp+76702,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__latch));
    bufp->fullCData(oldp+76703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set),8);
    bufp->fullBit(oldp+76704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT__b_first_done));
    bufp->fullBit(oldp+76705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__a_set));
    bufp->fullBit(oldp+76706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_wo_ready));
    bufp->fullBit(oldp+76707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor_1__DOT__d_clr_1));
    bufp->fullBit(oldp+76708,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76710,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76712,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76713,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76714,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76715,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76716,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76717,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76718,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76719,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76721,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76725,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+76726,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+76727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+76728,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+76729,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx_gray),4);
    bufp->fullBit(oldp+76730,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx_gray))));
    bufp->fullBit(oldp+76731,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76732,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76733,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+76734,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__index),3);
    bufp->fullCData(oldp+76735,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx_gray),4);
    bufp->fullBit(oldp+76736,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76737,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76738,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76739,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+76740,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76741,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76742,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76743,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76744,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray),4);
    bufp->fullBit(oldp+76745,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76746,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76747,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76748,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76749,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76750,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76751,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76752,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76753,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76754,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76755,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76756,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76757,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76758,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76759,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76760,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76761,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76762,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76763,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76764,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+76765,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__index),3);
    bufp->fullCData(oldp+76766,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__index),3);
    bufp->fullCData(oldp+76767,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                       ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                                >> 1U))))),3);
    bufp->fullCData(oldp+76768,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76769,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76770,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76771,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76772,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray),4);
    bufp->fullBit(oldp+76773,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76774,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76775,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76776,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76777,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76778,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76779,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76780,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76781,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76782,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76783,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76784,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76785,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76786,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76787,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76788,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76789,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76790,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76791,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76792,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+76793,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__index),3);
    bufp->fullCData(oldp+76794,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__index),3);
    bufp->fullCData(oldp+76795,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                       ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                                >> 1U))))),3);
    bufp->fullCData(oldp+76796,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76797,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76798,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray),4);
    bufp->fullCData(oldp+76799,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray),4);
    bufp->fullCData(oldp+76800,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray),4);
    bufp->fullBit(oldp+76801,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76802,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76803,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76804,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76805,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray))));
    bufp->fullBit(oldp+76806,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76807,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76808,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76809,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76810,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76811,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76812,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76813,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76814,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76815,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76816,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullBit(oldp+76817,((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray))));
    bufp->fullBit(oldp+76818,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 1U))));
    bufp->fullBit(oldp+76819,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 2U))));
    bufp->fullBit(oldp+76820,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                     >> 3U))));
    bufp->fullCData(oldp+76821,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__index),3);
    bufp->fullCData(oldp+76822,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__index),3);
    bufp->fullCData(oldp+76823,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                       ^ (4U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx_gray) 
                                                >> 1U))))),3);
    bufp->fullBit(oldp+76824,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_bus_xing_in_a_ready));
    bufp->fullBit(oldp+76825,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_valid));
    bufp->fullCData(oldp+76826,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_opcode),3);
    bufp->fullCData(oldp+76827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_param),3);
    bufp->fullCData(oldp+76828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size),4);
    bufp->fullSData(oldp+76829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source),9);
    bufp->fullIData(oldp+76830,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address),29);
    bufp->fullCData(oldp+76831,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_mask),8);
    bufp->fullBit(oldp+76832,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_d_ready));
    bufp->fullBit(oldp+76833,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_in_a_ready));
    bufp->fullBit(oldp+76834,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_valid));
    bufp->fullCData(oldp+76835,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+76836,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+76837,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size),4);
    bufp->fullSData(oldp+76838,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source),10);
    bufp->fullIData(oldp+76839,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address),29);
    bufp->fullCData(oldp+76840,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+76841,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+76843,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_corrupt));
    bufp->fullBit(oldp+76844,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_d_ready));
    bufp->fullBit(oldp+76845,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_valid));
    bufp->fullCData(oldp+76846,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+76847,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+76848,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size),4);
    bufp->fullSData(oldp+76849,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source),10);
    bufp->fullIData(oldp+76850,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address),29);
    bufp->fullCData(oldp+76851,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_mask),8);
    bufp->fullQData(oldp+76852,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_data),64);
    bufp->fullBit(oldp+76854,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_isSupported));
    bufp->fullBit(oldp+76855,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__a_allow));
    bufp->fullBit(oldp+76856,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__source_i_valid));
    bufp->fullBit(oldp+76857,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__winner_1));
    bufp->fullBit(oldp+76858,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__muxState_1));
    bufp->fullBit(oldp+76859,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                     >> 8U))))) 
                                     | ((0x18U == (0x3fU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                      >> 4U))) 
                                        | ((0x190U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                           | ((0x1a0U 
                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                              | ((0x14U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                      >> 4U))) 
                                                 | ((0x150U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                                    | ((0x160U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                                       | ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                               >> 4U))) 
                                                          | ((0x110U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                                             | ((0x120U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                                                | (0x200U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source)))))))))))))));
    bufp->fullBit(oldp+76860,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+76861,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)))))));
    bufp->fullBit(oldp+76862,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+76863,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+76864,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76865,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76866,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76867,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76868,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76869,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76870,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76871,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))))));
    bufp->fullCData(oldp+76872,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_address))))))))))))),8);
    VL_SHIFTL_WWI(513,513,10, __Vtemp_2, VTestDriver__ConstPool__CONST_hebe77906_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___in_xbar_auto_out_a_bits_source));
    __Vtemp_4[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
    __Vtemp_4[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
    __Vtemp_4[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
    __Vtemp_4[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
    __Vtemp_4[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
    __Vtemp_4[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
    __Vtemp_4[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
    __Vtemp_4[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
    __Vtemp_4[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
    __Vtemp_4[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_2[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
    __Vtemp_4[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xaU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_4[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xbU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_4[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xcU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_4[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xdU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_4[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xeU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_4[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_2[0xfU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_4[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_2[0x10U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+76873,(__Vtemp_4),513);
    bufp->fullBit(oldp+76890,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+76891,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                     >> 8U))))) 
                                     | ((0x18U == (0x3fU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                      >> 4U))) 
                                        | ((0x190U 
                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                           | ((0x1a0U 
                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                              | ((0x14U 
                                                  == 
                                                  (0x3fU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                      >> 4U))) 
                                                 | ((0x150U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                                    | ((0x160U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                                       | ((0x10U 
                                                           == 
                                                           (0x3fU 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source) 
                                                               >> 4U))) 
                                                          | ((0x110U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                                             | ((0x120U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)) 
                                                                | (0x200U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source)))))))))))))));
    bufp->fullBit(oldp+76892,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+76893,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)))))));
    bufp->fullBit(oldp+76894,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+76895,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+76896,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76897,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76898,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76899,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76900,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76901,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+76902,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+76903,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))))));
    bufp->fullCData(oldp+76904,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_address))))))))))))),8);
    VL_SHIFTL_WWI(513,513,10, __Vtemp_5, VTestDriver__ConstPool__CONST_hebe77906_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___atomics_auto_out_a_bits_source));
    __Vtemp_7[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
    __Vtemp_7[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
    __Vtemp_7[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
    __Vtemp_7[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
    __Vtemp_7[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
    __Vtemp_7[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
    __Vtemp_7[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
    __Vtemp_7[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
    __Vtemp_7[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
    __Vtemp_7[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                         ? __Vtemp_5[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
    __Vtemp_7[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xaU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_7[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xbU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_7[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xcU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_7[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xdU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_7[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xeU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_7[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_5[0xfU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_7[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_5[0x10U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+76905,(__Vtemp_7),513);
    bufp->fullBit(oldp+76922,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+76923,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
    bufp->fullBit(oldp+76924,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
    bufp->fullCData(oldp+76925,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+76926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+76927,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__winner_0));
    bufp->fullBit(oldp+76928,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__winner_1));
    bufp->fullBit(oldp+76929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_0));
    bufp->fullBit(oldp+76930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__muxState_1));
    bufp->fullBit(oldp+76931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__latch));
    bufp->fullBit(oldp+76932,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                                         >> 8U)) | 
                                     ((0x18U == (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                                                    >> 4U))) 
                                      | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                         | ((0x1a0U 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                            | ((0x14U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                                                    >> 4U))) 
                                               | ((0x150U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                                  | ((0x160U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                                     | ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source) 
                                                             >> 4U))) 
                                                        | ((0x110U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source)) 
                                                           | (0x120U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source))))))))))))));
    bufp->fullBit(oldp+76933,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)))));
    bufp->fullBit(oldp+76934,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)))))));
    bufp->fullBit(oldp+76935,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+76936,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)))));
    bufp->fullBit(oldp+76937,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))));
    bufp->fullBit(oldp+76938,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))))));
    bufp->fullBit(oldp+76939,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))));
    bufp->fullBit(oldp+76940,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))))));
    bufp->fullBit(oldp+76941,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))));
    bufp->fullBit(oldp+76942,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))))));
    bufp->fullBit(oldp+76943,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))));
    bufp->fullBit(oldp+76944,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))))));
    bufp->fullCData(oldp+76945,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_address))))))))))))),8);
    VL_SHIFTL_WWI(417,417,9, __Vtemp_8, VTestDriver__ConstPool__CONST_h41ec5e41_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_cbus_bus_xing_out_a_bits_source));
    __Vtemp_10[0U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[0U] : VTestDriver__ConstPool__CONST_h71be9d22_0[0U]));
    __Vtemp_10[1U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[1U] : VTestDriver__ConstPool__CONST_h71be9d22_0[1U]));
    __Vtemp_10[2U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[2U] : VTestDriver__ConstPool__CONST_h71be9d22_0[2U]));
    __Vtemp_10[3U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[3U] : VTestDriver__ConstPool__CONST_h71be9d22_0[3U]));
    __Vtemp_10[4U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[4U] : VTestDriver__ConstPool__CONST_h71be9d22_0[4U]));
    __Vtemp_10[5U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[5U] : VTestDriver__ConstPool__CONST_h71be9d22_0[5U]));
    __Vtemp_10[6U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[6U] : VTestDriver__ConstPool__CONST_h71be9d22_0[6U]));
    __Vtemp_10[7U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[7U] : VTestDriver__ConstPool__CONST_h71be9d22_0[7U]));
    __Vtemp_10[8U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[8U] : VTestDriver__ConstPool__CONST_h71be9d22_0[8U]));
    __Vtemp_10[9U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_8[9U] : VTestDriver__ConstPool__CONST_h71be9d22_0[9U]));
    __Vtemp_10[0xaU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_8[0xaU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xaU]));
    __Vtemp_10[0xbU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_8[0xbU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xbU]));
    __Vtemp_10[0xcU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_8[0xcU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xcU]));
    __Vtemp_10[0xdU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_8[0xdU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xdU]));
    bufp->fullWData(oldp+76946,(__Vtemp_10),417);
    bufp->fullBit(oldp+76960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+76961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set));
    bufp->fullBit(oldp+76962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_valid));
    bufp->fullCData(oldp+76963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_opcode),3);
    bufp->fullCData(oldp+76964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_param),3);
    bufp->fullCData(oldp+76965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size),3);
    bufp->fullSData(oldp+76966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_source),9);
    bufp->fullIData(oldp+76967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address),32);
    bufp->fullCData(oldp+76968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_mask),8);
    bufp->fullQData(oldp+76969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_data),64);
    bufp->fullBit(oldp+76971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_corrupt));
    bufp->fullBit(oldp+76972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_b_ready));
    bufp->fullBit(oldp+76973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid));
    bufp->fullCData(oldp+76974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_opcode),3);
    bufp->fullCData(oldp+76975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_param),3);
    bufp->fullCData(oldp+76976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_size),3);
    bufp->fullSData(oldp+76977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source),9);
    bufp->fullIData(oldp+76978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address),32);
    bufp->fullBit(oldp+76979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_d_ready));
    bufp->fullBit(oldp+76980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid));
    bufp->fullCData(oldp+76981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink),3);
    bufp->fullBit(oldp+76982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_a_ready));
    bufp->fullBit(oldp+76983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_valid));
    bufp->fullCData(oldp+76984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+76985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+76986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size),3);
    bufp->fullSData(oldp+76987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source),9);
    bufp->fullIData(oldp+76988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address),32);
    bufp->fullCData(oldp+76989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_mask),8);
    bufp->fullCData(oldp+76990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_set),7);
    bufp->fullBit(oldp+76991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source_ok));
    bufp->fullBit(oldp+76992,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)))));
    bufp->fullBit(oldp+76993,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)))))));
    bufp->fullBit(oldp+76994,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+76995,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)))));
    bufp->fullBit(oldp+76996,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))));
    bufp->fullBit(oldp+76997,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))))));
    bufp->fullBit(oldp+76998,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))));
    bufp->fullBit(oldp+76999,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))))));
    bufp->fullBit(oldp+77000,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))));
    bufp->fullBit(oldp+77001,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))))));
    bufp->fullBit(oldp+77002,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))));
    bufp->fullBit(oldp+77003,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))))));
    bufp->fullCData(oldp+77004,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_address))))))))))))),8);
    bufp->fullBit(oldp+77005,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source) 
                                         >> 8U)) | 
                                     ((0x18U == (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source) 
                                                    >> 4U))) 
                                      | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source)) 
                                         | ((0x1a0U 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source)) 
                                            | ((0x14U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source) 
                                                    >> 4U))) 
                                               | ((0x150U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source)) 
                                                  | ((0x160U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source)) 
                                                     | ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source) 
                                                             >> 4U))) 
                                                        | ((0x110U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source)) 
                                                           | (0x120U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source))))))))))))));
    bufp->fullBit(oldp+77006,((1U & ((8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address 
                                             >> 0x1cU)) 
                                     | (~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address 
                                                   >> 0x1cU)) 
                                           | (0U != 
                                              (0xfffU 
                                               & (0x800U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address 
                                                   >> 0x10U))))))))));
    VL_SHIFTL_WWI(417,417,9, __Vtemp_11, VTestDriver__ConstPool__CONST_h41ec5e41_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_source));
    __Vtemp_13[0U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[0U] : VTestDriver__ConstPool__CONST_h71be9d22_0[0U]));
    __Vtemp_13[1U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[1U] : VTestDriver__ConstPool__CONST_h71be9d22_0[1U]));
    __Vtemp_13[2U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[2U] : VTestDriver__ConstPool__CONST_h71be9d22_0[2U]));
    __Vtemp_13[3U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[3U] : VTestDriver__ConstPool__CONST_h71be9d22_0[3U]));
    __Vtemp_13[4U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[4U] : VTestDriver__ConstPool__CONST_h71be9d22_0[4U]));
    __Vtemp_13[5U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[5U] : VTestDriver__ConstPool__CONST_h71be9d22_0[5U]));
    __Vtemp_13[6U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[6U] : VTestDriver__ConstPool__CONST_h71be9d22_0[6U]));
    __Vtemp_13[7U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[7U] : VTestDriver__ConstPool__CONST_h71be9d22_0[7U]));
    __Vtemp_13[8U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[8U] : VTestDriver__ConstPool__CONST_h71be9d22_0[8U]));
    __Vtemp_13[9U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_11[9U] : VTestDriver__ConstPool__CONST_h71be9d22_0[9U]));
    __Vtemp_13[0xaU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_11[0xaU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xaU]));
    __Vtemp_13[0xbU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_11[0xbU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xbU]));
    __Vtemp_13[0xcU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_11[0xcU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xcU]));
    __Vtemp_13[0xdU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_11[0xdU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xdU]));
    bufp->fullWData(oldp+77007,(__Vtemp_13),417);
    bufp->fullBit(oldp+77021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__same_cycle_resp));
    VL_SHIFTL_WWI(417,417,9, __Vtemp_14, VTestDriver__ConstPool__CONST_h41ec5e41_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source));
    __Vtemp_17[0U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[0U] : VTestDriver__ConstPool__CONST_h71be9d22_0[0U]));
    __Vtemp_17[1U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[1U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[1U] : VTestDriver__ConstPool__CONST_h71be9d22_0[1U]));
    __Vtemp_17[2U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[2U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[2U] : VTestDriver__ConstPool__CONST_h71be9d22_0[2U]));
    __Vtemp_17[3U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[3U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[3U] : VTestDriver__ConstPool__CONST_h71be9d22_0[3U]));
    __Vtemp_17[4U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[4U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[4U] : VTestDriver__ConstPool__CONST_h71be9d22_0[4U]));
    __Vtemp_17[5U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[5U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[5U] : VTestDriver__ConstPool__CONST_h71be9d22_0[5U]));
    __Vtemp_17[6U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[6U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[6U] : VTestDriver__ConstPool__CONST_h71be9d22_0[6U]));
    __Vtemp_17[7U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[7U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[7U] : VTestDriver__ConstPool__CONST_h71be9d22_0[7U]));
    __Vtemp_17[8U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[8U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[8U] : VTestDriver__ConstPool__CONST_h71be9d22_0[8U]));
    __Vtemp_17[9U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[9U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_14[9U] : VTestDriver__ConstPool__CONST_h71be9d22_0[9U]));
    __Vtemp_17[0xaU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xaU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_14[0xaU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xaU]));
    __Vtemp_17[0xbU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xbU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_14[0xbU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xbU]));
    __Vtemp_17[0xcU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xcU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_14[0xcU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xcU]));
    __Vtemp_17[0xdU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xdU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_14[0xdU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xdU]));
    bufp->fullWData(oldp+77022,(__Vtemp_17),417);
    bufp->fullBit(oldp+77036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__b_first_done));
    bufp->fullBit(oldp+77037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullBit(oldp+77038,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__nodeOut_a_q__DOT__do_enq));
    bufp->fullBit(oldp+77039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_valid));
    bufp->fullSData(oldp+77040,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_bits_set),10);
    bufp->fullCData(oldp+77041,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__setMatches),7);
    bufp->fullBit(oldp+77042,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__setMatches))));
    bufp->fullBit(oldp+77043,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__nestC));
    bufp->fullCData(oldp+77044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__lowerMatches),7);
    bufp->fullBit(oldp+77045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__queue));
    bufp->fullCData(oldp+77046,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h85d57168__0)
                                  ? 0x40U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____VdfgTmp_h193e27db__0)
                                              ? 0x20U
                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__lowerMatches)))),7);
    bufp->fullBit(oldp+77047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassMatches));
    bufp->fullBit(oldp+77048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass));
    bufp->fullBit(oldp+77049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop));
    bufp->fullBit(oldp+77050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_1));
    bufp->fullBit(oldp+77051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_2));
    bufp->fullBit(oldp+77052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_3));
    bufp->fullBit(oldp+77053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_4));
    bufp->fullBit(oldp+77054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_5));
    bufp->fullBit(oldp+77055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_6));
    bufp->fullBit(oldp+77056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypass_7));
    bufp->fullBit(oldp+77057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory_for_lb));
    bufp->fullBit(oldp+77058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_uses_directory));
    bufp->fullBit(oldp+77059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassQueue));
    bufp->fullBit(oldp+77060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__request_alloc_cases));
    bufp->fullBit(oldp+77061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__alloc_uses_directory));
    bufp->fullBit(oldp+77062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid));
    bufp->fullSData(oldp+77063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_bits_set),10);
    bufp->fullBit(oldp+77064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir_MPORT_en));
    bufp->fullSData(oldp+77065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_addr),10);
    bufp->fullBit(oldp+77066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____Vcellinp__cc_dir__RW0_en));
    bufp->fullBit(oldp+77067,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid)))));
    bufp->fullBit(oldp+77068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__cc_dir__DOT__cc_dir_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en));
    bufp->fullBit(oldp+77069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_valid));
    bufp->fullBit(oldp+77070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_control));
    bufp->fullCData(oldp+77072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_5),13);
    bufp->fullBit(oldp+77076,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_hit));
    bufp->fullBit(oldp+77078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_control));
    bufp->fullCData(oldp+77083,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param),3);
    bufp->fullCData(oldp+77085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_source),5);
    bufp->fullBit(oldp+77086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_needT));
    bufp->fullCData(oldp+77087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77088,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_valid));
    bufp->fullBit(oldp+77089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_control));
    bufp->fullCData(oldp+77091,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77092,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77094,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_4),13);
    bufp->fullBit(oldp+77095,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_hit));
    bufp->fullBit(oldp+77097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_control));
    bufp->fullCData(oldp+77102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param),3);
    bufp->fullCData(oldp+77104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_source),5);
    bufp->fullBit(oldp+77105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_needT));
    bufp->fullCData(oldp+77106,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77107,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_valid));
    bufp->fullBit(oldp+77108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77109,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_control));
    bufp->fullCData(oldp+77110,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_3),13);
    bufp->fullBit(oldp+77114,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_hit));
    bufp->fullBit(oldp+77116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_control));
    bufp->fullCData(oldp+77121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param),3);
    bufp->fullCData(oldp+77123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_source),5);
    bufp->fullBit(oldp+77124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_needT));
    bufp->fullCData(oldp+77125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_valid));
    bufp->fullBit(oldp+77127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_control));
    bufp->fullCData(oldp+77129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_2),13);
    bufp->fullBit(oldp+77133,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77134,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_hit));
    bufp->fullBit(oldp+77135,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77136,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_control));
    bufp->fullCData(oldp+77140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param),3);
    bufp->fullCData(oldp+77142,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_source),5);
    bufp->fullBit(oldp+77143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_needT));
    bufp->fullCData(oldp+77144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_valid));
    bufp->fullBit(oldp+77146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_control));
    bufp->fullCData(oldp+77148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_1),13);
    bufp->fullBit(oldp+77152,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_hit));
    bufp->fullBit(oldp+77154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_control));
    bufp->fullCData(oldp+77159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param),3);
    bufp->fullCData(oldp+77161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_source),5);
    bufp->fullBit(oldp+77162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_needT));
    bufp->fullCData(oldp+77163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_valid));
    bufp->fullBit(oldp+77165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_control));
    bufp->fullCData(oldp+77167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN_0),13);
    bufp->fullBit(oldp+77171,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_hit));
    bufp->fullBit(oldp+77173,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77177,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_control));
    bufp->fullCData(oldp+77178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77179,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param),3);
    bufp->fullCData(oldp+77180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_source),5);
    bufp->fullBit(oldp+77181,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_needT));
    bufp->fullCData(oldp+77182,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_valid));
    bufp->fullBit(oldp+77184,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_prio_2));
    bufp->fullBit(oldp+77185,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_control));
    bufp->fullCData(oldp+77186,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_opcode),3);
    bufp->fullCData(oldp+77187,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_param),3);
    bufp->fullSData(oldp+77188,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_allocate_bits_source),9);
    bufp->fullSData(oldp+77189,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___GEN),13);
    bufp->fullBit(oldp+77190,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                               & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink)))));
    bufp->fullBit(oldp+77191,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_hit));
    bufp->fullBit(oldp+77192,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_prio_2));
    bufp->fullBit(oldp+77193,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_dirty));
    bufp->fullCData(oldp+77194,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_state),2);
    bufp->fullCData(oldp+77195,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_clients),3);
    bufp->fullBit(oldp+77196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_control));
    bufp->fullCData(oldp+77197,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_opcode),3);
    bufp->fullCData(oldp+77198,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param),3);
    bufp->fullCData(oldp+77199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_source),5);
    bufp->fullBit(oldp+77200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_needT));
    bufp->fullCData(oldp+77201,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_clientBit),3);
    bufp->fullBit(oldp+77202,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bypassQueue)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___requests_io_push_valid_T))));
    bufp->fullCData(oldp+77203,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_push_bits_index),5);
    bufp->fullCData(oldp+77204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_opcode),3);
    bufp->fullCData(oldp+77205,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_param),3);
    bufp->fullCData(oldp+77206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_size),3);
    bufp->fullSData(oldp+77207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_source),9);
    bufp->fullSData(oldp+77208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_tag),13);
    bufp->fullCData(oldp+77209,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___view___05FWIRE_6_offset),6);
    bufp->fullBit(oldp+77210,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en));
    bufp->fullBit(oldp+77211,(((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___push_valid_T) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en))));
    bufp->fullCData(oldp+77212,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___tail_ext_R0_data),6);
    bufp->fullBit(oldp+77213,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT____Vcellinp__next_ext__W0_en));
    bufp->fullBit(oldp+77214,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___io_req_valid_T) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT____VdfgTmp_h14e36487__0))));
    bufp->fullSData(oldp+77215,(((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                             >> 0x13U)) 
                                 | (0xfffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                              >> 0x10U)))),13);
    bufp->fullCData(oldp+77216,((0x3fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)),6);
    bufp->fullSData(oldp+77217,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                           >> 6U))),10);
    bufp->fullBit(oldp+77218,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__req_block));
    bufp->fullBit(oldp+77219,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__buf_block));
    bufp->fullBit(oldp+77220,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__set_block));
    bufp->fullBit(oldp+77221,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_valid) 
                               & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode) 
                                      >> 2U)) & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__req_block)) 
                                                 & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__set_block)))))));
    bufp->fullBit(oldp+77222,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en));
    bufp->fullBit(oldp+77223,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT____Vcellinp__next_ext__W0_en));
    bufp->fullBit(oldp+77224,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkA_io_req_ready_T));
    bufp->fullBit(oldp+77225,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__req_block));
    bufp->fullBit(oldp+77226,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT___q_io_deq_ready_T_7));
    bufp->fullBit(oldp+77227,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq));
    bufp->fullBit(oldp+77228,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_deq));
    bufp->fullBit(oldp+77229,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__data_MPORT_en));
    bufp->fullBit(oldp+77230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT____Vcellinp__next_ext__W0_en));
    bufp->fullBit(oldp+77231,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sinkX__io_req_ready));
    bufp->fullBit(oldp+77232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__source_ok));
    bufp->fullBit(oldp+77233,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+77234,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)))))));
    bufp->fullBit(oldp+77235,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+77236,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)))));
    bufp->fullBit(oldp+77237,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+77238,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+77239,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+77240,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+77241,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+77242,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))))));
    bufp->fullBit(oldp+77243,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))));
    bufp->fullBit(oldp+77244,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))))));
    bufp->fullCData(oldp+77245,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                              << 7U) 
                                             | (0xffffff80U 
                                                & (((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                    << 7U) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                      << 5U)))) 
                                            | (((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                & (IData)(
                                                          (6U 
                                                           == 
                                                           (6U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                               << 7U)) 
                                           | ((IData)(
                                                      (7U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))) 
                                              << 7U))) 
                                 | ((0x40U & (((((2U 
                                                  < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                       << 6U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                         << 4U)))) 
                                               | (((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                                  << 6U)) 
                                              | ((IData)(
                                                         (6U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))) 
                                                 << 6U))) 
                                    | ((0x20U & (((
                                                   ((2U 
                                                     < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (((2U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                          << 5U) 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                            << 3U)))) 
                                                  | (((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                      & (IData)(
                                                                (4U 
                                                                 == 
                                                                 (6U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                                     << 5U)) 
                                                 | ((IData)(
                                                            (5U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))) 
                                                    << 5U))) 
                                       | ((0x10U & 
                                           (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                               << 4U) 
                                              | (0xfffffff0U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                     << 4U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                       << 2U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                                << 4U)) 
                                            | ((IData)(
                                                       (4U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))) 
                                               << 4U))) 
                                          | ((8U & 
                                              (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                  | ((~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                       >> 2U)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                                                 | ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                    & (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))))) 
                                                | (IData)(
                                                          (3U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                               << 3U)) 
                                             | ((4U 
                                                 & (((((2U 
                                                        < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                       | ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                            >> 2U)) 
                                                          & (2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                                                      | ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                         & (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (6U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))))) 
                                                     | (IData)(
                                                               (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                          | ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                               >> 2U)) 
                                                             & (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                                                         | ((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))))) 
                                                        | (IData)(
                                                                  (1U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_address))))))))))))),8);
    VL_SHIFTL_WWI(417,417,9, __Vtemp_18, VTestDriver__ConstPool__CONST_h41ec5e41_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_source));
    __Vtemp_20[0U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[0U] : VTestDriver__ConstPool__CONST_h71be9d22_0[0U]));
    __Vtemp_20[1U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[1U] : VTestDriver__ConstPool__CONST_h71be9d22_0[1U]));
    __Vtemp_20[2U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[2U] : VTestDriver__ConstPool__CONST_h71be9d22_0[2U]));
    __Vtemp_20[3U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[3U] : VTestDriver__ConstPool__CONST_h71be9d22_0[3U]));
    __Vtemp_20[4U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[4U] : VTestDriver__ConstPool__CONST_h71be9d22_0[4U]));
    __Vtemp_20[5U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[5U] : VTestDriver__ConstPool__CONST_h71be9d22_0[5U]));
    __Vtemp_20[6U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[6U] : VTestDriver__ConstPool__CONST_h71be9d22_0[6U]));
    __Vtemp_20[7U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[7U] : VTestDriver__ConstPool__CONST_h71be9d22_0[7U]));
    __Vtemp_20[8U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[8U] : VTestDriver__ConstPool__CONST_h71be9d22_0[8U]));
    __Vtemp_20[9U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                          ? __Vtemp_18[9U] : VTestDriver__ConstPool__CONST_h71be9d22_0[9U]));
    __Vtemp_20[0xaU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_18[0xaU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xaU]));
    __Vtemp_20[0xbU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_18[0xbU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xbU]));
    __Vtemp_20[0xcU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_18[0xcU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xcU]));
    __Vtemp_20[0xdU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_18[0xdU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xdU]));
    bufp->fullWData(oldp+77246,(__Vtemp_20),417);
    bufp->fullBit(oldp+77260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__same_cycle_resp));
    VL_SHIFTL_WWI(417,417,9, __Vtemp_21, VTestDriver__ConstPool__CONST_h41ec5e41_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source));
    __Vtemp_24[0U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[0U] : VTestDriver__ConstPool__CONST_h71be9d22_0[0U]));
    __Vtemp_24[1U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[1U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[1U] : VTestDriver__ConstPool__CONST_h71be9d22_0[1U]));
    __Vtemp_24[2U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[2U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[2U] : VTestDriver__ConstPool__CONST_h71be9d22_0[2U]));
    __Vtemp_24[3U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[3U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[3U] : VTestDriver__ConstPool__CONST_h71be9d22_0[3U]));
    __Vtemp_24[4U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[4U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[4U] : VTestDriver__ConstPool__CONST_h71be9d22_0[4U]));
    __Vtemp_24[5U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[5U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[5U] : VTestDriver__ConstPool__CONST_h71be9d22_0[5U]));
    __Vtemp_24[6U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[6U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[6U] : VTestDriver__ConstPool__CONST_h71be9d22_0[6U]));
    __Vtemp_24[7U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[7U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[7U] : VTestDriver__ConstPool__CONST_h71be9d22_0[7U]));
    __Vtemp_24[8U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[8U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[8U] : VTestDriver__ConstPool__CONST_h71be9d22_0[8U]));
    __Vtemp_24[9U] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[9U] 
                      & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                          ? __Vtemp_21[9U] : VTestDriver__ConstPool__CONST_h71be9d22_0[9U]));
    __Vtemp_24[0xaU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xaU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_21[0xaU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xaU]));
    __Vtemp_24[0xbU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xbU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_21[0xbU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xbU]));
    __Vtemp_24[0xcU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xcU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_21[0xcU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xcU]));
    __Vtemp_24[0xdU] = (VTestDriver__ConstPool__CONST_h862f0a8c_0[0xdU] 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___same_cycle_resp_T_3) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___GEN_4))
                            ? __Vtemp_21[0xdU] : VTestDriver__ConstPool__CONST_h71be9d22_0[0xdU]));
    bufp->fullWData(oldp+77261,(__Vtemp_24),417);
    bufp->fullBit(oldp+77275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_deq));
    bufp->fullCData(oldp+77276,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__widx),4);
    bufp->fullCData(oldp+77277,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__widx),4);
    bufp->fullCData(oldp+77278,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77279,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__valid));
    bufp->fullCData(oldp+77280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__index),3);
    bufp->fullCData(oldp+77281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__valid));
    bufp->fullCData(oldp+77283,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__index),3);
    bufp->fullCData(oldp+77284,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77285,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__valid));
    bufp->fullCData(oldp+77286,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__widx),4);
    bufp->fullCData(oldp+77287,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__widx),4);
    bufp->fullCData(oldp+77288,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77289,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__valid));
    bufp->fullCData(oldp+77290,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index),3);
    bufp->fullCData(oldp+77291,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77292,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__valid));
    bufp->fullCData(oldp+77293,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index),3);
    bufp->fullCData(oldp+77294,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77295,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__valid));
    bufp->fullCData(oldp+77296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__widx),4);
    bufp->fullCData(oldp+77297,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__widx),4);
    bufp->fullCData(oldp+77298,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77299,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__valid));
    bufp->fullCData(oldp+77300,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index),3);
    bufp->fullCData(oldp+77301,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77302,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__valid));
    bufp->fullCData(oldp+77303,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index),3);
    bufp->fullCData(oldp+77304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__valid));
    bufp->fullCData(oldp+77306,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_set),8);
    bufp->fullBit(oldp+77307,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__same_cycle_resp));
    bufp->fullBit(oldp+77308,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT___widx_T_1));
    bufp->fullCData(oldp+77309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_set),8);
    bufp->fullBit(oldp+77310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__same_cycle_resp));
    bufp->fullBit(oldp+77311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT___widx_T_1));
    bufp->fullCData(oldp+77312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_set),8);
    bufp->fullBit(oldp+77313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__same_cycle_resp));
    bufp->fullBit(oldp+77314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT___widx_T_1));
    bufp->fullBit(oldp+77315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_valid));
    bufp->fullBit(oldp+77316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_valid));
    bufp->fullBit(oldp+77317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_valid));
    bufp->fullBit(oldp+77318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_valid));
    bufp->fullBit(oldp+77319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_0_valid));
    bufp->fullBit(oldp+77320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_1_valid));
    bufp->fullCData(oldp+77321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid),4);
    bufp->fullCData(oldp+77322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys),4);
    bufp->fullBit(oldp+77323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_0));
    bufp->fullBit(oldp+77324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1));
    bufp->fullBit(oldp+77325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2));
    bufp->fullBit(oldp+77326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_3));
    bufp->fullBit(oldp+77327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_0));
    bufp->fullBit(oldp+77328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1));
    bufp->fullBit(oldp+77329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2));
    bufp->fullBit(oldp+77330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_3));
    bufp->fullCData(oldp+77331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_1),4);
    bufp->fullCData(oldp+77332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_1),4);
    bufp->fullBit(oldp+77333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_0));
    bufp->fullBit(oldp+77334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_1));
    bufp->fullBit(oldp+77335,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_2));
    bufp->fullBit(oldp+77336,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_3));
    bufp->fullBit(oldp+77337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_0));
    bufp->fullBit(oldp+77338,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_1));
    bufp->fullBit(oldp+77339,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_2));
    bufp->fullBit(oldp+77340,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_1_3));
    bufp->fullCData(oldp+77341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_2),3);
    bufp->fullBit(oldp+77342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2_0));
    bufp->fullBit(oldp+77343,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2_1));
    bufp->fullBit(oldp+77344,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2_2));
    bufp->fullBit(oldp+77345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_0));
    bufp->fullBit(oldp+77346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_1));
    bufp->fullBit(oldp+77347,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_2));
    bufp->fullCData(oldp+77348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_3),3);
    bufp->fullBit(oldp+77349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_3_0));
    bufp->fullBit(oldp+77350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_3_1));
    bufp->fullBit(oldp+77351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_3_2));
    bufp->fullBit(oldp+77352,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_0) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1))));
    bufp->fullBit(oldp+77353,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_0) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_1_1))));
    bufp->fullBit(oldp+77354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch));
    bufp->fullBit(oldp+77355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_5));
    bufp->fullBit(oldp+77356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_6));
    bufp->fullBit(oldp+77357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_7));
    bufp->fullCData(oldp+77358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_set),8);
    bufp->fullBit(oldp+77359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__same_cycle_resp));
    bufp->fullCData(oldp+77360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_set),8);
    bufp->fullBit(oldp+77361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__same_cycle_resp));
    bufp->fullCData(oldp+77362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_set),8);
    bufp->fullBit(oldp+77363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__same_cycle_resp));
    bufp->fullCData(oldp+77364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__ridx),4);
    bufp->fullBit(oldp+77365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__valid));
    bufp->fullCData(oldp+77366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__widx),4);
    bufp->fullBit(oldp+77367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77376,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77377,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77402,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77403,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77404,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77405,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77406,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77407,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77408,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77409,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77425,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77433,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77434,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77436,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77437,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77438,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77440,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77441,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77445,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77460,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77461,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77463,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77468,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77472,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77473,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77475,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77477,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77480,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77484,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__sink_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77495,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77501,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77502,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77503,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77505,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77506,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77507,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77509,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77511,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77512,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77513,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77515,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77517,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__source_extend__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_0));
    bufp->fullCData(oldp+77521,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_40) 
                                  << 6U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_39) 
                                             << 5U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_38) 
                                                << 4U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_37) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_36) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_35) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_34)))))))),7);
    bufp->fullIData(oldp+77522,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_33) 
                                  << 0x1fU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_32) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_31) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_30) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_29) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_28) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_27) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_26) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_25) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_24) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_23) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_22) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_21) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_20) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_19) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_18) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_17) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_16) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_15) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_14) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_13) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_12) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_11) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_10) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_9) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_8) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_7) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_6) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_5) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_4) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_3) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_2))))))))))))))))))))))))))))))))),32);
    bufp->fullCData(oldp+77523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT___dmiAccessChain_io_update_bits_op),2);
    bufp->fullBit(oldp+77524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_1));
    bufp->fullBit(oldp+77525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_2));
    bufp->fullBit(oldp+77526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_3));
    bufp->fullBit(oldp+77527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_4));
    bufp->fullBit(oldp+77528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_5));
    bufp->fullBit(oldp+77529,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_6));
    bufp->fullBit(oldp+77530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_7));
    bufp->fullBit(oldp+77531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_8));
    bufp->fullBit(oldp+77532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_9));
    bufp->fullBit(oldp+77533,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_10));
    bufp->fullBit(oldp+77534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_11));
    bufp->fullBit(oldp+77535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_12));
    bufp->fullBit(oldp+77536,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_13));
    bufp->fullBit(oldp+77537,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_14));
    bufp->fullBit(oldp+77538,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_15));
    bufp->fullBit(oldp+77539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_16));
    bufp->fullBit(oldp+77540,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_17));
    bufp->fullBit(oldp+77541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_18));
    bufp->fullBit(oldp+77542,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_19));
    bufp->fullBit(oldp+77543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_20));
    bufp->fullBit(oldp+77544,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_21));
    bufp->fullBit(oldp+77545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_22));
    bufp->fullBit(oldp+77546,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_23));
    bufp->fullBit(oldp+77547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_24));
    bufp->fullBit(oldp+77548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_25));
    bufp->fullBit(oldp+77549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_26));
    bufp->fullBit(oldp+77550,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_27));
    bufp->fullBit(oldp+77551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_28));
    bufp->fullBit(oldp+77552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_29));
    bufp->fullBit(oldp+77553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_30));
    bufp->fullBit(oldp+77554,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_31));
    bufp->fullBit(oldp+77555,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_32));
    bufp->fullBit(oldp+77556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_33));
    bufp->fullBit(oldp+77557,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_34));
    bufp->fullBit(oldp+77558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_35));
    bufp->fullBit(oldp+77559,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_36));
    bufp->fullBit(oldp+77560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_37));
    bufp->fullBit(oldp+77561,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_38));
    bufp->fullBit(oldp+77562,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_39));
    bufp->fullBit(oldp+77563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__regs_40));
    bufp->fullBit(oldp+77564,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__regs_0));
    bufp->fullBit(oldp+77565,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_bypassChain__DOT__reg_0));
    bufp->fullBit(oldp+77566,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_0));
    bufp->fullBit(oldp+77567,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_1));
    bufp->fullBit(oldp+77568,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_2));
    bufp->fullBit(oldp+77569,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_3));
    bufp->fullBit(oldp+77570,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_4));
    bufp->fullBit(oldp+77571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_5));
    bufp->fullBit(oldp+77572,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_6));
    bufp->fullBit(oldp+77573,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_7));
    bufp->fullBit(oldp+77574,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_8));
    bufp->fullBit(oldp+77575,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_9));
    bufp->fullBit(oldp+77576,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_10));
    bufp->fullBit(oldp+77577,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_11));
    bufp->fullBit(oldp+77578,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_12));
    bufp->fullBit(oldp+77579,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_13));
    bufp->fullBit(oldp+77580,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_14));
    bufp->fullBit(oldp+77581,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_15));
    bufp->fullBit(oldp+77582,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_16));
    bufp->fullBit(oldp+77583,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_17));
    bufp->fullBit(oldp+77584,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_18));
    bufp->fullBit(oldp+77585,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_19));
    bufp->fullBit(oldp+77586,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_20));
    bufp->fullBit(oldp+77587,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_21));
    bufp->fullBit(oldp+77588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_22));
    bufp->fullBit(oldp+77589,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_23));
    bufp->fullBit(oldp+77590,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_24));
    bufp->fullBit(oldp+77591,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_25));
    bufp->fullBit(oldp+77592,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_26));
    bufp->fullBit(oldp+77593,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_27));
    bufp->fullBit(oldp+77594,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_28));
    bufp->fullBit(oldp+77595,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_29));
    bufp->fullBit(oldp+77596,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_30));
    bufp->fullBit(oldp+77597,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain__DOT__regs_31));
    bufp->fullCData(oldp+77598,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode),3);
    bufp->fullSData(oldp+77599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address),9);
    bufp->fullIData(oldp+77600,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data),32);
    bufp->fullQData(oldp+77601,((0x1001e00000000ULL 
                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode)) 
                                     << 0x34U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address)) 
                                                   << 0x25U) 
                                                  | ((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data)) 
                                                     << 1U))))),55);
    bufp->fullCData(oldp+77603,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode),3);
    bufp->fullSData(oldp+77604,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address),9);
    bufp->fullIData(oldp+77605,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_data),32);
    bufp->fullCData(oldp+77606,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))),3);
    bufp->fullBit(oldp+77607,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_bits_opcode))));
    __Vtemp_25[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_bits_address;
    __Vtemp_25[1U] = 0U;
    __Vtemp_25[2U] = 0U;
    __Vtemp_25[3U] = 0U;
    bufp->fullWData(oldp+77608,(__Vtemp_25),128);
    bufp->fullCData(oldp+77612,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode),3);
    bufp->fullBit(oldp+77613,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77614,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_10__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77615,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_11__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77616,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_12__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77617,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_2__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77618,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_3__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77619,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_4__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77620,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_5__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77621,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_6__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77622,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_7__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77623,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_8__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77624,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_9__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77625,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue__DOT__do_enq));
    bufp->fullBit(oldp+77626,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_1__DOT__do_enq));
    bufp->fullBit(oldp+77627,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_10__DOT__do_enq));
    bufp->fullBit(oldp+77628,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_2__DOT__do_enq));
    bufp->fullBit(oldp+77629,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_3__DOT__do_enq));
    bufp->fullBit(oldp+77630,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_4__DOT__do_enq));
    bufp->fullBit(oldp+77631,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_5__DOT__do_enq));
    bufp->fullBit(oldp+77632,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_6__DOT__do_enq));
    bufp->fullBit(oldp+77633,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_7__DOT__do_enq));
    bufp->fullBit(oldp+77634,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_8__DOT__do_enq));
    bufp->fullBit(oldp+77635,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__Queue_9__DOT__do_enq));
    bufp->fullBit(oldp+77636,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__do_enq));
    bufp->fullBit(oldp+77637,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_1__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77638,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_13__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77639,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_14__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77640,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__element_reset_domain_rockettile__DOT__zzguard_fifox_15__DOT__q__DOT__do_deq));
    bufp->fullBit(oldp+77641,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__Queue__DOT__do_enq));
    bufp->fullBit(oldp+77642,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__Queue_1__DOT__do_enq));
    bufp->fullBit(oldp+77643,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__Queue_2__DOT__do_enq));
    bufp->fullBit(oldp+77644,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__q_rocc__DOT__do_enq));
    bufp->fullBit(oldp+77645,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT___widx_T_1));
    bufp->fullBit(oldp+77646,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeIn_d_source__DOT__widx));
    bufp->fullBit(oldp+77647,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__ridx));
    bufp->fullBit(oldp+77648,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__nodeOut_a_sink__DOT__valid));
    bufp->fullBit(oldp+77649,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_io_dmi_dmi_resp_valid));
    bufp->fullCData(oldp+77650,(vlSelf->__VdfgTmp_h3d13b151__0),2);
    bufp->fullBit(oldp+77651,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__busy));
    bufp->fullCData(oldp+77652,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_capture_bits_addr),7);
    bufp->fullIData(oldp+77653,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_capture_bits_data),32);
    bufp->fullCData(oldp+77654,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT____Vcellinp__dmiAccessChain__io_capture_bits_resp),2);
    bufp->fullBit(oldp+77655,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiBypass_auto_node_out_out_a_valid));
    bufp->fullBit(oldp+77656,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT___widx_T_1));
    bufp->fullBit(oldp+77657,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_set));
    bufp->fullBit(oldp+77658,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+77659,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__widx));
    bufp->fullBit(oldp+77660,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_in_d_bits_denied));
    bufp->fullBit(oldp+77661,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT___dmiXbar_auto_in_d_bits_corrupt));
    bufp->fullBit(oldp+77662,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_valid));
    bufp->fullCData(oldp+77663,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_opcode),3);
    bufp->fullCData(oldp+77664,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param),2);
    bufp->fullCData(oldp+77665,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size),2);
    bufp->fullBit(oldp+77666,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink));
    bufp->fullBit(oldp+77667,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_denied));
    bufp->fullBit(oldp+77668,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_corrupt));
    bufp->fullBit(oldp+77669,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___bar_auto_out_0_a_valid));
    bufp->fullBit(oldp+77670,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_valid));
    bufp->fullCData(oldp+77671,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_bits_opcode),3);
    bufp->fullCData(oldp+77672,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_bits_denied) 
                                 << 1U)),2);
    bufp->fullBit(oldp+77673,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_bits_denied));
    bufp->fullBit(oldp+77674,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_bits_corrupt));
    bufp->fullBit(oldp+77675,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass));
    bufp->fullBit(oldp+77676,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall));
    bufp->fullBit(oldp+77677,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source));
    bufp->fullBit(oldp+77678,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_opcode))));
    bufp->fullBit(oldp+77679,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+77680,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__winner_1));
    bufp->fullBit(oldp+77681,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT___error_auto_in_d_bits_opcode))));
    bufp->fullCData(oldp+77682,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+77683,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+77684,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__winner_0));
    bufp->fullBit(oldp+77685,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__winner_1));
    bufp->fullBit(oldp+77686,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_0));
    bufp->fullBit(oldp+77687,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_1));
    bufp->fullCData(oldp+77688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_opcode),3);
    bufp->fullCData(oldp+77689,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_0)
                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_param)
                                  : 0U)),2);
    bufp->fullCData(oldp+77690,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_0)
                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_size)
                                   : 0U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_1) 
                                            << 1U))),2);
    bufp->fullBit(oldp+77691,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__muxState_0) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__nodeIn_d_bits_sink))));
    bufp->fullBit(oldp+77692,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____Vcellinp__monitor__io_in_d_bits_opcode))));
    bufp->fullBit(oldp+77693,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77697,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77702,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77708,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77710,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullCData(oldp+77711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__widx),4);
    bufp->fullCData(oldp+77712,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__ridx),4);
    bufp->fullBit(oldp+77713,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__valid));
    bufp->fullCData(oldp+77714,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77715,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__valid));
    bufp->fullCData(oldp+77716,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77717,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__valid));
    bufp->fullCData(oldp+77718,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__widx),4);
    bufp->fullCData(oldp+77719,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__widx),4);
    bufp->fullCData(oldp+77720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__widx),4);
    bufp->fullCData(oldp+77721,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__valid));
    bufp->fullCData(oldp+77723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__valid));
    bufp->fullCData(oldp+77725,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__widx),4);
    bufp->fullCData(oldp+77726,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__widx),4);
    bufp->fullCData(oldp+77727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__widx),4);
    bufp->fullCData(oldp+77728,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77729,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_b_sink__DOT__valid));
    bufp->fullCData(oldp+77730,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__ridx),4);
    bufp->fullBit(oldp+77731,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeIn_d_sink__DOT__valid));
    bufp->fullCData(oldp+77732,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__widx),4);
    bufp->fullCData(oldp+77733,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__widx),4);
    bufp->fullCData(oldp+77734,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__widx),4);
    bufp->fullBit(oldp+77735,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77736,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77737,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77738,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77739,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77740,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77741,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77742,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77743,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77744,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77745,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77746,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__out_async__DOT__sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77747,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77748,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77749,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77750,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77751,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77752,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77753,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77754,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77755,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77756,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77757,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77758,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77759,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77760,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77761,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77762,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77763,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77764,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77765,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77766,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77767,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77768,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77769,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77770,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77771,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77772,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77773,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77774,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77775,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+77776,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+77777,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77778,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77779,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77780,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_d_sink__DOT__sink_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77781,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__source_valid_1__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+77782,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeIn_b_sink__DOT__sink_valid_0__DOT__io_out_sink_valid_0__DOT__output_chain__DOT__sync_0));
}
