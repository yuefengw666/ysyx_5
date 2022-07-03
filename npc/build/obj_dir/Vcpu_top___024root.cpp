// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcpu_top___024unit____Vdpiimwrap_sim_ebreak_TOP____024unit();
void Vcpu_top___024unit____Vdpiimwrap_invalid_inst_o_TOP____024unit();
void Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);

VL_INLINE_OPT void Vcpu_top___024root___sequent__TOP__2(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu_top__DOT__regs_u0__DOT__regs__v32;
    CData/*0:0*/ __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v32;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    QData/*63:0*/ cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    QData/*63:0*/ __Vdlyvval__cpu_top__DOT__regs_u0__DOT__regs__v32;
    // Body
    __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v0 = 0U;
    __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v32 = 0U;
    if ((IData)((0x4000U == (0x4007U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))) {
        Vcpu_top___024unit____Vdpiimwrap_sim_ebreak_TOP____024unit();
    }
    if ((1U & ((~ (IData)(vlSelf->rst)) & (~ ((((((
                                                   ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I)) 
                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                 | (IData)(
                                                           (0x67U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))))) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                              | (IData)(
                                                        (0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->cpu_top__DOT__inst_to_idu))))))))) {
        Vcpu_top___024unit____Vdpiimwrap_invalid_inst_o_TOP____024unit();
    }
    vlSelf->cpu_top__DOT__pc_to_ifu = ((IData)(vlSelf->rst)
                                        ? 0x80000000ULL
                                        : (((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal) 
                                                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)) 
                                                | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne) 
                                                   & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res)))) 
                                               | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)) 
                                              | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge) 
                                                 & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res)))) 
                                             | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res)) 
                                            | ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu) 
                                               & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res))))
                                            ? (vlSelf->cpu_top__DOT__op1_jp_to_exu 
                                               + ((- (QData)((IData)(
                                                                     (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                                  & vlSelf->cpu_top__DOT__idu_u0__DOT__imm))
                                            : (4ULL 
                                               + vlSelf->cpu_top__DOT__pc_to_ifu)));
    if (vlSelf->rst) {
        __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v0 = 1U;
    } else if ((((0U != (0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                  >> 7U))) & (~ (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S) 
                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B)) 
                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)))) 
                & (0U != (0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                   >> 7U))))) {
        __Vdlyvval__cpu_top__DOT__regs_u0__DOT__regs__v32 
            = ((((((((((- (QData)((IData)(((((IData)(
                                                     (8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                             | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
                                            | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
                                           | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub))))) 
                       & (((QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U])))) 
                      | ((- (QData)((IData)((0x20U 
                                             == (0x27U 
                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                         & (vlSelf->cpu_top__DOT__op1_to_exu 
                            << (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))) 
                     | ((- (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu))) 
                        & (((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt_sltu) 
                            & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])
                            ? 1ULL : 0ULL))) | ((- (QData)((IData)(
                                                                   (0x100U 
                                                                    == 
                                                                    (0x107U 
                                                                     & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                   ^ vlSelf->cpu_top__DOT__op2_to_exu))) 
                   | ((- (QData)((IData)((0x200U == 
                                          (0x207U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                      & vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res)) 
                  | ((- (QData)((IData)((0x400U == 
                                         (0x407U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                     & (vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res 
                        | (~ (1ULL >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))))) 
                 | ((- (QData)((IData)((0x800U == (0x807U 
                                                   & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                    & (vlSelf->cpu_top__DOT__op1_to_exu 
                       | vlSelf->cpu_top__DOT__op2_to_exu))) 
                | ((- (QData)((IData)((0x1000U == (0x1007U 
                                                   & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                   & (vlSelf->cpu_top__DOT__op1_to_exu 
                      & vlSelf->cpu_top__DOT__op2_to_exu))) 
               | ((- (QData)((IData)((0x2000U == (0x2007U 
                                                  & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                  & vlSelf->cpu_top__DOT__op2_to_exu));
        __Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v32 = 1U;
        __Vdlyvdim0__cpu_top__DOT__regs_u0__DOT__regs__v32 
            = (0x1fU & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                        >> 7U));
    }
    if (__Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v0) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[1U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[2U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[3U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[4U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[5U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[6U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[7U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[8U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[9U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xaU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xbU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xcU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xdU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xeU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0xfU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x10U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x11U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x12U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x13U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x14U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x15U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x16U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x17U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x18U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x19U] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1aU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1bU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1cU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1dU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1eU] = 0ULL;
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__cpu_top__DOT__regs_u0__DOT__regs__v32) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[__Vdlyvdim0__cpu_top__DOT__regs_u0__DOT__regs__v32] 
            = __Vdlyvval__cpu_top__DOT__regs_u0__DOT__regs__v32;
    }
    Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->cpu_top__DOT__pc_to_ifu, vlSelf->__Vtask_mem_read__0__rdata);
    vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata = vlSelf->__Vtask_mem_read__0__rdata;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [1U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[1U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [2U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[2U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [3U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[3U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [4U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[4U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [5U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[5U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [6U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[6U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [7U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[7U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [8U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[8U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [9U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[9U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xaU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xaU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xbU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xbU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xcU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xcU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xdU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xdU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xeU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xeU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0xfU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0xfU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x10U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x10U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x11U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x11U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x12U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x12U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x13U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x13U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x14U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x14U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x15U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x15U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x16U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x16U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x17U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x17U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x18U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x18U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x19U];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x19U] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1aU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1aU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1bU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1bU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1cU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1cU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1dU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1dU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1eU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1eU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    cpu_top__DOT__regs_u0__DOT____Vlvbound1 = vlSelf->cpu_top__DOT__regs_u0__DOT__regs
        [0x1fU];
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x1fU] = cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    vlSelf->cpu_top__DOT__regs_u0__DOT__rf[0x20U] = vlSelf->cpu_top__DOT__pc_to_ifu;
    vlSelf->cpu_top__DOT__rs1_data_to_idu = (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))
                                              ? 0ULL
                                              : vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0xfU))]);
    vlSelf->cpu_top__DOT__op2_to_exu = ((((- (QData)((IData)(
                                                             ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))))) 
                                          & ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_R) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B))
                                              ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & ((IData)(vlSelf->cpu_top__DOT__inst_to_idu) 
                                                  >> 0x14U))]
                                              : 0ULL)) 
                                         | ((- (QData)((IData)(
                                                               (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_I) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_L)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_S)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI))))) 
                                            & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)) 
                                        | (4ULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)))))));
    vlSelf->rdata_63_32 = (0U != (IData)((vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                          >> 0x20U)));
    vlSelf->inst_val = (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata);
    Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->cpu_top__DOT__regs_u0__DOT__rf);
    vlSelf->cpu_top__DOT__op1_jp_to_exu = (((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                            & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                           | ((- (QData)((IData)(
                                                                 ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_B) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL))))) 
                                              & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__op1_to_exu = (((- (QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_LUI)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_AUIPC) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64_JAL)) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U] 
        = (IData)(vlSelf->cpu_top__DOT__op2_to_exu);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U] 
        = (IData)((vlSelf->cpu_top__DOT__op2_to_exu 
                   >> 0x20U));
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U] 
        = (1U & (IData)((vlSelf->cpu_top__DOT__op2_to_exu 
                         >> 0x3fU)));
    vlSelf->cpu_top__DOT__exu_u0__DOT__srl_res = (vlSelf->cpu_top__DOT__op1_to_exu 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)));
    __Vtemp5[0U] = (IData)(vlSelf->cpu_top__DOT__op1_to_exu);
    __Vtemp5[1U] = (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                            >> 0x20U));
    __Vtemp5[2U] = (1U & (IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                  >> 0x3fU)));
    if (vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) {
        __Vtemp7[0U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U]);
        __Vtemp7[1U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U]);
        __Vtemp7[2U] = (~ vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U]);
    } else {
        __Vtemp7[0U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[0U];
        __Vtemp7[1U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[1U];
        __Vtemp7[2U] = vlSelf->cpu_top__DOT__exu_u0__DOT__adder_op2[2U];
    }
    VL_ADD_W(3, __Vtemp8, __Vtemp5, __Vtemp7);
    __Vtemp11[0U] = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub)
                      ? 1U : 0U);
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 0U;
    VL_ADD_W(3, __Vtemp12, __Vtemp8, __Vtemp11);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
        = __Vtemp12[0U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U] 
        = __Vtemp12[1U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U] 
        = (1U & __Vtemp12[2U]);
    vlSelf->cpu_top__DOT__exu_u0__DOT__beq_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq) 
                                                  & (0U 
                                                     == 
                                                     ((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[0U] 
                                                       | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[1U]) 
                                                      | vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U])));
    vlSelf->cpu_top__DOT__exu_u0__DOT__blt_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt) 
                                                  & (~ 
                                                     vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]));
    vlSelf->cpu_top__DOT__exu_u0__DOT__bltu_res = ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu) 
                                                   & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res[2U]);
}

void Vcpu_top___024root___eval(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu_top___024root___change_request_1(Vcpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vcpu_top___024root___change_request(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___change_request\n"); );
    // Body
    return (Vcpu_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu_top___024root___change_request_1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcpu_top___024root___eval_debug_assertions(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
