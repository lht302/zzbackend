// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6247(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6247\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0xffffffU 
                                         & (((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U))) 
                                            >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0xffffffU 
                                         & (((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U))) 
                                            >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_enq) {
        __Vtemp_1[2U] = (IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_0)
                                    ? (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                           >> 1U)))
                                    : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_1)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                       >> 1U)))
                                                 : 0ULL) 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_2)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                    << 0x3fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                       << 0x1fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                         >> 1U)))
                                                   : 0ULL))) 
                                 >> 0x20U));
        __Vtemp_2[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address 
                          >> 0xeU) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_0)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                  << 0x3fU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                       >> 1U)))
                                                 : 0ULL) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_1)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                          >> 1U)))
                                                    : 0ULL) 
                                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_2)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                       << 0x3fU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                          << 0x1fU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                            >> 1U)))
                                                      : 0ULL)))) 
                                      << 0x12U));
        __Vtemp_2[2U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_0)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                              >> 1U)))
                                     : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_1)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                   << 0x3fU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                      << 0x1fU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                        >> 1U)))
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_2)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])) 
                                                          >> 1U)))
                                                    : 0ULL)))) 
                          >> 0xeU) | (__Vtemp_1[2U] 
                                      << 0x12U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_address 
                << 0x12U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_source) 
                              << 9U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_size) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_param) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_bits_opcode)))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_2[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = __Vtemp_2[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_0) 
                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_1) 
                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__muxState_2_2) 
                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U]))) 
                << 0x12U) | (__Vtemp_1[2U] >> 0xeU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6248(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6248\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    CData/*31:0*/ __Vtemp_2;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap_1 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__do_deq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap_1 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__wrap_1) 
                     - (IData)(1U)));
    }
    __Vtemp_1 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_writeback 
        = __Vtemp_1;
    __Vtemp_2 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_writeback 
        = __Vtemp_2;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6249(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6249\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_writeback 
        = __Vtemp_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_rprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_rprobeacklast))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6250(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6250\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_rprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 6U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_rprobe)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 5U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_rprobe)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_rprobe)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6251(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6251\n"); );
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_writeback 
        = __Vtemp_1;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_rprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantack)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6252(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6252\n"); );
    // Init
    CData/*31:0*/ __Vtemp_2;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 3U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_rprobe)))));
    __Vtemp_2 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_writeback 
        = __Vtemp_2;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_rprobeacklast))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6253(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6253\n"); );
    // Init
    CData/*31:0*/ __Vtemp_3;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 2U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_rprobe)))));
    __Vtemp_3 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_writeback 
        = __Vtemp_3;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeacklast))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6254(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6254\n"); );
    // Init
    CData/*31:0*/ __Vtemp_4;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_rprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_40)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_rprobe)))));
    __Vtemp_4 = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
                 || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
                            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_prio_2)
                                ? ((~ (((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param)) 
                                          | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param))) 
                                         | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param))) 
                                        & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_clients) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_clientBit)))) 
                                       | (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param)) 
                                           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_param))) 
                                          & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_state))))) 
                                   & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_opcode) 
                                         & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_dirty)))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_control) 
                                   | ((~ (((((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_opcode) 
                                                 >> 2U)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_hit)) 
                                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_meta_dirty))) 
                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_46)) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_44))) 
                                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_41)))))
                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_47) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_writeback)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_writeback 
        = __Vtemp_4;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6255(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6255\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_45)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_rprobeacklast 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_40)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_53) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_rprobeacklast))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantack 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_42) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_46)))
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_bits_sink))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantack)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_rprobe 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) 
           || (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_40)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_rprobe)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_grantack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_grantack = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 6U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_grantack));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 5U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_grantack));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6256(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6256\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_grantack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_grantack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_grantack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_grantack = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 4U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_grantack));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_grantack));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 2U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_grantack));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_grantack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 1U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_grantack));
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54009_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a4c3f1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6257(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6257\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_7;
    VlWide<17>/*543:0*/ __Vtemp_8;
    VlWide<17>/*543:0*/ __Vtemp_14;
    // Body
    __Vtemp_5[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                      ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                       >> 0x15U))) : 0U);
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0U;
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_5[5U] = 0U;
    __Vtemp_5[6U] = 0U;
    __Vtemp_5[7U] = 0U;
    __Vtemp_5[8U] = 0U;
    __Vtemp_5[9U] = 0U;
    __Vtemp_5[0xaU] = 0U;
    __Vtemp_5[0xbU] = 0U;
    __Vtemp_5[0xcU] = 0U;
    __Vtemp_5[0xdU] = 0U;
    __Vtemp_5[0xeU] = 0U;
    __Vtemp_5[0xfU] = 0U;
    __Vtemp_5[0x10U] = 0U;
    __Vtemp_7[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                              >> 7U));
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    __Vtemp_7[5U] = 0U;
    __Vtemp_7[6U] = 0U;
    __Vtemp_7[7U] = 0U;
    __Vtemp_7[8U] = 0U;
    __Vtemp_7[9U] = 0U;
    __Vtemp_7[0xaU] = 0U;
    __Vtemp_7[0xbU] = 0U;
    __Vtemp_7[0xcU] = 0U;
    __Vtemp_7[0xdU] = 0U;
    __Vtemp_7[0xeU] = 0U;
    __Vtemp_7[0xfU] = 0U;
    __Vtemp_7[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_8, __Vtemp_5, __Vtemp_7);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_14, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantfirst = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_grantack = 1U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight = 0ULL;
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        __Vtemp_2[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[0U] = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantfirst 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_grantack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_43;
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantfirst 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_51) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantfirst));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_grantack 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grantfirst)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_grantack));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_2[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[1U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                 & __Vtemp_8[1U]) : 0U)) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                   & __Vtemp_14[1U])
                                : 0U)));
        __Vtemp_2[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[2U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                 & __Vtemp_8[2U]) : 0U)) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                   & __Vtemp_14[2U])
                                : 0U)));
        __Vtemp_2[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[3U] 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                              ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                 & __Vtemp_8[3U]) : 0U)) 
                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                   & __Vtemp_14[3U])
                                : 0U)));
        __Vtemp_2[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[4U] 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                      ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                         & __Vtemp_8[4U])
                                      : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                    & __Vtemp_14[4U])
                                                    : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_8[0U]) : 0U)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                                    ? 
                                                   (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                    & __Vtemp_14[0U])
                                                    : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[1U] 
        = __Vtemp_2[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[2U] 
        = __Vtemp_2[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[3U] 
        = __Vtemp_2[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_opcodes[4U] 
        = __Vtemp_2[4U];
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hf974e5b2_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851867_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h2a0d1dfa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54001_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6258(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6258\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_30;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    __Vtemp_21[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0x15U)))
                       : 0U);
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    __Vtemp_21[6U] = 0U;
    __Vtemp_21[7U] = 0U;
    __Vtemp_21[8U] = 0U;
    __Vtemp_21[9U] = 0U;
    __Vtemp_21[0xaU] = 0U;
    __Vtemp_21[0xbU] = 0U;
    __Vtemp_21[0xcU] = 0U;
    __Vtemp_21[0xdU] = 0U;
    __Vtemp_21[0xeU] = 0U;
    __Vtemp_21[0xfU] = 0U;
    __Vtemp_21[0x10U] = 0U;
    __Vtemp_23[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 7U));
    __Vtemp_23[1U] = 0U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    __Vtemp_23[8U] = 0U;
    __Vtemp_23[9U] = 0U;
    __Vtemp_23[0xaU] = 0U;
    __Vtemp_23[0xbU] = 0U;
    __Vtemp_23[0xcU] = 0U;
    __Vtemp_23[0xdU] = 0U;
    __Vtemp_23[0xeU] = 0U;
    __Vtemp_23[0xfU] = 0U;
    __Vtemp_23[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_24, __Vtemp_21, __Vtemp_23);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_30, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight = 0ULL;
        __Vtemp_18[1U] = 0U;
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_18[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_24[1U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                & __Vtemp_30[1U])
                                             : 0U)));
        __Vtemp_18[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_24[2U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                & __Vtemp_30[2U])
                                             : 0U)));
        __Vtemp_18[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_24[3U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                & __Vtemp_30[3U])
                                             : 0U)));
        __Vtemp_18[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[4U] 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                       ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                          & __Vtemp_24[4U])
                                       : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_30[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_24[0U]) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                     & __Vtemp_30[0U])
                                                     : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_opcodes[4U] 
        = __Vtemp_18[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6259(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6259\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_30;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    __Vtemp_21[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0x15U)))
                       : 0U);
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    __Vtemp_21[6U] = 0U;
    __Vtemp_21[7U] = 0U;
    __Vtemp_21[8U] = 0U;
    __Vtemp_21[9U] = 0U;
    __Vtemp_21[0xaU] = 0U;
    __Vtemp_21[0xbU] = 0U;
    __Vtemp_21[0xcU] = 0U;
    __Vtemp_21[0xdU] = 0U;
    __Vtemp_21[0xeU] = 0U;
    __Vtemp_21[0xfU] = 0U;
    __Vtemp_21[0x10U] = 0U;
    __Vtemp_23[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 7U));
    __Vtemp_23[1U] = 0U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    __Vtemp_23[8U] = 0U;
    __Vtemp_23[9U] = 0U;
    __Vtemp_23[0xaU] = 0U;
    __Vtemp_23[0xbU] = 0U;
    __Vtemp_23[0xcU] = 0U;
    __Vtemp_23[0xdU] = 0U;
    __Vtemp_23[0xeU] = 0U;
    __Vtemp_23[0xfU] = 0U;
    __Vtemp_23[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_24, __Vtemp_21, __Vtemp_23);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_30, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight = 0ULL;
        __Vtemp_18[1U] = 0U;
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_18[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_24[1U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                & __Vtemp_30[1U])
                                             : 0U)));
        __Vtemp_18[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_24[2U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                & __Vtemp_30[2U])
                                             : 0U)));
        __Vtemp_18[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_24[3U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                & __Vtemp_30[3U])
                                             : 0U)));
        __Vtemp_18[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[4U] 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                       ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                          & __Vtemp_24[4U])
                                       : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_30[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_24[0U]) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                     & __Vtemp_30[0U])
                                                     : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_opcodes[4U] 
        = __Vtemp_18[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6260(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6260\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_30;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    __Vtemp_21[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0x15U)))
                       : 0U);
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    __Vtemp_21[6U] = 0U;
    __Vtemp_21[7U] = 0U;
    __Vtemp_21[8U] = 0U;
    __Vtemp_21[9U] = 0U;
    __Vtemp_21[0xaU] = 0U;
    __Vtemp_21[0xbU] = 0U;
    __Vtemp_21[0xcU] = 0U;
    __Vtemp_21[0xdU] = 0U;
    __Vtemp_21[0xeU] = 0U;
    __Vtemp_21[0xfU] = 0U;
    __Vtemp_21[0x10U] = 0U;
    __Vtemp_23[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 7U));
    __Vtemp_23[1U] = 0U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    __Vtemp_23[8U] = 0U;
    __Vtemp_23[9U] = 0U;
    __Vtemp_23[0xaU] = 0U;
    __Vtemp_23[0xbU] = 0U;
    __Vtemp_23[0xcU] = 0U;
    __Vtemp_23[0xdU] = 0U;
    __Vtemp_23[0xeU] = 0U;
    __Vtemp_23[0xfU] = 0U;
    __Vtemp_23[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_24, __Vtemp_21, __Vtemp_23);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_30, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight = 0ULL;
        __Vtemp_18[1U] = 0U;
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_18[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_24[1U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                & __Vtemp_30[1U])
                                             : 0U)));
        __Vtemp_18[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_24[2U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                & __Vtemp_30[2U])
                                             : 0U)));
        __Vtemp_18[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_24[3U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                & __Vtemp_30[3U])
                                             : 0U)));
        __Vtemp_18[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[4U] 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                       ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                          & __Vtemp_24[4U])
                                       : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_30[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_24[0U]) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                     & __Vtemp_30[0U])
                                                     : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_opcodes[4U] 
        = __Vtemp_18[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6261(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6261\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_30;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_3_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    __Vtemp_21[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0x15U)))
                       : 0U);
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    __Vtemp_21[6U] = 0U;
    __Vtemp_21[7U] = 0U;
    __Vtemp_21[8U] = 0U;
    __Vtemp_21[9U] = 0U;
    __Vtemp_21[0xaU] = 0U;
    __Vtemp_21[0xbU] = 0U;
    __Vtemp_21[0xcU] = 0U;
    __Vtemp_21[0xdU] = 0U;
    __Vtemp_21[0xeU] = 0U;
    __Vtemp_21[0xfU] = 0U;
    __Vtemp_21[0x10U] = 0U;
    __Vtemp_23[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 7U));
    __Vtemp_23[1U] = 0U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    __Vtemp_23[8U] = 0U;
    __Vtemp_23[9U] = 0U;
    __Vtemp_23[0xaU] = 0U;
    __Vtemp_23[0xbU] = 0U;
    __Vtemp_23[0xcU] = 0U;
    __Vtemp_23[0xdU] = 0U;
    __Vtemp_23[0xeU] = 0U;
    __Vtemp_23[0xfU] = 0U;
    __Vtemp_23[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_24, __Vtemp_21, __Vtemp_23);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_30, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight = 0ULL;
        __Vtemp_18[1U] = 0U;
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_18[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_24[1U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                & __Vtemp_30[1U])
                                             : 0U)));
        __Vtemp_18[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_24[2U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                & __Vtemp_30[2U])
                                             : 0U)));
        __Vtemp_18[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_24[3U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                & __Vtemp_30[3U])
                                             : 0U)));
        __Vtemp_18[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[4U] 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                       ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                          & __Vtemp_24[4U])
                                       : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_30[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_24[0U]) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                     & __Vtemp_30[0U])
                                                     : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_opcodes[4U] 
        = __Vtemp_18[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6262(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6262\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<17>/*543:0*/ __Vtemp_21;
    VlWide<17>/*543:0*/ __Vtemp_23;
    VlWide<17>/*543:0*/ __Vtemp_24;
    VlWide<17>/*543:0*/ __Vtemp_30;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_2_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    __Vtemp_21[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                       ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0x15U)))
                       : 0U);
    __Vtemp_21[1U] = 0U;
    __Vtemp_21[2U] = 0U;
    __Vtemp_21[3U] = 0U;
    __Vtemp_21[4U] = 0U;
    __Vtemp_21[5U] = 0U;
    __Vtemp_21[6U] = 0U;
    __Vtemp_21[7U] = 0U;
    __Vtemp_21[8U] = 0U;
    __Vtemp_21[9U] = 0U;
    __Vtemp_21[0xaU] = 0U;
    __Vtemp_21[0xbU] = 0U;
    __Vtemp_21[0xcU] = 0U;
    __Vtemp_21[0xdU] = 0U;
    __Vtemp_21[0xeU] = 0U;
    __Vtemp_21[0xfU] = 0U;
    __Vtemp_21[0x10U] = 0U;
    __Vtemp_23[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 7U));
    __Vtemp_23[1U] = 0U;
    __Vtemp_23[2U] = 0U;
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    __Vtemp_23[5U] = 0U;
    __Vtemp_23[6U] = 0U;
    __Vtemp_23[7U] = 0U;
    __Vtemp_23[8U] = 0U;
    __Vtemp_23[9U] = 0U;
    __Vtemp_23[0xaU] = 0U;
    __Vtemp_23[0xbU] = 0U;
    __Vtemp_23[0xcU] = 0U;
    __Vtemp_23[0xdU] = 0U;
    __Vtemp_23[0xeU] = 0U;
    __Vtemp_23[0xfU] = 0U;
    __Vtemp_23[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_24, __Vtemp_21, __Vtemp_23);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_30, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight = 0ULL;
        __Vtemp_18[1U] = 0U;
        __Vtemp_18[2U] = 0U;
        __Vtemp_18[3U] = 0U;
        __Vtemp_18[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 9U)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_18[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[1U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                  & __Vtemp_24[1U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                & __Vtemp_30[1U])
                                             : 0U)));
        __Vtemp_18[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[2U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                  & __Vtemp_24[2U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                & __Vtemp_30[2U])
                                             : 0U)));
        __Vtemp_18[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[3U] 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                               ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                  & __Vtemp_24[3U])
                               : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                             ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                & __Vtemp_30[3U])
                                             : 0U)));
        __Vtemp_18[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[4U] 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                       ? (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                          & __Vtemp_24[4U])
                                       : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_30[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_24[0U]) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                                                     & __Vtemp_30[0U])
                                                     : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[1U] 
        = __Vtemp_18[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[2U] 
        = __Vtemp_18[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[3U] 
        = __Vtemp_18[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_opcodes[4U] 
        = __Vtemp_18[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6263(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6263\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<17>/*543:0*/ __Vtemp_2;
    VlWide<17>/*543:0*/ __Vtemp_4;
    VlWide<17>/*543:0*/ __Vtemp_5;
    VlWide<17>/*543:0*/ __Vtemp_10;
    // Body
    __Vtemp_2[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                      ? (1U | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                        >> 0xeU))) : 0U);
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_2[3U] = 0U;
    __Vtemp_2[4U] = 0U;
    __Vtemp_2[5U] = 0U;
    __Vtemp_2[6U] = 0U;
    __Vtemp_2[7U] = 0U;
    __Vtemp_2[8U] = 0U;
    __Vtemp_2[9U] = 0U;
    __Vtemp_2[0xaU] = 0U;
    __Vtemp_2[0xbU] = 0U;
    __Vtemp_2[0xcU] = 0U;
    __Vtemp_2[0xdU] = 0U;
    __Vtemp_2[0xeU] = 0U;
    __Vtemp_2[0xfU] = 0U;
    __Vtemp_2[0x10U] = 0U;
    __Vtemp_4[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                               >> 6U));
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    __Vtemp_4[5U] = 0U;
    __Vtemp_4[6U] = 0U;
    __Vtemp_4[7U] = 0U;
    __Vtemp_4[8U] = 0U;
    __Vtemp_4[9U] = 0U;
    __Vtemp_4[0xaU] = 0U;
    __Vtemp_4[0xbU] = 0U;
    __Vtemp_4[0xcU] = 0U;
    __Vtemp_4[0xdU] = 0U;
    __Vtemp_4[0xeU] = 0U;
    __Vtemp_4[0xfU] = 0U;
    __Vtemp_4[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_5, __Vtemp_2, __Vtemp_4);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_10, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT___fixer_auto_in_1_d_bits_source) 
                   << 3U));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                    & __Vtemp_5[1U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                      & __Vtemp_10[1U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                    & __Vtemp_5[2U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                      & __Vtemp_10[2U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                    & __Vtemp_5[3U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                      & __Vtemp_10[3U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                    & __Vtemp_5[4U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                      & __Vtemp_10[4U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                    & __Vtemp_5[5U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                      & __Vtemp_10[5U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                    & __Vtemp_5[6U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                      & __Vtemp_10[6U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                    & __Vtemp_5[7U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                      & __Vtemp_10[7U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                                 ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                    & __Vtemp_5[8U])
                                 : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                                   ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                      & __Vtemp_10[8U])
                                   : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_2)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_5[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___GEN_107)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_10[0U]) : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__inflight_sizes[8U] 
        = __Vtemp_1[8U];
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6264(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6264\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_1)
                              ? ((0x1000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                     >> 0xfU))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6265(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6265\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_execute = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_execute = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 6U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 5U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6266(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6266\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_execute = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_execute = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 4U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6267(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6267\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushOutValid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_7) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__full)) 
               | ((~ (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_wofireMux_T_2) 
                         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex))) 
                        & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1))))) 
                       & (0xffffffffU == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_womask_T_5)) 
                      | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___out_wofireMux_T_2) 
                           & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_oindex))) 
                          & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT___GEN_1))))) 
                         & (0xffffffffffffffffULL == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__out_backMask)))) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__ctrls__DOT__flushOutValid))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT____Vcellinp__ram_ext__W0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT____Vcellinp__ram_ext__W0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT____Vcellinp__ram_ext__W0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT____Vcellinp__ram_ext__W0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__sink)
                 : 0U) | (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__sink)
                            : 0U) | (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__sink)
                                       : 0U) | (((8U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__sink)
                                                  : 0U) 
                                                | (((0x10U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__sink)
                                                     : 0U) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__sink)
                                                        : 0U) 
                                                      | ((0x40U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH))
                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__sink)
                                                          : 0U)))))));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6268(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6268\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_coupler_from_port_named_serial_tl_0_in__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_execute = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_flush = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 2U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_6__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 6U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__s_flush));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6269(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6269\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_flush = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_flush = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_execute = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 4U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__s_flush));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_5__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 5U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__s_flush));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_execute 
                = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                      >> 1U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6270(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6270\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grant = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_execute = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_flush = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grant 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_43;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_45;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_execute 
                = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_prio_2)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_control));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_sinkc_valid) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__last_probe)) 
                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last) 
                       | (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_offset)))))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_execute 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_pprobeack)) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grant)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_execute));
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_51) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_grant 
                    = (1U & ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_offset)))) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last)));
            }
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__s_flush));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6271(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6271\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_flush = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_flush = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_releaseack = 1U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_flush = 1U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 2U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__s_flush));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__fbus_buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_flush 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                     >> 1U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__s_flush));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_releaseack 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_39;
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_flush 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_prio_2) 
                         | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__new_request_control))));
        } else {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_releaseack 
                = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_sinkd_valid) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_50))) 
                    & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT___ram_ext_R0_data[0U]))) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_releaseack));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_flush 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__w_releaseack)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__s_flush));
        }
    }
}
