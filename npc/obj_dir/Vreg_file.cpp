// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vreg_file.h"
#include "Vreg_file__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vreg_file::Vreg_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vreg_file__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , inst{vlSymsp->TOP.inst}
    , pc{vlSymsp->TOP.pc}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
}

Vreg_file::Vreg_file(const char* _vcname__)
    : Vreg_file(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vreg_file::~Vreg_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vreg_file___024root___eval_initial(Vreg_file___024root* vlSelf);
void Vreg_file___024root___eval_settle(Vreg_file___024root* vlSelf);
void Vreg_file___024root___eval(Vreg_file___024root* vlSelf);
QData Vreg_file___024root___change_request(Vreg_file___024root* vlSelf);
#ifdef VL_DEBUG
void Vreg_file___024root___eval_debug_assertions(Vreg_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vreg_file___024root___final(Vreg_file___024root* vlSelf);

static void _eval_initial_loop(Vreg_file__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vreg_file___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vreg_file___024root___eval_settle(&(vlSymsp->TOP));
        Vreg_file___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vreg_file___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/yfwu/ysyx-workbench/npc/vsrc/single_cyc_inst/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vreg_file___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vreg_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vreg_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vreg_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vreg_file___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vreg_file___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/yfwu/ysyx-workbench/npc/vsrc/single_cyc_inst/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vreg_file___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vreg_file::final() {
    Vreg_file___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vreg_file::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vreg_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vreg_file___024root__traceInitTop(Vreg_file___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vreg_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vreg_file___024root*>(voidSelf);
    Vreg_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vreg_file___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vreg_file___024root__traceRegister(Vreg_file___024root* vlSelf, VerilatedVcd* tracep);

void Vreg_file::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vreg_file___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
