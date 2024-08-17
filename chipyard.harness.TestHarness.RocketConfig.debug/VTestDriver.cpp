// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestDriver__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTestDriver::VTestDriver(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestDriver__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestDriver::VTestDriver(const char* _vcname__)
    : VTestDriver(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestDriver::~VTestDriver() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTestDriver___024root___eval_debug_assertions(VTestDriver___024root* vlSelf);
#endif  // VL_DEBUG
void VTestDriver___024root___eval_static(VTestDriver___024root* vlSelf);
void VTestDriver___024root___eval_initial(VTestDriver___024root* vlSelf);
void VTestDriver___024root___eval_settle(VTestDriver___024root* vlSelf);
void VTestDriver___024root___eval(VTestDriver___024root* vlSelf);

void VTestDriver::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestDriver::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestDriver___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTestDriver___024root___eval_static(&(vlSymsp->TOP));
        VTestDriver___024root___eval_initial(&(vlSymsp->TOP));
        VTestDriver___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTestDriver___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VTestDriver::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VTestDriver::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VTestDriver::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VTestDriver::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VTestDriver::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTestDriver___024root___eval_final(VTestDriver___024root* vlSelf);

VL_ATTR_COLD void VTestDriver::final() {
    VTestDriver___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestDriver::hierName() const { return vlSymsp->name(); }
const char* VTestDriver::modelName() const { return "VTestDriver"; }
unsigned VTestDriver::threads() const { return 1; }
void VTestDriver::prepareClone() const { contextp()->prepareClone(); }
void VTestDriver::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTestDriver::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTestDriver___024root__trace_decl_types(VerilatedVcd* tracep);

void VTestDriver___024root__trace_init_top(VTestDriver___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTestDriver___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestDriver___024root*>(voidSelf);
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTestDriver___024root__trace_decl_types(tracep);
    VTestDriver___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestDriver___024root__trace_register(VTestDriver___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestDriver::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTestDriver::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTestDriver___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
