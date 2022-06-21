// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040237_rv_single_cyc_cpu_top.h for the primary calling header

#include "Vysyx_22040237_rv_single_cyc_cpu_top___024unit.h"
#include "Vysyx_22040237_rv_single_cyc_cpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void set_npc_state(int state, const svBitVecVal* pc, const svBitVecVal* halt_ret);

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ state, QData/*63:0*/ pc, QData/*63:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_set_npc_state_TOP____024unit\n"); );
    // Body
    int state__Vcvt;
    for (size_t state__Vidx = 0; state__Vidx < 1; ++state__Vidx) state__Vcvt = state;
    svBitVecVal pc__Vcvt[2];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_Q(64, pc__Vcvt + 2 * pc__Vidx, pc);
    svBitVecVal halt_ret__Vcvt[2];
    for (size_t halt_ret__Vidx = 0; halt_ret__Vidx < 1; ++halt_ret__Vidx) VL_SET_SVBV_Q(64, halt_ret__Vcvt + 2 * halt_ret__Vidx, halt_ret);
    set_npc_state(state__Vcvt, pc__Vcvt, halt_ret__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_22040237_rv_single_cyc_cpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {0, 32};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}
