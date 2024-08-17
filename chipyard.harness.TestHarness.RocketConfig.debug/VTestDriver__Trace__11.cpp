// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestDriver__Syms.h"


extern const VlWide<2048>/*65535:0*/ VTestDriver__ConstPool__CONST_h59295a2e_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h09b34b06_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h129dfe9c_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b330f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hebe77906_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;

void VTestDriver___024root__trace_chg_0_sub_11(VTestDriver___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root__trace_chg_0_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 73902);
    VlWide<8>/*255:0*/ __Vtemp_6;
    VlWide<16>/*511:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_19;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<8>/*255:0*/ __Vtemp_26;
    VlWide<16>/*511:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<8>/*255:0*/ __Vtemp_45;
    VlWide<16>/*511:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_55;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_58;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<8>/*255:0*/ __Vtemp_65;
    VlWide<16>/*511:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<4>/*127:0*/ __Vtemp_75;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_78;
    VlWide<16>/*511:0*/ __Vtemp_86;
    VlWide<257>/*8223:0*/ __Vtemp_87;
    VlWide<257>/*8223:0*/ __Vtemp_88;
    VlWide<257>/*8223:0*/ __Vtemp_89;
    VlWide<17>/*543:0*/ __Vtemp_90;
    VlWide<17>/*543:0*/ __Vtemp_92;
    VlWide<17>/*543:0*/ __Vtemp_93;
    VlWide<17>/*543:0*/ __Vtemp_95;
    VlWide<17>/*543:0*/ __Vtemp_96;
    VlWide<17>/*543:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_102;
    VlWide<17>/*543:0*/ __Vtemp_103;
    VlWide<17>/*543:0*/ __Vtemp_105;
    VlWide<4>/*127:0*/ __Vtemp_109;
    VlWide<257>/*8223:0*/ __Vtemp_110;
    VlWide<257>/*8223:0*/ __Vtemp_111;
    VlWide<257>/*8223:0*/ __Vtemp_112;
    VlWide<17>/*543:0*/ __Vtemp_113;
    VlWide<17>/*543:0*/ __Vtemp_115;
    VlWide<4>/*127:0*/ __Vtemp_119;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x16U])) {
        bufp->chgIData(oldp+0,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address),32);
        bufp->chgCData(oldp+1,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask),8);
        bufp->chgQData(oldp+2,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data),64);
        bufp->chgCData(oldp+4,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+5,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param),3);
        bufp->chgCData(oldp+6,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+7,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+8,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address),32);
        bufp->chgCData(oldp+9,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask),8);
        bufp->chgQData(oldp+10,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data),64);
        bufp->chgCData(oldp+12,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+13,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param),3);
        bufp->chgCData(oldp+14,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+15,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+16,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address),32);
        bufp->chgCData(oldp+17,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask),8);
        bufp->chgQData(oldp+18,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data),64);
        bufp->chgCData(oldp+20,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+21,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param),3);
        bufp->chgCData(oldp+22,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+23,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+24,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address),32);
        bufp->chgQData(oldp+25,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data),64);
        bufp->chgCData(oldp+27,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+28,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param),3);
        bufp->chgCData(oldp+29,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+30,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+31,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address),32);
        bufp->chgQData(oldp+32,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data),64);
        bufp->chgCData(oldp+34,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+35,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param),3);
        bufp->chgCData(oldp+36,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+37,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+38,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address),32);
        bufp->chgQData(oldp+39,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data),64);
        bufp->chgCData(oldp+41,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+42,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param),3);
        bufp->chgCData(oldp+43,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+44,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+45,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address),32);
        bufp->chgQData(oldp+46,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data),64);
        bufp->chgCData(oldp+48,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+49,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param),3);
        bufp->chgCData(oldp+50,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+51,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+52,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address),32);
        bufp->chgQData(oldp+53,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data),64);
        bufp->chgCData(oldp+55,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+56,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param),3);
        bufp->chgCData(oldp+57,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+58,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+59,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address),32);
        bufp->chgQData(oldp+60,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data),64);
        bufp->chgCData(oldp+62,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+63,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param),3);
        bufp->chgCData(oldp+64,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+65,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+66,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address),32);
        bufp->chgQData(oldp+67,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data),64);
        bufp->chgCData(oldp+69,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+70,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param),3);
        bufp->chgCData(oldp+71,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+72,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+73,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address),32);
        bufp->chgQData(oldp+74,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data),64);
        bufp->chgCData(oldp+76,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink),3);
        bufp->chgCData(oldp+77,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink),3);
        bufp->chgCData(oldp+78,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink),3);
        bufp->chgCData(oldp+79,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink),3);
        bufp->chgCData(oldp+80,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink),3);
        bufp->chgCData(oldp+81,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink),3);
        bufp->chgCData(oldp+82,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink),3);
        bufp->chgCData(oldp+83,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink),3);
        bufp->chgCData(oldp+84,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode),3);
        bufp->chgCData(oldp+85,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param),3);
        bufp->chgCData(oldp+86,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size),4);
        bufp->chgCData(oldp+87,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source),6);
        bufp->chgIData(oldp+88,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address),32);
        bufp->chgCData(oldp+89,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask),8);
        bufp->chgQData(oldp+90,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_data),64);
        bufp->chgCData(oldp+92,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9),3);
        bufp->chgCData(oldp+93,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param),3);
        bufp->chgCData(oldp+94,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7),4);
        bufp->chgCData(oldp+95,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),6);
        bufp->chgIData(oldp+96,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address),32);
        bufp->chgQData(oldp+97,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_data),64);
        bufp->chgCData(oldp+99,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_e_bits_sink),3);
        bufp->chgBit(oldp+100,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                      >> 4U))))) 
                                      | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)) 
                                         | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)))))));
        bufp->chgBit(oldp+101,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
        bufp->chgBit(oldp+102,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))))));
        bufp->chgBit(oldp+103,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U)))));
        bufp->chgBit(oldp+104,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
        bufp->chgBit(oldp+105,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+106,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                        >> 2U)) & (2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (IData)((0U == 
                                              (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+107,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+108,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                        >> 2U)) & (2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (IData)((2U == 
                                              (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+109,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+110,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U))) | (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                   & (IData)(
                                                             (4U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+111,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+112,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U))) | (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgCData(oldp+113,(((0x80U & (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                     << 7U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                       << 5U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                 & (IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                               << 7U))) 
                                  | ((0x40U & (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                        << 6U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                          << 4U)))) 
                                                | (((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                   << 6U)) 
                                               | ((IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                  << 6U))) 
                                     | ((0x20U & ((
                                                   (((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & (((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                           << 5U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                             << 3U)))) 
                                                   | (((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                      << 5U)) 
                                                  | ((IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                     << 5U))) 
                                        | ((0x10U & 
                                            (((((2U 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                << 4U) 
                                               | (0xfffffff0U 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                      << 4U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                        << 2U)))) 
                                              | (((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                << 4U))) 
                                           | ((8U & 
                                               (((((2U 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                        >> 2U)) 
                                                      & (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                  | ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (6U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((2U 
                                                         < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                        | ((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((2U 
                                                             < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                           | ((1U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))))))))))),8);
        bufp->chgBit(oldp+114,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                          >> 4U)) | 
                                      (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
        bufp->chgBit(oldp+115,((1U & ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xeU)) 
                                          | (0U != 
                                             (3U & 
                                              (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                                      | ((~ ((0U != 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0x1aU)) 
                                             | (0U 
                                                != 
                                                (0x3fffU 
                                                 & (0x2010U 
                                                    ^ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0xcU)))))) 
                                         | ((0U == 
                                             ((0xffffeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0xcU))))) 
                                            | ((~ (
                                                   (0U 
                                                    != 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0x1dU)) 
                                                   | (0U 
                                                      != 
                                                      (0x1ffffU 
                                                       & (0x10020U 
                                                          ^ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0xcU)))))) 
                                               | ((~ 
                                                   ((0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)) 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (0x200U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0x10U)))))) 
                                                  | ((~ 
                                                      ((0U 
                                                        != 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0x1cU)) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0x1aU)))))) 
                                                     | ((0U 
                                                         == 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                          >> 0xcU)) 
                                                        | ((~ (IData)(
                                                                      (0x10000U 
                                                                       != 
                                                                       (0xffff0000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                           | ((0U 
                                                               == 
                                                               ((0xffe00U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                    >> 0xcU)) 
                                                                | (0x1ffU 
                                                                   & (0x100U 
                                                                      ^ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                       >> 0xcU))))) 
                                                              | ((0U 
                                                                  == 
                                                                  ((0xffe00U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                       >> 0xcU)) 
                                                                   | (0x1ffU 
                                                                      & (0x110U 
                                                                         ^ 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                          >> 0xcU))))) 
                                                                 | ((8U 
                                                                     == 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                      >> 0x1cU)) 
                                                                    | (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))));
        bufp->chgBit(oldp+116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG));
        bufp->chgBit(oldp+118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_wfi));
        bufp->chgWData(oldp+119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT____Vcellinp__ram_ext__W0_data),265);
        bufp->chgBit(oldp+128,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
        bufp->chgCData(oldp+129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
        bufp->chgCData(oldp+130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),5);
        bufp->chgSData(oldp+131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1),9);
        bufp->chgBit(oldp+132,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                          >> 4U)) | 
                                      (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x16U] 
                     | vlSelf->__Vm_traceActivity[0x2aU]))) {
        __Vtemp_6[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address;
        __Vtemp_6[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address;
        __Vtemp_6[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address;
        __Vtemp_6[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address;
        __Vtemp_6[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address;
        __Vtemp_6[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address;
        __Vtemp_6[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address))));
        __Vtemp_6[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address))) 
                                 >> 0x20U));
        __Vtemp_13[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data);
        __Vtemp_13[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
                                  >> 0x20U));
        __Vtemp_13[2U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data);
        __Vtemp_13[3U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data 
                                  >> 0x20U));
        __Vtemp_13[4U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data);
        __Vtemp_13[5U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data 
                                  >> 0x20U));
        __Vtemp_13[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data);
        __Vtemp_13[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data 
                                  >> 0x20U));
        __Vtemp_13[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data);
        __Vtemp_13[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data 
                                  >> 0x20U));
        __Vtemp_13[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data);
        __Vtemp_13[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data 
                                    >> 0x20U));
        __Vtemp_13[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data);
        __Vtemp_13[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data 
                                    >> 0x20U));
        __Vtemp_13[0xeU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data);
        __Vtemp_13[0xfU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data 
                                    >> 0x20U));
        __Vtemp_14[0U] = ((IData)((((QData)((IData)(
                                                    __Vtemp_13[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_13[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_13[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                          << 1U);
        __Vtemp_14[1U] = (((IData)((((QData)((IData)(
                                                     __Vtemp_13[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                    | (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_13[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_13[
                                                          (0xfU 
                                                           & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   __Vtemp_13[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_13[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_13[
                                                                        (0xfU 
                                                                         & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_14[2U] = ((IData)(((((QData)((IData)(
                                                     __Vtemp_13[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                    | (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_13[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_13[
                                                          (0xfU 
                                                           & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   >> 0x20U)) >> 0x1fU);
        __Vtemp_16[2U] = (((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                              ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                                  + 
                                                  (0xffU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                            | (__Vtemp_6[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                                >> 5U))] 
                               >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                           << 9U) | ((0x1feU & ((IData)(
                                                        ((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask)) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask)))))))))) 
                                                         >> 
                                                         (0x3fU 
                                                          & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 3U)))) 
                                                << 1U)) 
                                     | __Vtemp_14[2U]));
        __Vtemp_17[3U] = ((((0x2fU >= (0x3fU & ((IData)(6U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (0x3fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source)))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))))
                             : 0U) << 9U) | ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_6[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                                              | (__Vtemp_6[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                                             >> 0x17U));
        __Vtemp_19[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index)))))
                             : 0U) << 0x13U) | ((0x78000U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size) 
                                                             << 0x14U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size) 
                                                                         << 4U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size)))))))) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 2U))) 
                                                    << 0xfU)) 
                                                | __Vtemp_17[3U]));
        __Vtemp_20[0U] = __Vtemp_14[0U];
        __Vtemp_20[1U] = __Vtemp_14[1U];
        __Vtemp_20[2U] = __Vtemp_16[2U];
        __Vtemp_20[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index)))))
                             : 0U) << 0x16U) | __Vtemp_19[3U]);
        bufp->chgWData(oldp+133,(__Vtemp_20),121);
        __Vtemp_26[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address;
        __Vtemp_26[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address;
        __Vtemp_26[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address;
        __Vtemp_26[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address;
        __Vtemp_26[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address;
        __Vtemp_26[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address;
        __Vtemp_26[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address))));
        __Vtemp_26[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address))) 
                                  >> 0x20U));
        __Vtemp_33[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data);
        __Vtemp_33[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data 
                                  >> 0x20U));
        __Vtemp_33[2U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data);
        __Vtemp_33[3U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data 
                                  >> 0x20U));
        __Vtemp_33[4U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data);
        __Vtemp_33[5U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data 
                                  >> 0x20U));
        __Vtemp_33[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data);
        __Vtemp_33[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data 
                                  >> 0x20U));
        __Vtemp_33[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data);
        __Vtemp_33[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data 
                                  >> 0x20U));
        __Vtemp_33[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data);
        __Vtemp_33[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data 
                                    >> 0x20U));
        __Vtemp_33[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data);
        __Vtemp_33[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data 
                                    >> 0x20U));
        __Vtemp_33[0xeU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data);
        __Vtemp_33[0xfU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data 
                                    >> 0x20U));
        __Vtemp_34[0U] = (IData)((((QData)((IData)(
                                                   __Vtemp_33[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0x1ffU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  | (((0U == (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 __Vtemp_33[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                     | ((QData)((IData)(
                                                        __Vtemp_33[
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))));
        __Vtemp_34[1U] = (IData)(((((QData)((IData)(
                                                    __Vtemp_33[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_33[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_33[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  >> 0x20U));
        __Vtemp_36[3U] = ((((0x2fU >= (0x3fU & ((IData)(6U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (0x3fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source)))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))))
                             : 0U) << 1U) | ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_26[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                                              | (__Vtemp_26[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                                             >> 0x1fU));
        __Vtemp_38[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index)))))
                             : 0U) << 0xbU) | ((0x780U 
                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size) 
                                                                        << 4U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size)))))))) 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 2U))) 
                                                   << 7U)) 
                                               | __Vtemp_36[3U]));
        __Vtemp_39[0U] = (__Vtemp_34[0U] << 1U);
        __Vtemp_39[1U] = ((__Vtemp_34[0U] >> 0x1fU) 
                          | (__Vtemp_34[1U] << 1U));
        __Vtemp_39[2U] = ((__Vtemp_34[1U] >> 0x1fU) 
                          | ((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                ? 0U : (__Vtemp_26[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                              | (__Vtemp_26[(7U & (
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                             << 1U));
        __Vtemp_39[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index)))))
                             : 0U) << 0xeU) | __Vtemp_38[3U]);
        bufp->chgWData(oldp+137,(__Vtemp_39),113);
        bufp->chgCData(oldp+141,(((0x17U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0))
                                   ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink) 
                                                                << 3U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink)))))))) 
                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0)))
                                   : 0U)),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x17U])) {
        bufp->chgCData(oldp+142,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param),3);
        bufp->chgCData(oldp+144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address),32);
        bufp->chgCData(oldp+147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask),8);
        bufp->chgQData(oldp+148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data),64);
        bufp->chgCData(oldp+150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param),3);
        bufp->chgCData(oldp+152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address),32);
        bufp->chgCData(oldp+155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask),8);
        bufp->chgQData(oldp+156,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data),64);
        bufp->chgCData(oldp+158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param),3);
        bufp->chgCData(oldp+160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address),32);
        bufp->chgCData(oldp+163,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask),8);
        bufp->chgQData(oldp+164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data),64);
        bufp->chgCData(oldp+166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param),3);
        bufp->chgCData(oldp+168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address),32);
        bufp->chgCData(oldp+171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask),8);
        bufp->chgQData(oldp+172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data),64);
        bufp->chgCData(oldp+174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param),3);
        bufp->chgCData(oldp+176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+177,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address),32);
        bufp->chgCData(oldp+179,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask),8);
        bufp->chgQData(oldp+180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data),64);
        bufp->chgCData(oldp+182,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param),3);
        bufp->chgCData(oldp+184,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+185,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+186,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address),32);
        bufp->chgCData(oldp+187,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask),8);
        bufp->chgQData(oldp+188,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data),64);
        bufp->chgCData(oldp+190,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+191,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param),3);
        bufp->chgCData(oldp+192,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+193,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+194,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address),32);
        bufp->chgCData(oldp+195,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask),8);
        bufp->chgQData(oldp+196,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data),64);
        bufp->chgCData(oldp+198,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+199,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param),3);
        bufp->chgCData(oldp+200,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+201,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+202,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address),32);
        bufp->chgCData(oldp+203,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask),8);
        bufp->chgQData(oldp+204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data),64);
        bufp->chgCData(oldp+206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode),3);
        bufp->chgCData(oldp+207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param),3);
        bufp->chgCData(oldp+208,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size),4);
        bufp->chgCData(oldp+209,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source),6);
        bufp->chgIData(oldp+210,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address),32);
        bufp->chgQData(oldp+211,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data),64);
        bufp->chgCData(oldp+213,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode),3);
        bufp->chgCData(oldp+214,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param),3);
        bufp->chgCData(oldp+215,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size),4);
        bufp->chgCData(oldp+216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source),6);
        bufp->chgIData(oldp+217,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address),32);
        bufp->chgQData(oldp+218,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data),64);
        bufp->chgCData(oldp+220,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode),3);
        bufp->chgCData(oldp+221,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param),3);
        bufp->chgCData(oldp+222,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size),4);
        bufp->chgCData(oldp+223,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source),6);
        bufp->chgIData(oldp+224,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address),32);
        bufp->chgQData(oldp+225,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data),64);
        bufp->chgCData(oldp+227,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode),3);
        bufp->chgCData(oldp+228,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param),3);
        bufp->chgCData(oldp+229,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size),4);
        bufp->chgCData(oldp+230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source),6);
        bufp->chgIData(oldp+231,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address),32);
        bufp->chgQData(oldp+232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data),64);
        bufp->chgCData(oldp+234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode),3);
        bufp->chgCData(oldp+235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param),3);
        bufp->chgCData(oldp+236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size),4);
        bufp->chgCData(oldp+237,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source),6);
        bufp->chgIData(oldp+238,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address),32);
        bufp->chgQData(oldp+239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data),64);
        bufp->chgCData(oldp+241,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode),3);
        bufp->chgCData(oldp+242,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param),3);
        bufp->chgCData(oldp+243,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size),4);
        bufp->chgCData(oldp+244,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source),6);
        bufp->chgIData(oldp+245,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address),32);
        bufp->chgQData(oldp+246,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data),64);
        bufp->chgCData(oldp+248,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode),3);
        bufp->chgCData(oldp+249,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param),3);
        bufp->chgCData(oldp+250,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size),4);
        bufp->chgCData(oldp+251,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source),6);
        bufp->chgIData(oldp+252,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address),32);
        bufp->chgQData(oldp+253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data),64);
        bufp->chgCData(oldp+255,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode),3);
        bufp->chgCData(oldp+256,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param),3);
        bufp->chgCData(oldp+257,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size),4);
        bufp->chgCData(oldp+258,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source),6);
        bufp->chgIData(oldp+259,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address),32);
        bufp->chgQData(oldp+260,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data),64);
        bufp->chgCData(oldp+262,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink),3);
        bufp->chgCData(oldp+263,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink),3);
        bufp->chgCData(oldp+264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink),3);
        bufp->chgCData(oldp+265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink),3);
        bufp->chgCData(oldp+266,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink),3);
        bufp->chgCData(oldp+267,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink),3);
        bufp->chgCData(oldp+268,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink),3);
        bufp->chgCData(oldp+269,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink),3);
        bufp->chgCData(oldp+270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode),3);
        bufp->chgCData(oldp+271,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param),3);
        bufp->chgCData(oldp+272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size),4);
        bufp->chgCData(oldp+273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source),6);
        bufp->chgIData(oldp+274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address),32);
        bufp->chgCData(oldp+275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask),8);
        bufp->chgQData(oldp+276,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_data),64);
        bufp->chgCData(oldp+278,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9),3);
        bufp->chgCData(oldp+279,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param),3);
        bufp->chgCData(oldp+280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7),4);
        bufp->chgCData(oldp+281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),6);
        bufp->chgIData(oldp+282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address),32);
        bufp->chgQData(oldp+283,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_data),64);
        bufp->chgCData(oldp+285,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_e_bits_sink),3);
        bufp->chgBit(oldp+286,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                      >> 4U))))) 
                                      | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)) 
                                         | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)))))));
        bufp->chgBit(oldp+287,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
        bufp->chgBit(oldp+288,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))))));
        bufp->chgBit(oldp+289,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U)))));
        bufp->chgBit(oldp+290,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
        bufp->chgBit(oldp+291,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+292,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                        >> 2U)) & (2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (IData)((0U == 
                                              (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+293,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+294,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                        >> 2U)) & (2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (IData)((2U == 
                                              (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+295,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+296,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U))) | (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                   & (IData)(
                                                             (4U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgBit(oldp+297,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
        bufp->chgBit(oldp+298,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                 | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U))) | (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
        bufp->chgCData(oldp+299,(((0x80U & (((((2U 
                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & (((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                     << 7U) 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                       << 5U)))) 
                                             | (((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                 & (IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                               << 7U))) 
                                  | ((0x40U & (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                        << 6U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                          << 4U)))) 
                                                | (((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                   << 6U)) 
                                               | ((IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                  << 6U))) 
                                     | ((0x20U & ((
                                                   (((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & (((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                           << 5U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                             << 3U)))) 
                                                   | (((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                      << 5U)) 
                                                  | ((IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                     << 5U))) 
                                        | ((0x10U & 
                                            (((((2U 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                << 4U) 
                                               | (0xfffffff0U 
                                                  & (((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                      << 4U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                        << 2U)))) 
                                              | (((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))) 
                                                << 4U))) 
                                           | ((8U & 
                                               (((((2U 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                   | ((~ 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                        >> 2U)) 
                                                      & (2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                  | ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (6U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((2U 
                                                         < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                        | ((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((2U 
                                                             < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                                            | ((~ 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                                                           | ((1U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address))))))))))))),8);
        bufp->chgBit(oldp+300,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                          >> 4U)) | 
                                      (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
        bufp->chgBit(oldp+301,((1U & ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xeU)) 
                                          | (0U != 
                                             (3U & 
                                              (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)))))) 
                                      | ((~ ((0U != 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                               >> 0x1aU)) 
                                             | (0U 
                                                != 
                                                (0x3fffU 
                                                 & (0x2010U 
                                                    ^ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0xcU)))))) 
                                         | ((0U == 
                                             ((0xffffeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                  >> 0xcU)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0xcU))))) 
                                            | ((~ (
                                                   (0U 
                                                    != 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                     >> 0x1dU)) 
                                                   | (0U 
                                                      != 
                                                      (0x1ffffU 
                                                       & (0x10020U 
                                                          ^ 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                           >> 0xcU)))))) 
                                               | ((~ 
                                                   ((0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                      >> 0x1aU)) 
                                                    | (0U 
                                                       != 
                                                       (0x3ffU 
                                                        & (0x200U 
                                                           ^ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                            >> 0x10U)))))) 
                                                  | ((~ 
                                                      ((0U 
                                                        != 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                         >> 0x1cU)) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                               >> 0x1aU)))))) 
                                                     | ((0U 
                                                         == 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                          >> 0xcU)) 
                                                        | ((~ (IData)(
                                                                      (0x10000U 
                                                                       != 
                                                                       (0xffff0000U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address)))) 
                                                           | ((0U 
                                                               == 
                                                               ((0xffe00U 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                    >> 0xcU)) 
                                                                | (0x1ffU 
                                                                   & (0x100U 
                                                                      ^ 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                       >> 0xcU))))) 
                                                              | ((0U 
                                                                  == 
                                                                  ((0xffe00U 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                       >> 0xcU)) 
                                                                   | (0x1ffU 
                                                                      & (0x110U 
                                                                         ^ 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                          >> 0xcU))))) 
                                                                 | ((8U 
                                                                     == 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                                      >> 0x1cU)) 
                                                                    | (~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__tlMasterXbar__DOT__monitor__DOT___GEN_83))))))))))))))))));
        bufp->chgBit(oldp+302,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+303,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG));
        bufp->chgBit(oldp+304,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_wfi));
        bufp->chgWData(oldp+305,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT____Vcellinp__ram_ext__W0_data),265);
        bufp->chgBit(oldp+314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
        bufp->chgCData(oldp+315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
        bufp->chgCData(oldp+316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),5);
        bufp->chgSData(oldp+317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1),9);
        bufp->chgBit(oldp+318,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                          >> 4U)) | 
                                      (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0x17U] 
                     | vlSelf->__Vm_traceActivity[0x2aU]))) {
        __Vtemp_45[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address;
        __Vtemp_45[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address;
        __Vtemp_45[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address;
        __Vtemp_45[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address;
        __Vtemp_45[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address;
        __Vtemp_45[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address;
        __Vtemp_45[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address))));
        __Vtemp_45[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address))) 
                                  >> 0x20U));
        __Vtemp_52[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data);
        __Vtemp_52[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data 
                                  >> 0x20U));
        __Vtemp_52[2U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data);
        __Vtemp_52[3U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data 
                                  >> 0x20U));
        __Vtemp_52[4U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data);
        __Vtemp_52[5U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data 
                                  >> 0x20U));
        __Vtemp_52[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data);
        __Vtemp_52[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data 
                                  >> 0x20U));
        __Vtemp_52[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data);
        __Vtemp_52[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data 
                                  >> 0x20U));
        __Vtemp_52[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data);
        __Vtemp_52[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data 
                                    >> 0x20U));
        __Vtemp_52[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data);
        __Vtemp_52[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data 
                                    >> 0x20U));
        __Vtemp_52[0xeU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data);
        __Vtemp_52[0xfU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data 
                                    >> 0x20U));
        __Vtemp_53[0U] = ((IData)((((QData)((IData)(
                                                    __Vtemp_52[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_52[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_52[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                          << 1U);
        __Vtemp_53[1U] = (((IData)((((QData)((IData)(
                                                     __Vtemp_52[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                    | (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_52[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_52[
                                                          (0xfU 
                                                           & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   __Vtemp_52[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_52[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_52[
                                                                        (0xfU 
                                                                         & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp_53[2U] = ((IData)(((((QData)((IData)(
                                                     __Vtemp_52[
                                                     (((IData)(0x3fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                    | (((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_52[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_52[
                                                          (0xfU 
                                                           & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   >> 0x20U)) >> 0x1fU);
        __Vtemp_55[2U] = (((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                              ? 0U : (__Vtemp_45[(((IData)(0x1fU) 
                                                   + 
                                                   (0xffU 
                                                    & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                                  >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                            | (__Vtemp_45[(7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                                 >> 5U))] 
                               >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                           << 9U) | ((0x1feU & ((IData)(
                                                        ((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask)) 
                                                           << 0x38U) 
                                                          | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask)) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask)) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask)))))))))) 
                                                         >> 
                                                         (0x3fU 
                                                          & VL_SHIFTL_III(6,6,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 3U)))) 
                                                << 1U)) 
                                     | __Vtemp_53[2U]));
        __Vtemp_56[3U] = ((((0x2fU >= (0x3fU & ((IData)(6U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (0x3fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source)))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))))
                             : 0U) << 9U) | ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_45[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                                              | (__Vtemp_45[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                                             >> 0x17U));
        __Vtemp_58[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index)))))
                             : 0U) << 0x13U) | ((0x78000U 
                                                 & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size) 
                                                       << 0x1cU) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size) 
                                                             << 0x14U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size) 
                                                                   << 0xcU) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size) 
                                                                         << 4U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size)))))))) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 2U))) 
                                                    << 0xfU)) 
                                                | __Vtemp_56[3U]));
        __Vtemp_59[0U] = __Vtemp_53[0U];
        __Vtemp_59[1U] = __Vtemp_53[1U];
        __Vtemp_59[2U] = __Vtemp_55[2U];
        __Vtemp_59[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index)))))
                             : 0U) << 0x16U) | __Vtemp_58[3U]);
        bufp->chgWData(oldp+319,(__Vtemp_59),121);
        __Vtemp_65[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address;
        __Vtemp_65[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address;
        __Vtemp_65[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address;
        __Vtemp_65[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address;
        __Vtemp_65[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address;
        __Vtemp_65[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address;
        __Vtemp_65[6U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address)) 
                                   << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address))));
        __Vtemp_65[7U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address))) 
                                  >> 0x20U));
        __Vtemp_72[0U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data);
        __Vtemp_72[1U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data 
                                  >> 0x20U));
        __Vtemp_72[2U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data);
        __Vtemp_72[3U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data 
                                  >> 0x20U));
        __Vtemp_72[4U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data);
        __Vtemp_72[5U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data 
                                  >> 0x20U));
        __Vtemp_72[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data);
        __Vtemp_72[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data 
                                  >> 0x20U));
        __Vtemp_72[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data);
        __Vtemp_72[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data 
                                  >> 0x20U));
        __Vtemp_72[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data);
        __Vtemp_72[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data 
                                    >> 0x20U));
        __Vtemp_72[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data);
        __Vtemp_72[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data 
                                    >> 0x20U));
        __Vtemp_72[0xeU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data);
        __Vtemp_72[0xfU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data 
                                    >> 0x20U));
        __Vtemp_73[0U] = (IData)((((QData)((IData)(
                                                   __Vtemp_72[
                                                   (((IData)(0x3fU) 
                                                     + 
                                                     (0x1ffU 
                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  | (((0U == (0x1fU 
                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                       ? 0ULL : ((QData)((IData)(
                                                                 __Vtemp_72[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                     | ((QData)((IData)(
                                                        __Vtemp_72[
                                                        (0xfU 
                                                         & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                            >> 5U))])) 
                                        >> (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))));
        __Vtemp_73[1U] = (IData)(((((QData)((IData)(
                                                    __Vtemp_72[
                                                    (((IData)(0x3fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                         ? 0x20U : 
                                        ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                   | (((0U == (0x1fU 
                                               & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_72[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_72[
                                                         (0xfU 
                                                          & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                             >> 5U))])) 
                                         >> (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  >> 0x20U));
        __Vtemp_75[3U] = ((((0x2fU >= (0x3fU & ((IData)(6U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (0x3fU & (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source)) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source)) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source)) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source) 
                                                                            << 0x18U) 
                                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source) 
                                                                                << 6U) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source)))))))))) 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))))
                             : 0U) << 1U) | ((((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                                ? 0U
                                                : (
                                                   __Vtemp_65[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xffU 
                                                      & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                                              | (__Vtemp_65[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                                             >> 0x1fU));
        __Vtemp_77[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index)))))
                             : 0U) << 0xbU) | ((0x780U 
                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size) 
                                                         << 0x18U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size) 
                                                                  << 0xcU) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size) 
                                                                     << 8U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size) 
                                                                        << 4U) 
                                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size)))))))) 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,5,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 2U))) 
                                                   << 7U)) 
                                               | __Vtemp_75[3U]));
        __Vtemp_78[0U] = (__Vtemp_73[0U] << 1U);
        __Vtemp_78[1U] = ((__Vtemp_73[0U] >> 0x1fU) 
                          | (__Vtemp_73[1U] << 1U));
        __Vtemp_78[2U] = ((__Vtemp_73[1U] >> 0x1fU) 
                          | ((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                ? 0U : (__Vtemp_65[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                              | (__Vtemp_65[(7U & (
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                                   >> 5U))] 
                                 >> (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                             << 1U));
        __Vtemp_78[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                             ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode) 
                                        << 0x15U) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode) 
                                         << 0x12U) 
                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode) 
                                            << 0xfU) 
                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode) 
                                               << 0xcU) 
                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode) 
                                                  << 9U) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode) 
                                                        << 3U) 
                                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode)))))))) 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index)))))
                             : 0U) << 0xeU) | __Vtemp_77[3U]);
        bufp->chgWData(oldp+323,(__Vtemp_78),113);
        bufp->chgCData(oldp+327,(((0x17U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0))
                                   ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink) 
                                              << 0x15U) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink) 
                                                 << 0x12U) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink) 
                                                    << 0xfU) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink) 
                                                          << 9U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink) 
                                                             << 6U) 
                                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink) 
                                                                << 3U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink)))))))) 
                                            >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0)))
                                   : 0U)),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0x18U])) {
        bufp->chgBit(oldp+328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out));
        bufp->chgBit(oldp+329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_a_ready));
        bufp->chgBit(oldp+330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid));
        bufp->chgCData(oldp+331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode),3);
        bufp->chgCData(oldp+332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size),2);
        bufp->chgSData(oldp+333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source),14);
        bufp->chgIData(oldp+334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address),17);
        bufp->chgQData(oldp+335,(((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                                >> 0xdU)))
                                   ? 0ULL : (((QData)((IData)(
                                                              VTestDriver__ConstPool__CONST_h59295a2e_0[
                                                              (((IData)(0x3fU) 
                                                                + 
                                                                (0xffffU 
                                                                 & VL_SHIFTL_III(16,16,32, 
                                                                                (0x3ffU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address 
                                                                                >> 3U)), 6U))) 
                                                               >> 5U)])) 
                                              << ((0U 
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
                                                                        >> 3U)), 6U))))))),64);
        bufp->chgBit(oldp+337,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0));
        bufp->chgBit(oldp+338,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
        bufp->chgBit(oldp+339,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))));
        bufp->chgBit(oldp+340,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                      >> 2U)))));
        bufp->chgBit(oldp+341,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
        bufp->chgBit(oldp+342,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
        bufp->chgBit(oldp+343,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                   & (IData)((0U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
        bufp->chgBit(oldp+344,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
        bufp->chgBit(oldp+345,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                   & (IData)((2U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
        bufp->chgBit(oldp+346,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
        bufp->chgBit(oldp+347,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                   & (IData)(
                                                             (4U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
        bufp->chgBit(oldp+348,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
        bufp->chgBit(oldp+349,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
        bufp->chgCData(oldp+350,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                       << 5U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                 & (IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                               << 7U))) 
                                  | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                          << 4U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                   << 6U)) 
                                               | ((IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                  << 6U))) 
                                     | ((0x20U & ((
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                             << 3U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                      << 5U)) 
                                                  | ((IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                     << 5U))) 
                                        | ((0x10U & 
                                            (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 4U) 
                                               | (0xfffffff0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                      << 4U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                        << 2U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))) 
                                                << 4U))) 
                                           | ((8U & 
                                               (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                        >> 2U)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0)))))))))))))),8);
        bufp->chgBit(oldp+351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+352,((((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 3U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_a_ready)) 
                                | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_a_ready)))));
        bufp->chgCData(oldp+353,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+354,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+355,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgSData(oldp+356,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))),10);
        bufp->chgIData(oldp+357,((0x1fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0xdU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x13U)))),21);
        bufp->chgCData(oldp+358,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 8U))),8);
        bufp->chgQData(oldp+359,((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x10U)))),64);
        bufp->chgBit(oldp+361,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_valid));
        bufp->chgCData(oldp+363,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode),3);
        bufp->chgCData(oldp+364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size),3);
        bufp->chgSData(oldp+365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source),10);
        bufp->chgBit(oldp+366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_a_ready));
        bufp->chgBit(oldp+367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_valid));
        bufp->chgCData(oldp+368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode),3);
        bufp->chgCData(oldp+369,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x1dU) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 3U))))),3);
        bufp->chgCData(oldp+370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size),2);
        bufp->chgSData(oldp+371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source),14);
        bufp->chgSData(oldp+372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address),12);
        bufp->chgCData(oldp+373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_mask),8);
        bufp->chgQData(oldp+374,((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                   >> 0x19U)))),64);
        bufp->chgBit(oldp+376,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                       : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                          >> 0x19U)))));
        bufp->chgCData(oldp+377,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))),3);
        bufp->chgBit(oldp+378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_valid));
        bufp->chgCData(oldp+379,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode),3);
        bufp->chgCData(oldp+380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size),2);
        bufp->chgSData(oldp+381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source),14);
        bufp->chgIData(oldp+382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address),28);
        bufp->chgCData(oldp+383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask),8);
        bufp->chgBit(oldp+384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_d_ready));
        bufp->chgCData(oldp+385,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])),3);
        bufp->chgCData(oldp+386,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                        >> 0xeU))),2);
        bufp->chgSData(oldp+387,((0x3fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U])),14);
        bufp->chgQData(oldp+388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data),64);
        bufp->chgBit(oldp+390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_a_ready));
        bufp->chgBit(oldp+391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_valid));
        bufp->chgCData(oldp+392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode),3);
        bufp->chgCData(oldp+393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size),2);
        bufp->chgSData(oldp+394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source),14);
        bufp->chgIData(oldp+395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_address),26);
        bufp->chgCData(oldp+396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_mask),8);
        bufp->chgCData(oldp+397,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))),3);
        __Vtemp_86[0U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0;
        __Vtemp_86[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1;
        __Vtemp_86[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2;
        __Vtemp_86[3U] = 0U;
        __Vtemp_86[4U] = 0U;
        __Vtemp_86[5U] = 0U;
        __Vtemp_86[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0);
        __Vtemp_86[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                  >> 0x20U));
        __Vtemp_86[8U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad);
        __Vtemp_86[9U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                  >> 0x20U));
        __Vtemp_86[0xaU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1);
        __Vtemp_86[0xbU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                    >> 0x20U));
        __Vtemp_86[0xcU] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2);
        __Vtemp_86[0xdU] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2 
                                    >> 0x20U));
        __Vtemp_86[0xeU] = 0U;
        __Vtemp_86[0xfU] = 0U;
        bufp->chgQData(oldp+398,(((1U & ((0x84U | (
                                                   ((0U 
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
                                   ? (((QData)((IData)(
                                                       __Vtemp_86[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                      | (((0U == (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           __Vtemp_86[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U))))) 
                                         | ((QData)((IData)(
                                                            __Vtemp_86[
                                                            (0xfU 
                                                             & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex), 6U)))))
                                   : 0ULL)),64);
        bufp->chgBit(oldp+400,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bus_named_pbus_bus_xing_out_a_valid));
        bufp->chgCData(oldp+401,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+402,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 3U))),3);
        bufp->chgCData(oldp+403,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U))),3);
        bufp->chgSData(oldp+404,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))),10);
        bufp->chgIData(oldp+405,((0x1fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 0xcU) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x14U)))),29);
        bufp->chgCData(oldp+406,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x11U))),8);
        bufp->chgBit(oldp+407,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 0x19U))));
        bufp->chgCData(oldp+408,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 6U))),4);
        bufp->chgBit(oldp+409,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_valid));
        bufp->chgCData(oldp+410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode),3);
        bufp->chgCData(oldp+411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_param),2);
        bufp->chgCData(oldp+412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size),4);
        bufp->chgSData(oldp+413,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source),10);
        bufp->chgBit(oldp+414,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_sink));
        bufp->chgBit(oldp+415,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_denied));
        bufp->chgBit(oldp+416,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_corrupt));
        bufp->chgBit(oldp+417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
        bufp->chgBit(oldp+418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
        bufp->chgWData(oldp+419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),122);
        bufp->chgBit(oldp+423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_a_ready));
        bufp->chgBit(oldp+424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_6_a_valid));
        bufp->chgIData(oldp+425,((0x1ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                               << 0xcU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x14U)))),17);
        bufp->chgCData(oldp+426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source),10);
        bufp->chgCData(oldp+428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgCData(oldp+430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done));
        bufp->chgBit(oldp+432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok));
        bufp->chgBit(oldp+433,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+434,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0))));
        bufp->chgBit(oldp+435,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0))));
        bufp->chgBit(oldp+436,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+437,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2));
        bufp->chgBit(oldp+438,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))));
        bufp->chgBit(oldp+439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3));
        bufp->chgBit(oldp+440,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))))));
        bufp->chgBit(oldp+441,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4));
        bufp->chgBit(oldp+442,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))))));
        bufp->chgBit(oldp+443,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5));
        bufp->chgBit(oldp+444,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))))));
        bufp->chgCData(oldp+445,(((((((2U < (7U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                      | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                     | (IData)(((0x40U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                    << 7U) | (0x7ff80U 
                                              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                  << 7U) 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xdU)))) 
                                  | ((((((2U < (7U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                         | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                        | (IData)((
                                                   (0x40U 
                                                    == 
                                                    (0xc0U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                       | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < 
                                                     (7U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))) 
                                                    | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                   | (IData)(
                                                             ((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                  << 5U) 
                                                 | (0x1ffe0U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                        << 5U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xfU)))) 
                                                | ((((((2U 
                                                        < 
                                                        (7U 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                      | (IData)(
                                                                ((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x14U)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                    << 4U) 
                                                   | ((((((2U 
                                                           < 
                                                           (7U 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                         | (IData)(
                                                                   ((0x40U 
                                                                     == 
                                                                     (0xc0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                        << 3U) 
                                                       | (0x7ff8U 
                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                              << 3U) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x11U)))) 
                                                      | ((((((2U 
                                                              < 
                                                              (7U 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                            | (IData)(
                                                                      ((0x40U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x14U)) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                          << 2U) 
                                                         | ((((((2U 
                                                                 < 
                                                                 (7U 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                               | (IData)(
                                                                         ((0x40U 
                                                                           == 
                                                                           (0xc0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                              << 1U) 
                                                             | (0x1ffeU 
                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                    << 1U) 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0x13U)))) 
                                                            | ((((2U 
                                                                  < 
                                                                  (7U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x14U)) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))))))))),8);
        bufp->chgBit(oldp+446,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+447,((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0))));
        bufp->chgCData(oldp+448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address),17);
        bufp->chgBit(oldp+450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_a_ready));
        bufp->chgBit(oldp+451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_a_valid));
        bufp->chgIData(oldp+452,((0x3ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0xcU) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x14U)))),26);
        bufp->chgBit(oldp+453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_d_ready));
        bufp->chgBit(oldp+454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_valid));
        bufp->chgCData(oldp+455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source),10);
        bufp->chgCData(oldp+457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+460,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+461,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                              >> 8U))) 
                                | ((0x18U == (0x3fU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                                 >> 4U))) 
                                   | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                      | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                                    >> 4U))) 
                                            | ((0x150U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                               | ((0x160U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                                          >> 4U))) 
                                                     | ((0x110U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                                        | ((0x120U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                                           | (0x200U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+463,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address),26);
        bufp->chgBit(oldp+466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_a_ready));
        bufp->chgBit(oldp+467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_5_a_valid));
        bufp->chgSData(oldp+468,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_5_d_ready));
        bufp->chgBit(oldp+470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_valid));
        bufp->chgCData(oldp+471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+472,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source),10);
        bufp->chgCData(oldp+473,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+474,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+475,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+476,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+477,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                              >> 8U))) 
                                | ((0x18U == (0x3fU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                                 >> 4U))) 
                                   | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                      | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                                    >> 4U))) 
                                            | ((0x150U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                               | ((0x160U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                                          >> 4U))) 
                                                     | ((0x110U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                                        | ((0x120U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                                           | (0x200U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+478,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+479,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgBit(oldp+480,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgSData(oldp+482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address),12);
        bufp->chgCData(oldp+483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
        bufp->chgBit(oldp+484,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
        bufp->chgBit(oldp+485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_a_valid));
        bufp->chgBit(oldp+486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_d_ready));
        bufp->chgBit(oldp+487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
        bufp->chgCData(oldp+488,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
        bufp->chgCData(oldp+489,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_param),3);
        bufp->chgCData(oldp+490,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size),2);
        bufp->chgSData(oldp+491,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source),14);
        bufp->chgIData(oldp+492,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_address),26);
        bufp->chgCData(oldp+493,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_mask),8);
        bufp->chgBit(oldp+494,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__nodeOut_d_ready));
        bufp->chgBit(oldp+495,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
        bufp->chgBit(oldp+496,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))));
        bufp->chgBit(oldp+497,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))))));
        bufp->chgBit(oldp+498,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                      >> 2U)))));
        bufp->chgBit(oldp+499,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))));
        bufp->chgBit(oldp+500,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
        bufp->chgBit(oldp+501,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & (IData)((0U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
        bufp->chgBit(oldp+502,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
        bufp->chgBit(oldp+503,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & (IData)((2U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
        bufp->chgBit(oldp+504,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
        bufp->chgBit(oldp+505,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                   & (IData)(
                                                             (4U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
        bufp->chgBit(oldp+506,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
        bufp->chgBit(oldp+507,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
        bufp->chgCData(oldp+508,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                       << 5U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                 & (IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))) 
                                               << 7U))) 
                                  | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                          << 4U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                   << 6U)) 
                                               | ((IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))) 
                                                  << 6U))) 
                                     | ((0x20U & ((
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                             << 3U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                      << 5U)) 
                                                  | ((IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))) 
                                                     << 5U))) 
                                        | ((0x10U & 
                                            (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 4U) 
                                               | (0xfffffff0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                      << 4U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                        << 2U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))) 
                                                << 4U))) 
                                           | ((8U & 
                                               (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                        >> 2U)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))))) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))))) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0)))))))))))))),8);
        VL_SHIFTL_WWI(8208,8208,14, __Vtemp_87, VTestDriver__ConstPool__CONST_h09b34b06_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source));
        VL_COND_WIWW(8208, __Vtemp_88, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1), __Vtemp_87, VTestDriver__ConstPool__CONST_h129dfe9c_0);
        VL_AND_W(257, __Vtemp_89, VTestDriver__ConstPool__CONST_h42b330f7_0, __Vtemp_88);
        bufp->chgWData(oldp+509,(__Vtemp_89),8208);
        bufp->chgBit(oldp+766,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+767,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___GEN_0));
        bufp->chgCData(oldp+768,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum),3);
        VL_SHIFTL_WWI(513,513,10, __Vtemp_90, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)));
        __Vtemp_92[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_92[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_92[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_92[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_92[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_92[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_92[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_92[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_92[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_92[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_90[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_92[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xaU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_92[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xbU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_92[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xcU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_92[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xdU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_92[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xeU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_92[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_90[0xfU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_92[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_90[0x10U]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+769,(__Vtemp_92),513);
        bufp->chgBit(oldp+786,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+787,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+788,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address),26);
        bufp->chgBit(oldp+790,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid));
        bufp->chgIData(oldp+791,((0xfffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0xcU) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x14U)))),28);
        bufp->chgBit(oldp+792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_d_ready));
        bufp->chgBit(oldp+793,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid));
        bufp->chgCData(oldp+794,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+795,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                            >> 4U))),10);
        bufp->chgCData(oldp+796,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+797,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+798,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+799,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum),3);
        bufp->chgBit(oldp+800,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                              >> 0xcU))) 
                                | ((0x18U == (0x3fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                 >> 8U))) 
                                   | ((0x190U == (0x3ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                     >> 4U))) 
                                      | ((0x1a0U == 
                                          (0x3ffU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                            >> 4U))) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                    >> 8U))) 
                                            | ((0x150U 
                                                == 
                                                (0x3ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                    >> 4U))) 
                                               | ((0x160U 
                                                   == 
                                                   (0x3ffU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                       >> 4U))) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                          >> 8U))) 
                                                     | ((0x110U 
                                                         == 
                                                         (0x3ffU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                             >> 4U))) 
                                                        | ((0x120U 
                                                            == 
                                                            (0x3ffU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                                >> 4U))) 
                                                           | (0x200U 
                                                              == 
                                                              (0x3ffU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                                  >> 4U)))))))))))))));
        VL_SHIFTL_WWI(513,513,10, __Vtemp_93, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)));
        __Vtemp_95[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_95[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_95[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_95[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_95[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_95[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_95[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_95[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_95[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_95[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_93[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_95[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xaU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_95[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xbU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_95[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xcU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_95[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xdU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_95[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xeU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_95[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_93[0xfU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_95[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_93[0x10U]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+801,(__Vtemp_95),513);
        bufp->chgBit(oldp+818,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+819,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+820,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+821,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address),28);
        bufp->chgBit(oldp+822,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_7_a_valid));
        bufp->chgIData(oldp+823,((0x1fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0xcU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x14U)))),21);
        VL_SHIFTL_WWI(513,513,10, __Vtemp_96, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)));
        __Vtemp_98[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_98[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_98[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_98[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_98[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_98[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_98[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_98[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_98[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_98[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_96[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_98[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xaU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_98[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xbU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_98[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xcU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_98[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xdU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_98[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xeU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_98[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                ? __Vtemp_96[0xfU] : 
                               VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_98[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_96[0x10U]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+824,(__Vtemp_98),513);
        bufp->chgBit(oldp+841,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+842,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
        bufp->chgBit(oldp+843,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
        bufp->chgBit(oldp+844,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
        bufp->chgBit(oldp+845,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
        bufp->chgWData(oldp+846,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),113);
        __Vtemp_102[0U] = (IData)((((QData)((IData)(
                                                    (0x7fffffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                         << 0x16U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU))))) 
                                    << 9U) | (QData)((IData)(
                                                             (0x1ffU 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        __Vtemp_102[1U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                             << 0x17U) | (0x7fff00U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             >> 9U))) 
                           | (IData)(((((QData)((IData)(
                                                        (0x7fffffffU 
                                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             << 0x16U) 
                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 0xaU))))) 
                                        << 9U) | (QData)((IData)(
                                                                 (0x1ffU 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                      >> 0x20U)));
        __Vtemp_102[2U] = ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                     >> 9U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                 << 0x17U) 
                                                | (0x7fff00U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 9U))));
        __Vtemp_102[3U] = ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                     >> 9U)) | (0x1ff00U 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                   >> 9U)));
        bufp->chgWData(oldp+850,(__Vtemp_102),113);
        bufp->chgBit(oldp+854,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))));
        bufp->chgBit(oldp+855,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__source_ok));
        bufp->chgBit(oldp+856,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+857,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x2000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+858,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x200080U 
                                           == (0x2000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+859,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))));
        bufp->chgBit(oldp+860,((IData)((0U == (0x300000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+861,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x80U == 
                                            (0x2000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x40U == 
                                           (0x3000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+862,((IData)((0x100000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+863,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x80U == 
                                            (0x2000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x100040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+864,((IData)((0x200000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+865,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x200080U 
                                            == (0x2000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x200040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+866,((IData)((0x300000U == 
                                        (0x300000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+867,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                 | (IData)((0x200080U 
                                            == (0x2000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                | (IData)((0x300040U 
                                           == (0x3000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgCData(oldp+868,(((0x80U & (((((2U 
                                                < (7U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U))) 
                                               | (IData)(
                                                         (0x200080U 
                                                          == 
                                                          (0x2000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              | (IData)(
                                                        (0x300040U 
                                                         == 
                                                         (0x3000c0U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             | (IData)(
                                                       (0x380000U 
                                                        == 
                                                        (0x380000U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                            << 7U)) 
                                  | ((0x40U & (((((2U 
                                                   < 
                                                   (7U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 6U))) 
                                                  | (IData)(
                                                            (0x200080U 
                                                             == 
                                                             (0x2000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 | (IData)(
                                                           (0x300040U 
                                                            == 
                                                            (0x3000c0U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                | (IData)(
                                                          (0x300000U 
                                                           == 
                                                           (0x380000U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               << 6U)) 
                                     | ((0x20U & ((
                                                   (((2U 
                                                      < 
                                                      (7U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))) 
                                                     | (IData)(
                                                               (0x200080U 
                                                                == 
                                                                (0x2000c0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    | (IData)(
                                                              (0x200040U 
                                                               == 
                                                               (0x3000c0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                   | (IData)(
                                                             (0x280000U 
                                                              == 
                                                              (0x380000U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((((2U 
                                                 < 
                                                 (7U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                | (IData)(
                                                          (0x200080U 
                                                           == 
                                                           (0x2000c0U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               | (IData)(
                                                         (0x200040U 
                                                          == 
                                                          (0x3000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                              | (IData)(
                                                        (0x200000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((((2U 
                                                    < 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   | (IData)(
                                                             (0x80U 
                                                              == 
                                                              (0x2000c0U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  | (IData)(
                                                            (0x100040U 
                                                             == 
                                                             (0x3000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                 | (IData)(
                                                           (0x180000U 
                                                            == 
                                                            (0x380000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((2U 
                                                         < 
                                                         (7U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 6U))) 
                                                        | (IData)(
                                                                  (0x80U 
                                                                   == 
                                                                   (0x2000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x100040U 
                                                                  == 
                                                                  (0x3000c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x100000U 
                                                                 == 
                                                                 (0x380000U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((2U 
                                                            < 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 6U))) 
                                                           | (IData)(
                                                                     (0x80U 
                                                                      == 
                                                                      (0x2000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x40U 
                                                                     == 
                                                                     (0x3000c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x80000U 
                                                                    == 
                                                                    (0x380000U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((2U 
                                                             < 
                                                             (7U 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 6U))) 
                                                            | (IData)(
                                                                      (0x80U 
                                                                       == 
                                                                       (0x2000c0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x40U 
                                                                      == 
                                                                      (0x3000c0U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (0x380000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))))))))))),8);
        bufp->chgBit(oldp+869,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                              >> 8U))) 
                                | ((0x18U == (0x3fU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                                 >> 4U))) 
                                   | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                      | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                                    >> 4U))) 
                                            | ((0x150U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                               | ((0x160U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                                          >> 4U))) 
                                                     | ((0x110U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                                        | ((0x120U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                                           | (0x200U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+870,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+871,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))));
        bufp->chgBit(oldp+872,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0))));
        bufp->chgBit(oldp+873,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0))));
        bufp->chgBit(oldp+874,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))));
        bufp->chgBit(oldp+875,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))))));
        bufp->chgBit(oldp+876,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))))));
        bufp->chgBit(oldp+877,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                | (IData)(((0x40U == 
                                            (0xc0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))))));
        bufp->chgCData(oldp+878,(((((((2U < (0xfU & 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                                      | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                     | (IData)(((0x40U 
                                                 == 
                                                 (0xc0U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                    << 7U) | (0x7ff80U 
                                              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                                  << 7U) 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xdU)))) 
                                  | ((((((2U < (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                         | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                        | (IData)((
                                                   (0x40U 
                                                    == 
                                                    (0xc0U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                       | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x14U)) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                      << 6U) | ((((
                                                   ((2U 
                                                     < 
                                                     (0xfU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))) 
                                                    | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                   | (IData)(
                                                             ((0x40U 
                                                               == 
                                                               (0xc0U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                  << 5U) 
                                                 | (0x1ffe0U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                        << 5U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xfU)))) 
                                                | ((((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                                      | (IData)(
                                                                ((0x40U 
                                                                  == 
                                                                  (0xc0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)))) 
                                                     | ((~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x14U)) 
                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))) 
                                                    << 4U) 
                                                   | ((((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                         | (IData)(
                                                                   ((0x40U 
                                                                     == 
                                                                     (0xc0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                        << 3U) 
                                                       | (0x7ff8U 
                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                              << 3U) 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x11U)))) 
                                                      | ((((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                            | (IData)(
                                                                      ((0x40U 
                                                                        == 
                                                                        (0xc0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)))) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x14U)) 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))) 
                                                          << 2U) 
                                                         | ((((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                               | (IData)(
                                                                         ((0x40U 
                                                                           == 
                                                                           (0xc0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                              << 1U) 
                                                             | (0x1ffeU 
                                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                    << 1U) 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0x13U)))) 
                                                            | ((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 6U))) 
                                                                 | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                                                                | (IData)(
                                                                          ((0x40U 
                                                                            == 
                                                                            (0xc0U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)))) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0x14U)) 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))))))))),8);
        bufp->chgBit(oldp+879,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                              >> 8U))) 
                                | ((0x18U == (0x3fU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                 >> 4U))) 
                                   | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                      | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                    >> 4U))) 
                                            | ((0x150U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                               | ((0x160U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                          >> 4U))) 
                                                     | ((0x110U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                        | ((0x120U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                           | (0x200U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+880,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+881,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_0_a_valid));
        bufp->chgSData(oldp+882,((0x3fffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 0xcU) 
                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x14U)))),14);
        bufp->chgBit(oldp+883,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_0));
        bufp->chgBit(oldp+884,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_1));
        bufp->chgBit(oldp+885,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_2));
        bufp->chgBit(oldp+886,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_3));
        bufp->chgBit(oldp+887,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_4));
        bufp->chgBit(oldp+888,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_5));
        bufp->chgBit(oldp+889,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_6));
        bufp->chgBit(oldp+890,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_7));
        bufp->chgCData(oldp+891,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_valid),8);
        bufp->chgCData(oldp+892,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_readys),8);
        bufp->chgBit(oldp+893,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0));
        bufp->chgBit(oldp+894,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1));
        bufp->chgBit(oldp+895,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2));
        bufp->chgBit(oldp+896,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3));
        bufp->chgBit(oldp+897,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4));
        bufp->chgBit(oldp+898,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_5));
        bufp->chgBit(oldp+899,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_6));
        bufp->chgBit(oldp+900,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_7));
        bufp->chgBit(oldp+901,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1))));
        bufp->chgBit(oldp+902,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2))));
        bufp->chgBit(oldp+903,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3))));
        bufp->chgBit(oldp+904,((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4))));
        bufp->chgBit(oldp+905,(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_5))));
        bufp->chgBit(oldp+906,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0));
        bufp->chgBit(oldp+907,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1));
        bufp->chgBit(oldp+908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2));
        bufp->chgBit(oldp+909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3));
        bufp->chgBit(oldp+910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4));
        bufp->chgBit(oldp+911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5));
        bufp->chgBit(oldp+912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6));
        bufp->chgBit(oldp+913,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7));
        bufp->chgSData(oldp+914,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__maskedBeats_0),9);
        bufp->chgBit(oldp+915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp));
        VL_SHIFTL_WWI(513,513,10, __Vtemp_103, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)));
        __Vtemp_105[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[0U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_105[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[1U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_105[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[2U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_105[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[3U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_105[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[4U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_105[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[5U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_105[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[6U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_105[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[7U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_105[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[8U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_105[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_103[9U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_105[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xaU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_105[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xbU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_105[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xcU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_105[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xdU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_105[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xeU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_105[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_103[0xfU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_105[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                                  ? __Vtemp_103[0x10U]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+916,(__Vtemp_105),513);
        bufp->chgBit(oldp+933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
        bufp->chgBit(oldp+935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
        __Vtemp_109[0U] = (IData)((0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        __Vtemp_109[1U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                             << 0x11U) | (0x1fffcU 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             >> 0xfU))) 
                           | (IData)(((0x3ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                      >> 0x20U)));
        __Vtemp_109[2U] = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                  >> 0xfU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                << 0x11U) 
                                               | (0x1fffcU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                     >> 0xfU))));
        __Vtemp_109[3U] = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                  >> 0xfU)) | (0x7fcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                  >> 0xfU)));
        bufp->chgWData(oldp+936,(__Vtemp_109),107);
        bufp->chgBit(oldp+940,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_d_ready));
        bufp->chgBit(oldp+941,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_valid));
        bufp->chgCData(oldp+942,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+943,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size),2);
        bufp->chgSData(oldp+944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_source),14);
        bufp->chgIData(oldp+945,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address),21);
        bufp->chgCData(oldp+946,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode))),3);
        bufp->chgBit(oldp+947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3));
        bufp->chgBit(oldp+948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1));
        bufp->chgBit(oldp+949,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode))));
        bufp->chgBit(oldp+950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___GEN_0));
        bufp->chgBit(oldp+951,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))));
        bufp->chgBit(oldp+952,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))))));
        bufp->chgBit(oldp+953,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                      >> 2U)))));
        bufp->chgBit(oldp+954,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))));
        bufp->chgBit(oldp+955,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
        bufp->chgBit(oldp+956,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & (IData)((0U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
        bufp->chgBit(oldp+957,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
        bufp->chgBit(oldp+958,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & (IData)((2U == 
                                              (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
        bufp->chgBit(oldp+959,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
        bufp->chgBit(oldp+960,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                   & (IData)(
                                                             (4U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
        bufp->chgBit(oldp+961,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
        bufp->chgBit(oldp+962,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                       >> 2U))) | (
                                                   (1U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                   & (IData)(
                                                             (6U 
                                                              == 
                                                              (6U 
                                                               & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
        bufp->chgCData(oldp+963,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                               << 7U) 
                                              | (0xffffff80U 
                                                 & (((2U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                     << 7U) 
                                                    & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                       << 5U)))) 
                                             | (((1U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                 & (IData)(
                                                           (6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                << 7U)) 
                                            | ((IData)(
                                                       (7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))) 
                                               << 7U))) 
                                  | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                  << 6U) 
                                                 | (0xffffffc0U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                        << 6U) 
                                                       & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                          << 4U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                   << 6U)) 
                                               | ((IData)(
                                                          (6U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))) 
                                                  << 6U))) 
                                     | ((0x20U & ((
                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                           << 5U) 
                                                          & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                             << 3U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                      << 5U)) 
                                                  | ((IData)(
                                                             (5U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))) 
                                                     << 5U))) 
                                        | ((0x10U & 
                                            (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 4U) 
                                               | (0xfffffff0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                      << 4U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                        << 2U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                 << 4U)) 
                                             | ((IData)(
                                                        (4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))) 
                                                << 4U))) 
                                           | ((8U & 
                                               (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                        >> 2U)) 
                                                      & (2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                  | ((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                     & (IData)(
                                                               (2U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))))) 
                                                 | (IData)(
                                                           (3U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                        | ((~ 
                                                            ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))))) 
                                                      | (IData)(
                                                                (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                           | ((~ 
                                                               ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                             & (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (6U 
                                                                         & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))))) 
                                                         | (IData)(
                                                                   (1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))))) 
                                                          | (IData)(
                                                                    (0U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h02c77395__0)))))))))))))),8);
        bufp->chgBit(oldp+964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+965,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+966,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5ea76d7e__0))));
        bufp->chgBit(oldp+967,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+968,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5f701f9b__0))));
        bufp->chgBit(oldp+969,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5ea76d7e__0))));
        bufp->chgBit(oldp+970,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3) 
                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5f701f9b__0))));
        bufp->chgBit(oldp+971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_a_ready));
        bufp->chgBit(oldp+972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_0_a_valid));
        bufp->chgBit(oldp+973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_0_d_ready));
        bufp->chgBit(oldp+974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_valid));
        bufp->chgCData(oldp+975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_size),3);
        bufp->chgSData(oldp+976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source),10);
        bufp->chgCData(oldp+977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+981,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                              >> 8U))) 
                                | ((0x18U == (0x3fU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                                 >> 4U))) 
                                   | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                      | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                         | ((0x14U 
                                             == (0x3fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                                    >> 4U))) 
                                            | ((0x150U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                               | ((0x160U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                                          >> 4U))) 
                                                     | ((0x110U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                                        | ((0x120U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                                           | (0x200U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___repeater_io_deq_bits_address),21);
        bufp->chgBit(oldp+986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_a_ready));
        bufp->chgBit(oldp+987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_1_a_valid));
        bufp->chgBit(oldp+988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_1_d_ready));
        bufp->chgBit(oldp+989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_valid));
        bufp->chgCData(oldp+990,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))),3);
        bufp->chgCData(oldp+991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_size),3);
        bufp->chgSData(oldp+992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source),10);
        bufp->chgBit(oldp+993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_d_ready));
        bufp->chgBit(oldp+994,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid));
        bufp->chgCData(oldp+995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode),3);
        bufp->chgCData(oldp+996,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size),2);
        bufp->chgSData(oldp+997,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source),14);
        bufp->chgIData(oldp+998,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address),21);
        bufp->chgCData(oldp+999,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U)))),8);
        bufp->chgCData(oldp+1000,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+1001,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dFirst_size),3);
        bufp->chgBit(oldp+1002,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__drop));
        bufp->chgCData(oldp+1003,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+1004,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                               >> 8U))) 
                                 | ((0x18U == (0x3fU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                                  >> 4U))) 
                                    | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                       | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                          | ((0x14U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                                     >> 4U))) 
                                             | ((0x150U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                                | ((0x160U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                                           >> 4U))) 
                                                      | ((0x110U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                                         | ((0x120U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                                            | (0x200U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+1005,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1006,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgBit(oldp+1007,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full));
        bufp->chgCData(oldp+1008,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+1009,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address),21);
        bufp->chgBit(oldp+1010,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1));
        bufp->chgBit(oldp+1011,((1U & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                       >> 3U))));
        bufp->chgBit(oldp+1012,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))));
        bufp->chgBit(oldp+1013,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___GEN_0));
        bufp->chgBit(oldp+1014,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))));
        bufp->chgBit(oldp+1015,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))))));
        bufp->chgBit(oldp+1016,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                       >> 2U)))));
        bufp->chgBit(oldp+1017,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))));
        bufp->chgBit(oldp+1018,((IData)((0U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
        bufp->chgBit(oldp+1019,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                    & (IData)((0U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
        bufp->chgBit(oldp+1020,((IData)((2U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
        bufp->chgBit(oldp+1021,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                    & (IData)((2U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
        bufp->chgBit(oldp+1022,((IData)((4U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
        bufp->chgBit(oldp+1023,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                  & (IData)((4U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
        bufp->chgBit(oldp+1024,((IData)((6U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
        bufp->chgBit(oldp+1025,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
        bufp->chgCData(oldp+1026,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 7U) 
                                               | (0xffffff80U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                      << 7U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                        << 5U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                << 7U))) 
                                   | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 6U) 
                                                  | (0xffffffc0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                         << 6U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                           << 4U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                     & (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                   << 6U))) 
                                      | ((0x20U & (
                                                   ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & (((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                            << 5U) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                              << 3U)))) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                        & (IData)(
                                                                  (4U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                       << 5U)) 
                                                   | ((IData)(
                                                              (5U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                      << 5U))) 
                                         | ((0x10U 
                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 4U) 
                                                  | (0xfffffff0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                         << 4U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                           << 2U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                     & (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))) 
                                                   << 4U))) 
                                            | ((8U 
                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                           >> 2U)) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                        & (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                    | (IData)(
                                                              (3U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                              >> 2U)) 
                                                            & (2U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                           & (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                       | (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             | ((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                                                  >> 2U)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h1a485cba__0)))))))))))))),8);
        bufp->chgBit(oldp+1027,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1028,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT____VdfgTmp_hfc6fa3be__0))));
        bufp->chgBit(oldp+1029,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1) 
                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full) 
                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                       >> 0xcU)))));
        bufp->chgBit(oldp+1030,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT___out_wofireMux_T_2) 
                                 & (((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                     >> 3U) & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xff0U 
                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT____VdfgTmp_hfc6fa3be__0)))))));
        bufp->chgCData(oldp+1031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__readys_valid),2);
        bufp->chgCData(oldp+1032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__readys_readys),2);
        bufp->chgBit(oldp+1033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__winner_0));
        bufp->chgBit(oldp+1034,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__winner_1));
        bufp->chgBit(oldp+1035,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0));
        bufp->chgBit(oldp+1036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1));
        bufp->chgBit(oldp+1037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1038,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2));
        bufp->chgBit(oldp+1039,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                 >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2)));
        bufp->chgBit(oldp+1040,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1));
        bufp->chgBit(oldp+1041,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                 >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1)));
        bufp->chgBit(oldp+1042,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0));
        bufp->chgBit(oldp+1043,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                 >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad)));
        bufp->chgBit(oldp+1044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_37));
        bufp->chgBit(oldp+1045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_11));
        bufp->chgBit(oldp+1046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_29));
        bufp->chgBit(oldp+1047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_21));
        bufp->chgQData(oldp+1048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0),64);
        bufp->chgQData(oldp+1050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad),64);
        bufp->chgQData(oldp+1052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1),64);
        bufp->chgQData(oldp+1054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2),64);
        bufp->chgBit(oldp+1056,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))));
        bufp->chgBit(oldp+1057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_0));
        bufp->chgBit(oldp+1058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_1));
        bufp->chgBit(oldp+1059,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_2));
        bufp->chgBit(oldp+1060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_3));
        bufp->chgBit(oldp+1061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_4));
        bufp->chgBit(oldp+1062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_5));
        bufp->chgBit(oldp+1063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_6));
        bufp->chgBit(oldp+1064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_7));
        bufp->chgBit(oldp+1065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_0));
        bufp->chgBit(oldp+1066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_1));
        bufp->chgBit(oldp+1067,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_2));
        bufp->chgBit(oldp+1068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_3));
        bufp->chgBit(oldp+1069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_4));
        bufp->chgBit(oldp+1070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_5));
        bufp->chgBit(oldp+1071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_6));
        bufp->chgBit(oldp+1072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_7));
        bufp->chgBit(oldp+1073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_0));
        bufp->chgBit(oldp+1074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1));
        bufp->chgBit(oldp+1075,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2));
        bufp->chgBit(oldp+1076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3));
        bufp->chgBit(oldp+1077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_4));
        bufp->chgBit(oldp+1078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_5));
        bufp->chgBit(oldp+1079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_6));
        bufp->chgBit(oldp+1080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_7));
        bufp->chgBit(oldp+1081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_0));
        bufp->chgBit(oldp+1082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_1));
        bufp->chgBit(oldp+1083,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_2));
        bufp->chgBit(oldp+1084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_3));
        bufp->chgBit(oldp+1085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_4));
        bufp->chgBit(oldp+1086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_5));
        bufp->chgBit(oldp+1087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_6));
        bufp->chgBit(oldp+1088,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_7));
        bufp->chgCData(oldp+1089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex),3);
        bufp->chgBit(oldp+1090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_2));
        bufp->chgBit(oldp+1091,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0));
        bufp->chgBit(oldp+1092,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))));
        bufp->chgBit(oldp+1093,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))))));
        bufp->chgBit(oldp+1094,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                       >> 2U)))));
        bufp->chgBit(oldp+1095,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))));
        bufp->chgBit(oldp+1096,((IData)((0U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
        bufp->chgBit(oldp+1097,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                    & (IData)((0U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
        bufp->chgBit(oldp+1098,((IData)((2U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
        bufp->chgBit(oldp+1099,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                    & (IData)((2U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
        bufp->chgBit(oldp+1100,((IData)((4U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
        bufp->chgBit(oldp+1101,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                  & (IData)((4U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
        bufp->chgBit(oldp+1102,((IData)((6U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
        bufp->chgBit(oldp+1103,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
        bufp->chgCData(oldp+1104,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 7U) 
                                               | (0xffffff80U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                      << 7U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                        << 5U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))) 
                                                << 7U))) 
                                   | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 6U) 
                                                  | (0xffffffc0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                         << 6U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                           << 4U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                     & (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))) 
                                                   << 6U))) 
                                      | ((0x20U & (
                                                   ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & (((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                            << 5U) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                              << 3U)))) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                        & (IData)(
                                                                  (4U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                       << 5U)) 
                                                   | ((IData)(
                                                              (5U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))) 
                                                      << 5U))) 
                                         | ((0x10U 
                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 4U) 
                                                  | (0xfffffff0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                         << 4U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                           << 2U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                     & (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))) 
                                                   << 4U))) 
                                            | ((8U 
                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                           >> 2U)) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                        & (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))))) 
                                                    | (IData)(
                                                              (3U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                              >> 2U)) 
                                                            & (2U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                           & (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))))) 
                                                       | (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))))) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             | ((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                                                  >> 2U)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                               & (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0)))))))))))))),8);
        bufp->chgBit(oldp+1105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgCData(oldp+1106,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                     >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad) 
                                    << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0))),2);
        bufp->chgCData(oldp+1107,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                     >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1) 
                                    << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1))),2);
        bufp->chgCData(oldp+1108,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                     >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2) 
                                    << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2))),2);
        bufp->chgBit(oldp+1109,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_0))));
        bufp->chgBit(oldp+1110,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_3) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_3))));
        bufp->chgBit(oldp+1111,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_1))));
        bufp->chgBit(oldp+1112,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_4) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_4))));
        bufp->chgBit(oldp+1113,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_2) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_2))));
        bufp->chgBit(oldp+1114,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_5) 
                                 > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_5))));
        bufp->chgBit(oldp+1115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_2));
        bufp->chgBit(oldp+1116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_9));
        bufp->chgBit(oldp+1117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_15));
        bufp->chgBit(oldp+1118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_21));
        bufp->chgBit(oldp+1119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_12));
        bufp->chgBit(oldp+1120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_18));
        bufp->chgBit(oldp+1121,((0x68U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1122,((0x60U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1123,((0x58U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1124,((0x50U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1125,((0x48U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1126,((0x40U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
        bufp->chgBit(oldp+1127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_2));
        bufp->chgBit(oldp+1128,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_0));
        bufp->chgBit(oldp+1130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_3));
        bufp->chgBit(oldp+1131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_1));
        bufp->chgBit(oldp+1132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_4));
        bufp->chgBit(oldp+1133,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_5));
        bufp->chgBit(oldp+1134,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0));
        bufp->chgBit(oldp+1135,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_0));
        bufp->chgBit(oldp+1136,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_1));
        bufp->chgBit(oldp+1137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_2));
        bufp->chgBit(oldp+1138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_3));
        bufp->chgBit(oldp+1139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_4));
        bufp->chgBit(oldp+1140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_5));
        bufp->chgBit(oldp+1141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG));
        bufp->chgBit(oldp+1142,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_1));
        bufp->chgBit(oldp+1143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_2));
        bufp->chgBit(oldp+1144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_3));
        bufp->chgBit(oldp+1145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_4));
        bufp->chgBit(oldp+1146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_5));
        bufp->chgBit(oldp+1147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_5));
        bufp->chgBit(oldp+1148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_4));
        bufp->chgBit(oldp+1149,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_1));
        bufp->chgBit(oldp+1150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_3));
        bufp->chgBit(oldp+1151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_0));
        bufp->chgBit(oldp+1152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_2));
        bufp->chgCData(oldp+1153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex),7);
        bufp->chgBit(oldp+1154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimedDevs_1));
        bufp->chgBit(oldp+1155,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin__DOT___GEN)))));
        bufp->chgBit(oldp+1156,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1157,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_1__DOT___GEN)))));
        bufp->chgBit(oldp+1158,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_1__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1159,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_2__DOT___GEN)))));
        bufp->chgBit(oldp+1160,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_2__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1161,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_3__DOT___GEN)))));
        bufp->chgBit(oldp+1162,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_3__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1163,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_4__DOT___GEN)))));
        bufp->chgBit(oldp+1164,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_4__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1165,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_5__DOT___GEN)))));
        bufp->chgBit(oldp+1166,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_5__DOT___GEN)) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
        bufp->chgBit(oldp+1167,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_0) 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_1) 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_2) 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_3) 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_4) 
                                              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_5)))))) 
                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U] 
                                    >> 0x18U))));
        bufp->chgBit(oldp+1168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__do_enq));
        bufp->chgBit(oldp+1169,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))));
        bufp->chgBit(oldp+1170,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))))));
        bufp->chgBit(oldp+1171,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                       >> 2U)))));
        bufp->chgBit(oldp+1172,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))));
        bufp->chgBit(oldp+1173,((IData)((0U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
        bufp->chgBit(oldp+1174,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                    & (IData)((0U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
        bufp->chgBit(oldp+1175,((IData)((2U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
        bufp->chgBit(oldp+1176,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                    & (IData)((2U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
        bufp->chgBit(oldp+1177,((IData)((4U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
        bufp->chgBit(oldp+1178,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                  & (IData)((4U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
        bufp->chgBit(oldp+1179,((IData)((6U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
        bufp->chgBit(oldp+1180,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
        bufp->chgCData(oldp+1181,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                << 7U) 
                                               | (0xffffff80U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                      << 7U) 
                                                     & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                        << 5U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                 << 7U)) 
                                             | ((IData)(
                                                        (7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))) 
                                                << 7U))) 
                                   | ((0x40U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 6U) 
                                                  | (0xffffffc0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                         << 6U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                           << 4U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                     & (IData)(
                                                               (6U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (6U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))) 
                                                   << 6U))) 
                                      | ((0x20U & (
                                                   ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      << 5U) 
                                                     | (0xffffffe0U 
                                                        & (((2U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                            << 5U) 
                                                           & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                              << 3U)))) 
                                                    | (((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                        & (IData)(
                                                                  (4U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                       << 5U)) 
                                                   | ((IData)(
                                                              (5U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))) 
                                                      << 5U))) 
                                         | ((0x10U 
                                             & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                   << 4U) 
                                                  | (0xfffffff0U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                         << 4U) 
                                                        & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                           << 2U)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                     & (IData)(
                                                               (4U 
                                                                == 
                                                                (6U 
                                                                 & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (4U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))) 
                                                   << 4U))) 
                                            | ((8U 
                                                & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                      | ((~ 
                                                          ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                           >> 2U)) 
                                                         & (2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                        & (IData)(
                                                                  (2U 
                                                                   == 
                                                                   (6U 
                                                                    & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))))) 
                                                    | (IData)(
                                                              (3U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                   << 3U)) 
                                               | ((4U 
                                                   & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                         | ((~ 
                                                             ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                              >> 2U)) 
                                                            & (2U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                        | ((1U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                           & (IData)(
                                                                     (2U 
                                                                      == 
                                                                      (6U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))))) 
                                                       | (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (7U 
                                                                   & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                            | ((~ 
                                                                ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                                 >> 2U)) 
                                                               & (2U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                           | ((1U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                              & (IData)(
                                                                        (0U 
                                                                         == 
                                                                         (6U 
                                                                          & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))))) 
                                                          | (IData)(
                                                                    (1U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                                             | ((~ 
                                                                 ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                                                  >> 2U)) 
                                                                & (2U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                                                            | ((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                               & (IData)(
                                                                         (0U 
                                                                          == 
                                                                          (6U 
                                                                           & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))))) 
                                                           | (IData)(
                                                                     (0U 
                                                                      == 
                                                                      (7U 
                                                                       & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0)))))))))))))),8);
        VL_SHIFTL_WWI(8208,8208,14, __Vtemp_110, VTestDriver__ConstPool__CONST_h09b34b06_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source));
        VL_COND_WIWW(8208, __Vtemp_111, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT___same_cycle_resp_T_1), __Vtemp_110, VTestDriver__ConstPool__CONST_h129dfe9c_0);
        VL_AND_W(257, __Vtemp_112, VTestDriver__ConstPool__CONST_h42b330f7_0, __Vtemp_111);
        bufp->chgWData(oldp+1182,(__Vtemp_112),8208);
        bufp->chgBit(oldp+1439,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1440,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0));
        bufp->chgBit(oldp+1441,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))));
        bufp->chgIData(oldp+1442,((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                                >> 3U))),23);
        bufp->chgBit(oldp+1443,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])));
        bufp->chgIData(oldp+1444,((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U] 
                                                >> 1U))),23);
        bufp->chgQData(oldp+1445,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[2U])) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])) 
                                                    >> 0x18U)))),64);
        bufp->chgCData(oldp+1447,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[2U] 
                                   >> 0x18U)),8);
        bufp->chgWData(oldp+1448,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram),112);
        bufp->chgBit(oldp+1452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_a_ready));
        bufp->chgBit(oldp+1453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_valid));
        bufp->chgCData(oldp+1454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size),2);
        bufp->chgSData(oldp+1456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source),14);
        bufp->chgIData(oldp+1457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address),29);
        bufp->chgCData(oldp+1458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask),8);
        bufp->chgQData(oldp+1459,((((QData)((IData)(
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                    << 0x28U) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                    >> 0x18U)))),64);
        bufp->chgCData(oldp+1461,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode))),3);
        bufp->chgBit(oldp+1462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_woready_7));
        bufp->chgBit(oldp+1463,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))));
        bufp->chgBit(oldp+1464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_0));
        bufp->chgBit(oldp+1465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_1));
        bufp->chgBit(oldp+1466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_2));
        bufp->chgBit(oldp+1467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_3));
        bufp->chgBit(oldp+1468,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_4));
        bufp->chgBit(oldp+1469,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_5));
        bufp->chgBit(oldp+1470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_6));
        bufp->chgBit(oldp+1471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_7));
        bufp->chgCData(oldp+1472,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))),3);
        bufp->chgBit(oldp+1473,((((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                      >> 0xfU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_a_ready)) 
                                 | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xfU) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_a_ready)))));
        bufp->chgCData(oldp+1474,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
        bufp->chgCData(oldp+1475,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 3U))),3);
        bufp->chgCData(oldp+1476,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))),3);
        bufp->chgSData(oldp+1477,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U))),10);
        bufp->chgIData(oldp+1478,((0x1fffffffU & ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 0xdU) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x13U)))),29);
        bufp->chgCData(oldp+1479,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x10U))),8);
        bufp->chgBit(oldp+1480,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1481,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid));
        bufp->chgCData(oldp+1482,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode),3);
        bufp->chgCData(oldp+1483,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size),3);
        bufp->chgSData(oldp+1484,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source),10);
        bufp->chgBit(oldp+1485,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
        bufp->chgBit(oldp+1486,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
        bufp->chgWData(oldp+1487,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),121);
        VL_SHIFTL_WWI(513,513,10, __Vtemp_113, VTestDriver__ConstPool__CONST_hebe77906_0, 
                      (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)));
        __Vtemp_115[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[0U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
        __Vtemp_115[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[1U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
        __Vtemp_115[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[2U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
        __Vtemp_115[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[3U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
        __Vtemp_115[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[4U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
        __Vtemp_115[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[5U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
        __Vtemp_115[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[6U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
        __Vtemp_115[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[7U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
        __Vtemp_115[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[8U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
        __Vtemp_115[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                               ? __Vtemp_113[9U] : 
                              VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
        __Vtemp_115[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xaU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
        __Vtemp_115[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xbU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
        __Vtemp_115[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xcU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
        __Vtemp_115[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xdU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
        __Vtemp_115[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xeU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
        __Vtemp_115[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                 ? __Vtemp_113[0xfU]
                                 : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
        __Vtemp_115[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                                  ? __Vtemp_113[0x10U]
                                  : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
        bufp->chgWData(oldp+1491,(__Vtemp_115),513);
        bufp->chgBit(oldp+1508,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1509,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_deq));
        bufp->chgBit(oldp+1510,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_enq));
        __Vtemp_119[0U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                             << 0x1fU) | (0x7ffffe00U 
                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 1U))) 
                           | (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
        __Vtemp_119[1U] = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                      >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffe00U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                       >> 1U))));
        __Vtemp_119[2U] = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                      >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                  << 0x1fU) 
                                                 | (0x7ffffe00U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                       >> 1U))));
        __Vtemp_119[3U] = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      >> 1U)) | (0x1fffe00U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                    >> 1U)));
        bufp->chgWData(oldp+1511,(__Vtemp_119),121);
        bufp->chgBit(oldp+1515,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_d_ready));
        bufp->chgBit(oldp+1516,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_valid));
        bufp->chgCData(oldp+1517,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode),3);
        bufp->chgCData(oldp+1518,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size),2);
        bufp->chgSData(oldp+1519,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source),14);
        bufp->chgSData(oldp+1520,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address),13);
        bufp->chgBit(oldp+1521,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_a_ready));
        bufp->chgBit(oldp+1522,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_a_valid));
        bufp->chgSData(oldp+1523,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0x13U)),13);
        bufp->chgBit(oldp+1524,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_d_ready));
        bufp->chgBit(oldp+1525,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_valid));
        bufp->chgCData(oldp+1526,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+1527,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source),10);
        bufp->chgCData(oldp+1528,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+1529,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+1530,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+1531,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+1532,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source_ok));
        bufp->chgBit(oldp+1533,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+1534,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
        bufp->chgBit(oldp+1535,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
        bufp->chgBit(oldp+1536,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+1537,((IData)((0U == (0x300000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+1538,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                 | (IData)((0x40U == 
                                            (0x3000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+1539,((IData)((0x100000U 
                                         == (0x300000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+1540,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                 | (IData)((0x100040U 
                                            == (0x3000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+1541,((IData)((0x200000U 
                                         == (0x300000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+1542,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                 | (IData)((0x200040U 
                                            == (0x3000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgBit(oldp+1543,((IData)((0x300000U 
                                         == (0x300000U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        bufp->chgBit(oldp+1544,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                 | (IData)((0x300040U 
                                            == (0x3000c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
        bufp->chgCData(oldp+1545,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                     | ((0x300040U 
                                         == (0x3000c0U 
                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                        | (0x380000U 
                                           == (0x380000U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                    << 7U) | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                                | ((0x300040U 
                                                    == 
                                                    (0x3000c0U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                   | (0x300000U 
                                                      == 
                                                      (0x380000U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                                   | ((0x200040U 
                                                       == 
                                                       (0x3000c0U 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                      | (0x280000U 
                                                         == 
                                                         (0x380000U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 5U) 
                                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                                      | ((0x200040U 
                                                          == 
                                                          (0x3000c0U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                         | (0x200000U 
                                                            == 
                                                            (0x380000U 
                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                                         | ((0x100040U 
                                                             == 
                                                             (0x3000c0U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                            | (0x180000U 
                                                               == 
                                                               (0x380000U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 3U) 
                                                       | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                                            | ((0x100040U 
                                                                == 
                                                                (0x3000c0U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                               | (0x100000U 
                                                                  == 
                                                                  (0x380000U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 2U) 
                                                          | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                                               | ((0x40U 
                                                                   == 
                                                                   (0x3000c0U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                  | (0x80000U 
                                                                     == 
                                                                     (0x380000U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                                                                | ((0x40U 
                                                                    == 
                                                                    (0x3000c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                                   | (0U 
                                                                      == 
                                                                      (0x380000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))))))))))),8);
        bufp->chgBit(oldp+1546,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                               >> 8U))) 
                                 | ((0x18U == (0x3fU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                                  >> 4U))) 
                                    | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                       | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                          | ((0x14U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                                     >> 4U))) 
                                             | ((0x150U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                                | ((0x160U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                                           >> 4U))) 
                                                      | ((0x110U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                                         | ((0x120U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                                            | (0x200U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+1547,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1548,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+1549,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgSData(oldp+1550,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_address),13);
        bufp->chgBit(oldp+1551,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_a_ready));
        bufp->chgBit(oldp+1552,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_1_a_valid));
        bufp->chgBit(oldp+1553,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_1_d_ready));
        bufp->chgBit(oldp+1554,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_valid));
        bufp->chgCData(oldp+1555,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_size),3);
        bufp->chgSData(oldp+1556,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source),10);
        bufp->chgCData(oldp+1557,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size_hi),3);
        bufp->chgCData(oldp+1558,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size),3);
        bufp->chgBit(oldp+1559,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__drop));
        bufp->chgCData(oldp+1560,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
        bufp->chgBit(oldp+1561,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                               >> 8U))) 
                                 | ((0x18U == (0x3fU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                                  >> 4U))) 
                                    | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                       | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                          | ((0x14U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                                     >> 4U))) 
                                             | ((0x150U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                                | ((0x160U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                                           >> 4U))) 
                                                      | ((0x110U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                                         | ((0x120U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                                            | (0x200U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+1562,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1563,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
        bufp->chgCData(oldp+1564,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
        bufp->chgIData(oldp+1565,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_address),29);
        bufp->chgBit(oldp+1566,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))));
        bufp->chgBit(oldp+1567,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                               >> 8U))) 
                                 | ((0x18U == (0x3fU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                  >> 4U))) 
                                    | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                       | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                          | ((0x14U 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                     >> 4U))) 
                                             | ((0x150U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                | ((0x160U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                   | ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                           >> 4U))) 
                                                      | ((0x110U 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                         | ((0x120U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                                            | (0x200U 
                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source))))))))))))));
        bufp->chgBit(oldp+1568,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
        bufp->chgBit(oldp+1569,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___GEN_0));
        bufp->chgBit(oldp+1570,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))));
        bufp->chgBit(oldp+1571,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                        >> 2U)) & (2U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))))));
        bufp->chgBit(oldp+1572,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                 | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                    & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                       >> 2U)))));
        bufp->chgBit(oldp+1573,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))));
        bufp->chgBit(oldp+1574,((IData)((0U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
        bufp->chgBit(oldp+1575,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                    & (IData)((0U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
        bufp->chgBit(oldp+1576,((IData)((2U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
        bufp->chgBit(oldp+1577,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                         >> 2U)) & 
                                     (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                                 | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                    & (IData)((2U == 
                                               (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
        bufp->chgBit(oldp+1578,((IData)((4U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
        bufp->chgBit(oldp+1579,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                  & (IData)((4U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
        bufp->chgBit(oldp+1580,((IData)((6U == (6U 
                                                & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
        bufp->chgBit(oldp+1581,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                  | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                     & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                        >> 2U))) | 
                                 ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                  & (IData)((6U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
    }
}
