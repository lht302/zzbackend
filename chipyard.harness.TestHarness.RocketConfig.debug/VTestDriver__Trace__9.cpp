// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestDriver__Syms.h"


extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h4e9f510d_0;
extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h9e67c271_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hebe77906_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;
extern const VlWide<16>/*511:0*/ VTestDriver__ConstPool__CONST_h93e1b771_0;

void VTestDriver___024root__trace_chg_0_sub_9(VTestDriver___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root__trace_chg_0_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 54552);
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<8>/*255:0*/ __Vtemp_15;
    VlWide<8>/*255:0*/ __Vtemp_16;
    VlWide<8>/*255:0*/ __Vtemp_17;
    VlWide<8>/*255:0*/ __Vtemp_18;
    VlWide<16>/*511:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_37;
    VlWide<8>/*255:0*/ __Vtemp_53;
    VlWide<8>/*255:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        VL_SHIFTL_WWI(256,256,8, __Vtemp_1, VTestDriver__ConstPool__CONST_h4e9f510d_0, 
                      (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                >> 0xbU)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) {
            __Vtemp_2[0U] = __Vtemp_1[0U];
            __Vtemp_2[1U] = __Vtemp_1[1U];
            __Vtemp_2[2U] = __Vtemp_1[2U];
            __Vtemp_2[3U] = __Vtemp_1[3U];
            __Vtemp_2[4U] = __Vtemp_1[4U];
            __Vtemp_2[5U] = __Vtemp_1[5U];
            __Vtemp_2[6U] = __Vtemp_1[6U];
            __Vtemp_2[7U] = __Vtemp_1[7U];
        } else {
            __Vtemp_2[0U] = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
            __Vtemp_2[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
            __Vtemp_2[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
            __Vtemp_2[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
            __Vtemp_2[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
            __Vtemp_2[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
            __Vtemp_2[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
            __Vtemp_2[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        }
        bufp->chgWData(oldp+0,(__Vtemp_2),256);
        bufp->chgBit(oldp+8,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+9,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap));
        bufp->chgBit(oldp+10,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
        bufp->chgBit(oldp+11,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+12,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+13,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__empty));
        bufp->chgBit(oldp+14,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
        bufp->chgBit(oldp+15,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
        bufp->chgBit(oldp+16,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
        bufp->chgWData(oldp+17,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),86);
        bufp->chgWData(oldp+20,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),86);
        bufp->chgWData(oldp+23,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),86);
        bufp->chgBit(oldp+26,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap));
        bufp->chgBit(oldp+27,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
        bufp->chgBit(oldp+28,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+29,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+30,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__empty));
        bufp->chgBit(oldp+31,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
        bufp->chgBit(oldp+32,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
        bufp->chgBit(oldp+33,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
        __Vtemp_3[1U] = (((IData)((((QData)((IData)(
                                                    (0x7ffU 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                                    << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                    >> 0xbU)))))) 
                          << 0x1aU) | (IData)(((((QData)((IData)(
                                                                 (0xffU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                     >> 1U)))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_address)) 
                                                    << 0x12U) 
                                                   | (QData)((IData)(
                                                                     ((0x3fc00U 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                          >> 1U)) 
                                                                      | ((0x3c0U 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                             >> 0xdU)) 
                                                                         | ((0x38U 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0x18U)) 
                                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode)))))))) 
                                               >> 0x20U)));
        __Vtemp_4[0U] = (IData)((((QData)((IData)((0xffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                      >> 1U)))) 
                                  << 0x32U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_address)) 
                                                << 0x12U) 
                                               | (QData)((IData)(
                                                                 ((0x3fc00U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                      >> 1U)) 
                                                                  | ((0x3c0U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                         >> 0xdU)) 
                                                                     | ((0x38U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                            >> 0x18U)) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___serial_tl_domain_auto_serdesser_client_out_a_bits_opcode)))))))));
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (((IData)((((QData)((IData)(
                                                    (0x7ffU 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                                    << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                    >> 0xbU)))))) 
                          >> 6U) | ((IData)(((((QData)((IData)(
                                                               (0x7ffU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                                               << 0x35U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                    >> 0xbU))))) 
                                             >> 0x20U)) 
                                    << 0x1aU));
        __Vtemp_4[3U] = ((0x4000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                        << 0x10U)) 
                         | ((IData)(((((QData)((IData)(
                                                       (0x7ffU 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2))) 
                                       << 0x35U) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1)) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                                     >> 0xbU))))) 
                                     >> 0x20U)) >> 6U));
        bufp->chgWData(oldp+34,(__Vtemp_4),123);
        bufp->chgWData(oldp+38,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),123);
        bufp->chgWData(oldp+42,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),123);
        bufp->chgBit(oldp+46,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_a_ready));
        bufp->chgBit(oldp+47,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_a_valid));
        bufp->chgBit(oldp+48,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_tl_out_d_ready));
        bufp->chgBit(oldp+49,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_valid));
        bufp->chgCData(oldp+50,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins),3);
        bufp->chgCData(oldp+51,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_size),3);
        bufp->chgCData(oldp+52,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_source),4);
        bufp->chgBit(oldp+53,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_denied));
        bufp->chgBit(oldp+54,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_corrupt));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Faw_ready_reg) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h42f03b9a__0))));
        bufp->chgBit(oldp+56,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_valid));
        bufp->chgCData(oldp+57,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_echo_tl_state_size),4);
        bufp->chgCData(oldp+58,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_aw_bits_echo_tl_state_source),4);
        bufp->chgCData(oldp+59,((0xfU & (IData)(((((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram) 
                                                                         << 0x1cU) 
                                                                        | ((0xf000000U 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram) 
                                                                               << 0x18U)) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram) 
                                                                                << 0x14U)) 
                                                                              | ((0xf0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram))))))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg), 2U)))))),4);
        bufp->chgCData(oldp+60,((0xfU & (IData)(((((QData)((IData)(
                                                                   (0xfU 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram) 
                                                                       >> 4U)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram) 
                                                                          >> 4U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((0xf0000000U 
                                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram) 
                                                                            << 0x18U)) 
                                                                        | ((0xf000000U 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram) 
                                                                               << 0x14U)) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram) 
                                                                                << 0x10U)) 
                                                                              | ((0xf0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram) 
                                                                                << 0xcU)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram) 
                                                                                << 8U)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram) 
                                                                                << 4U)) 
                                                                                | ((0xf0U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram) 
                                                                                >> 4U))))))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg), 2U)))))),4);
        bufp->chgBit(oldp+61,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Far_ready_reg) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT____VdfgTmp_h1a71d5b7__0))));
        bufp->chgBit(oldp+62,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT___tl2axi4_auto_out_ar_valid));
        bufp->chgCData(oldp+63,((0xfU & (IData)(((((QData)((IData)(
                                                                   (0xfU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram) 
                                                                         << 0x1cU) 
                                                                        | ((0xf000000U 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram) 
                                                                               << 0x18U)) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram) 
                                                                                << 0x14U)) 
                                                                              | ((0xf0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram))))))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg), 2U)))))),4);
        bufp->chgCData(oldp+64,((0xfU & (IData)(((((QData)((IData)(
                                                                   (0xfU 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram) 
                                                                       >> 4U)))) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      (0xfU 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram) 
                                                                          >> 4U)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       ((0xf0000000U 
                                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram) 
                                                                            << 0x18U)) 
                                                                        | ((0xf000000U 
                                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram) 
                                                                               << 0x14U)) 
                                                                           | ((0xf00000U 
                                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram) 
                                                                                << 0x10U)) 
                                                                              | ((0xf0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram) 
                                                                                << 0xcU)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram) 
                                                                                << 8U)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram) 
                                                                                << 4U)) 
                                                                                | ((0xf0U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram)) 
                                                                                | (0xfU 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram) 
                                                                                >> 4U))))))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg), 2U)))))),4);
        bufp->chgBit(oldp+65,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full)))));
        bufp->chgBit(oldp+66,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+67,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                               & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+68,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full));
        bufp->chgCData(oldp+69,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram))),4);
        bufp->chgCData(oldp+70,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+71,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram),8);
        bufp->chgBit(oldp+72,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq));
        bufp->chgBit(oldp+73,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full)))));
        bufp->chgBit(oldp+74,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                               & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                               & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+76,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full));
        bufp->chgCData(oldp+77,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram))),4);
        bufp->chgCData(oldp+78,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+79,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram),8);
        bufp->chgBit(oldp+80,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq));
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full)))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                               & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+84,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full));
        bufp->chgCData(oldp+85,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram))),4);
        bufp->chgCData(oldp+86,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+87,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram),8);
        bufp->chgBit(oldp+88,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq));
        bufp->chgBit(oldp+89,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full)))));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                               & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                               & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+92,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full));
        bufp->chgCData(oldp+93,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram))),4);
        bufp->chgCData(oldp+94,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+95,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram),8);
        bufp->chgBit(oldp+96,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq));
        bufp->chgBit(oldp+97,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full)))));
        bufp->chgBit(oldp+98,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                               & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+99,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                               & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full));
        bufp->chgCData(oldp+101,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram))),4);
        bufp->chgCData(oldp+102,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram),8);
        bufp->chgBit(oldp+104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq));
        bufp->chgBit(oldp+105,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full)))));
        bufp->chgBit(oldp+106,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+107,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full));
        bufp->chgCData(oldp+109,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram))),4);
        bufp->chgCData(oldp+110,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram),8);
        bufp->chgBit(oldp+112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq));
        bufp->chgBit(oldp+113,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full)))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full));
        bufp->chgCData(oldp+117,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram))),4);
        bufp->chgCData(oldp+118,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram),8);
        bufp->chgBit(oldp+120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq));
        bufp->chgBit(oldp+121,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full)))));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full));
        bufp->chgCData(oldp+125,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram))),4);
        bufp->chgCData(oldp+126,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram),8);
        bufp->chgBit(oldp+128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq));
        bufp->chgBit(oldp+129,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full)))));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full));
        bufp->chgCData(oldp+133,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram))),4);
        bufp->chgCData(oldp+134,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+135,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram),8);
        bufp->chgBit(oldp+136,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq));
        bufp->chgBit(oldp+137,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full)))));
        bufp->chgBit(oldp+138,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full));
        bufp->chgCData(oldp+141,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram))),4);
        bufp->chgCData(oldp+142,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram),8);
        bufp->chgBit(oldp+144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq));
        bufp->chgBit(oldp+145,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full)))));
        bufp->chgBit(oldp+146,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+147,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full));
        bufp->chgCData(oldp+149,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram))),4);
        bufp->chgCData(oldp+150,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram),8);
        bufp->chgBit(oldp+152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq));
        bufp->chgBit(oldp+153,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full)))));
        bufp->chgBit(oldp+154,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_enq_valid_T) 
                                & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+155,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                                & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg)))));
        bufp->chgBit(oldp+156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full));
        bufp->chgCData(oldp+157,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram))),4);
        bufp->chgCData(oldp+158,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram),8);
        bufp->chgBit(oldp+160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq));
        bufp->chgBit(oldp+161,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full)))));
        bufp->chgBit(oldp+162,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+163,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full));
        bufp->chgCData(oldp+165,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram))),4);
        bufp->chgCData(oldp+166,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram),8);
        bufp->chgBit(oldp+168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq));
        bufp->chgBit(oldp+169,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full)))));
        bufp->chgBit(oldp+170,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+171,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full));
        bufp->chgCData(oldp+173,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram))),4);
        bufp->chgCData(oldp+174,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram),8);
        bufp->chgBit(oldp+176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq));
        bufp->chgBit(oldp+177,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full)))));
        bufp->chgBit(oldp+178,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+179,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full));
        bufp->chgCData(oldp+181,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram))),4);
        bufp->chgCData(oldp+182,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram),8);
        bufp->chgBit(oldp+184,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq));
        bufp->chgBit(oldp+185,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full)))));
        bufp->chgBit(oldp+186,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+187,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+188,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full));
        bufp->chgCData(oldp+189,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram))),4);
        bufp->chgCData(oldp+190,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+191,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram),8);
        bufp->chgBit(oldp+192,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq));
        bufp->chgBit(oldp+193,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full)))));
        bufp->chgBit(oldp+194,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+195,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full));
        bufp->chgCData(oldp+197,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram))),4);
        bufp->chgCData(oldp+198,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram),8);
        bufp->chgBit(oldp+200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq));
        bufp->chgBit(oldp+201,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full)))));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+203,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full));
        bufp->chgCData(oldp+205,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram))),4);
        bufp->chgCData(oldp+206,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram),8);
        bufp->chgBit(oldp+208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq));
        bufp->chgBit(oldp+209,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full)))));
        bufp->chgBit(oldp+210,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+211,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+212,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full));
        bufp->chgCData(oldp+213,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram))),4);
        bufp->chgCData(oldp+214,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+215,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram),8);
        bufp->chgBit(oldp+216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq));
        bufp->chgBit(oldp+217,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full)))));
        bufp->chgBit(oldp+218,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_enq_valid_T) 
                                & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT___chiptop0_axi4_mem_0_bits_aw_bits_id)))));
        bufp->chgBit(oldp+219,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                                & ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+220,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full));
        bufp->chgCData(oldp+221,((0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram))),4);
        bufp->chgCData(oldp+222,((0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+223,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram),8);
        bufp->chgBit(oldp+224,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq));
        bufp->chgBit(oldp+225,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10));
        bufp->chgBit(oldp+226,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9));
        bufp->chgBit(oldp+227,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8));
        bufp->chgBit(oldp+228,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7));
        bufp->chgBit(oldp+229,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6));
        bufp->chgBit(oldp+230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5));
        bufp->chgBit(oldp+231,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4));
        bufp->chgBit(oldp+232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3));
        bufp->chgBit(oldp+233,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2));
        bufp->chgBit(oldp+234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1));
        bufp->chgCData(oldp+235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__beats1),3);
        bufp->chgCData(oldp+236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter),3);
        bufp->chgBit(oldp+237,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__counter))));
        bufp->chgBit(oldp+238,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last));
        bufp->chgBit(oldp+239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__doneAW));
        bufp->chgBit(oldp+240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__stall));
        bufp->chgBit(oldp+241,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_arw_valid));
        bufp->chgBit(oldp+242,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_holds_d));
        bufp->chgCData(oldp+243,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay),3);
        bufp->chgBit(oldp+244,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins));
        bufp->chgBit(oldp+245,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_first));
        bufp->chgBit(oldp+246,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_denied_r));
        bufp->chgBit(oldp+247,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_d_denied));
        bufp->chgCData(oldp+248,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount),4);
        bufp->chgBit(oldp+249,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg)))));
        bufp->chgBit(oldp+250,(((0U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+251,(((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+252,(((1U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+253,(((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+254,(((2U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+255,(((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+256,(((3U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+257,(((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+258,(((4U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+259,(((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+260,(((5U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+261,(((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+262,(((6U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+263,(((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+264,(((7U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+265,(((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+266,(((8U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+267,(((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgBit(oldp+268,(((9U == (0xfU & (IData)(
                                                       (0x9876543210ULL 
                                                        >> 
                                                        (0x3fU 
                                                         & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___inc_T_9))));
        bufp->chgBit(oldp+269,(((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_h82aaca62__0))));
        bufp->chgCData(oldp+270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+271,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+276,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+277,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+278,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+279,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__source_1),4);
        bufp->chgBit(oldp+280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight),10);
        bufp->chgQData(oldp+282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+284,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+286,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+287,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+288,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+289,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+290,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+291,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_1),10);
        bufp->chgQData(oldp+292,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+294,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+295,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+297,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x3ffU & ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                   : 0U)),10);
        bufp->chgBit(oldp+298,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+299,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full)))));
        bufp->chgBit(oldp+300,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__nodeOut_w_deq_q__io_enq_valid));
        bufp->chgWData(oldp+301,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__ram),73);
        bufp->chgBit(oldp+304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full));
        bufp->chgBit(oldp+305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__do_enq));
        bufp->chgBit(oldp+306,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full)))));
        bufp->chgCData(oldp+307,((0xfU & (IData)((0x9876543210ULL 
                                                  >> 
                                                  (0x3fU 
                                                   & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source), 2U)))))),4);
        bufp->chgCData(oldp+308,((0xffU & (~ (0x7fffU 
                                              & (((IData)(0x7ffU) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                 >> 3U))))),8);
        bufp->chgCData(oldp+309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_enq_bits_size),3);
        bufp->chgCData(oldp+310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size),4);
        bufp->chgBit(oldp+311,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_he7c8db21__0)))));
        bufp->chgBit(oldp+312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq_q__io_deq_ready));
        bufp->chgBit(oldp+313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT___io_deq_valid_output));
        bufp->chgBit(oldp+314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___queue_arw_deq_q_io_deq_bits_wen));
        bufp->chgWData(oldp+315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__ram),70);
        bufp->chgBit(oldp+318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__full));
        bufp->chgBit(oldp+319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq_q__DOT__do_enq));
        bufp->chgCData(oldp+320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__source_1),4);
        bufp->chgBit(oldp+330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__inflight),10);
        bufp->chgQData(oldp+332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+336,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+337,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+338,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+339,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+340,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__inflight_1),10);
        bufp->chgQData(oldp+342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+344,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+345,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+347,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x3ffU & ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                   : 0U)),10);
        bufp->chgBit(oldp+348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft),3);
        bufp->chgBit(oldp+350,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+352,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_mask),2);
        bufp->chgCData(oldp+353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__winner_0));
        bufp->chgBit(oldp+355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__winner_1));
        bufp->chgBit(oldp+356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__state_0));
        bufp->chgBit(oldp+357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__state_1));
        bufp->chgBit(oldp+358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0));
        bufp->chgBit(oldp+359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1));
        bufp->chgBit(oldp+360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__latch));
        bufp->chgCData(oldp+361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__source_1),4);
        bufp->chgBit(oldp+371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__inflight),10);
        bufp->chgQData(oldp+373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+377,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+378,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+380,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__inflight_1),10);
        bufp->chgQData(oldp+383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+386,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+388,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x3ffU & ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                   : 0U)),10);
        bufp->chgBit(oldp+389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__size),3);
        bufp->chgCData(oldp+394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__source),4);
        bufp->chgIData(oldp+395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__address),32);
        bufp->chgCData(oldp+396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__size_1),3);
        bufp->chgCData(oldp+399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__source_1),4);
        bufp->chgBit(oldp+400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__denied));
        bufp->chgSData(oldp+401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight),10);
        bufp->chgQData(oldp+402,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+404,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+406,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+407,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+408,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+409,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog),32);
        bufp->chgSData(oldp+411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_1),10);
        bufp->chgQData(oldp+412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+415,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgSData(oldp+417,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT___same_cycle_resp_T_1)
                                   ? (0x3ffU & ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                   : 0U)),10);
        bufp->chgBit(oldp+418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter),3);
        bufp->chgCData(oldp+420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__size),3);
        bufp->chgCData(oldp+423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__source),4);
        bufp->chgIData(oldp+424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__address),28);
        bufp->chgCData(oldp+425,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter),3);
        bufp->chgCData(oldp+426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__size_1),3);
        bufp->chgCData(oldp+428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__source_1),4);
        bufp->chgSData(oldp+429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight),10);
        bufp->chgQData(oldp+430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_opcodes),40);
        bufp->chgQData(oldp+432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes),40);
        bufp->chgCData(oldp+434,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+435,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+436,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+437,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+438,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgSData(oldp+439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_1),10);
        bufp->chgQData(oldp+440,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes_1),40);
        bufp->chgCData(oldp+442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+443,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__watchdog_1),32);
        bufp->chgSData(oldp+445,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                   ? (0x3ffU & ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                                   : 0U)),10);
        bufp->chgBit(oldp+446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__same_cycle_resp));
        bufp->chgQData(oldp+447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad),64);
        bufp->chgBit(oldp+449,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_ready) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_allow))));
        bufp->chgBit(oldp+450,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__empty)))));
        bufp->chgCData(oldp+451,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+452,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+453,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgSData(oldp+454,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))),10);
        bufp->chgIData(oldp+455,((0x1fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xdU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x13U)))),29);
        bufp->chgCData(oldp+456,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x10U))),8);
        bufp->chgQData(oldp+457,((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x18U)))),64);
        bufp->chgBit(oldp+459,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+460,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__full)))));
        bufp->chgBit(oldp+461,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_valid));
        bufp->chgCData(oldp+462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_opcode),3);
        bufp->chgCData(oldp+463,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),2);
        bufp->chgCData(oldp+464,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 5U))),3);
        bufp->chgSData(oldp+465,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 8U))),10);
        bufp->chgBit(oldp+466,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_denied));
        bufp->chgQData(oldp+468,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace)
                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data
                                   : (((QData)((IData)(
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                        >> 0x14U))))),64);
        bufp->chgBit(oldp+470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_corrupt));
        bufp->chgBit(oldp+471,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))));
        bufp->chgBit(oldp+472,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_valid));
        bufp->chgCData(oldp+473,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+475,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size),3);
        bufp->chgSData(oldp+476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source),10);
        bufp->chgIData(oldp+477,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address),29);
        bufp->chgCData(oldp+478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_mask),8);
        bufp->chgQData(oldp+479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data),64);
        bufp->chgBit(oldp+481,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_0) 
                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_1) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 0x18U)))));
        bufp->chgBit(oldp+482,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__full)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_drop)))));
        bufp->chgBit(oldp+483,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)))));
        bufp->chgCData(oldp+484,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgBit(oldp+485,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 0x13U))));
        bufp->chgQData(oldp+486,((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x14U)))),64);
        bufp->chgBit(oldp+488,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_ready));
        bufp->chgCData(oldp+490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state),2);
        bufp->chgCData(oldp+491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_opcode),3);
        bufp->chgCData(oldp+492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_param),3);
        bufp->chgCData(oldp+493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_size),3);
        bufp->chgSData(oldp+494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_source),10);
        bufp->chgIData(oldp+495,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_address),29);
        bufp->chgCData(oldp+496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_mask),8);
        bufp->chgQData(oldp+497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_data),64);
        bufp->chgBit(oldp+499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt));
        bufp->chgCData(oldp+500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_lut),4);
        bufp->chgQData(oldp+501,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data),64);
        bufp->chgBit(oldp+503,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_denied));
        bufp->chgBit(oldp+504,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_corrupt));
        bufp->chgBit(oldp+505,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state))));
        bufp->chgBit(oldp+506,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_s_0_state))));
        bufp->chgBit(oldp+507,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_isSupported));
        bufp->chgQData(oldp+508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__wide_mask),64);
        bufp->chgQData(oldp+510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_a_ext),64);
        bufp->chgQData(oldp+512,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_d_ext),64);
        bufp->chgBit(oldp+514,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__a_allow));
        bufp->chgBit(oldp+515,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_i_valid));
        bufp->chgBit(oldp+516,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
        bufp->chgBit(oldp+517,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc));
        bufp->chgBit(oldp+518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_1));
        bufp->chgBit(oldp+519,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_size)))));
        bufp->chgBit(oldp+520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_2));
        bufp->chgBit(oldp+521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_2));
        bufp->chgBit(oldp+522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_3));
        bufp->chgBit(oldp+523,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_3));
        bufp->chgBit(oldp+524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_4));
        bufp->chgBit(oldp+525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_4));
        bufp->chgBit(oldp+526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_eq_5));
        bufp->chgBit(oldp+527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__source_c_bits_a_mask_acc_5));
        bufp->chgCData(oldp+528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__beatsLeft),3);
        bufp->chgBit(oldp+529,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__beatsLeft))));
        bufp->chgBit(oldp+530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__winner_1));
        bufp->chgBit(oldp+531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_0));
        bufp->chgBit(oldp+532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__state_1));
        bufp->chgBit(oldp+533,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_0));
        bufp->chgBit(oldp+534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_1));
        bufp->chgCData(oldp+535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_first_counter),3);
        bufp->chgBit(oldp+536,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_first_counter))));
        bufp->chgBit(oldp+537,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_cam_sel_0));
        bufp->chgBit(oldp+538,((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgBit(oldp+539,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_drop));
        bufp->chgBit(oldp+540,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace));
        bufp->chgCData(oldp+541,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+542,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+543,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+544,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+545,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+546,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+550,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__source_1),10);
        bufp->chgBit(oldp+552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+554,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+571,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+636,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+702,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+704,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+705,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_opcode))));
        bufp->chgIData(oldp+706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+790,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+791,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__source_ok));
        bufp->chgBit(oldp+793,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+794,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x2000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+795,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x200080U 
                                           == (0x2000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+796,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+797,((IData)((0U == (0x300000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+798,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x80U == 
                                            (0x2000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x40U == 
                                           (0x3000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+799,((IData)((0x100000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+800,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x80U == 
                                            (0x2000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x100040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+801,((IData)((0x200000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+802,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x200080U 
                                            == (0x2000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x200040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+803,((IData)((0x300000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+804,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x200080U 
                                            == (0x2000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x300040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgCData(oldp+805,(((0x80U & (((((2U 
                                                < (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                               | (IData)(
                                                         (0x200080U 
                                                          == 
                                                          (0x2000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              | (IData)(
                                                        (0x300040U 
                                                         == 
                                                         (0x3000c0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             | (IData)(
                                                       (0x380000U 
                                                        == 
                                                        (0x380000U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                            << 7U)) 
                                  | ((0x40U & (((((2U 
                                                   < 
                                                   (7U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            (0x200080U 
                                                             == 
                                                             (0x2000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 | (IData)(
                                                           (0x300040U 
                                                            == 
                                                            (0x3000c0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x380000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               << 6U)) 
                                     | ((0x20U & ((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(
                                                               (0x200080U 
                                                                == 
                                                                (0x2000c0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    | (IData)(
                                                              (0x200040U 
                                                               == 
                                                               (0x3000c0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                   | (IData)(
                                                             (0x280000U 
                                                              == 
                                                              (0x380000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((((2U 
                                                 < 
                                                 (7U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                | (IData)(
                                                          (0x200080U 
                                                           == 
                                                           (0x2000c0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               | (IData)(
                                                         (0x200040U 
                                                          == 
                                                          (0x3000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              | (IData)(
                                                        (0x200000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((((2U 
                                                    < 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x2000c0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  | (IData)(
                                                            (0x100040U 
                                                             == 
                                                             (0x3000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 | (IData)(
                                                           (0x180000U 
                                                            == 
                                                            (0x380000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x80U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x100040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x100000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x80U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x40U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x80000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((2U 
                                                             < 
                                                             (7U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 6U))) 
                                                            | (IData)(
                                                                      (0x80U 
                                                                       == 
                                                                       (0x2000c0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x40U 
                                                                      == 
                                                                      (0x3000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x380000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))))))))))),8);
        bufp->chgBit(oldp+806,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x10U))) 
                                | ((0x18U == (0x3fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xcU))) 
                                   | ((0x190U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 8U))) 
                                      | ((0x1a0U == 
                                          (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 8U))) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xcU))) 
                                            | ((0x150U 
                                                == 
                                                (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 8U))) 
                                               | ((0x160U 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 8U))) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xcU))) 
                                                     | ((0x110U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 8U))) 
                                                        | ((0x120U 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 8U))) 
                                                           | (0x200U 
                                                              == 
                                                              (0x3ffU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 8U)))))))))))))));
        VL_SHIFTL_WWI(513,513,10, __Vtemp_5, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 9U)));
        __Vtemp_7[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_7[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_7[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_7[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_7[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_7[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_7[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_7[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_7[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_7[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_5[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_7[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xaU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_7[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xbU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_7[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xcU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_7[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xdU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_7[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xeU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_7[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_5[0xfU] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_7[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_5[0x10U] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+807,(__Vtemp_7),513);
        bufp->chgBit(oldp+824,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+825,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty)))));
        bufp->chgBit(oldp+826,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))));
        bufp->chgCData(oldp+827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+830,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+831,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+832,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+833,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+834,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+835,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+836,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+837,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__source_1),10);
        bufp->chgBit(oldp+838,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+839,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+840,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+857,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+922,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+988,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+990,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+991,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+1010,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+1075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1076,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+1077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+1078,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                       >> 8U))))) 
                                       | ((0x18U == 
                                           (0x3fU & 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                             >> 4U))) 
                                          | ((0x190U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                             | ((0x1a0U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                                | ((0x14U 
                                                    == 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                        >> 4U))) 
                                                   | ((0x150U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                                      | ((0x160U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                                         | ((0x10U 
                                                             == 
                                                             (0x3fU 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                 >> 4U))) 
                                                            | ((0x110U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                                               | ((0x120U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)) 
                                                                  | (0x200U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source)))))))))))))));
        bufp->chgBit(oldp+1079,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+1080,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                        >> 2U)) & (2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)))))));
        bufp->chgBit(oldp+1081,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                 | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                       >> 2U)))));
        bufp->chgBit(oldp+1082,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)))));
        bufp->chgBit(oldp+1083,((IData)((0U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))));
        bufp->chgBit(oldp+1084,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                         >> 2U)) & 
                                     (2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                 | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                    & (IData)((0U == 
                                               (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))))));
        bufp->chgBit(oldp+1085,((IData)((2U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))));
        bufp->chgBit(oldp+1086,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                         >> 2U)) & 
                                     (2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                 | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                    & (IData)((2U == 
                                               (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))))));
        bufp->chgBit(oldp+1087,((IData)((4U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))));
        bufp->chgBit(oldp+1088,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                  | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                        >> 2U))) | 
                                 ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                  & (IData)((4U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))))));
        bufp->chgBit(oldp+1089,((IData)((6U == (6U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))));
        bufp->chgBit(oldp+1090,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                  | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                        >> 2U))) | 
                                 ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                  & (IData)((6U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))))));
        bufp->chgCData(oldp+1091,(((0x80U & (((((2U 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                << 7U) 
                                               | (0xffffff80U 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                      << 7U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                        << 5U)))) 
                                              | (((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                << 7U))) 
                                   | ((0x40U & ((((
                                                   (2U 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                   << 6U) 
                                                  | (0xffffffc0U 
                                                     & (((2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                         << 6U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                           << 4U)))) 
                                                 | (((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                     & (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                   << 6U))) 
                                      | ((0x20U & (
                                                   ((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & (((2U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                            << 5U) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                              << 3U)))) 
                                                    | (((1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                        & (IData)(
                                                                  (4U 
                                                                   == 
                                                                   (6U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                       << 5U)) 
                                                   | ((IData)(
                                                              (5U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                      << 5U))) 
                                         | ((0x10U 
                                             & (((((2U 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                   << 4U) 
                                                  | (0xfffffff0U 
                                                     & (((2U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                         << 4U) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                           << 2U)))) 
                                                 | (((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                     & (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))) 
                                                   << 4U))) 
                                            | ((8U 
                                                & (((((2U 
                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                           >> 2U)) 
                                                         & (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                     | ((1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                        & (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (6U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                    | (IData)(
                                                              (3U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((2U 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                         | ((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                              >> 2U)) 
                                                            & (2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                        | ((1U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                           & (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (6U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                       | (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((2U 
                                                             < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                           | ((1U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size)) 
                                                             | ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address 
                                                                  >> 2U)) 
                                                                & (2U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))))) 
                                                            | ((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size))) 
                                                               & (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address))))))))))))),8);
        VL_SHIFTL_WWI(513,513,10, __Vtemp_8, VTestDriver__ConstPool__CONST_hebe77906_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source));
        __Vtemp_10[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_10[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_10[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_10[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_10[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_10[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_10[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_10[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_10[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_10[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_8[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_10[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xaU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_10[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xbU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_10[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xcU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_10[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xdU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_10[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xeU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_10[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_8[0xfU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_10[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_8[0x10U]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+1092,(__Vtemp_10),513);
        bufp->chgBit(oldp+1109,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1110,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap));
        bufp->chgBit(oldp+1111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1));
        bufp->chgBit(oldp+1112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+1113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+1114,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__empty));
        bufp->chgBit(oldp+1115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full));
        bufp->chgBit(oldp+1116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
        bufp->chgWData(oldp+1117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),85);
        bufp->chgWData(oldp+1120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),85);
        bufp->chgWData(oldp+1123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),85);
        bufp->chgBit(oldp+1126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap));
        bufp->chgBit(oldp+1127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1));
        bufp->chgBit(oldp+1128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+1129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+1130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__empty));
        bufp->chgBit(oldp+1131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__full));
        bufp->chgBit(oldp+1132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
        __Vtemp_12[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                   << 0x30U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                 << 0x13U) 
                                                | (QData)((IData)(
                                                                  (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
        __Vtemp_12[1U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data) 
                           << 0x18U) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                        << 9U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                              << 3U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                                >> 0x20U)));
        __Vtemp_12[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data) 
                           >> 8U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data 
                                              >> 0x20U)) 
                                     << 0x18U));
        __Vtemp_12[3U] = ((0xff000000U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_0) 
                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                           << 0x18U) 
                                          | (0xff000000U 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_1) 
                                                 << 0x18U) 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])))) 
                          | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data 
                                      >> 0x20U)) >> 8U));
        bufp->chgWData(oldp+1133,(__Vtemp_12),121);
        bufp->chgWData(oldp+1137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),121);
        bufp->chgWData(oldp+1141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),121);
        bufp->chgCData(oldp+1145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+1149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+1150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+1151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+1154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+1155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_1),10);
        bufp->chgBit(oldp+1156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__sink));
        bufp->chgBit(oldp+1157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+1158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+1175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+1240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+1305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1306,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1307,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1308,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+1309,((6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]))));
        bufp->chgIData(oldp+1310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+1311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+1328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+1393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1394,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+1395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+1396,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x10U))) 
                                 | ((0x18U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xcU))) 
                                    | ((0x190U == (0x3ffU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 8U))) 
                                       | ((0x1a0U == 
                                           (0x3ffU 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 8U))) 
                                          | ((0x14U 
                                              == (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xcU))) 
                                             | ((0x150U 
                                                 == 
                                                 (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 8U))) 
                                                | ((0x160U 
                                                    == 
                                                    (0x3ffU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 8U))) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xcU))) 
                                                      | ((0x110U 
                                                          == 
                                                          (0x3ffU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 8U))) 
                                                         | ((0x120U 
                                                             == 
                                                             (0x3ffU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 8U))) 
                                                            | (0x200U 
                                                               == 
                                                               (0x3ffU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 8U)))))))))))))));
        bufp->chgBit(oldp+1397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap));
        bufp->chgBit(oldp+1398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap_1));
        bufp->chgBit(oldp+1399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__maybe_full));
        bufp->chgBit(oldp+1400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__ptr_match));
        bufp->chgBit(oldp+1401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__empty));
        bufp->chgBit(oldp+1402,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__full));
        bufp->chgBit(oldp+1403,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq));
        bufp->chgWData(oldp+1404,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT___ram_ext_R0_data),85);
        __Vtemp_14[0U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace)
                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data
                                     : (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x14U))))) 
                           << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_denied) 
                                         << 0x13U) 
                                        | ((0x7fff8U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_opcode))));
        __Vtemp_14[1U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace)
                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data
                                     : (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x14U))))) 
                           >> 0xcU) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace)
                                                  ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                   << 0x2cU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                      << 0xcU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                        >> 0x14U)))) 
                                                >> 0x20U)) 
                                       << 0x14U));
        __Vtemp_14[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_in_d_bits_corrupt) 
                           << 0x14U) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__d_replace)
                                                   ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_data
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                                    << 0x2cU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                       << 0xcU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                         >> 0x14U)))) 
                                                 >> 0x20U)) 
                                        >> 0xcU));
        bufp->chgWData(oldp+1407,(__Vtemp_14),85);
        bufp->chgWData(oldp+1410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[0]),85);
        bufp->chgWData(oldp+1413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory[1]),85);
        bufp->chgBit(oldp+1416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__wrap));
        bufp->chgBit(oldp+1417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__wrap_1));
        bufp->chgBit(oldp+1418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__maybe_full));
        bufp->chgBit(oldp+1419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ptr_match));
        bufp->chgBit(oldp+1420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__empty));
        bufp->chgBit(oldp+1421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__full));
        bufp->chgBit(oldp+1422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq));
        bufp->chgWData(oldp+1423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),121);
        bufp->chgWData(oldp+1427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[0]),121);
        bufp->chgWData(oldp+1431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory[1]),121);
        bufp->chgCData(oldp+1435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__acknum),3);
        bufp->chgCData(oldp+1436,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dOrig),3);
        bufp->chgBit(oldp+1437,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dToggle));
        bufp->chgBit(oldp+1438,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__acknum))));
        bufp->chgCData(oldp+1439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum),3);
        bufp->chgBit(oldp+1440,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum))));
        bufp->chgBit(oldp+1441,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__aToggle_r));
        bufp->chgCData(oldp+1442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1445,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+1446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source),10);
        bufp->chgSData(oldp+1447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__address),13);
        bufp->chgCData(oldp+1448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+1451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
        bufp->chgWData(oldp+1452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+1469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+1534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+1599,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1600,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1601,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1602,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1603,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+1604,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+1621,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+1686,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1687,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+1688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+1689,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+1690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+1691,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        bufp->chgCData(oldp+1692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        bufp->chgSData(oldp+1693,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
        bufp->chgSData(oldp+1694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_address),13);
        bufp->chgCData(oldp+1695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        bufp->chgBit(oldp+1696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        bufp->chgCData(oldp+1697,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum),3);
        bufp->chgCData(oldp+1698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dOrig),3);
        bufp->chgBit(oldp+1699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dToggle));
        bufp->chgBit(oldp+1700,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__acknum))));
        bufp->chgCData(oldp+1701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum),3);
        bufp->chgBit(oldp+1702,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))));
        bufp->chgBit(oldp+1703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aToggle_r));
        bufp->chgCData(oldp+1704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+1708,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+1709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+1710,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1712,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+1713,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__source_1),10);
        bufp->chgWData(oldp+1714,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+1731,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+1796,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+1861,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+1862,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+1863,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+1864,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+1865,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+1866,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+1883,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+1948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+1949,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+1950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+1951,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+1952,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_opcode),3);
        bufp->chgCData(oldp+1953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        bufp->chgCData(oldp+1954,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_size),3);
        bufp->chgSData(oldp+1955,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_source),10);
        bufp->chgIData(oldp+1956,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_address),29);
        bufp->chgCData(oldp+1957,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_mask),8);
        bufp->chgBit(oldp+1958,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        bufp->chgCData(oldp+1959,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+1960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+1961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+1962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+1963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+1964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+1965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+1966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+1967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+1968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__source_1),10);
        bufp->chgWData(oldp+1969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+1986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+2051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+2116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+2117,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+2118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+2119,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+2120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+2121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+2138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+2203,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+2204,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+2205,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+2206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__a_first_counter));
        bufp->chgCData(oldp+2207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+2208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+2209,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__size),2);
        bufp->chgSData(oldp+2210,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__source),14);
        bufp->chgSData(oldp+2211,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__address),13);
        bufp->chgBit(oldp+2212,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__d_first_counter));
        bufp->chgCData(oldp+2213,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+2214,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__size_1),2);
        bufp->chgSData(oldp+2215,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__source_1),14);
        bufp->chgWData(oldp+2216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight),8208);
        bufp->chgWData(oldp+2473,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_opcodes),32832);
        bufp->chgWData(oldp+3499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_sizes),32832);
        bufp->chgBit(oldp+4525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__a_first_counter_1));
        bufp->chgBit(oldp+4526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__d_first_counter_1));
        bufp->chgIData(oldp+4527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+4528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_1),8208);
        bufp->chgWData(oldp+4785,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__inflight_sizes_1),32832);
        bufp->chgBit(oldp+5811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__d_first_counter_2));
        bufp->chgIData(oldp+5812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgCData(oldp+5813,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__beatsLeft),3);
        bufp->chgBit(oldp+5814,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+5815,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__readys_mask),2);
        bufp->chgBit(oldp+5816,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__state_0));
        bufp->chgBit(oldp+5817,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__state_1));
        bufp->chgBit(oldp+5818,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__latch));
        bufp->chgCData(oldp+5819,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter),3);
        bufp->chgCData(oldp+5820,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+5821,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+5822,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__size),3);
        bufp->chgSData(oldp+5823,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__source),10);
        bufp->chgIData(oldp+5824,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__address),29);
        bufp->chgCData(oldp+5825,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter),3);
        bufp->chgCData(oldp+5826,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+5827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__size_1),3);
        bufp->chgSData(oldp+5828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__source_1),10);
        bufp->chgWData(oldp+5829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight),513);
        bufp->chgWData(oldp+5846,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes),2052);
        bufp->chgWData(oldp+5911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes),2052);
        bufp->chgCData(oldp+5976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1),3);
        bufp->chgBit(oldp+5977,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgCData(oldp+5978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1),3);
        bufp->chgBit(oldp+5979,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+5980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+5981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_1),513);
        bufp->chgWData(oldp+5998,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes_1),2052);
        bufp->chgCData(oldp+6063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2),3);
        bufp->chgBit(oldp+6064,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+6065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgCData(oldp+6066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+6068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_address),32);
        bufp->chgCData(oldp+6069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+6071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_address),32);
        bufp->chgCData(oldp+6072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+6074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_address),32);
        bufp->chgCData(oldp+6075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+6077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_address),32);
        bufp->chgCData(oldp+6078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+6080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_address),32);
        bufp->chgCData(oldp+6081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+6083,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_address),32);
        bufp->chgCData(oldp+6084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+6086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_address),32);
        bufp->chgCData(oldp+6087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6088,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+6089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_address),32);
        bufp->chgCData(oldp+6090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+6091,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6092,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+6093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_source),6);
        bufp->chgCData(oldp+6094,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_sink),3);
        bufp->chgBit(oldp+6095,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_denied));
        bufp->chgQData(oldp+6096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_data),64);
        bufp->chgBit(oldp+6098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_corrupt));
        bufp->chgCData(oldp+6099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+6100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+6102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_source),6);
        bufp->chgCData(oldp+6103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_sink),3);
        bufp->chgBit(oldp+6104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_denied));
        bufp->chgQData(oldp+6105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_data),64);
        bufp->chgBit(oldp+6107,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_corrupt));
        bufp->chgCData(oldp+6108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+6109,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6110,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+6111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_source),6);
        bufp->chgCData(oldp+6112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_sink),3);
        bufp->chgBit(oldp+6113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_denied));
        bufp->chgQData(oldp+6114,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_data),64);
        bufp->chgBit(oldp+6116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_corrupt));
        bufp->chgCData(oldp+6117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+6118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+6120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_source),6);
        bufp->chgCData(oldp+6121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_sink),3);
        bufp->chgBit(oldp+6122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_denied));
        bufp->chgQData(oldp+6123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_data),64);
        bufp->chgBit(oldp+6125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_corrupt));
        bufp->chgCData(oldp+6126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+6127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+6129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_source),6);
        bufp->chgCData(oldp+6130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_sink),3);
        bufp->chgBit(oldp+6131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_denied));
        bufp->chgQData(oldp+6132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_data),64);
        bufp->chgBit(oldp+6134,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_corrupt));
        bufp->chgCData(oldp+6135,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+6136,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+6138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_source),6);
        bufp->chgCData(oldp+6139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_sink),3);
        bufp->chgBit(oldp+6140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_denied));
        bufp->chgQData(oldp+6141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_data),64);
        bufp->chgBit(oldp+6143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_corrupt));
        bufp->chgCData(oldp+6144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+6145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+6147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_source),6);
        bufp->chgCData(oldp+6148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_sink),3);
        bufp->chgBit(oldp+6149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_denied));
        bufp->chgQData(oldp+6150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_data),64);
        bufp->chgBit(oldp+6152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_corrupt));
        bufp->chgCData(oldp+6153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+6154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+6156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_source),6);
        bufp->chgCData(oldp+6157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_sink),3);
        bufp->chgBit(oldp+6158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_denied));
        bufp->chgQData(oldp+6159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_data),64);
        bufp->chgBit(oldp+6161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_corrupt));
        bufp->chgCData(oldp+6162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+6164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_address),32);
        bufp->chgCData(oldp+6165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+6167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_address),32);
        bufp->chgCData(oldp+6168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+6170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_address),32);
        bufp->chgCData(oldp+6171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+6173,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_address),32);
        bufp->chgCData(oldp+6174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+6176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_address),32);
        bufp->chgCData(oldp+6177,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+6179,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_address),32);
        bufp->chgCData(oldp+6180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6181,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+6182,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_address),32);
        bufp->chgCData(oldp+6183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6184,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+6185,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_address),32);
        bufp->chgCData(oldp+6186,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+6187,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6188,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+6189,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_source),6);
        bufp->chgCData(oldp+6190,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_sink),3);
        bufp->chgBit(oldp+6191,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_denied));
        bufp->chgQData(oldp+6192,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_data),64);
        bufp->chgBit(oldp+6194,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_corrupt));
        bufp->chgCData(oldp+6195,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+6196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6197,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+6198,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_source),6);
        bufp->chgCData(oldp+6199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_sink),3);
        bufp->chgBit(oldp+6200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_denied));
        bufp->chgQData(oldp+6201,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_data),64);
        bufp->chgBit(oldp+6203,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_corrupt));
        bufp->chgCData(oldp+6204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+6205,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+6207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_source),6);
        bufp->chgCData(oldp+6208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_sink),3);
        bufp->chgBit(oldp+6209,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_denied));
        bufp->chgQData(oldp+6210,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_data),64);
        bufp->chgBit(oldp+6212,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_corrupt));
        bufp->chgCData(oldp+6213,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+6214,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6215,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+6216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_source),6);
        bufp->chgCData(oldp+6217,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_sink),3);
        bufp->chgBit(oldp+6218,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_denied));
        bufp->chgQData(oldp+6219,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_data),64);
        bufp->chgBit(oldp+6221,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_corrupt));
        bufp->chgCData(oldp+6222,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+6223,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6224,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+6225,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_source),6);
        bufp->chgCData(oldp+6226,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_sink),3);
        bufp->chgBit(oldp+6227,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_denied));
        bufp->chgQData(oldp+6228,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_data),64);
        bufp->chgBit(oldp+6230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_corrupt));
        bufp->chgCData(oldp+6231,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+6232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6233,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+6234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_source),6);
        bufp->chgCData(oldp+6235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_sink),3);
        bufp->chgBit(oldp+6236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_denied));
        bufp->chgQData(oldp+6237,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_data),64);
        bufp->chgBit(oldp+6239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_corrupt));
        bufp->chgCData(oldp+6240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+6241,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6242,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+6243,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_source),6);
        bufp->chgCData(oldp+6244,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_sink),3);
        bufp->chgBit(oldp+6245,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_denied));
        bufp->chgQData(oldp+6246,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_data),64);
        bufp->chgBit(oldp+6248,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_corrupt));
        bufp->chgCData(oldp+6249,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+6250,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6251,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+6252,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_source),6);
        bufp->chgCData(oldp+6253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_sink),3);
        bufp->chgBit(oldp+6254,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_denied));
        bufp->chgQData(oldp+6255,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_data),64);
        bufp->chgBit(oldp+6257,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_corrupt));
        bufp->chgCData(oldp+6258,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6259,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+6260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_0_address),32);
        bufp->chgCData(oldp+6261,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6262,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+6263,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_1_address),32);
        bufp->chgCData(oldp+6264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+6266,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_2_address),32);
        bufp->chgCData(oldp+6267,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6268,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+6269,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_3_address),32);
        bufp->chgCData(oldp+6270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6271,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+6272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_4_address),32);
        bufp->chgCData(oldp+6273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+6275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_5_address),32);
        bufp->chgCData(oldp+6276,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6277,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+6278,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_6_address),32);
        bufp->chgCData(oldp+6279,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+6281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_b_source__DOT__mem_7_address),32);
        bufp->chgCData(oldp+6282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+6283,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_param),2);
        bufp->chgCData(oldp+6284,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+6285,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_source),6);
        bufp->chgCData(oldp+6286,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_sink),3);
        bufp->chgBit(oldp+6287,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_denied));
        bufp->chgQData(oldp+6288,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_data),64);
        bufp->chgBit(oldp+6290,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_0_corrupt));
        bufp->chgCData(oldp+6291,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+6292,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_param),2);
        bufp->chgCData(oldp+6293,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+6294,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_source),6);
        bufp->chgCData(oldp+6295,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_sink),3);
        bufp->chgBit(oldp+6296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_denied));
        bufp->chgQData(oldp+6297,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_data),64);
        bufp->chgBit(oldp+6299,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_1_corrupt));
        bufp->chgCData(oldp+6300,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+6301,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_param),2);
        bufp->chgCData(oldp+6302,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+6303,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_source),6);
        bufp->chgCData(oldp+6304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_sink),3);
        bufp->chgBit(oldp+6305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_denied));
        bufp->chgQData(oldp+6306,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_data),64);
        bufp->chgBit(oldp+6308,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_2_corrupt));
        bufp->chgCData(oldp+6309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+6310,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_param),2);
        bufp->chgCData(oldp+6311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+6312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_source),6);
        bufp->chgCData(oldp+6313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_sink),3);
        bufp->chgBit(oldp+6314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_denied));
        bufp->chgQData(oldp+6315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_data),64);
        bufp->chgBit(oldp+6317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_3_corrupt));
        bufp->chgCData(oldp+6318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+6319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_param),2);
        bufp->chgCData(oldp+6320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+6321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_source),6);
        bufp->chgCData(oldp+6322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_sink),3);
        bufp->chgBit(oldp+6323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_denied));
        bufp->chgQData(oldp+6324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_data),64);
        bufp->chgBit(oldp+6326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_4_corrupt));
        bufp->chgCData(oldp+6327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+6328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_param),2);
        bufp->chgCData(oldp+6329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+6330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_source),6);
        bufp->chgCData(oldp+6331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_sink),3);
        bufp->chgBit(oldp+6332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_denied));
        bufp->chgQData(oldp+6333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_data),64);
        bufp->chgBit(oldp+6335,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_5_corrupt));
        bufp->chgCData(oldp+6336,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+6337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_param),2);
        bufp->chgCData(oldp+6338,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+6339,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_source),6);
        bufp->chgCData(oldp+6340,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_sink),3);
        bufp->chgBit(oldp+6341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_denied));
        bufp->chgQData(oldp+6342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_data),64);
        bufp->chgBit(oldp+6344,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_6_corrupt));
        bufp->chgCData(oldp+6345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+6346,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_param),2);
        bufp->chgCData(oldp+6347,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+6348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_source),6);
        bufp->chgCData(oldp+6349,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_sink),3);
        bufp->chgBit(oldp+6350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_denied));
        bufp->chgQData(oldp+6351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_data),64);
        bufp->chgBit(oldp+6353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeIn_d_source__DOT__mem_7_corrupt));
        bufp->chgCData(oldp+6354,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x16U))),3);
        bufp->chgCData(oldp+6355,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x13U))),3);
        bufp->chgCData(oldp+6356,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 0xfU))),4);
        bufp->chgCData(oldp+6357,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 9U))),6);
        bufp->chgIData(oldp+6358,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+6359,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 1U))),8);
        bufp->chgQData(oldp+6360,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6362,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_b_valid));
        bufp->chgCData(oldp+6364,((0x3fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_source))),6);
        bufp->chgCData(oldp+6365,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xeU))),3);
        bufp->chgCData(oldp+6366,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xbU))),3);
        bufp->chgCData(oldp+6367,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 7U))),4);
        bufp->chgCData(oldp+6368,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 1U))),6);
        bufp->chgIData(oldp+6369,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 1U))),32);
        bufp->chgQData(oldp+6370,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6372,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_valid));
        bufp->chgCData(oldp+6374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_opcode),3);
        bufp->chgCData(oldp+6375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_param),2);
        bufp->chgCData(oldp+6376,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_size),4);
        bufp->chgCData(oldp+6377,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source),6);
        bufp->chgCData(oldp+6378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_sink),3);
        bufp->chgBit(oldp+6379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_denied));
        bufp->chgQData(oldp+6380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_data),64);
        bufp->chgBit(oldp+6382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_corrupt));
        bufp->chgCData(oldp+6383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_e_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),3);
        bufp->chgWData(oldp+6384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),121);
        bufp->chgWData(oldp+6388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),113);
        bufp->chgCData(oldp+6392,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x16U))),3);
        bufp->chgCData(oldp+6393,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x13U))),3);
        bufp->chgCData(oldp+6394,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 0xfU))),4);
        bufp->chgCData(oldp+6395,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 9U))),6);
        bufp->chgIData(oldp+6396,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+6397,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 1U))),8);
        bufp->chgQData(oldp+6398,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6400,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_b_valid));
        bufp->chgCData(oldp+6402,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xeU))),3);
        bufp->chgCData(oldp+6403,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xbU))),3);
        bufp->chgCData(oldp+6404,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 7U))),4);
        bufp->chgCData(oldp+6405,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 1U))),6);
        bufp->chgIData(oldp+6406,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 1U))),32);
        bufp->chgQData(oldp+6407,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6409,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_valid));
        bufp->chgCData(oldp+6411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_opcode),3);
        bufp->chgCData(oldp+6412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_param),2);
        bufp->chgCData(oldp+6413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_size),4);
        bufp->chgCData(oldp+6414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source),6);
        bufp->chgCData(oldp+6415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_sink),3);
        bufp->chgBit(oldp+6416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_denied));
        bufp->chgQData(oldp+6417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_data),64);
        bufp->chgBit(oldp+6419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_corrupt));
        bufp->chgCData(oldp+6420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),3);
        bufp->chgWData(oldp+6421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),121);
        bufp->chgWData(oldp+6425,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),113);
        bufp->chgCData(oldp+6429,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x16U))),3);
        bufp->chgCData(oldp+6430,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0x13U))),3);
        bufp->chgCData(oldp+6431,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 0xfU))),4);
        bufp->chgCData(oldp+6432,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 9U))),6);
        bufp->chgIData(oldp+6433,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x17U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 9U))),32);
        bufp->chgCData(oldp+6434,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            >> 1U))),8);
        bufp->chgQData(oldp+6435,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6437,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6438,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_b_valid));
        bufp->chgCData(oldp+6439,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xeU))),3);
        bufp->chgCData(oldp+6440,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                         >> 0xbU))),3);
        bufp->chgCData(oldp+6441,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                           >> 7U))),4);
        bufp->chgCData(oldp+6442,((0x3fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 1U))),6);
        bufp->chgIData(oldp+6443,(((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                    << 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                 >> 1U))),32);
        bufp->chgQData(oldp+6444,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                    >> 1U)))),64);
        bufp->chgBit(oldp+6446,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])));
        bufp->chgBit(oldp+6447,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_valid));
        bufp->chgCData(oldp+6448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_opcode),3);
        bufp->chgCData(oldp+6449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_param),2);
        bufp->chgCData(oldp+6450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_size),4);
        bufp->chgCData(oldp+6451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source),6);
        bufp->chgCData(oldp+6452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_sink),3);
        bufp->chgBit(oldp+6453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_denied));
        bufp->chgQData(oldp+6454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_data),64);
        bufp->chgBit(oldp+6456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_corrupt));
        bufp->chgCData(oldp+6457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),3);
        bufp->chgWData(oldp+6458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),121);
        bufp->chgWData(oldp+6462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),113);
        bufp->chgSData(oldp+6466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter),9);
        bufp->chgCData(oldp+6467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+6468,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+6469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__size),4);
        bufp->chgCData(oldp+6470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__source),8);
        bufp->chgIData(oldp+6471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__address),32);
        bufp->chgSData(oldp+6472,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter),9);
        bufp->chgCData(oldp+6473,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+6474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+6475,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__size_1),4);
        bufp->chgCData(oldp+6476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__source_1),8);
        bufp->chgCData(oldp+6477,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__sink),3);
        bufp->chgBit(oldp+6478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+6479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight),256);
        bufp->chgWData(oldp+6487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes),1024);
        bufp->chgWData(oldp+6519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes),2048);
        bufp->chgSData(oldp+6583,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+6584,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+6585,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+6586,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+6587,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_from_bus_named_fbus_bus_xing_in_d_bits_opcode))));
        bufp->chgIData(oldp+6588,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+6589,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_1),256);
        bufp->chgWData(oldp+6597,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1),2048);
        bufp->chgSData(oldp+6661,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+6662,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+6663,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+6664,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+6665,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+6666,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+6667,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+6668,((IData)((0U == (0x180000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+6669,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                 | (IData)((0x40U == 
                                            (0x1800c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+6670,((IData)((0x80000U == 
                                         (0x180000U 
                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+6671,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                 | (IData)((0x80040U 
                                            == (0x1800c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+6672,((IData)((0x100000U 
                                         == (0x180000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+6673,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                 | (IData)((0x100040U 
                                            == (0x1800c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+6674,((IData)((0x180000U 
                                         == (0x180000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+6675,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                 | (IData)((0x180040U 
                                            == (0x1800c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgCData(oldp+6676,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                     | ((0x180040U 
                                         == (0x1800c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                        | (0x1c0000U 
                                           == (0x1c0000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                    << 7U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                                | ((0x180040U 
                                                    == 
                                                    (0x1800c0U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                   | (0x180000U 
                                                      == 
                                                      (0x1c0000U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                                   | ((0x100040U 
                                                       == 
                                                       (0x1800c0U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                      | (0x140000U 
                                                         == 
                                                         (0x1c0000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                                                      | ((0x100040U 
                                                          == 
                                                          (0x1800c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                         | (0x100000U 
                                                            == 
                                                            (0x1c0000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                                         | ((0x80040U 
                                                             == 
                                                             (0x1800c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | (0xc0000U 
                                                               == 
                                                               (0x1c0000U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                                            | ((0x80040U 
                                                                == 
                                                                (0x1800c0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x80000U 
                                                                  == 
                                                                  (0x1c0000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                                               | ((0x40U 
                                                                   == 
                                                                   (0x1800c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  | (0x40000U 
                                                                     == 
                                                                     (0x1c0000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                                                | ((0x40U 
                                                                    == 
                                                                    (0x1800c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                   | (0U 
                                                                      == 
                                                                      (0x1c0000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))),8);
        VL_SHIFTL_WWI(256,256,8, __Vtemp_15, VTestDriver__ConstPool__CONST_h4e9f510d_0, 
                      (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                >> 0xaU)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_1) {
            __Vtemp_16[0U] = __Vtemp_15[0U];
            __Vtemp_16[1U] = __Vtemp_15[1U];
            __Vtemp_16[2U] = __Vtemp_15[2U];
            __Vtemp_16[3U] = __Vtemp_15[3U];
            __Vtemp_16[4U] = __Vtemp_15[4U];
            __Vtemp_16[5U] = __Vtemp_15[5U];
            __Vtemp_16[6U] = __Vtemp_15[6U];
            __Vtemp_16[7U] = __Vtemp_15[7U];
        } else {
            __Vtemp_16[0U] = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
            __Vtemp_16[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
            __Vtemp_16[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
            __Vtemp_16[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
            __Vtemp_16[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
            __Vtemp_16[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
            __Vtemp_16[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
            __Vtemp_16[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        }
        bufp->chgWData(oldp+6677,(__Vtemp_16),256);
        bufp->chgBit(oldp+6685,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgSData(oldp+6686,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter),9);
        bufp->chgCData(oldp+6687,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+6688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+6689,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size),4);
        bufp->chgCData(oldp+6690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source),6);
        bufp->chgIData(oldp+6691,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address),32);
        bufp->chgSData(oldp+6692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter),9);
        bufp->chgCData(oldp+6693,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+6694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+6695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size_1),4);
        bufp->chgCData(oldp+6696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_1),6);
        bufp->chgCData(oldp+6697,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__sink),3);
        bufp->chgBit(oldp+6698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__denied));
        bufp->chgSData(oldp+6699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__b_first_counter),9);
        bufp->chgCData(oldp+6700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_2),2);
        bufp->chgCData(oldp+6701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_2),6);
        bufp->chgIData(oldp+6702,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address_1),32);
        bufp->chgSData(oldp+6703,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter),9);
        bufp->chgCData(oldp+6704,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__opcode_3),3);
        bufp->chgCData(oldp+6705,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__param_3),3);
        bufp->chgCData(oldp+6706,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__size_3),4);
        bufp->chgCData(oldp+6707,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__source_3),6);
        bufp->chgIData(oldp+6708,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__address_2),32);
        bufp->chgQData(oldp+6709,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight),33);
        bufp->chgWData(oldp+6711,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+6716,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+6725,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+6726,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+6727,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+6728,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+6729,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_opcode))));
        bufp->chgIData(oldp+6730,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgQData(oldp+6731,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_1),33);
        bufp->chgWData(oldp+6733,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+6742,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+6743,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+6744,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+6745,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+6746,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__watchdog_1),32);
        bufp->chgCData(oldp+6747,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_2),8);
        bufp->chgSData(oldp+6748,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+6749,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+6750,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 0xdU))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 9U))))))));
        bufp->chgBit(oldp+6751,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6752,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                        >> 0xbU)) & 
                                    (0x10000U == (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6753,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xbU) & (0x10000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6754,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6755,((IData)((0U == (0xc00U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6756,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0U == 
                                             (0xc00U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6757,((IData)((0x400U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6758,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x400U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6759,((IData)((0x800U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6760,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x800U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6761,((IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6762,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgCData(oldp+6763,(((0x80U & (((((2U 
                                                 < 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 0xbU) 
                                                   & (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                               | (IData)(
                                                         ((0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                          & (0x8000U 
                                                             == 
                                                             (0x18000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                              | (IData)(
                                                        (0xe00U 
                                                         == 
                                                         (0xe00U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                             << 7U)) 
                                   | ((0x40U & ((((
                                                   (2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   ((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0xbU) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x800U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((((2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0x800U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0x800U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 4U)) 
                                            | ((8U 
                                                & (((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           >> 0xbU)) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x400U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0x600U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((2U 
                                                          < 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              >> 0xfU))) 
                                                         | ((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              >> 0xbU)) 
                                                            & (0x10000U 
                                                               == 
                                                               (0x18000U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                        | (IData)(
                                                                  ((0x400U 
                                                                    == 
                                                                    (0xc00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                   & (0x8000U 
                                                                      == 
                                                                      (0x18000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                       | (IData)(
                                                                 (0x400U 
                                                                  == 
                                                                  (0xe00U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((2U 
                                                             < 
                                                             (0xfU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                 >> 0xfU))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xbU)) 
                                                               & (0x10000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                           | (IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (0xc00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                      & (0x8000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                          | (IData)(
                                                                    (0x200U 
                                                                     == 
                                                                     (0xe00U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                  >> 0xfU))) 
                                                             | ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU)) 
                                                                & (0x10000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                            | (IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                       & (0x8000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xe00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))))))))))),8);
        bufp->chgBit(oldp+6764,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source) 
                                               >> 4U))) 
                                 | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source)) 
                                    | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source))))));
        bufp->chgBit(oldp+6765,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 5U))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 1U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+6766,((1U & ((~ ((0U != (0x3ffffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x11U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xfU)))) 
                                           | (0U != 
                                              (3U & 
                                               (~ (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    << 0x13U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))))) 
                                       | ((~ ((0U != 
                                               (0x3fU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 5U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0x1bU)))) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & (0x2010U 
                                                     ^ 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       << 0x13U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU))))))) 
                                          | ((0U == 
                                              ((0xffffeU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 0x13U) 
                                                   | (0x7fffeU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU)))) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))) 
                                             | ((~ 
                                                 ((0U 
                                                   != 
                                                   (7U 
                                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        << 2U) 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0x1eU)))) 
                                                  | (0U 
                                                     != 
                                                     (0x1ffffU 
                                                      & (0x10020U 
                                                         ^ 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           << 0x13U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0xdU))))))) 
                                                | ((~ 
                                                    ((0U 
                                                      != 
                                                      (0x3fU 
                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           << 5U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0x1bU)))) 
                                                     | (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (0x200U 
                                                            ^ 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              << 0xfU) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x11U))))))) 
                                                   | ((~ 
                                                       ((0U 
                                                         != 
                                                         (0xfU 
                                                          & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              << 3U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x1dU)))) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (~ 
                                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 << 5U) 
                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                   >> 0x1bU))))))) 
                                                      | ((0U 
                                                          == 
                                                          (0xfffffU 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                               << 0x13U) 
                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xdU)))) 
                                                         | ((~ 
                                                             ((0U 
                                                               != 
                                                               (0x7fffU 
                                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                    << 0xeU) 
                                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0x12U)))) 
                                                              | (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0x11U)))) 
                                                            | ((0U 
                                                                == 
                                                                ((0xffe00U 
                                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      << 0x13U) 
                                                                     | (0x7fe00U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))) 
                                                                 | (0x1ffU 
                                                                    & (0x100U 
                                                                       ^ 
                                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         << 0x13U) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))))) 
                                                               | ((0U 
                                                                   == 
                                                                   ((0xffe00U 
                                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         << 0x13U) 
                                                                        | (0x7fe00U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))) 
                                                                    | (0x1ffU 
                                                                       & (0x110U 
                                                                          ^ 
                                                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))))) 
                                                                  | ((8U 
                                                                      == 
                                                                      (0xfU 
                                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                           << 3U) 
                                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0x1dU)))) 
                                                                     | (~ 
                                                                        ((0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                               << 3U) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x1dU)))) 
                                                                         | (0U 
                                                                            != 
                                                                            (0xfffU 
                                                                             & (0x800U 
                                                                                ^ 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x11U)))))))))))))))))))));
        bufp->chgSData(oldp+6767,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter),9);
        bufp->chgCData(oldp+6768,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__opcode),3);
        bufp->chgCData(oldp+6769,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__param),3);
        bufp->chgCData(oldp+6770,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__size),4);
        bufp->chgCData(oldp+6771,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__source),6);
        bufp->chgIData(oldp+6772,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__address),32);
        bufp->chgSData(oldp+6773,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter),9);
        bufp->chgCData(oldp+6774,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_1),3);
        bufp->chgCData(oldp+6775,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__param_1),2);
        bufp->chgCData(oldp+6776,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__size_1),4);
        bufp->chgCData(oldp+6777,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__source_1),6);
        bufp->chgCData(oldp+6778,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__sink),3);
        bufp->chgBit(oldp+6779,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__denied));
        bufp->chgSData(oldp+6780,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__b_first_counter),9);
        bufp->chgCData(oldp+6781,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__param_2),2);
        bufp->chgCData(oldp+6782,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__source_2),6);
        bufp->chgIData(oldp+6783,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__address_1),32);
        bufp->chgSData(oldp+6784,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter),9);
        bufp->chgCData(oldp+6785,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__opcode_3),3);
        bufp->chgCData(oldp+6786,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__param_3),3);
        bufp->chgCData(oldp+6787,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__size_3),4);
        bufp->chgCData(oldp+6788,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__source_3),6);
        bufp->chgIData(oldp+6789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__address_2),32);
        bufp->chgQData(oldp+6790,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight),33);
        bufp->chgWData(oldp+6792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+6797,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+6806,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+6807,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+6808,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+6809,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+6810,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_opcode))));
        bufp->chgIData(oldp+6811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog),32);
        bufp->chgQData(oldp+6812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_1),33);
        bufp->chgWData(oldp+6814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+6823,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+6824,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+6825,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+6826,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+6827,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__watchdog_1),32);
        bufp->chgCData(oldp+6828,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_2),8);
        bufp->chgSData(oldp+6829,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+6830,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+6831,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 0xdU))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 9U))))))));
        bufp->chgBit(oldp+6832,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6833,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                        >> 0xbU)) & 
                                    (0x10000U == (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6834,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xbU) & (0x10000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6835,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6836,((IData)((0U == (0xc00U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6837,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0U == 
                                             (0xc00U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6838,((IData)((0x400U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6839,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x400U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6840,((IData)((0x800U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6841,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x800U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6842,((IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6843,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgCData(oldp+6844,(((0x80U & (((((2U 
                                                 < 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 0xbU) 
                                                   & (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                               | (IData)(
                                                         ((0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                          & (0x8000U 
                                                             == 
                                                             (0x18000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                              | (IData)(
                                                        (0xe00U 
                                                         == 
                                                         (0xe00U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                             << 7U)) 
                                   | ((0x40U & ((((
                                                   (2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   ((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0xbU) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x800U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((((2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0x800U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0x800U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 4U)) 
                                            | ((8U 
                                                & (((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           >> 0xbU)) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x400U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0x600U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((2U 
                                                          < 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              >> 0xfU))) 
                                                         | ((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              >> 0xbU)) 
                                                            & (0x10000U 
                                                               == 
                                                               (0x18000U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                        | (IData)(
                                                                  ((0x400U 
                                                                    == 
                                                                    (0xc00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                   & (0x8000U 
                                                                      == 
                                                                      (0x18000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                       | (IData)(
                                                                 (0x400U 
                                                                  == 
                                                                  (0xe00U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((2U 
                                                             < 
                                                             (0xfU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                 >> 0xfU))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xbU)) 
                                                               & (0x10000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                           | (IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (0xc00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                      & (0x8000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                          | (IData)(
                                                                    (0x200U 
                                                                     == 
                                                                     (0xe00U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                  >> 0xfU))) 
                                                             | ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU)) 
                                                                & (0x10000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                            | (IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                       & (0x8000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xe00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))))))))))),8);
        bufp->chgBit(oldp+6845,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source) 
                                               >> 4U))) 
                                 | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source)) 
                                    | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source))))));
        bufp->chgBit(oldp+6846,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 5U))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 1U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+6847,((1U & ((~ ((0U != (0x3ffffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x11U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xfU)))) 
                                           | (0U != 
                                              (3U & 
                                               (~ (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    << 0x13U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))))) 
                                       | ((~ ((0U != 
                                               (0x3fU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 5U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0x1bU)))) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & (0x2010U 
                                                     ^ 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       << 0x13U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU))))))) 
                                          | ((0U == 
                                              ((0xffffeU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 0x13U) 
                                                   | (0x7fffeU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU)))) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))) 
                                             | ((~ 
                                                 ((0U 
                                                   != 
                                                   (7U 
                                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        << 2U) 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0x1eU)))) 
                                                  | (0U 
                                                     != 
                                                     (0x1ffffU 
                                                      & (0x10020U 
                                                         ^ 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           << 0x13U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0xdU))))))) 
                                                | ((~ 
                                                    ((0U 
                                                      != 
                                                      (0x3fU 
                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           << 5U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0x1bU)))) 
                                                     | (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (0x200U 
                                                            ^ 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              << 0xfU) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x11U))))))) 
                                                   | ((~ 
                                                       ((0U 
                                                         != 
                                                         (0xfU 
                                                          & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              << 3U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x1dU)))) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (~ 
                                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 << 5U) 
                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                   >> 0x1bU))))))) 
                                                      | ((0U 
                                                          == 
                                                          (0xfffffU 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                               << 0x13U) 
                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xdU)))) 
                                                         | ((~ 
                                                             ((0U 
                                                               != 
                                                               (0x7fffU 
                                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                    << 0xeU) 
                                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0x12U)))) 
                                                              | (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0x11U)))) 
                                                            | ((0U 
                                                                == 
                                                                ((0xffe00U 
                                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      << 0x13U) 
                                                                     | (0x7fe00U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))) 
                                                                 | (0x1ffU 
                                                                    & (0x100U 
                                                                       ^ 
                                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         << 0x13U) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))))) 
                                                               | ((0U 
                                                                   == 
                                                                   ((0xffe00U 
                                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         << 0x13U) 
                                                                        | (0x7fe00U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))) 
                                                                    | (0x1ffU 
                                                                       & (0x110U 
                                                                          ^ 
                                                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))))) 
                                                                  | ((8U 
                                                                      == 
                                                                      (0xfU 
                                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                           << 3U) 
                                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0x1dU)))) 
                                                                     | (~ 
                                                                        ((0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                               << 3U) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x1dU)))) 
                                                                         | (0U 
                                                                            != 
                                                                            (0xfffU 
                                                                             & (0x800U 
                                                                                ^ 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x11U)))))))))))))))))))));
        bufp->chgSData(oldp+6848,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter),9);
        bufp->chgCData(oldp+6849,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__opcode),3);
        bufp->chgCData(oldp+6850,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__param),3);
        bufp->chgCData(oldp+6851,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__size),4);
        bufp->chgCData(oldp+6852,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__source),6);
        bufp->chgIData(oldp+6853,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__address),32);
        bufp->chgSData(oldp+6854,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter),9);
        bufp->chgCData(oldp+6855,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__opcode_1),3);
        bufp->chgCData(oldp+6856,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__param_1),2);
        bufp->chgCData(oldp+6857,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__size_1),4);
        bufp->chgCData(oldp+6858,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__source_1),6);
        bufp->chgCData(oldp+6859,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__sink),3);
        bufp->chgBit(oldp+6860,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__denied));
        bufp->chgSData(oldp+6861,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__b_first_counter),9);
        bufp->chgCData(oldp+6862,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__param_2),2);
        bufp->chgCData(oldp+6863,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__source_2),6);
        bufp->chgIData(oldp+6864,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__address_1),32);
        bufp->chgSData(oldp+6865,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__c_first_counter),9);
        bufp->chgCData(oldp+6866,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__opcode_3),3);
        bufp->chgCData(oldp+6867,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__param_3),3);
        bufp->chgCData(oldp+6868,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__size_3),4);
        bufp->chgCData(oldp+6869,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__source_3),6);
        bufp->chgIData(oldp+6870,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__address_2),32);
        bufp->chgQData(oldp+6871,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight),33);
        bufp->chgWData(oldp+6873,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+6878,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+6887,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+6888,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+6889,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+6890,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_1))));
        bufp->chgBit(oldp+6891,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_opcode))));
        bufp->chgIData(oldp+6892,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__watchdog),32);
        bufp->chgQData(oldp+6893,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_1),33);
        bufp->chgWData(oldp+6895,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+6904,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+6905,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+6906,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+6907,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+6908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__watchdog_1),32);
        bufp->chgCData(oldp+6909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_2),8);
        bufp->chgSData(oldp+6910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+6911,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+6912,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 0xdU))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 9U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 9U))))))));
        bufp->chgBit(oldp+6913,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6914,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                        >> 0xbU)) & 
                                    (0x10000U == (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6915,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 0xfU))) 
                                 | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                     >> 0xbU) & (0x10000U 
                                                 == 
                                                 (0x18000U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))));
        bufp->chgBit(oldp+6916,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6917,((IData)((0U == (0xc00U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6918,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0U == 
                                             (0xc00U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6919,((IData)((0x400U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6920,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                         >> 0xbU)) 
                                     & (0x10000U == 
                                        (0x18000U & 
                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x400U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6921,((IData)((0x800U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6922,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0x800U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgBit(oldp+6923,((IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))));
        bufp->chgBit(oldp+6924,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                 >> 0xfU))) 
                                  | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                      >> 0xbU) & (0x10000U 
                                                  == 
                                                  (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                 | (IData)(((0xc00U 
                                             == (0xc00U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                            & (0x8000U 
                                               == (0x18000U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))))));
        bufp->chgCData(oldp+6925,(((0x80U & (((((2U 
                                                 < 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    >> 0xbU) 
                                                   & (0x10000U 
                                                      == 
                                                      (0x18000U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                               | (IData)(
                                                         ((0xc00U 
                                                           == 
                                                           (0xc00U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                          & (0x8000U 
                                                             == 
                                                             (0x18000U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                              | (IData)(
                                                        (0xe00U 
                                                         == 
                                                         (0xe00U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                             << 7U)) 
                                   | ((0x40U & ((((
                                                   (2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0xc00U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0xc00U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 6U)) 
                                      | ((0x20U & (
                                                   ((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0xbU) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x800U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0xa00U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 5U)) 
                                         | ((0x10U 
                                             & (((((2U 
                                                    < 
                                                    (0xfU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        >> 0xfU))) 
                                                   | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       >> 0xbU) 
                                                      & (0x10000U 
                                                         == 
                                                         (0x18000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                  | (IData)(
                                                            ((0x800U 
                                                              == 
                                                              (0xc00U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                             & (0x8000U 
                                                                == 
                                                                (0x18000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                 | (IData)(
                                                           (0x800U 
                                                            == 
                                                            (0xe00U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                << 4U)) 
                                            | ((8U 
                                                & (((((2U 
                                                       < 
                                                       (0xfU 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           >> 0xfU))) 
                                                      | ((~ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           >> 0xbU)) 
                                                         & (0x10000U 
                                                            == 
                                                            (0x18000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                     | (IData)(
                                                               ((0x400U 
                                                                 == 
                                                                 (0xc00U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                & (0x8000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                    | (IData)(
                                                              (0x600U 
                                                               == 
                                                               (0xe00U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((2U 
                                                          < 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              >> 0xfU))) 
                                                         | ((~ 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              >> 0xbU)) 
                                                            & (0x10000U 
                                                               == 
                                                               (0x18000U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                        | (IData)(
                                                                  ((0x400U 
                                                                    == 
                                                                    (0xc00U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                   & (0x8000U 
                                                                      == 
                                                                      (0x18000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                       | (IData)(
                                                                 (0x400U 
                                                                  == 
                                                                  (0xe00U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((2U 
                                                             < 
                                                             (0xfU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                 >> 0xfU))) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xbU)) 
                                                               & (0x10000U 
                                                                  == 
                                                                  (0x18000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                           | (IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (0xc00U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                      & (0x8000U 
                                                                         == 
                                                                         (0x18000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                          | (IData)(
                                                                    (0x200U 
                                                                     == 
                                                                     (0xe00U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                  >> 0xfU))) 
                                                             | ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0xbU)) 
                                                                & (0x10000U 
                                                                   == 
                                                                   (0x18000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])))) 
                                                            | (IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0xc00U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                                       & (0x8000U 
                                                                          == 
                                                                          (0x18000U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U]))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (0xe00U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U]))))))))))))),8);
        bufp->chgBit(oldp+6926,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source) 
                                               >> 4U))) 
                                 | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source)) 
                                    | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source))))));
        bufp->chgBit(oldp+6927,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 5U))))) 
                                       | ((0x10U == 
                                           (0x3fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                             >> 1U))) 
                                          | (0x20U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    >> 1U))))))));
        bufp->chgBit(oldp+6928,((1U & ((~ ((0U != (0x3ffffU 
                                                   & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       << 0x11U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xfU)))) 
                                           | (0U != 
                                              (3U & 
                                               (~ (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    << 0x13U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))))) 
                                       | ((~ ((0U != 
                                               (0x3fU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 5U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0x1bU)))) 
                                              | (0U 
                                                 != 
                                                 (0x3fffU 
                                                  & (0x2010U 
                                                     ^ 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                       << 0x13U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU))))))) 
                                          | ((0U == 
                                              ((0xffffeU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 0x13U) 
                                                   | (0x7fffeU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                         >> 0xdU)))) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0xdU))))) 
                                             | ((~ 
                                                 ((0U 
                                                   != 
                                                   (7U 
                                                    & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                        << 2U) 
                                                       | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                          >> 0x1eU)))) 
                                                  | (0U 
                                                     != 
                                                     (0x1ffffU 
                                                      & (0x10020U 
                                                         ^ 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                           << 0x13U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0xdU))))))) 
                                                | ((~ 
                                                    ((0U 
                                                      != 
                                                      (0x3fU 
                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                           << 5U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                             >> 0x1bU)))) 
                                                     | (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (0x200U 
                                                            ^ 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                              << 0xfU) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x11U))))))) 
                                                   | ((~ 
                                                       ((0U 
                                                         != 
                                                         (0xfU 
                                                          & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                              << 3U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                >> 0x1dU)))) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (~ 
                                                               ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 << 5U) 
                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                   >> 0x1bU))))))) 
                                                      | ((0U 
                                                          == 
                                                          (0xfffffU 
                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                               << 0x13U) 
                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                 >> 0xdU)))) 
                                                         | ((~ 
                                                             ((0U 
                                                               != 
                                                               (0x7fffU 
                                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                    << 0xeU) 
                                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                      >> 0x12U)))) 
                                                              | (~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                  >> 0x11U)))) 
                                                            | ((0U 
                                                                == 
                                                                ((0xffe00U 
                                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                      << 0x13U) 
                                                                     | (0x7fe00U 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))) 
                                                                 | (0x1ffU 
                                                                    & (0x100U 
                                                                       ^ 
                                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                         << 0x13U) 
                                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                           >> 0xdU)))))) 
                                                               | ((0U 
                                                                   == 
                                                                   ((0xffe00U 
                                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                         << 0x13U) 
                                                                        | (0x7fe00U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))) 
                                                                    | (0x1ffU 
                                                                       & (0x110U 
                                                                          ^ 
                                                                          ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                            << 0x13U) 
                                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                              >> 0xdU)))))) 
                                                                  | ((8U 
                                                                      == 
                                                                      (0xfU 
                                                                       & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                           << 3U) 
                                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                             >> 0x1dU)))) 
                                                                     | (~ 
                                                                        ((0U 
                                                                          != 
                                                                          (0xfU 
                                                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                                               << 3U) 
                                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x1dU)))) 
                                                                         | (0U 
                                                                            != 
                                                                            (0xfffU 
                                                                             & (0x800U 
                                                                                ^ 
                                                                                ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                << 0xfU) 
                                                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                                                >> 0x11U)))))))))))))))))))));
        bufp->chgBit(oldp+6929,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_7))
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_7) 
                                           >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_7_1)))));
        bufp->chgBit(oldp+6930,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_7))
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_7)
                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_7_0)))));
        bufp->chgBit(oldp+6931,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_6))
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_6) 
                                           >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_1)))));
        bufp->chgBit(oldp+6932,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_6))
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_6)
                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_0)))));
        bufp->chgBit(oldp+6933,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_5))
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_5) 
                                           >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_1)))));
        bufp->chgBit(oldp+6934,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_5))
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_5)
                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_0)))));
        bufp->chgBit(oldp+6935,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))
                                        ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                           >> 1U) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_1)))));
        bufp->chgBit(oldp+6936,((1U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4)
                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_0)))));
        bufp->chgSData(oldp+6937,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))),9);
        bufp->chgSData(oldp+6938,((0x180U | (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 9U)))),9);
        bufp->chgSData(oldp+6939,((0x140U | (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 9U)))),9);
        bufp->chgSData(oldp+6940,((0x100U | (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                >> 9U)))),9);
        bufp->chgCData(oldp+6941,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0x13U))),3);
        bufp->chgCData(oldp+6942,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_size),4);
        bufp->chgBit(oldp+6943,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
        bufp->chgBit(oldp+6944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+6945,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
        bufp->chgBit(oldp+6946,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_1_1));
        bufp->chgBit(oldp+6947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_2_0));
        bufp->chgBit(oldp+6948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_2_1));
        bufp->chgBit(oldp+6949,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_3_0));
        bufp->chgBit(oldp+6950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_3_1));
        bufp->chgBit(oldp+6951,((6U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6952,((5U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6953,((4U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_b_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6954,((6U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6955,((5U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6956,((4U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+6957,((6U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6958,((5U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6959,((4U == (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source) 
                                              >> 6U)))));
        bufp->chgBit(oldp+6960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_valid));
        bufp->chgBit(oldp+6961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_valid));
        bufp->chgBit(oldp+6962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_0_valid));
        bufp->chgBit(oldp+6963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_valid));
        bufp->chgBit(oldp+6964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_2_valid));
        bufp->chgBit(oldp+6965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_3_valid));
        bufp->chgBit(oldp+6966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_0_valid));
        bufp->chgBit(oldp+6967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_1_valid));
        bufp->chgBit(oldp+6968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_2_valid));
        bufp->chgBit(oldp+6969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__portsDIO_filtered_1_3_valid));
        bufp->chgSData(oldp+6970,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft),9);
        bufp->chgBit(oldp+6971,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft))));
        bufp->chgCData(oldp+6972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask),4);
        bufp->chgBit(oldp+6973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_0));
        bufp->chgBit(oldp+6974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1));
        bufp->chgBit(oldp+6975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2));
        bufp->chgBit(oldp+6976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_3));
        bufp->chgSData(oldp+6977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_1),9);
        bufp->chgBit(oldp+6978,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_1))));
        bufp->chgCData(oldp+6979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_1),4);
        bufp->chgBit(oldp+6980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_0));
        bufp->chgBit(oldp+6981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_1));
        bufp->chgBit(oldp+6982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_2));
        bufp->chgBit(oldp+6983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_1_3));
        bufp->chgSData(oldp+6984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_2),9);
        bufp->chgBit(oldp+6985,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))));
        bufp->chgCData(oldp+6986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_2),3);
        bufp->chgBit(oldp+6987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_0));
        bufp->chgBit(oldp+6988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_1));
        bufp->chgBit(oldp+6989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_2_2));
        bufp->chgBit(oldp+6990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_3));
        bufp->chgCData(oldp+6991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_3),3);
        bufp->chgBit(oldp+6992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_0));
        bufp->chgBit(oldp+6993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_1));
        bufp->chgBit(oldp+6994,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_3_2));
        bufp->chgSData(oldp+6995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_4),9);
        bufp->chgBit(oldp+6996,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))));
        bufp->chgCData(oldp+6997,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_4),2);
        bufp->chgCData(oldp+6998,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_4),2);
        bufp->chgCData(oldp+6999,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_4),2);
        bufp->chgBit(oldp+7000,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_4_0));
        bufp->chgBit(oldp+7001,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_4_1));
        bufp->chgBit(oldp+7002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_0));
        bufp->chgBit(oldp+7003,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_4_1));
        bufp->chgBit(oldp+7004,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_0));
        bufp->chgBit(oldp+7005,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_4_1));
        bufp->chgSData(oldp+7006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_5),9);
        bufp->chgBit(oldp+7007,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_5))));
        bufp->chgCData(oldp+7008,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_5),2);
        bufp->chgCData(oldp+7009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_5),2);
        bufp->chgCData(oldp+7010,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_5),2);
        bufp->chgBit(oldp+7011,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_5_0));
        bufp->chgBit(oldp+7012,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_5_1));
        bufp->chgBit(oldp+7013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_0));
        bufp->chgBit(oldp+7014,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_5_1));
        bufp->chgBit(oldp+7015,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_0));
        bufp->chgBit(oldp+7016,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_5_1));
        bufp->chgSData(oldp+7017,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_6),9);
        bufp->chgBit(oldp+7018,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_6))));
        bufp->chgCData(oldp+7019,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_6),2);
        bufp->chgCData(oldp+7020,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_6),2);
        bufp->chgCData(oldp+7021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_6),2);
        bufp->chgBit(oldp+7022,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_6_0));
        bufp->chgBit(oldp+7023,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_6_1));
        bufp->chgBit(oldp+7024,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_0));
        bufp->chgBit(oldp+7025,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_6_1));
        bufp->chgBit(oldp+7026,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_0));
        bufp->chgBit(oldp+7027,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_6_1));
        bufp->chgSData(oldp+7028,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_7),9);
        bufp->chgBit(oldp+7029,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_7))));
        bufp->chgCData(oldp+7030,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_valid_7),2);
        bufp->chgCData(oldp+7031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_mask_7),2);
        bufp->chgCData(oldp+7032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__readys_readys_7),2);
        bufp->chgBit(oldp+7033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_7_0));
        bufp->chgBit(oldp+7034,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_7_1));
        bufp->chgBit(oldp+7035,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_7_0));
        bufp->chgBit(oldp+7036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__state_7_1));
        bufp->chgBit(oldp+7037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_7_0));
        bufp->chgBit(oldp+7038,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_7_1));
        bufp->chgBit(oldp+7039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_1));
        bufp->chgBit(oldp+7040,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_2));
        bufp->chgBit(oldp+7041,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_4));
        bufp->chgSData(oldp+7042,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_4),9);
        bufp->chgSData(oldp+7043,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_5),9);
        bufp->chgSData(oldp+7044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_6),9);
        bufp->chgSData(oldp+7045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__maskedBeats_0_7),9);
        bufp->chgSData(oldp+7046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter),9);
        bufp->chgCData(oldp+7047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+7048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+7049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size),4);
        bufp->chgCData(oldp+7050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source),8);
        bufp->chgIData(oldp+7051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__address),32);
        bufp->chgSData(oldp+7052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter),9);
        bufp->chgCData(oldp+7053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+7054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__param_1),2);
        bufp->chgCData(oldp+7055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__size_1),4);
        bufp->chgCData(oldp+7056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__source_1),8);
        bufp->chgCData(oldp+7057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__sink),3);
        bufp->chgBit(oldp+7058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__denied));
        bufp->chgWData(oldp+7059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight),256);
        bufp->chgWData(oldp+7067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_opcodes),1024);
        bufp->chgWData(oldp+7099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes),2048);
        bufp->chgSData(oldp+7163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+7164,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+7165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+7166,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+7167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+7168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_1),256);
        bufp->chgWData(oldp+7176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__inflight_sizes_1),2048);
        bufp->chgSData(oldp+7240,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+7241,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+7242,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__watchdog_1),32);
        VL_SHIFTL_WWI(256,256,8, __Vtemp_17, VTestDriver__ConstPool__CONST_h4e9f510d_0, 
                      (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                >> 0xaU)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT___same_cycle_resp_T_1) {
            __Vtemp_18[0U] = __Vtemp_17[0U];
            __Vtemp_18[1U] = __Vtemp_17[1U];
            __Vtemp_18[2U] = __Vtemp_17[2U];
            __Vtemp_18[3U] = __Vtemp_17[3U];
            __Vtemp_18[4U] = __Vtemp_17[4U];
            __Vtemp_18[5U] = __Vtemp_17[5U];
            __Vtemp_18[6U] = __Vtemp_17[6U];
            __Vtemp_18[7U] = __Vtemp_17[7U];
        } else {
            __Vtemp_18[0U] = VTestDriver__ConstPool__CONST_h9e67c271_0[0U];
            __Vtemp_18[1U] = VTestDriver__ConstPool__CONST_h9e67c271_0[1U];
            __Vtemp_18[2U] = VTestDriver__ConstPool__CONST_h9e67c271_0[2U];
            __Vtemp_18[3U] = VTestDriver__ConstPool__CONST_h9e67c271_0[3U];
            __Vtemp_18[4U] = VTestDriver__ConstPool__CONST_h9e67c271_0[4U];
            __Vtemp_18[5U] = VTestDriver__ConstPool__CONST_h9e67c271_0[5U];
            __Vtemp_18[6U] = VTestDriver__ConstPool__CONST_h9e67c271_0[6U];
            __Vtemp_18[7U] = VTestDriver__ConstPool__CONST_h9e67c271_0[7U];
        }
        bufp->chgWData(oldp+7243,(__Vtemp_18),256);
        bufp->chgBit(oldp+7251,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgSData(oldp+7252,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter),9);
        bufp->chgCData(oldp+7253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode),3);
        bufp->chgCData(oldp+7254,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param),3);
        bufp->chgCData(oldp+7255,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size),4);
        bufp->chgCData(oldp+7256,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source),6);
        bufp->chgIData(oldp+7257,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address),32);
        bufp->chgSData(oldp+7258,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter),9);
        bufp->chgCData(oldp+7259,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_1),3);
        bufp->chgCData(oldp+7260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_1),2);
        bufp->chgCData(oldp+7261,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_1),4);
        bufp->chgCData(oldp+7262,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_1),6);
        bufp->chgCData(oldp+7263,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__sink),3);
        bufp->chgBit(oldp+7264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__denied));
        bufp->chgSData(oldp+7265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__b_first_counter),9);
        bufp->chgCData(oldp+7266,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_2),2);
        bufp->chgCData(oldp+7267,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_2),6);
        bufp->chgIData(oldp+7268,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_1),32);
        bufp->chgSData(oldp+7269,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter),9);
        bufp->chgCData(oldp+7270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__opcode_3),3);
        bufp->chgCData(oldp+7271,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__param_3),3);
        bufp->chgCData(oldp+7272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__size_3),4);
        bufp->chgCData(oldp+7273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__source_3),6);
        bufp->chgIData(oldp+7274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__address_2),32);
        bufp->chgQData(oldp+7275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight),33);
        bufp->chgWData(oldp+7277,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+7282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+7291,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+7292,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+7293,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+7294,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+7295,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog),32);
        bufp->chgQData(oldp+7296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_1),33);
        bufp->chgWData(oldp+7298,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+7307,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+7308,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+7309,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+7310,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+7311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__watchdog_1),32);
        bufp->chgCData(oldp+7312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_2),8);
        bufp->chgSData(oldp+7313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+7314,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+7315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter),9);
        bufp->chgCData(oldp+7316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode),3);
        bufp->chgCData(oldp+7317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param),3);
        bufp->chgCData(oldp+7318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size),4);
        bufp->chgCData(oldp+7319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source),6);
        bufp->chgIData(oldp+7320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address),32);
        bufp->chgSData(oldp+7321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter),9);
        bufp->chgCData(oldp+7322,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_1),3);
        bufp->chgCData(oldp+7323,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_1),2);
        bufp->chgCData(oldp+7324,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_1),4);
        bufp->chgCData(oldp+7325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_1),6);
        bufp->chgCData(oldp+7326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__sink),3);
        bufp->chgBit(oldp+7327,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__denied));
        bufp->chgSData(oldp+7328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__b_first_counter),9);
        bufp->chgCData(oldp+7329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_2),2);
        bufp->chgCData(oldp+7330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_2),6);
        bufp->chgIData(oldp+7331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address_1),32);
        bufp->chgSData(oldp+7332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter),9);
        bufp->chgCData(oldp+7333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__opcode_3),3);
        bufp->chgCData(oldp+7334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__param_3),3);
        bufp->chgCData(oldp+7335,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__size_3),4);
        bufp->chgCData(oldp+7336,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__source_3),6);
        bufp->chgIData(oldp+7337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__address_2),32);
        bufp->chgQData(oldp+7338,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight),33);
        bufp->chgWData(oldp+7340,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+7345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+7354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+7355,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+7356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+7357,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+7358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog),32);
        bufp->chgQData(oldp+7359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1),33);
        bufp->chgWData(oldp+7361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+7370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+7371,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+7372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+7373,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+7374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog_1),32);
        bufp->chgCData(oldp+7375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_2),8);
        bufp->chgSData(oldp+7376,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+7377,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3))));
        bufp->chgSData(oldp+7378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter),9);
        bufp->chgCData(oldp+7379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__opcode),3);
        bufp->chgCData(oldp+7380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__param),3);
        bufp->chgCData(oldp+7381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__size),4);
        bufp->chgCData(oldp+7382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__source),6);
        bufp->chgIData(oldp+7383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__address),32);
        bufp->chgSData(oldp+7384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter),9);
        bufp->chgCData(oldp+7385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__opcode_1),3);
        bufp->chgCData(oldp+7386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__param_1),2);
        bufp->chgCData(oldp+7387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__size_1),4);
        bufp->chgCData(oldp+7388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__source_1),6);
        bufp->chgCData(oldp+7389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__sink),3);
        bufp->chgBit(oldp+7390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__denied));
        bufp->chgSData(oldp+7391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__b_first_counter),9);
        bufp->chgCData(oldp+7392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__param_2),2);
        bufp->chgCData(oldp+7393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__source_2),6);
        bufp->chgIData(oldp+7394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__address_1),32);
        bufp->chgSData(oldp+7395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__c_first_counter),9);
        bufp->chgCData(oldp+7396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__opcode_3),3);
        bufp->chgCData(oldp+7397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__param_3),3);
        bufp->chgCData(oldp+7398,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__size_3),4);
        bufp->chgCData(oldp+7399,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__source_3),6);
        bufp->chgIData(oldp+7400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__address_2),32);
        bufp->chgQData(oldp+7401,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight),33);
        bufp->chgWData(oldp+7403,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes),132);
        bufp->chgWData(oldp+7408,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes),264);
        bufp->chgSData(oldp+7417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1),9);
        bufp->chgBit(oldp+7418,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1))));
        bufp->chgSData(oldp+7419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_1),9);
        bufp->chgBit(oldp+7420,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_1))));
        bufp->chgIData(oldp+7421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__watchdog),32);
        bufp->chgQData(oldp+7422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_1),33);
        bufp->chgWData(oldp+7424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes_1),264);
        bufp->chgSData(oldp+7433,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__c_first_counter_1),9);
        bufp->chgBit(oldp+7434,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__c_first_counter_1))));
        bufp->chgSData(oldp+7435,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_2),9);
        bufp->chgBit(oldp+7436,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_2))));
        bufp->chgIData(oldp+7437,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__watchdog_1),32);
        bufp->chgCData(oldp+7438,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_2),8);
        bufp->chgSData(oldp+7439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_3),9);
        bufp->chgBit(oldp+7440,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__d_first_counter_3))));
        bufp->chgBit(oldp+7441,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving));
        bufp->chgIData(oldp+7442,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__in_async__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
        bufp->chgBit(oldp+7443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending));
        bufp->chgSData(oldp+7444,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_beats1),9);
        bufp->chgSData(oldp+7445,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__merged_bits_last_counter_1),9);
        bufp->chgBit(oldp+7446,((1U & ((~ ((4U == (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                      >> 1U))) 
                                           | ((3U == 
                                               (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                   >> 1U))) 
                                              | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                      >> 1U))) 
                                                 | (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                        >> 1U))))))) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                          >> 1U))))) 
                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT__full)))))));
        bufp->chgBit(oldp+7447,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving)))));
        bufp->chgCData(oldp+7448,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                         >> 1U))),3);
        bufp->chgCData(oldp+7449,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                            >> 0x13U))),8);
        bufp->chgQData(oldp+7450,((((QData)((IData)(
                                                    (0x7ffU 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4))) 
                                    << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_3)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2 
                                                                    >> 0xbU)))))),64);
        bufp->chgSData(oldp+7452,((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                             >> 1U))),9);
        bufp->chgIData(oldp+7453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0),32);
        bufp->chgIData(oldp+7454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_1),32);
        bufp->chgIData(oldp+7455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_2),32);
        bufp->chgIData(oldp+7456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_3),32);
        bufp->chgIData(oldp+7457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4),32);
        bufp->chgIData(oldp+7458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5),32);
        bufp->chgCData(oldp+7459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__recvCount),3);
        bufp->chgBit(oldp+7460,((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__recvCount))));
        bufp->chgCData(oldp+7461,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+7462,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 5U))),8);
        bufp->chgSData(oldp+7463,(((0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x10U)) 
                                   | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x14U)))),9);
        bufp->chgBit(oldp+7464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT____Vcellinp__outArb__io_in_1_bits_last));
        bufp->chgBit(oldp+7465,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending)) 
                                 & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))));
        bufp->chgBit(oldp+7466,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sending)))));
        bufp->chgBit(oldp+7467,((1U & ((2U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT__empty)) 
                                              << 1U)) 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))));
        bufp->chgCData(oldp+7468,(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                    ? (7U & (0x92029cU 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                    : 0U)),3);
        bufp->chgCData(oldp+7469,(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                    ? (7U & ((0x38U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                 << 3U)) 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                    : 0U)),3);
        bufp->chgCData(oldp+7470,(((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                    ? (7U & ((0x18U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U]) 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))
                                    : 0U)),3);
        bufp->chgCData(oldp+7471,((0xffU & (IData)(
                                                   ((QData)((IData)(
                                                                    (0xf00U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                        << 3U)))) 
                                                    >> 
                                                    (0x3fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 3U)))))),8);
        bufp->chgCData(oldp+7472,((0xffU & (IData)(
                                                   ((QData)((IData)(
                                                                    (0xff00U 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 1U)))) 
                                                    >> 
                                                    (0x3fU 
                                                     & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 3U)))))),8);
        bufp->chgQData(oldp+7473,((((QData)((IData)(
                                                    VTestDriver__ConstPool__CONST_h93e1b771_0[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  VTestDriver__ConstPool__CONST_h93e1b771_0[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))))) 
                                      | ((QData)((IData)(
                                                         VTestDriver__ConstPool__CONST_h93e1b771_0[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))))),64);
        __Vtemp_20[0U] = 0U;
        __Vtemp_20[1U] = 0U;
        __Vtemp_20[2U] = (IData)((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                   >> 0x15U))));
        __Vtemp_20[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U])) 
                                    << 0x2bU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                                                    >> 0x15U))) 
                                  >> 0x20U));
        __Vtemp_20[4U] = 0U;
        __Vtemp_20[5U] = 0U;
        __Vtemp_20[6U] = 0U;
        __Vtemp_20[7U] = 0U;
        __Vtemp_20[8U] = 0U;
        __Vtemp_20[9U] = 0U;
        __Vtemp_20[0xaU] = 0U;
        __Vtemp_20[0xbU] = 0U;
        __Vtemp_20[0xcU] = 0U;
        __Vtemp_20[0xdU] = 0U;
        __Vtemp_20[0xeU] = 0U;
        __Vtemp_20[0xfU] = 0U;
        bufp->chgQData(oldp+7475,((((QData)((IData)(
                                                    __Vtemp_20[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_20[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_20[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen), 6U)))))),64);
        bufp->chgBit(oldp+7477,((1U & ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[2U] 
                                              >> 0x14U)) 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))));
        __Vtemp_21[0U] = ((0x1c00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 7U)) | (0x200U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xbU)));
        __Vtemp_21[1U] = 0U;
        __Vtemp_21[2U] = 0U;
        bufp->chgSData(oldp+7478,(((0x47U >= (0x7fU 
                                              & ((IData)(9U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                    ? (0x1ffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(9U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))
                                                   ? 0U
                                                   : 
                                                  (__Vtemp_21[
                                                   (((IData)(8U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(9U) 
                                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))))) 
                                                 | (__Vtemp_21[
                                                    (3U 
                                                     & (((IData)(9U) 
                                                         * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(9U) 
                                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen))))))
                                    : 0U)),9);
        bufp->chgBit(oldp+7479,((1U & ((0xfdU | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT____Vcellinp__outArb__io_in_1_bits_last) 
                                                 << 1U)) 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen)))));
        bufp->chgCData(oldp+7480,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__lockIdx),3);
        bufp->chgBit(oldp+7481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__locked));
        bufp->chgCData(oldp+7482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__chosen),3);
        bufp->chgCData(oldp+7483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount),3);
        bufp->chgBit(oldp+7484,((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outSer__DOT__sendCount))));
        bufp->chgSData(oldp+7485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div),16);
        bufp->chgBit(oldp+7486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen));
        bufp->chgBit(oldp+7487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        bufp->chgSData(oldp+7488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm),9);
        bufp->chgSData(oldp+7489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm),9);
        bufp->chgBit(oldp+7490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop));
        bufp->chgBit(oldp+7491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter));
        bufp->chgCData(oldp+7492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__opcode),3);
        bufp->chgCData(oldp+7493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__param),3);
        bufp->chgCData(oldp+7494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__size),2);
        bufp->chgSData(oldp+7495,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__source),14);
        bufp->chgIData(oldp+7496,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__address),29);
        bufp->chgBit(oldp+7497,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter));
        bufp->chgCData(oldp+7498,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__opcode_1),3);
        bufp->chgCData(oldp+7499,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__size_1),2);
        bufp->chgSData(oldp+7500,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__source_1),14);
        bufp->chgWData(oldp+7501,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight),8208);
        bufp->chgWData(oldp+7758,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_opcodes),32832);
        bufp->chgWData(oldp+8784,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes),32832);
        bufp->chgBit(oldp+9810,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__a_first_counter_1));
        bufp->chgBit(oldp+9811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter_1));
        bufp->chgIData(oldp+9812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog),32);
        bufp->chgWData(oldp+9813,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_1),8208);
        bufp->chgWData(oldp+10070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight_sizes_1),32832);
        bufp->chgBit(oldp+11096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__d_first_counter_2));
        bufp->chgIData(oldp+11097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog_1),32);
        bufp->chgBit(oldp+11098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__valid));
        bufp->chgCData(oldp+11099,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__shifter),8);
        bufp->chgCData(oldp+11100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__debounce),2);
        bufp->chgSData(oldp+11101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler),13);
        bufp->chgCData(oldp+11102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count),4);
        bufp->chgCData(oldp+11103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count),4);
        bufp->chgCData(oldp+11104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample),3);
        bufp->chgBit(oldp+11105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__state));
        bufp->chgBit(oldp+11106,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler))));
        bufp->chgBit(oldp+11107,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__data_count))));
        bufp->chgBit(oldp+11108,((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count))));
        bufp->chgBit(oldp+11109,((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ptr_match) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__maybe_full))))));
        bufp->chgBit(oldp+11110,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)))));
        bufp->chgCData(oldp+11111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                   [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value]),8);
        bufp->chgSData(oldp+11112,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__maybe_full) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ptr_match)) 
                                     << 8U) | (0xffU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value) 
                                                  - (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value))))),9);
        bufp->chgCData(oldp+11113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__enq_ptr_value),8);
        bufp->chgCData(oldp+11114,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value),8);
        bufp->chgBit(oldp+11115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__maybe_full));
        bufp->chgBit(oldp+11116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ptr_match));
        bufp->chgBit(oldp+11117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty));
        bufp->chgBit(oldp+11118,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ptr_match) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__maybe_full))));
        bufp->chgBit(oldp+11119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_enq));
        bufp->chgBit(oldp+11120,(((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter)))) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen))));
        bufp->chgSData(oldp+11121,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler),16);
        bufp->chgCData(oldp+11122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter),4);
        bufp->chgBit(oldp+11123,((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler))));
        bufp->chgCData(oldp+11124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value),8);
        bufp->chgBit(oldp+11125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__maybe_full));
        bufp->chgBit(oldp+11126,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__initialized));
        bufp->chgQData(oldp+11127,(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT__channel),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0x18U]))) {
        bufp->chgCData(oldp+11129,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgCData(oldp+11130,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? 0xffU : (0xffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 0x11U)))),8);
        bufp->chgBit(oldp+11131,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x19U)))));
        bufp->chgCData(oldp+11132,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgBit(oldp+11133,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x19U)))));
        bufp->chgCData(oldp+11134,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgBit(oldp+11135,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+11136,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
                                        & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft))
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                               >> 2U)
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_2))))));
        bufp->chgBit(oldp+11137,((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__full)) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_0)) 
                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_1) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_a_ready)) 
                                     | (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__full)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_2)) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_3) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_a_ready)) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_4) 
                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_a_ready)) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_5) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_a_ready)) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_6) 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_a_ready)) 
                                                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__full)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_7)))))))))));
        bufp->chgCData(oldp+11138,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xfU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 0x11U))))),8);
        bufp->chgCData(oldp+11139,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xfU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 0x11U))))),8);
        bufp->chgCData(oldp+11140,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xfU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 0x11U))))),8);
        bufp->chgBit(oldp+11141,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x19U)))));
        bufp->chgSData(oldp+11142,((0x3ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                               : ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 0x16U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))),10);
        bufp->chgCData(oldp+11143,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xfU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 0x11U))))),8);
        bufp->chgSData(oldp+11144,((0x3ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                                               : ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 0x16U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))),10);
        bufp->chgCData(oldp+11145,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xfU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 0x11U))))),8);
        bufp->chgBit(oldp+11146,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
                                        & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft))
                                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_readys) 
                                               >> 7U)
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_7))))));
        bufp->chgBit(oldp+11147,((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__full)) 
                                        & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__beatsLeft))
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_readys)
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__state_0))))));
        bufp->chgCData(oldp+11148,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgCData(oldp+11149,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                     ? 0xffU : (0xffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 8U)))),8);
        bufp->chgBit(oldp+11150,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x10U)))));
        bufp->chgCData(oldp+11151,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0x18U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 8U))))),8);
        bufp->chgCData(oldp+11152,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgBit(oldp+11153,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x10U)))));
        bufp->chgCData(oldp+11154,((0xffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                              : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0x18U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 8U))))),8);
        bufp->chgCData(oldp+11155,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full)
                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               << 0x1dU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 3U))))),3);
        bufp->chgBit(oldp+11156,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x18U)))));
        __Vtemp_37[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                 [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                   << 0x1fU))))));
        __Vtemp_37[1U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                  [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                    << 0x1fU))))) 
                                  >> 0x20U));
        __Vtemp_37[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm) 
                           << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen)));
        __Vtemp_37[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm) 
                           << 0x10U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        __Vtemp_37[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        __Vtemp_37[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        __Vtemp_37[6U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)));
        __Vtemp_37[7U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)) 
                                  >> 0x20U));
        bufp->chgQData(oldp+11157,(((0U == (0x7fU & 
                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                             >> 5U)))
                                     ? (((QData)((IData)(
                                                         __Vtemp_37[
                                                         (((IData)(0x3fU) 
                                                           + 
                                                           (0xffU 
                                                            & VL_SHIFTL_III(8,8,32, 
                                                                            (3U 
                                                                             & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                          >> 5U)])) 
                                         << ((0U == 
                                              (0x1fU 
                                               & VL_SHIFTL_III(8,8,32, 
                                                               (3U 
                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                   >> 3U)), 6U)))
                                              ? 0x20U
                                              : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                      >> 3U)), 6U))))) 
                                        | (((0U == 
                                             (0x1fU 
                                              & VL_SHIFTL_III(8,8,32, 
                                                              (3U 
                                                               & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                  >> 3U)), 6U)))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                __Vtemp_37[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                      >> 3U)), 6U))))) 
                                           | ((QData)((IData)(
                                                              __Vtemp_37[
                                                              (7U 
                                                               & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                  >> 5U))])) 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                      >> 3U)), 6U)))))
                                     : 0ULL)),64);
        __Vtemp_53[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                 [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                   << 0x1fU))))));
        __Vtemp_53[1U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                  [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                    << 0x1fU))))) 
                                  >> 0x20U));
        __Vtemp_53[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm) 
                           << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen)));
        __Vtemp_53[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm) 
                           << 0x10U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        __Vtemp_53[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        __Vtemp_53[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        __Vtemp_53[6U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)));
        __Vtemp_53[7U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)) 
                                  >> 0x20U));
        bufp->chgQData(oldp+11159,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_53[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_53[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_53[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL))),64);
        __Vtemp_69[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                 [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                   << 0x1fU))))));
        __Vtemp_69[1U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                  [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                    << 0x1fU))))) 
                                  >> 0x20U));
        __Vtemp_69[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm) 
                           << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen)));
        __Vtemp_69[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm) 
                           << 0x10U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        __Vtemp_69[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        __Vtemp_69[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        __Vtemp_69[6U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)));
        __Vtemp_69[7U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)) 
                                  >> 0x20U));
        __Vtemp_70[0U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_69[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_69[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_69[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL))) << 0x14U) 
                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                                         << 5U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))));
        __Vtemp_70[1U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_69[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_69[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_69[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL))) >> 0xcU) 
                          | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                         ? ((0U == 
                                             (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                 >> 3U)))
                                             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                             : 0ULL)
                                         : 0ULL) | 
                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                         ? ((0U == 
                                             (0x7fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                 >> 5U)))
                                             ? (((QData)((IData)(
                                                                 __Vtemp_69[
                                                                 (((IData)(0x3fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                        >> 3U)), 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                        >> 3U)), 6U))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     __Vtemp_69[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0xffU 
                                                                        & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                           >> 3U)), 6U))))) 
                                                   | ((QData)((IData)(
                                                                      __Vtemp_69[
                                                                      (7U 
                                                                       & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                           >> 3U)), 6U)))))
                                             : 0ULL)
                                         : 0ULL)) >> 0x20U)) 
                             << 0x14U));
        __Vtemp_70[2U] = ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_69[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_69[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_69[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL)) >> 0x20U)) 
                          >> 0xcU);
        __Vtemp_71[0U] = __Vtemp_70[0U];
        __Vtemp_71[1U] = __Vtemp_70[1U];
        __Vtemp_71[2U] = __Vtemp_70[2U];
        bufp->chgWData(oldp+11161,(__Vtemp_71),85);
    }
}
