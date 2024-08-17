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

VL_ATTR_COLD void VTestDriver___024root__trace_full_0_sub_11(VTestDriver___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root__trace_full_0_sub_11\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullIData(oldp+73902,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address),32);
    bufp->fullCData(oldp+73903,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask),8);
    bufp->fullQData(oldp+73904,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data),64);
    bufp->fullCData(oldp+73906,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode),3);
    bufp->fullCData(oldp+73907,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param),3);
    bufp->fullCData(oldp+73908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size),4);
    bufp->fullCData(oldp+73909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source),6);
    bufp->fullIData(oldp+73910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address),32);
    bufp->fullCData(oldp+73911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask),8);
    bufp->fullQData(oldp+73912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data),64);
    bufp->fullCData(oldp+73914,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode),3);
    bufp->fullCData(oldp+73915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param),3);
    bufp->fullCData(oldp+73916,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size),4);
    bufp->fullCData(oldp+73917,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source),6);
    bufp->fullIData(oldp+73918,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address),32);
    bufp->fullCData(oldp+73919,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask),8);
    bufp->fullQData(oldp+73920,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data),64);
    bufp->fullCData(oldp+73922,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode),3);
    bufp->fullCData(oldp+73923,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param),3);
    bufp->fullCData(oldp+73924,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size),4);
    bufp->fullCData(oldp+73925,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source),6);
    bufp->fullIData(oldp+73926,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address),32);
    bufp->fullQData(oldp+73927,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data),64);
    bufp->fullCData(oldp+73929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode),3);
    bufp->fullCData(oldp+73930,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param),3);
    bufp->fullCData(oldp+73931,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size),4);
    bufp->fullCData(oldp+73932,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source),6);
    bufp->fullIData(oldp+73933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address),32);
    bufp->fullQData(oldp+73934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data),64);
    bufp->fullCData(oldp+73936,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode),3);
    bufp->fullCData(oldp+73937,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param),3);
    bufp->fullCData(oldp+73938,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size),4);
    bufp->fullCData(oldp+73939,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source),6);
    bufp->fullIData(oldp+73940,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address),32);
    bufp->fullQData(oldp+73941,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data),64);
    bufp->fullCData(oldp+73943,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode),3);
    bufp->fullCData(oldp+73944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param),3);
    bufp->fullCData(oldp+73945,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size),4);
    bufp->fullCData(oldp+73946,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source),6);
    bufp->fullIData(oldp+73947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address),32);
    bufp->fullQData(oldp+73948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data),64);
    bufp->fullCData(oldp+73950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode),3);
    bufp->fullCData(oldp+73951,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param),3);
    bufp->fullCData(oldp+73952,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size),4);
    bufp->fullCData(oldp+73953,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source),6);
    bufp->fullIData(oldp+73954,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address),32);
    bufp->fullQData(oldp+73955,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data),64);
    bufp->fullCData(oldp+73957,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode),3);
    bufp->fullCData(oldp+73958,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param),3);
    bufp->fullCData(oldp+73959,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size),4);
    bufp->fullCData(oldp+73960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source),6);
    bufp->fullIData(oldp+73961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address),32);
    bufp->fullQData(oldp+73962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data),64);
    bufp->fullCData(oldp+73964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode),3);
    bufp->fullCData(oldp+73965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param),3);
    bufp->fullCData(oldp+73966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size),4);
    bufp->fullCData(oldp+73967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source),6);
    bufp->fullIData(oldp+73968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address),32);
    bufp->fullQData(oldp+73969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data),64);
    bufp->fullCData(oldp+73971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode),3);
    bufp->fullCData(oldp+73972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param),3);
    bufp->fullCData(oldp+73973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size),4);
    bufp->fullCData(oldp+73974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source),6);
    bufp->fullIData(oldp+73975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address),32);
    bufp->fullQData(oldp+73976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data),64);
    bufp->fullCData(oldp+73978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink),3);
    bufp->fullCData(oldp+73979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink),3);
    bufp->fullCData(oldp+73980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink),3);
    bufp->fullCData(oldp+73981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink),3);
    bufp->fullCData(oldp+73982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink),3);
    bufp->fullCData(oldp+73983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink),3);
    bufp->fullCData(oldp+73984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink),3);
    bufp->fullCData(oldp+73985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink),3);
    bufp->fullCData(oldp+73986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode),3);
    bufp->fullCData(oldp+73987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param),3);
    bufp->fullCData(oldp+73988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size),4);
    bufp->fullCData(oldp+73989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source),6);
    bufp->fullIData(oldp+73990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address),32);
    bufp->fullCData(oldp+73991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask),8);
    bufp->fullQData(oldp+73992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_data),64);
    bufp->fullCData(oldp+73994,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9),3);
    bufp->fullCData(oldp+73995,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param),3);
    bufp->fullCData(oldp+73996,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7),4);
    bufp->fullCData(oldp+73997,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),6);
    bufp->fullIData(oldp+73998,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address),32);
    bufp->fullQData(oldp+73999,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_data),64);
    bufp->fullCData(oldp+74001,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_e_bits_sink),3);
    bufp->fullBit(oldp+74002,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                     >> 4U))))) 
                                     | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)) 
                                        | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)))))));
    bufp->fullBit(oldp+74003,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
    bufp->fullBit(oldp+74004,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))))));
    bufp->fullBit(oldp+74005,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+74006,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
    bufp->fullBit(oldp+74007,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74008,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74009,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74010,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74011,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74012,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74013,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74014,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullCData(oldp+74015,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
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
                                    | ((0x20U & (((
                                                   ((2U 
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
    bufp->fullBit(oldp+74016,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                         >> 4U)) | 
                                     (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
    bufp->fullBit(oldp+74017,((1U & ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                 >> 0xeU)) 
                                         | (0U != (3U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                       >> 0xcU)))))) 
                                     | ((~ ((0U != 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                              >> 0x1aU)) 
                                            | (0U != 
                                               (0x3fffU 
                                                & (0x2010U 
                                                   ^ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                    >> 0xcU)))))) 
                                        | ((0U == (
                                                   (0xffffeU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                          >> 0xcU))))) 
                                           | ((~ ((0U 
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
    bufp->fullBit(oldp+74018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74019,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG));
    bufp->fullBit(oldp+74020,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_wfi));
    bufp->fullWData(oldp+74021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT____Vcellinp__ram_ext__W0_data),265);
    bufp->fullBit(oldp+74030,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
    bufp->fullCData(oldp+74031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
    bufp->fullCData(oldp+74032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),5);
    bufp->fullSData(oldp+74033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1),9);
    bufp->fullBit(oldp+74034,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                         >> 4U)) | 
                                     (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
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
    __Vtemp_14[0U] = ((IData)((((QData)((IData)(__Vtemp_13[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                               | (((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_13[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_13[
                                                     (0xfU 
                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                         >> 5U))])) 
                                     >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                      << 1U);
    __Vtemp_14[1U] = (((IData)((((QData)((IData)(__Vtemp_13[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                | (((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_13[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_13[
                                                      (0xfU 
                                                       & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                          >> 5U))])) 
                                      >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               __Vtemp_13[
                                                               (((IData)(0x3fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
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
    __Vtemp_14[2U] = ((IData)(((((QData)((IData)(__Vtemp_13[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                | (((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_13[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_13[
                                                      (0xfU 
                                                       & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                          >> 5U))])) 
                                      >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                               >> 0x20U)) >> 0x1fU);
    __Vtemp_16[2U] = (((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                          ? 0U : (__Vtemp_6[(((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                             >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
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
                                             >> (0x3fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))))
                         : 0U) << 9U) | ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                                            ? 0U : 
                                           (__Vtemp_6[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                                          | (__Vtemp_6[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                                         >> 0x17U));
    __Vtemp_19[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param) 
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
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode) 
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
    bufp->fullWData(oldp+74035,(__Vtemp_20),121);
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
    __Vtemp_34[0U] = (IData)((((QData)((IData)(__Vtemp_33[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0x1ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                              | (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_33[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0x1ffU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_33[
                                                    (0xfU 
                                                     & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                        >> 5U))])) 
                                    >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))));
    __Vtemp_34[1U] = (IData)(((((QData)((IData)(__Vtemp_33[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                               | (((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_33[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_33[
                                                     (0xfU 
                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                         >> 5U))])) 
                                     >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
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
                                             >> (0x3fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))))
                         : 0U) << 1U) | ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                            ? 0U : 
                                           (__Vtemp_26[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                                          | (__Vtemp_26[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                                         >> 0x1fU));
    __Vtemp_38[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param) 
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
    __Vtemp_39[1U] = ((__Vtemp_34[0U] >> 0x1fU) | (
                                                   __Vtemp_34[1U] 
                                                   << 1U));
    __Vtemp_39[2U] = ((__Vtemp_34[1U] >> 0x1fU) | (
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp_26[
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
                                                   << 1U));
    __Vtemp_39[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode) 
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
    bufp->fullWData(oldp+74039,(__Vtemp_39),113);
    bufp->fullCData(oldp+74043,(((0x17U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_2__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0))
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
    bufp->fullCData(oldp+74044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_opcode),3);
    bufp->fullCData(oldp+74045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_param),3);
    bufp->fullCData(oldp+74046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_size),4);
    bufp->fullCData(oldp+74047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_source),6);
    bufp->fullIData(oldp+74048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_address),32);
    bufp->fullCData(oldp+74049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_mask),8);
    bufp->fullQData(oldp+74050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_0_data),64);
    bufp->fullCData(oldp+74052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_opcode),3);
    bufp->fullCData(oldp+74053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_param),3);
    bufp->fullCData(oldp+74054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_size),4);
    bufp->fullCData(oldp+74055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_source),6);
    bufp->fullIData(oldp+74056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_address),32);
    bufp->fullCData(oldp+74057,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_mask),8);
    bufp->fullQData(oldp+74058,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_1_data),64);
    bufp->fullCData(oldp+74060,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_opcode),3);
    bufp->fullCData(oldp+74061,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_param),3);
    bufp->fullCData(oldp+74062,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_size),4);
    bufp->fullCData(oldp+74063,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_source),6);
    bufp->fullIData(oldp+74064,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_address),32);
    bufp->fullCData(oldp+74065,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_mask),8);
    bufp->fullQData(oldp+74066,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_2_data),64);
    bufp->fullCData(oldp+74068,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_opcode),3);
    bufp->fullCData(oldp+74069,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_param),3);
    bufp->fullCData(oldp+74070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_size),4);
    bufp->fullCData(oldp+74071,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_source),6);
    bufp->fullIData(oldp+74072,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_address),32);
    bufp->fullCData(oldp+74073,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_mask),8);
    bufp->fullQData(oldp+74074,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_3_data),64);
    bufp->fullCData(oldp+74076,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_opcode),3);
    bufp->fullCData(oldp+74077,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_param),3);
    bufp->fullCData(oldp+74078,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_size),4);
    bufp->fullCData(oldp+74079,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_source),6);
    bufp->fullIData(oldp+74080,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_address),32);
    bufp->fullCData(oldp+74081,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_mask),8);
    bufp->fullQData(oldp+74082,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_4_data),64);
    bufp->fullCData(oldp+74084,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_opcode),3);
    bufp->fullCData(oldp+74085,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_param),3);
    bufp->fullCData(oldp+74086,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_size),4);
    bufp->fullCData(oldp+74087,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_source),6);
    bufp->fullIData(oldp+74088,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_address),32);
    bufp->fullCData(oldp+74089,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_mask),8);
    bufp->fullQData(oldp+74090,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_5_data),64);
    bufp->fullCData(oldp+74092,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode),3);
    bufp->fullCData(oldp+74093,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param),3);
    bufp->fullCData(oldp+74094,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_size),4);
    bufp->fullCData(oldp+74095,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_source),6);
    bufp->fullIData(oldp+74096,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_address),32);
    bufp->fullCData(oldp+74097,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_mask),8);
    bufp->fullQData(oldp+74098,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_data),64);
    bufp->fullCData(oldp+74100,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_opcode),3);
    bufp->fullCData(oldp+74101,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param),3);
    bufp->fullCData(oldp+74102,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_size),4);
    bufp->fullCData(oldp+74103,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_source),6);
    bufp->fullIData(oldp+74104,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_address),32);
    bufp->fullCData(oldp+74105,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_mask),8);
    bufp->fullQData(oldp+74106,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_data),64);
    bufp->fullCData(oldp+74108,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_opcode),3);
    bufp->fullCData(oldp+74109,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_param),3);
    bufp->fullCData(oldp+74110,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_size),4);
    bufp->fullCData(oldp+74111,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_source),6);
    bufp->fullIData(oldp+74112,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_address),32);
    bufp->fullQData(oldp+74113,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_0_data),64);
    bufp->fullCData(oldp+74115,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_opcode),3);
    bufp->fullCData(oldp+74116,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_param),3);
    bufp->fullCData(oldp+74117,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_size),4);
    bufp->fullCData(oldp+74118,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_source),6);
    bufp->fullIData(oldp+74119,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_address),32);
    bufp->fullQData(oldp+74120,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_1_data),64);
    bufp->fullCData(oldp+74122,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_opcode),3);
    bufp->fullCData(oldp+74123,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_param),3);
    bufp->fullCData(oldp+74124,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_size),4);
    bufp->fullCData(oldp+74125,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_source),6);
    bufp->fullIData(oldp+74126,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_address),32);
    bufp->fullQData(oldp+74127,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_2_data),64);
    bufp->fullCData(oldp+74129,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_opcode),3);
    bufp->fullCData(oldp+74130,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_param),3);
    bufp->fullCData(oldp+74131,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_size),4);
    bufp->fullCData(oldp+74132,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_source),6);
    bufp->fullIData(oldp+74133,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_address),32);
    bufp->fullQData(oldp+74134,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_3_data),64);
    bufp->fullCData(oldp+74136,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_opcode),3);
    bufp->fullCData(oldp+74137,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_param),3);
    bufp->fullCData(oldp+74138,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_size),4);
    bufp->fullCData(oldp+74139,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_source),6);
    bufp->fullIData(oldp+74140,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_address),32);
    bufp->fullQData(oldp+74141,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_4_data),64);
    bufp->fullCData(oldp+74143,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_opcode),3);
    bufp->fullCData(oldp+74144,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_param),3);
    bufp->fullCData(oldp+74145,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_size),4);
    bufp->fullCData(oldp+74146,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_source),6);
    bufp->fullIData(oldp+74147,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_address),32);
    bufp->fullQData(oldp+74148,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_5_data),64);
    bufp->fullCData(oldp+74150,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode),3);
    bufp->fullCData(oldp+74151,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param),3);
    bufp->fullCData(oldp+74152,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_size),4);
    bufp->fullCData(oldp+74153,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_source),6);
    bufp->fullIData(oldp+74154,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_address),32);
    bufp->fullQData(oldp+74155,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_data),64);
    bufp->fullCData(oldp+74157,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode),3);
    bufp->fullCData(oldp+74158,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param),3);
    bufp->fullCData(oldp+74159,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_size),4);
    bufp->fullCData(oldp+74160,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_source),6);
    bufp->fullIData(oldp+74161,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_address),32);
    bufp->fullQData(oldp+74162,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_data),64);
    bufp->fullCData(oldp+74164,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_0_sink),3);
    bufp->fullCData(oldp+74165,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_1_sink),3);
    bufp->fullCData(oldp+74166,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_2_sink),3);
    bufp->fullCData(oldp+74167,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_3_sink),3);
    bufp->fullCData(oldp+74168,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_4_sink),3);
    bufp->fullCData(oldp+74169,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_5_sink),3);
    bufp->fullCData(oldp+74170,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_6_sink),3);
    bufp->fullCData(oldp+74171,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_e_source__DOT__mem_7_sink),3);
    bufp->fullCData(oldp+74172,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74173,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_param),3);
    bufp->fullCData(oldp+74174,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size),4);
    bufp->fullCData(oldp+74175,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source),6);
    bufp->fullIData(oldp+74176,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address),32);
    bufp->fullCData(oldp+74177,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_mask),8);
    bufp->fullQData(oldp+74178,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_data),64);
    bufp->fullCData(oldp+74180,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_9),3);
    bufp->fullCData(oldp+74181,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_param),3);
    bufp->fullCData(oldp+74182,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT___nodeOut_c_bits_WIRE_7),4);
    bufp->fullCData(oldp+74183,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),6);
    bufp->fullIData(oldp+74184,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address),32);
    bufp->fullQData(oldp+74185,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_data),64);
    bufp->fullCData(oldp+74187,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_e_bits_sink),3);
    bufp->fullBit(oldp+74188,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source) 
                                                     >> 4U))))) 
                                     | ((0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)) 
                                        | (0x20U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_source)))))));
    bufp->fullBit(oldp+74189,((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
    bufp->fullBit(oldp+74190,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                               | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U)) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))))));
    bufp->fullBit(oldp+74191,(((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                               | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                     >> 2U)))));
    bufp->fullBit(oldp+74192,((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)))));
    bufp->fullBit(oldp+74193,((IData)((0U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74194,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (IData)((0U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74195,((IData)((2U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74196,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                       >> 2U)) & (2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))))) 
                               | ((1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                  & (IData)((2U == 
                                             (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74197,((IData)((4U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74198,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullBit(oldp+74199,((IData)((6U == (6U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))));
    bufp->fullBit(oldp+74200,((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
                                | ((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address 
                                      >> 2U))) | ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size))) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_address)))))));
    bufp->fullCData(oldp+74201,(((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___element_reset_domain_rockettile_auto_buffer_out_a_bits_size)) 
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
                                    | ((0x20U & (((
                                                   ((2U 
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
    bufp->fullBit(oldp+74202,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                         >> 4U)) | 
                                     (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
    bufp->fullBit(oldp+74203,((1U & ((~ ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                 >> 0xeU)) 
                                         | (0U != (3U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                       >> 0xcU)))))) 
                                     | ((~ ((0U != 
                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                              >> 0x1aU)) 
                                            | (0U != 
                                               (0x3fffU 
                                                & (0x2010U 
                                                   ^ 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                    >> 0xcU)))))) 
                                        | ((0U == (
                                                   (0xffffeU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_address 
                                                          >> 0xcU))))) 
                                           | ((~ ((0U 
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
    bufp->fullBit(oldp+74204,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74205,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__wfiNodeOut_0_REG));
    bufp->fullBit(oldp+74206,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__reg_wfi));
    bufp->fullWData(oldp+74207,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__cmdRouter__DOT__cmd_q__DOT____Vcellinp__ram_ext__W0_data),265);
    bufp->fullBit(oldp+74216,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT___io_csr_stall_output));
    bufp->fullCData(oldp+74217,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
    bufp->fullCData(oldp+74218,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source),5);
    bufp->fullSData(oldp+74219,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT__dcache__DOT__io_cpu_perf_release_beats1),9);
    bufp->fullBit(oldp+74220,((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source) 
                                         >> 4U)) | 
                                     (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__element_reset_domain_rockettile__DOT___dcache_auto_out_c_bits_source))))));
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
    __Vtemp_53[0U] = ((IData)((((QData)((IData)(__Vtemp_52[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                               | (((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_52[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_52[
                                                     (0xfU 
                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                         >> 5U))])) 
                                     >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                      << 1U);
    __Vtemp_53[1U] = (((IData)((((QData)((IData)(__Vtemp_52[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                | (((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_52[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_52[
                                                      (0xfU 
                                                       & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                          >> 5U))])) 
                                      >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               __Vtemp_52[
                                                               (((IData)(0x3fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
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
    __Vtemp_53[2U] = ((IData)(((((QData)((IData)(__Vtemp_52[
                                                 (((IData)(0x3fU) 
                                                   + 
                                                   (0x1ffU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                | (((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U)))
                                     ? 0ULL : ((QData)((IData)(
                                                               __Vtemp_52[
                                                               (((IData)(0x1fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                                   | ((QData)((IData)(
                                                      __Vtemp_52[
                                                      (0xfU 
                                                       & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U) 
                                                          >> 5U))])) 
                                      >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 6U))))) 
                               >> 0x20U)) >> 0x1fU);
    __Vtemp_55[2U] = (((((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                          ? 0U : (__Vtemp_45[(((IData)(0x1fU) 
                                               + (0xffU 
                                                  & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                              >> 5U)] 
                                  << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
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
                                             >> (0x3fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))))
                         : 0U) << 9U) | ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))
                                            ? 0U : 
                                           (__Vtemp_45[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U))))) 
                                          | (__Vtemp_45[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index), 5U)))) 
                                         >> 0x17U));
    __Vtemp_58[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_a_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_7_param) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_param) 
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
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_a_source__DOT__mem_6_opcode) 
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
    bufp->fullWData(oldp+74221,(__Vtemp_59),121);
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
    __Vtemp_73[0U] = (IData)((((QData)((IData)(__Vtemp_72[
                                               (((IData)(0x3fU) 
                                                 + 
                                                 (0x1ffU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                              | (((0U == (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                   ? 0ULL : ((QData)((IData)(
                                                             __Vtemp_72[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0x1ffU 
                                                                & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                 | ((QData)((IData)(
                                                    __Vtemp_72[
                                                    (0xfU 
                                                     & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                        >> 5U))])) 
                                    >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))));
    __Vtemp_73[1U] = (IData)(((((QData)((IData)(__Vtemp_72[
                                                (((IData)(0x3fU) 
                                                  + 
                                                  (0x1ffU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                 >> 5U)])) 
                                << ((0U == (0x1fU & 
                                            VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                     ? 0x20U : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                               | (((0U == (0x1fU & 
                                           VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U)))
                                    ? 0ULL : ((QData)((IData)(
                                                              __Vtemp_72[
                                                              (((IData)(0x1fU) 
                                                                + 
                                                                (0x1ffU 
                                                                 & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))) 
                                                               >> 5U)])) 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
                                  | ((QData)((IData)(
                                                     __Vtemp_72[
                                                     (0xfU 
                                                      & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U) 
                                                         >> 5U))])) 
                                     >> (0x1fU & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 6U))))) 
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
                                             >> (0x3fU 
                                                 & ((IData)(6U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))))
                         : 0U) << 1U) | ((((0U == (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                            ? 0U : 
                                           (__Vtemp_65[
                                            (((IData)(0x1fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U))))) 
                                          | (__Vtemp_65[
                                             (7U & 
                                              (VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))) 
                                         >> 0x1fU));
    __Vtemp_77[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_param) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_param) 
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
    __Vtemp_78[1U] = ((__Vtemp_73[0U] >> 0x1fU) | (
                                                   __Vtemp_73[1U] 
                                                   << 1U));
    __Vtemp_78[2U] = ((__Vtemp_73[1U] >> 0x1fU) | (
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index), 5U)))
                                                      ? 0U
                                                      : 
                                                     (__Vtemp_65[
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
                                                   << 1U));
    __Vtemp_78[3U] = ((((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__index))))
                         ? (7U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_7_opcode) 
                                    << 0x15U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__asource__DOT__nodeOut_c_source__DOT__mem_6_opcode) 
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
    bufp->fullWData(oldp+74225,(__Vtemp_78),113);
    bufp->fullCData(oldp+74229,(((0x17U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_e_sink__DOT____VdfgTmp_h96fbefbb__0))
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
    bufp->fullBit(oldp+74230,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__out));
    bufp->fullBit(oldp+74231,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_a_ready));
    bufp->fullBit(oldp+74232,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid));
    bufp->fullCData(oldp+74233,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74234,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size),2);
    bufp->fullSData(oldp+74235,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_source),14);
    bufp->fullIData(oldp+74236,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_address),17);
    bufp->fullQData(oldp+74237,(((0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
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
    bufp->fullBit(oldp+74239,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+74240,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
    bufp->fullBit(oldp+74241,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))))));
    bufp->fullBit(oldp+74242,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+74243,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size))));
    bufp->fullBit(oldp+74244,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
    bufp->fullBit(oldp+74245,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
    bufp->fullBit(oldp+74246,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
    bufp->fullBit(oldp+74247,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
    bufp->fullBit(oldp+74248,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
    bufp->fullBit(oldp+74249,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
    bufp->fullBit(oldp+74250,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))));
    bufp->fullBit(oldp+74251,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h57b9b0e6__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h57b9b0e6__0))))))));
    bufp->fullCData(oldp+74252,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullBit(oldp+74253,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootrom_domain__DOT__bootrom__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74254,((((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 3U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_a_ready)) 
                               | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 3U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_a_ready)))));
    bufp->fullCData(oldp+74255,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+74256,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),3);
    bufp->fullCData(oldp+74257,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),3);
    bufp->fullSData(oldp+74258,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),10);
    bufp->fullIData(oldp+74259,((0x1fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                               << 0xdU) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x13U)))),21);
    bufp->fullCData(oldp+74260,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 8U))),8);
    bufp->fullQData(oldp+74261,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x10U)))),64);
    bufp->fullBit(oldp+74263,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+74264,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_valid));
    bufp->fullCData(oldp+74265,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode),3);
    bufp->fullCData(oldp+74266,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size),3);
    bufp->fullSData(oldp+74267,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source),10);
    bufp->fullBit(oldp+74268,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_a_ready));
    bufp->fullBit(oldp+74269,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_valid));
    bufp->fullCData(oldp+74270,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74271,((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                                        : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            << 0x1dU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 3U))))),3);
    bufp->fullCData(oldp+74272,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size),2);
    bufp->fullSData(oldp+74273,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source),14);
    bufp->fullSData(oldp+74274,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_address),12);
    bufp->fullCData(oldp+74275,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_mask),8);
    bufp->fullQData(oldp+74276,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                  << 0x27U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                << 7U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x19U)))),64);
    bufp->fullBit(oldp+74278,((1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                      : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                         >> 0x19U)))));
    bufp->fullCData(oldp+74279,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))),3);
    bufp->fullBit(oldp+74280,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_valid));
    bufp->fullCData(oldp+74281,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74282,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size),2);
    bufp->fullSData(oldp+74283,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source),14);
    bufp->fullIData(oldp+74284,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address),28);
    bufp->fullCData(oldp+74285,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_mask),8);
    bufp->fullBit(oldp+74286,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_d_ready));
    bufp->fullCData(oldp+74287,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])),3);
    bufp->fullCData(oldp+74288,((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                       >> 0xeU))),2);
    bufp->fullSData(oldp+74289,((0x3fffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U])),14);
    bufp->fullQData(oldp+74290,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___domain_auto_plic_in_d_bits_data),64);
    bufp->fullBit(oldp+74292,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_a_ready));
    bufp->fullBit(oldp+74293,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_valid));
    bufp->fullCData(oldp+74294,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74295,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size),2);
    bufp->fullSData(oldp+74296,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source),14);
    bufp->fullIData(oldp+74297,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_address),26);
    bufp->fullCData(oldp+74298,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_mask),8);
    bufp->fullCData(oldp+74299,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))),3);
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
    bufp->fullQData(oldp+74300,(((1U & ((0x84U | ((
                                                   (0U 
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
                                           ? 0x20U : 
                                          ((IData)(0x40U) 
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
    bufp->fullBit(oldp+74302,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_bus_named_pbus_bus_xing_out_a_valid));
    bufp->fullCData(oldp+74303,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+74304,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),3);
    bufp->fullCData(oldp+74305,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),3);
    bufp->fullSData(oldp+74306,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU))),10);
    bufp->fullIData(oldp+74307,((0x1fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0xcU) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x14U)))),29);
    bufp->fullCData(oldp+74308,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 0x11U))),8);
    bufp->fullBit(oldp+74309,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                     >> 0x19U))));
    bufp->fullCData(oldp+74310,((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))),4);
    bufp->fullBit(oldp+74311,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_valid));
    bufp->fullCData(oldp+74312,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode),3);
    bufp->fullCData(oldp+74313,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_param),2);
    bufp->fullCData(oldp+74314,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_size),4);
    bufp->fullSData(oldp+74315,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source),10);
    bufp->fullBit(oldp+74316,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_sink));
    bufp->fullBit(oldp+74317,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_denied));
    bufp->fullBit(oldp+74318,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_corrupt));
    bufp->fullBit(oldp+74319,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullBit(oldp+74320,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
    bufp->fullWData(oldp+74321,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),122);
    bufp->fullBit(oldp+74325,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_a_ready));
    bufp->fullBit(oldp+74326,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_6_a_valid));
    bufp->fullIData(oldp+74327,((0x1ffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 0xcU) 
                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x14U)))),17);
    bufp->fullCData(oldp+74328,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+74329,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source),10);
    bufp->fullCData(oldp+74330,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74331,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullCData(oldp+74332,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+74333,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done));
    bufp->fullBit(oldp+74334,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__source_ok));
    bufp->fullBit(oldp+74335,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+74336,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                               | (IData)(vlSelf->__VdfgTmp_he1d3c937__0))));
    bufp->fullBit(oldp+74337,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                               | (IData)(vlSelf->__VdfgTmp_h17919355__0))));
    bufp->fullBit(oldp+74338,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+74339,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2));
    bufp->fullBit(oldp+74340,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))));
    bufp->fullBit(oldp+74341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3));
    bufp->fullBit(oldp+74342,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))))));
    bufp->fullBit(oldp+74343,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4));
    bufp->fullBit(oldp+74344,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))))));
    bufp->fullBit(oldp+74345,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5));
    bufp->fullBit(oldp+74346,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))))));
    bufp->fullCData(oldp+74347,(((((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
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
                                 | ((((((2U < (7U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                        | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                                       | (IData)(((0x40U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                      | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x14U)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                     << 6U) | (((((
                                                   (2U 
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
    bufp->fullBit(oldp+74348,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74349,((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0))));
    bufp->fullCData(oldp+74350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74351,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_address),17);
    bufp->fullBit(oldp+74352,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_a_ready));
    bufp->fullBit(oldp+74353,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_a_valid));
    bufp->fullIData(oldp+74354,((0x3ffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0xcU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x14U)))),26);
    bufp->fullBit(oldp+74355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_3_d_ready));
    bufp->fullBit(oldp+74356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_valid));
    bufp->fullCData(oldp+74357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+74358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source),10);
    bufp->fullCData(oldp+74359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+74361,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+74362,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+74363,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74365,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+74366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_address),26);
    bufp->fullBit(oldp+74368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_a_ready));
    bufp->fullBit(oldp+74369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_5_a_valid));
    bufp->fullSData(oldp+74370,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0x14U)),12);
    bufp->fullBit(oldp+74371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_5_d_ready));
    bufp->fullBit(oldp+74372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_valid));
    bufp->fullCData(oldp+74373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+74374,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source),10);
    bufp->fullCData(oldp+74375,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74376,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+74377,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+74378,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+74379,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74380,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74381,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullBit(oldp+74382,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+74383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullSData(oldp+74384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_address),12);
    bufp->fullCData(oldp+74385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_param),3);
    bufp->fullBit(oldp+74386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt));
    bufp->fullBit(oldp+74387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_a_valid));
    bufp->fullBit(oldp+74388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+74389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output));
    bufp->fullCData(oldp+74390,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode),3);
    bufp->fullCData(oldp+74391,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_param),3);
    bufp->fullCData(oldp+74392,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size),2);
    bufp->fullSData(oldp+74393,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source),14);
    bufp->fullIData(oldp+74394,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_address),26);
    bufp->fullCData(oldp+74395,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_mask),8);
    bufp->fullBit(oldp+74396,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__nodeOut_d_ready));
    bufp->fullBit(oldp+74397,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
    bufp->fullBit(oldp+74398,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74399,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))))));
    bufp->fullBit(oldp+74400,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+74401,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74402,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
    bufp->fullBit(oldp+74403,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
    bufp->fullBit(oldp+74404,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
    bufp->fullBit(oldp+74405,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
    bufp->fullBit(oldp+74406,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
    bufp->fullBit(oldp+74407,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
    bufp->fullBit(oldp+74408,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))));
    bufp->fullBit(oldp+74409,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h47e6ba9b__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h47e6ba9b__0))))))));
    bufp->fullCData(oldp+74410,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullWData(oldp+74411,(__Vtemp_89),8208);
    bufp->fullBit(oldp+74668,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74669,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___GEN_0));
    bufp->fullCData(oldp+74670,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFragnum),3);
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
                            ? __Vtemp_90[0xaU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_92[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_90[0xbU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_92[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_90[0xcU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_92[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_90[0xdU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_92[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_90[0xeU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_92[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_90[0xfU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_92[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_90[0x10U] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+74671,(__Vtemp_92),513);
    bufp->fullBit(oldp+74688,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74689,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+74690,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74691,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address),26);
    bufp->fullBit(oldp+74692,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_a_valid));
    bufp->fullIData(oldp+74693,((0xfffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 0xcU) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x14U)))),28);
    bufp->fullBit(oldp+74694,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_4_d_ready));
    bufp->fullBit(oldp+74695,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_valid));
    bufp->fullCData(oldp+74696,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+74697,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                           >> 4U))),10);
    bufp->fullCData(oldp+74698,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74699,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+74700,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+74701,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFragnum),3);
    bufp->fullBit(oldp+74702,(((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
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
                                        | ((0x14U == 
                                            (0x3fU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[3U] 
                                                >> 8U))) 
                                           | ((0x150U 
                                               == (0x3ffU 
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
                            ? __Vtemp_93[0xaU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_95[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_93[0xbU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_95[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_93[0xcU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_95[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_93[0xdU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_95[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_93[0xeU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_95[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_93[0xfU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_95[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_93[0x10U] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+74703,(__Vtemp_95),513);
    bufp->fullBit(oldp+74720,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74721,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+74722,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74723,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_address),28);
    bufp->fullBit(oldp+74724,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_7_a_valid));
    bufp->fullIData(oldp+74725,((0x1fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
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
                            ? __Vtemp_96[0xaU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_98[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_96[0xbU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_98[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_96[0xcU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_98[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_96[0xdU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_98[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_96[0xeU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_98[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                            ? __Vtemp_96[0xfU] : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_98[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_96[0x10U] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+74726,(__Vtemp_98),513);
    bufp->fullBit(oldp+74743,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74744,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullBit(oldp+74745,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
    bufp->fullBit(oldp+74746,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
    bufp->fullBit(oldp+74747,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
    bufp->fullWData(oldp+74748,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),113);
    __Vtemp_102[0U] = (IData)((((QData)((IData)((0x7fffffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 0x16U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0xaU))))) 
                                << 9U) | (QData)((IData)(
                                                         (0x1ffU 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    __Vtemp_102[1U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                         << 0x17U) | (0x7fff00U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
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
    bufp->fullWData(oldp+74752,(__Vtemp_102),113);
    bufp->fullBit(oldp+74756,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))));
    bufp->fullBit(oldp+74757,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__source_ok));
    bufp->fullBit(oldp+74758,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+74759,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                               | (IData)((0x80U == 
                                          (0x2000c0U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+74760,(((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                               | (IData)((0x200080U 
                                          == (0x2000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+74761,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+74762,((IData)((0U == (0x300000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+74763,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x2000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x40U == 
                                          (0x3000c0U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+74764,((IData)((0x100000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+74765,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x80U == 
                                           (0x2000c0U 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x100040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+74766,((IData)((0x200000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+74767,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x200080U 
                                           == (0x2000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x200040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+74768,((IData)((0x300000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+74769,((((2U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                                | (IData)((0x200080U 
                                           == (0x2000c0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                               | (IData)((0x300040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullCData(oldp+74770,(((0x80U & (((((2U < 
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
                                    | ((0x20U & (((
                                                   ((2U 
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
                                                < (7U 
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
    bufp->fullBit(oldp+74771,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74772,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74773,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_opcode))));
    bufp->fullBit(oldp+74774,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               | (IData)(vlSelf->__VdfgTmp_he1d3c937__0))));
    bufp->fullBit(oldp+74775,(((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               | (IData)(vlSelf->__VdfgTmp_h17919355__0))));
    bufp->fullBit(oldp+74776,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))))));
    bufp->fullBit(oldp+74777,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_he1d3c937__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))))));
    bufp->fullBit(oldp+74778,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))))));
    bufp->fullBit(oldp+74779,((((2U < (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U))) 
                                | (IData)(vlSelf->__VdfgTmp_h17919355__0)) 
                               | (IData)(((0x40U == 
                                           (0xc0U & 
                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))))));
    bufp->fullCData(oldp+74780,(((((((2U < (0xfU & 
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
                                       | (IData)(((0x40U 
                                                   == 
                                                   (0xc0U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)))) 
                                      | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0x14U)) 
                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))) 
                                     << 6U) | (((((
                                                   (2U 
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
    bufp->fullBit(oldp+74781,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74782,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74783,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___out_xbar_auto_out_0_a_valid));
    bufp->fullSData(oldp+74784,((0x3fffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                             << 0xcU) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0x14U)))),14);
    bufp->fullBit(oldp+74785,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_0));
    bufp->fullBit(oldp+74786,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_1));
    bufp->fullBit(oldp+74787,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_2));
    bufp->fullBit(oldp+74788,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_3));
    bufp->fullBit(oldp+74789,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_4));
    bufp->fullBit(oldp+74790,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_5));
    bufp->fullBit(oldp+74791,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_6));
    bufp->fullBit(oldp+74792,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__requestAIO_0_7));
    bufp->fullCData(oldp+74793,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_valid),8);
    bufp->fullCData(oldp+74794,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__readys_readys),8);
    bufp->fullBit(oldp+74795,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0));
    bufp->fullBit(oldp+74796,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1));
    bufp->fullBit(oldp+74797,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2));
    bufp->fullBit(oldp+74798,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3));
    bufp->fullBit(oldp+74799,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4));
    bufp->fullBit(oldp+74800,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_5));
    bufp->fullBit(oldp+74801,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_6));
    bufp->fullBit(oldp+74802,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_7));
    bufp->fullBit(oldp+74803,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1))));
    bufp->fullBit(oldp+74804,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2))));
    bufp->fullBit(oldp+74805,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3))));
    bufp->fullBit(oldp+74806,((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4))));
    bufp->fullBit(oldp+74807,(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_0) 
                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_1)) 
                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_2)) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_3)) 
                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_4)) 
                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__winner_5))));
    bufp->fullBit(oldp+74808,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_0));
    bufp->fullBit(oldp+74809,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_1));
    bufp->fullBit(oldp+74810,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_2));
    bufp->fullBit(oldp+74811,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_3));
    bufp->fullBit(oldp+74812,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_4));
    bufp->fullBit(oldp+74813,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_5));
    bufp->fullBit(oldp+74814,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_6));
    bufp->fullBit(oldp+74815,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__muxState_7));
    bufp->fullSData(oldp+74816,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__maskedBeats_0),9);
    bufp->fullBit(oldp+74817,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__same_cycle_resp));
    VL_SHIFTL_WWI(513,513,10, __Vtemp_103, VTestDriver__ConstPool__CONST_hebe77906_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    __Vtemp_105[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
    __Vtemp_105[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
    __Vtemp_105[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
    __Vtemp_105[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
    __Vtemp_105[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
    __Vtemp_105[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
    __Vtemp_105[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
    __Vtemp_105[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
    __Vtemp_105[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
    __Vtemp_105[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_103[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
    __Vtemp_105[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xaU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_105[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xbU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_105[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xcU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_105[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xdU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_105[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xeU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_105[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_103[0xfU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_105[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_103[0x10U] : 
                             VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+74818,(__Vtemp_105),513);
    bufp->fullBit(oldp+74835,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74836,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq));
    bufp->fullBit(oldp+74837,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq));
    __Vtemp_109[0U] = (IData)((0x3ffffffffULL & (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    __Vtemp_109[1U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                         << 0x11U) | (0x1fffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 0xfU))) 
                       | (IData)(((0x3ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                                  >> 0x20U)));
    __Vtemp_109[2U] = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                              >> 0xfU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            << 0x11U) 
                                           | (0x1fffcU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                 >> 0xfU))));
    __Vtemp_109[3U] = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                              >> 0xfU)) | (0x7fcU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0xfU)));
    bufp->fullWData(oldp+74838,(__Vtemp_109),107);
    bufp->fullBit(oldp+74842,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_d_ready));
    bufp->fullBit(oldp+74843,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_valid));
    bufp->fullCData(oldp+74844,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74845,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size),2);
    bufp->fullSData(oldp+74846,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_source),14);
    bufp->fullIData(oldp+74847,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address),21);
    bufp->fullCData(oldp+74848,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode))),3);
    bufp->fullBit(oldp+74849,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3));
    bufp->fullBit(oldp+74850,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1));
    bufp->fullBit(oldp+74851,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_opcode))));
    bufp->fullBit(oldp+74852,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+74853,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74854,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))))));
    bufp->fullBit(oldp+74855,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+74856,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74857,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
    bufp->fullBit(oldp+74858,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
    bufp->fullBit(oldp+74859,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
    bufp->fullBit(oldp+74860,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
    bufp->fullBit(oldp+74861,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
    bufp->fullBit(oldp+74862,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
    bufp->fullBit(oldp+74863,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))));
    bufp->fullBit(oldp+74864,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h02c77395__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h02c77395__0))))))));
    bufp->fullCData(oldp+74865,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullBit(oldp+74866,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74867,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+74868,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5ea76d7e__0))));
    bufp->fullBit(oldp+74869,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                     >> 0x10U))));
    bufp->fullBit(oldp+74870,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_1) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5f701f9b__0))));
    bufp->fullBit(oldp+74871,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5ea76d7e__0))));
    bufp->fullBit(oldp+74872,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__out_woready_3) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT____VdfgTmp_h5f701f9b__0))));
    bufp->fullBit(oldp+74873,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_a_ready));
    bufp->fullBit(oldp+74874,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_0_a_valid));
    bufp->fullBit(oldp+74875,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_0_d_ready));
    bufp->fullBit(oldp+74876,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_valid));
    bufp->fullCData(oldp+74877,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_size),3);
    bufp->fullSData(oldp+74878,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source),10);
    bufp->fullCData(oldp+74879,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74880,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+74881,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+74882,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+74883,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74884,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74885,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+74886,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74887,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter__DOT___repeater_io_deq_bits_address),21);
    bufp->fullBit(oldp+74888,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_a_ready));
    bufp->fullBit(oldp+74889,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_1_a_valid));
    bufp->fullBit(oldp+74890,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___xbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+74891,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_valid));
    bufp->fullCData(oldp+74892,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))),3);
    bufp->fullCData(oldp+74893,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_size),3);
    bufp->fullSData(oldp+74894,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source),10);
    bufp->fullBit(oldp+74895,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_d_ready));
    bufp->fullBit(oldp+74896,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_valid));
    bufp->fullCData(oldp+74897,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode),3);
    bufp->fullCData(oldp+74898,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size),2);
    bufp->fullSData(oldp+74899,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_source),14);
    bufp->fullIData(oldp+74900,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address),21);
    bufp->fullCData(oldp+74901,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                  ? 0xffU : (0xffU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+74902,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+74903,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__dFirst_size),3);
    bufp->fullBit(oldp+74904,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__drop));
    bufp->fullCData(oldp+74905,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+74906,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+74907,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74908,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullBit(oldp+74909,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full));
    bufp->fullCData(oldp+74910,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+74911,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___repeater_io_deq_bits_address),21);
    bufp->fullBit(oldp+74912,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1));
    bufp->fullBit(oldp+74913,((1U & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                     >> 3U))));
    bufp->fullBit(oldp+74914,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_opcode))));
    bufp->fullBit(oldp+74915,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT___GEN_0));
    bufp->fullBit(oldp+74916,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74917,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))))));
    bufp->fullBit(oldp+74918,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+74919,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size))));
    bufp->fullBit(oldp+74920,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
    bufp->fullBit(oldp+74921,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
    bufp->fullBit(oldp+74922,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
    bufp->fullBit(oldp+74923,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
    bufp->fullBit(oldp+74924,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
    bufp->fullBit(oldp+74925,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
    bufp->fullBit(oldp+74926,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))));
    bufp->fullBit(oldp+74927,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h1a485cba__0))))))));
    bufp->fullCData(oldp+74928,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullBit(oldp+74929,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74930,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT____VdfgTmp_hfc6fa3be__0))));
    bufp->fullBit(oldp+74931,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__out_woready_1) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__fragmenter_1__DOT__repeater__DOT__full) 
                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                     >> 0xcU)))));
    bufp->fullBit(oldp+74932,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT___out_wofireMux_T_2) 
                               & (((IData)(vlSelf->__VdfgTmp_h1a485cba__0) 
                                   >> 3U) & (IData)(
                                                    ((0U 
                                                      == 
                                                      (0xff0U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT____VdfgTmp_hfc6fa3be__0)))))));
    bufp->fullCData(oldp+74933,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__readys_valid),2);
    bufp->fullCData(oldp+74934,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__readys_readys),2);
    bufp->fullBit(oldp+74935,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__winner_0));
    bufp->fullBit(oldp+74936,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__winner_1));
    bufp->fullBit(oldp+74937,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0));
    bufp->fullBit(oldp+74938,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1));
    bufp->fullBit(oldp+74939,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+74940,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2));
    bufp->fullBit(oldp+74941,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                               >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2)));
    bufp->fullBit(oldp+74942,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1));
    bufp->fullBit(oldp+74943,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                               >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1)));
    bufp->fullBit(oldp+74944,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0));
    bufp->fullBit(oldp+74945,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                               >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad)));
    bufp->fullBit(oldp+74946,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_37));
    bufp->fullBit(oldp+74947,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_11));
    bufp->fullBit(oldp+74948,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_29));
    bufp->fullBit(oldp+74949,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_21));
    bufp->fullQData(oldp+74950,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0),64);
    bufp->fullQData(oldp+74952,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad),64);
    bufp->fullQData(oldp+74954,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1),64);
    bufp->fullQData(oldp+74956,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2),64);
    bufp->fullBit(oldp+74958,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))));
    bufp->fullBit(oldp+74959,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_0));
    bufp->fullBit(oldp+74960,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_1));
    bufp->fullBit(oldp+74961,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_2));
    bufp->fullBit(oldp+74962,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_3));
    bufp->fullBit(oldp+74963,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_4));
    bufp->fullBit(oldp+74964,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_5));
    bufp->fullBit(oldp+74965,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_6));
    bufp->fullBit(oldp+74966,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_7));
    bufp->fullBit(oldp+74967,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_0));
    bufp->fullBit(oldp+74968,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_1));
    bufp->fullBit(oldp+74969,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_2));
    bufp->fullBit(oldp+74970,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_3));
    bufp->fullBit(oldp+74971,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_4));
    bufp->fullBit(oldp+74972,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_5));
    bufp->fullBit(oldp+74973,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_6));
    bufp->fullBit(oldp+74974,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3_7));
    bufp->fullBit(oldp+74975,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_0));
    bufp->fullBit(oldp+74976,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1));
    bufp->fullBit(oldp+74977,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2));
    bufp->fullBit(oldp+74978,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3));
    bufp->fullBit(oldp+74979,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_4));
    bufp->fullBit(oldp+74980,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_5));
    bufp->fullBit(oldp+74981,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_6));
    bufp->fullBit(oldp+74982,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_7));
    bufp->fullBit(oldp+74983,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_0));
    bufp->fullBit(oldp+74984,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_1));
    bufp->fullBit(oldp+74985,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_2));
    bufp->fullBit(oldp+74986,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_3));
    bufp->fullBit(oldp+74987,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_4));
    bufp->fullBit(oldp+74988,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_5));
    bufp->fullBit(oldp+74989,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_6));
    bufp->fullBit(oldp+74990,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_7));
    bufp->fullCData(oldp+74991,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_oindex),3);
    bufp->fullBit(oldp+74992,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__out_woready_2));
    bufp->fullBit(oldp+74993,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+74994,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))));
    bufp->fullBit(oldp+74995,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))))));
    bufp->fullBit(oldp+74996,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+74997,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))));
    bufp->fullBit(oldp+74998,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
    bufp->fullBit(oldp+74999,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
    bufp->fullBit(oldp+75000,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
    bufp->fullBit(oldp+75001,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
    bufp->fullBit(oldp+75002,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
    bufp->fullBit(oldp+75003,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
    bufp->fullBit(oldp+75004,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))));
    bufp->fullBit(oldp+75005,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h4ea0fea1__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h4ea0fea1__0))))))));
    bufp->fullCData(oldp+75006,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullBit(oldp+75007,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullCData(oldp+75008,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                   >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_0))),2);
    bufp->fullCData(oldp+75009,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                   >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_1))),2);
    bufp->fullCData(oldp+75010,((((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                   >= vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_2) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__ipi_2))),2);
    bufp->fullBit(oldp+75011,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_0))));
    bufp->fullBit(oldp+75012,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_3) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_3))));
    bufp->fullBit(oldp+75013,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_1) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_1))));
    bufp->fullBit(oldp+75014,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_4) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_4))));
    bufp->fullBit(oldp+75015,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_2) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_2))));
    bufp->fullBit(oldp+75016,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_5) 
                               > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_5))));
    bufp->fullBit(oldp+75017,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_2));
    bufp->fullBit(oldp+75018,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_9));
    bufp->fullBit(oldp+75019,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_15));
    bufp->fullBit(oldp+75020,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_21));
    bufp->fullBit(oldp+75021,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_12));
    bufp->fullBit(oldp+75022,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_woready_18));
    bufp->fullBit(oldp+75023,((0x68U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75024,((0x60U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75025,((0x58U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75026,((0x50U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75027,((0x48U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75028,((0x40U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex))));
    bufp->fullBit(oldp+75029,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_2));
    bufp->fullBit(oldp+75030,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+75031,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_0));
    bufp->fullBit(oldp+75032,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_3));
    bufp->fullBit(oldp+75033,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_1));
    bufp->fullBit(oldp+75034,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_4));
    bufp->fullBit(oldp+75035,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_5));
    bufp->fullBit(oldp+75036,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0));
    bufp->fullBit(oldp+75037,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_0));
    bufp->fullBit(oldp+75038,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_1));
    bufp->fullBit(oldp+75039,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_2));
    bufp->fullBit(oldp+75040,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_3));
    bufp->fullBit(oldp+75041,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_4));
    bufp->fullBit(oldp+75042,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__threshold_5));
    bufp->fullBit(oldp+75043,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG));
    bufp->fullBit(oldp+75044,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_1));
    bufp->fullBit(oldp+75045,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_2));
    bufp->fullBit(oldp+75046,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_3));
    bufp->fullBit(oldp+75047,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_4));
    bufp->fullBit(oldp+75048,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__intnodeOut_0_REG_5));
    bufp->fullBit(oldp+75049,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_5));
    bufp->fullBit(oldp+75050,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_4));
    bufp->fullBit(oldp+75051,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_1));
    bufp->fullBit(oldp+75052,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_3));
    bufp->fullBit(oldp+75053,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_0));
    bufp->fullBit(oldp+75054,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimer_2));
    bufp->fullCData(oldp+75055,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_oindex),7);
    bufp->fullBit(oldp+75056,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__claimedDevs_1));
    bufp->fullBit(oldp+75057,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin__DOT___GEN)))));
    bufp->fullBit(oldp+75058,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75059,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_1__DOT___GEN)))));
    bufp->fullBit(oldp+75060,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_1__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75061,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_2__DOT___GEN)))));
    bufp->fullBit(oldp+75062,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_2__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75063,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_3__DOT___GEN)))));
    bufp->fullBit(oldp+75064,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_3__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75065,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_4__DOT___GEN)))));
    bufp->fullBit(oldp+75066,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_4__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75067,((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_5__DOT___GEN)))));
    bufp->fullBit(oldp+75068,(((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__fanin_5__DOT___GEN)) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__priority_0))));
    bufp->fullBit(oldp+75069,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_0) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_1) 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_2) 
                                      | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_3) 
                                         | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_4) 
                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__completer_5)))))) 
                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U] 
                                  >> 0x18U))));
    bufp->fullBit(oldp+75070,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__do_enq));
    bufp->fullBit(oldp+75071,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))));
    bufp->fullBit(oldp+75072,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))))));
    bufp->fullBit(oldp+75073,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+75074,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size))));
    bufp->fullBit(oldp+75075,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
    bufp->fullBit(oldp+75076,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
    bufp->fullBit(oldp+75077,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
    bufp->fullBit(oldp+75078,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
    bufp->fullBit(oldp+75079,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
    bufp->fullBit(oldp+75080,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
    bufp->fullBit(oldp+75081,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))));
    bufp->fullBit(oldp+75082,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_h2aaa9915__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_h2aaa9915__0))))))));
    bufp->fullCData(oldp+75083,(((0x80U & (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                    | ((0x20U & (((
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                       | ((0x10U & 
                                           (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
                                          | ((8U & 
                                              (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
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
    bufp->fullWData(oldp+75084,(__Vtemp_112),8208);
    bufp->fullBit(oldp+75341,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75342,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+75343,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode))));
    bufp->fullIData(oldp+75344,((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_bits_address 
                                              >> 3U))),23);
    bufp->fullBit(oldp+75345,((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])));
    bufp->fullIData(oldp+75346,((0x7fffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U] 
                                              >> 1U))),23);
    bufp->fullQData(oldp+75347,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[2U])) 
                                  << 0x28U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[1U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[0U])) 
                                                  >> 0x18U)))),64);
    bufp->fullCData(oldp+75349,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram[2U] 
                                 >> 0x18U)),8);
    bufp->fullWData(oldp+75350,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__ram),112);
    bufp->fullBit(oldp+75354,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_a_ready));
    bufp->fullBit(oldp+75355,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_valid));
    bufp->fullCData(oldp+75356,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode),3);
    bufp->fullCData(oldp+75357,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size),2);
    bufp->fullSData(oldp+75358,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source),14);
    bufp->fullIData(oldp+75359,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address),29);
    bufp->fullCData(oldp+75360,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_mask),8);
    bufp->fullQData(oldp+75361,((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])) 
                                  << 0x28U) | (((QData)((IData)(
                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                                  >> 0x18U)))),64);
    bufp->fullCData(oldp+75363,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_opcode))),3);
    bufp->fullBit(oldp+75364,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_woready_7));
    bufp->fullBit(oldp+75365,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))));
    bufp->fullBit(oldp+75366,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_0));
    bufp->fullBit(oldp+75367,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_1));
    bufp->fullBit(oldp+75368,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_2));
    bufp->fullBit(oldp+75369,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_3));
    bufp->fullBit(oldp+75370,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_4));
    bufp->fullBit(oldp+75371,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_5));
    bufp->fullBit(oldp+75372,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_6));
    bufp->fullBit(oldp+75373,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__valids_7));
    bufp->fullCData(oldp+75374,((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode))),3);
    bufp->fullBit(oldp+75375,((((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xfU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_a_ready)) 
                               | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                   >> 0xfU) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_a_ready)))));
    bufp->fullCData(oldp+75376,((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])),3);
    bufp->fullCData(oldp+75377,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 3U))),3);
    bufp->fullCData(oldp+75378,((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U))),3);
    bufp->fullSData(oldp+75379,((0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))),10);
    bufp->fullIData(oldp+75380,((0x1fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 0xdU) 
                                                | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x13U)))),29);
    bufp->fullCData(oldp+75381,((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+75382,((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                     >> 0x18U))));
    bufp->fullBit(oldp+75383,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_valid));
    bufp->fullCData(oldp+75384,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode),3);
    bufp->fullCData(oldp+75385,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size),3);
    bufp->fullSData(oldp+75386,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source),10);
    bufp->fullBit(oldp+75387,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq));
    bufp->fullBit(oldp+75388,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq));
    bufp->fullWData(oldp+75389,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data),121);
    VL_SHIFTL_WWI(513,513,10, __Vtemp_113, VTestDriver__ConstPool__CONST_hebe77906_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    __Vtemp_115[0U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U]));
    __Vtemp_115[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[1U] : VTestDriver__ConstPool__CONST_h3dcda146_0[1U]));
    __Vtemp_115[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[2U] : VTestDriver__ConstPool__CONST_h3dcda146_0[2U]));
    __Vtemp_115[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[3U] : VTestDriver__ConstPool__CONST_h3dcda146_0[3U]));
    __Vtemp_115[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[4U] : VTestDriver__ConstPool__CONST_h3dcda146_0[4U]));
    __Vtemp_115[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[5U] : VTestDriver__ConstPool__CONST_h3dcda146_0[5U]));
    __Vtemp_115[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[6U] : VTestDriver__ConstPool__CONST_h3dcda146_0[6U]));
    __Vtemp_115[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[7U] : VTestDriver__ConstPool__CONST_h3dcda146_0[7U]));
    __Vtemp_115[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[8U] : VTestDriver__ConstPool__CONST_h3dcda146_0[8U]));
    __Vtemp_115[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                           ? __Vtemp_113[9U] : VTestDriver__ConstPool__CONST_h3dcda146_0[9U]));
    __Vtemp_115[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xaU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]));
    __Vtemp_115[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xbU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]));
    __Vtemp_115[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xcU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]));
    __Vtemp_115[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xdU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]));
    __Vtemp_115[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xeU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]));
    __Vtemp_115[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                             ? __Vtemp_113[0xfU] : 
                            VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]));
    __Vtemp_115[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT___same_cycle_resp_T_1)
                              ? __Vtemp_113[0x10U] : 
                             VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]));
    bufp->fullWData(oldp+75393,(__Vtemp_115),513);
    bufp->fullBit(oldp+75410,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75411,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_deq));
    bufp->fullBit(oldp+75412,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_enq));
    __Vtemp_119[0U] = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                         << 0x1fU) | (0x7ffffe00U & 
                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 1U))) | (0x1ffU 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
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
    bufp->fullWData(oldp+75413,(__Vtemp_119),121);
    bufp->fullBit(oldp+75417,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_d_ready));
    bufp->fullBit(oldp+75418,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_valid));
    bufp->fullCData(oldp+75419,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_opcode),3);
    bufp->fullCData(oldp+75420,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size),2);
    bufp->fullSData(oldp+75421,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source),14);
    bufp->fullSData(oldp+75422,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address),13);
    bufp->fullBit(oldp+75423,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_a_ready));
    bufp->fullBit(oldp+75424,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_a_valid));
    bufp->fullSData(oldp+75425,((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0x13U)),13);
    bufp->fullBit(oldp+75426,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_0_d_ready));
    bufp->fullBit(oldp+75427,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_valid));
    bufp->fullCData(oldp+75428,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+75429,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source),10);
    bufp->fullCData(oldp+75430,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+75431,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+75432,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+75433,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+75434,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__source_ok));
    bufp->fullBit(oldp+75435,((2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+75436,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc));
    bufp->fullBit(oldp+75437,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1));
    bufp->fullBit(oldp+75438,((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U)))));
    bufp->fullBit(oldp+75439,((IData)((0U == (0x300000U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+75440,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                               | (IData)((0x40U == 
                                          (0x3000c0U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+75441,((IData)((0x100000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+75442,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
                               | (IData)((0x100040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+75443,((IData)((0x200000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+75444,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                               | (IData)((0x200040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullBit(oldp+75445,((IData)((0x300000U == 
                                       (0x300000U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
    bufp->fullBit(oldp+75446,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                               | (IData)((0x300040U 
                                          == (0x3000c0U 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]))))));
    bufp->fullCData(oldp+75447,(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
                                   | ((0x300040U == 
                                       (0x3000c0U & 
                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])) 
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
    bufp->fullBit(oldp+75448,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_tl_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+75449,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75450,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+75451,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullSData(oldp+75452,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_address),13);
    bufp->fullBit(oldp+75453,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_a_ready));
    bufp->fullBit(oldp+75454,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_1_a_valid));
    bufp->fullBit(oldp+75455,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_out_1_d_ready));
    bufp->fullBit(oldp+75456,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_valid));
    bufp->fullCData(oldp+75457,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_size),3);
    bufp->fullSData(oldp+75458,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source),10);
    bufp->fullCData(oldp+75459,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size_hi),3);
    bufp->fullCData(oldp+75460,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__dFirst_size),3);
    bufp->fullBit(oldp+75461,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__drop));
    bufp->fullCData(oldp+75462,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0),3);
    bufp->fullBit(oldp+75463,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_device_named_uart_0_auto_tl_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+75464,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75465,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat));
    bufp->fullCData(oldp+75466,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size),3);
    bufp->fullIData(oldp+75467,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_address),29);
    bufp->fullBit(oldp+75468,((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))));
    bufp->fullBit(oldp+75469,(((0U == (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                             >> 8U))) 
                               | ((0x18U == (0x3fU 
                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((0x190U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                     | ((0x1a0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source)) 
                                        | ((0x14U == 
                                            (0x3fU 
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
    bufp->fullBit(oldp+75470,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__fixer__DOT__monitor__DOT__same_cycle_resp));
    bufp->fullBit(oldp+75471,(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___GEN_0));
    bufp->fullBit(oldp+75472,((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))));
    bufp->fullBit(oldp+75473,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                      >> 2U)) & (2U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))))));
    bufp->fullBit(oldp+75474,(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                               | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                  & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                     >> 2U)))));
    bufp->fullBit(oldp+75475,((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size))));
    bufp->fullBit(oldp+75476,((IData)((0U == (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
    bufp->fullBit(oldp+75477,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                  & (IData)((0U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
    bufp->fullBit(oldp+75478,((IData)((2U == (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
    bufp->fullBit(oldp+75479,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((~ ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                       >> 2U)) & (2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)))) 
                               | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                  & (IData)((2U == 
                                             (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
    bufp->fullBit(oldp+75480,((IData)((4U == (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
    bufp->fullBit(oldp+75481,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
    bufp->fullBit(oldp+75482,((IData)((6U == (6U & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))));
    bufp->fullBit(oldp+75483,((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__monitor__DOT____VdfgTmp_hd3fe7d91__0) 
                                | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                   & ((IData)(vlSelf->__VdfgTmp_hdd8caa21__0) 
                                      >> 2U))) | ((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size)) 
                                                  & (IData)(
                                                            (6U 
                                                             == 
                                                             (6U 
                                                              & (IData)(vlSelf->__VdfgTmp_hdd8caa21__0))))))));
}
