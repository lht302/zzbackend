// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__0(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    // Body
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x61782d63U;
    __Vtemp_1[3U] = 0x6dU;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_1), 
                               vlSelf->TestDriver__DOT__max_cycles);
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x73746172U;
    __Vtemp_2[2U] = 0x756d702dU;
    __Vtemp_2[3U] = 0x64U;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_2), 
                               vlSelf->TestDriver__DOT__dump_start);
    vlSelf->TestDriver__DOT__verbose = (1U & VL_TESTPLUSARGS_I(
                                                               std::string{"verbose"}));
    vlSelf->TestDriver__DOT__rand_value = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__rand_value = VL_RANDOM_SEEDED_II(vlSelf->TestDriver__DOT__rand_value);
    if (VL_UNLIKELY(vlSelf->TestDriver__DOT__verbose)) {
        VL_FWRITEF(0x80000002U,"testing $random %0x\n",
                   32,vlSelf->TestDriver__DOT__rand_value);
    }
    __Vtemp_3[0U] = 0x653d2573U;
    __Vtemp_3[1U] = 0x7366696cU;
    __Vtemp_3[2U] = 0x64706c75U;
    __Vtemp_3[3U] = 0x7663U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(2048, VL_CVT_PACK_STR_NW(4, __Vtemp_3), 
                                         vlSelf->TestDriver__DOT__vcdplusfile))) {
        VL_FWRITEF(0x80000002U,"Error: +vcdplusfile is VCS-only; use +vcdfile instead or recompile with VCS=1\n");
        VL_WRITEF("[%0t] %%Fatal: TestDriver.v:58: Assertion failed in %NTestDriver\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TestDriver.v", 58, "");
    }
    __Vtemp_4[0U] = 0x653d2573U;
    __Vtemp_4[1U] = 0x6266696cU;
    __Vtemp_4[2U] = 0x667364U;
    if (VL_UNLIKELY(VL_VALUEPLUSARGS_INW(2048, VL_CVT_PACK_STR_NW(3, __Vtemp_4), 
                                         vlSelf->TestDriver__DOT__fsdbfile))) {
        VL_FWRITEF(0x80000002U,"Error: +fsdbfile is FSDB-only; use +vcdfile/+vcdplus instead or recompile with FSDB=1\n");
        VL_WRITEF("[%0t] %%Fatal: TestDriver.v:70: Assertion failed in %NTestDriver\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TestDriver.v", 70, "");
    }
    __Vtemp_5[0U] = 0x653d2573U;
    __Vtemp_5[1U] = 0x6466696cU;
    __Vtemp_5[2U] = 0x7663U;
    if (VL_VALUEPLUSARGS_INW(2048, VL_CVT_PACK_STR_NW(3, __Vtemp_5), 
                             vlSelf->TestDriver__DOT__vcdfile)) {
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(64, vlSelf->TestDriver__DOT__vcdfile));
        vlSymsp->_traceDumpOpen();
    }
    if ((0ULL == vlSelf->TestDriver__DOT__dump_start)) {
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3__DOT__out_r 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3_1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3_1__DOT__out_r 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__zzzzz_3_1__DOT___RANDOM
           [0U]);
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__2841(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__2842(VTestDriver___024root* vlSelf);
void VTestDriver___024unit____Vdpiimwrap_uart_init_TOP____024unit(std::string filename, IData/*31:0*/ uartno, IData/*31:0*/ forcepty);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__2843(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__2843\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VTestDriver___024root___eval_initial__TOP__2841(vlSelf);
    VTestDriver___024root___eval_initial__TOP__2842(vlSelf);
    __Vtemp_1[0U] = 0x673d2573U;
    __Vtemp_1[1U] = 0x72746c6fU;
    __Vtemp_1[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                               vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__sim__DOT_____05Fuartlog);
    VTestDriver___024unit____Vdpiimwrap_uart_init_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__sim__DOT_____05Fuartlog, 0U, 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__prescaler 
        = (0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                      [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__data_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                   [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                   [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__shifter 
        = ((0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                     [0U] >> 0x18U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                                        [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [1U] >> 3U));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestDriver___024root___dump_triggers__stl(VTestDriver___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestDriver___024root___eval_triggers__stl(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestDriver___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
