// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTDRIVER__SYMS_H_
#define VERILATED_VTESTDRIVER__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "VTestDriver.h"

// INCLUDE MODULE CLASSES
#include "VTestDriver___024root.h"
#include "VTestDriver___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTestDriver__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTestDriver* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTestDriver___024root          TOP;
    VTestDriver___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TestDriver;
    VerilatedScope __Vscope_TestDriver__testHarness;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__bank__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__bank__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__bank__ram__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__bootrom_domain__bootrom__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__atomics;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__atomics__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_bootrom__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_clint__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_debug__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_l2_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_l2_ctrl__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_l2_ctrl__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_plic__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_prci_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__coupler_to_prci_ctrl__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__in_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__in_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__in_xbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__out_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__wrapped_error_device__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__cbus__wrapped_error_device__error__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__clock_gater__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__fragmenter_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__fragmenter_1__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__reset_setter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__chipyard_prcictrl_domain__xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__clint_domain__clint__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__InclusiveCache_inner_TLBuffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__binder__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__cork;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__cork__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__cork__pool;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__ctrls__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__directory;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_5;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__mshrs_6;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__requests;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sinkA__putbuffer;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sinkC;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sinkC__putbuffer;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sinkD;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sourceB;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sourceC;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__inclusive_cache_bank_sched__sourceD;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__coh_wrapper__l2__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__plic;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__domain__plic__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__dmiAccessChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__dtmInfoChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__tapIO_idcodeChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus_buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__fbus_coupler_from_port_named_serial_tl_0_in__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__coupler_to_memory_controller_port_named_axi4__axi4yank;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__mbus_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__mbus_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__picker__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__mbus__picker__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__atomics;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__atomics__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__buffer_1__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__coupler_to_bootaddressreg__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__coupler_to_bootaddressreg__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__coupler_to_device_named_uart_0__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__coupler_to_device_named_uart_0__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__out_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__pbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__fixer__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__fixer__monitor_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__fixer__monitor_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__system_bus_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__system_bus_xbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__system_bus_xbar__monitor_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__sbus__system_bus_xbar__monitor_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_1__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_2__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF_3__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcIF__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcache__dtlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcache__mshrs;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__dcache__mshrs__mmios_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__element_reset_domain_rockettile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF_1__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF_2__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcIF__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcache__dtlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcache__mshrs;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__dcache__mshrs__mmios_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__element_reset_domain_rockettile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcIF;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcIF__replayq;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcache__dtlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcache__mshrs;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__dcache__mshrs__mmios_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__element_reset_domain_rockettile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmOuter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiBypass__bar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiBypass__error;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiBypass__error__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__uartClockDomainWrapper__uart_0__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__serdesser__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__tsi2tl;
    VerilatedScope __Vscope_TestDriver__testHarness__uart_sim_0_uartno0;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VTestDriver__Syms(VerilatedContext* contextp, const char* namep, VTestDriver* modelp);
    ~VTestDriver__Syms();
    void VTestDriver__Syms_1();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
