// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTDRIVER__DPI_H_
#define VERILATED_VTESTDRIVER__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimJTAG.v:3:29
    extern int jtag_tick(svBit* jtag_TCK, svBit* jtag_TMS, svBit* jtag_TDI, svBit* jtag_TRSTn, svBit jtag_TDO);
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimDRAM.v:1:33
    extern void* memory_init(int chip_id, long long mem_size, long long word_size, long long line_size, long long id_bits, long long clock_hz, long long mem_base);
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimDRAM.v:12:30
    extern void memory_tick(void* channel, svBit reset, svBit ar_valid, svBit* ar_ready, long long ar_addr, int ar_id, int ar_size, int ar_len, svBit aw_valid, svBit* aw_ready, long long aw_addr, int aw_id, int aw_size, int aw_len, svBit w_valid, svBit* w_ready, int w_strb, long long w_data, svBit w_last, svBit* r_valid, svBit r_ready, int* r_id, int* r_resp, long long* r_data, svBit* r_last, svBit* b_valid, svBit b_ready, int* b_id, int* b_resp);
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimTSI.v:1:29
    extern int tsi_tick(int chip_id, svBit tsi_out_valid, svBit* tsi_out_ready, int tsi_out_bits, svBit* tsi_in_valid, svBit tsi_in_ready, int* tsi_in_bits);
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimUART.v:3:30
    extern void uart_init(const char* filename, int uartno, int forcepty);
    // DPI import at /home/liuht/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/SimUART.v:9:30
    extern void uart_tick(int uartno, svBit serial_out_valid, svBit* serial_out_ready, char serial_out_bits, svBit* serial_in_valid, svBit serial_in_ready, char* serial_in_bits);

#ifdef __cplusplus
}
#endif

#endif  // guard
