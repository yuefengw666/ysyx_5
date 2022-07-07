// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_top.h for the primary calling header

#include "Vcpu_top___024root.h"
#include "Vcpu_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf);

Vcpu_top___024root::Vcpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcpu_top___024root___ctor_var_reset(this);
}

void Vcpu_top___024root::__Vconfigure(Vcpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcpu_top___024root::~Vcpu_top___024root() {
}

void Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 33> &a);
void Vcpu_top___024unit____Vdpiimwrap_mem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vcpu_top___024root___settle__TOP__1(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp16;
    QData/*63:0*/ cpu_top__DOT__regs_u0__DOT____Vlvbound1;
    // Body
    vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus 
        = (0x3ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = (0xfff8U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus));
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
    Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->cpu_top__DOT__pc_to_ifu, vlSelf->__Vtask_mem_read__0__rdata);
    vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata = vlSelf->__Vtask_mem_read__0__rdata;
    Vcpu_top___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->cpu_top__DOT__regs_u0__DOT__rf);
    vlSelf->rdata_63_32 = (0U != (IData)((vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata 
                                          >> 0x20U)));
    vlSelf->inst_val = (IData)(vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata);
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i = (((- (QData)((IData)(
                                                                    (vlSelf->inst_val 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->inst_val 
                                                                   >> 0x14U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101 
        = (IData)((0x14U == (0x1cU & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11 
        = (IData)((0x60U == (0x60U & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110 
        = (IData)((0x18U == (0x1cU & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100 
        = (IData)((0x10U == (0x1cU & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000 
        = (IData)((0U == (0x1cU & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01 
        = (IData)((0x20U == (0x60U & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00 
        = (IData)((0U == (0x60U & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11 
        = (IData)((3U == (3U & vlSelf->inst_val)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak = (((
                                                   ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11)) 
                                                  & (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->inst_val 
                                                         >> 0xcU)))) 
                                                 & (1ULL 
                                                    == vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i));
    vlSelf->cpu_top__DOT__idu_u0__DOT__jalr = ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                 & (IData)(
                                                           (4U 
                                                            == 
                                                            (0x1cU 
                                                             & vlSelf->inst_val)))) 
                                                & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11)) 
                                               & (0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->inst_val 
                                                      >> 0xcU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI = 
        (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01) 
          & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101)) 
         & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC 
        = (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00) 
            & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101)) 
           & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL = 
        (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
          & (IData)((0xcU == (0x1cU & vlSelf->inst_val)))) 
         & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B = (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000)) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S = (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000)) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I = (
                                                   ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110)) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I = (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM = 
        (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01) 
          & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110)) 
         & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM = (
                                                   ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100)) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L = (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00) 
                                                   & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000)) 
                                                  & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11));
    vlSelf->cpu_top__DOT__rs1_data_to_idu = (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))
                                              ? 0ULL
                                              : vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & (vlSelf->inst_val 
                                                  >> 0xfU))]);
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0xfc3fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                & (6U == (7U & (vlSelf->inst_val >> 0xcU)))) 
               << 9U) | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                           & (5U == (7U & (vlSelf->inst_val 
                                           >> 0xcU)))) 
                          << 8U) | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                      & (4U == (7U 
                                                & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                     << 7U) | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                & (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst_val 
                                                       >> 0xcU)))) 
                                               << 6U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0x3ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
               & (7U == (7U & (vlSelf->inst_val >> 0xcU)))) 
              << 0xaU));
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus 
        = ((0xffc0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus)) 
           | (1U | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                      & (0U == (7U & (vlSelf->inst_val 
                                      >> 0xcU)))) << 5U) 
                    | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr) 
                        << 4U) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                  << 3U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0x3fffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I)) 
               << 0xfU) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak) 
                           << 0xeU)));
    vlSelf->cpu_top__DOT__rs2_data_to_idu = (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))
                                              ? vlSelf->cpu_top__DOT__regs_u0__DOT__regs
                                             [(0x1fU 
                                               & (vlSelf->inst_val 
                                                  >> 0x14U))]
                                              : 0ULL);
    vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus 
        = ((0xffc0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus)) 
           | (3U | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                       & (1U == (7U & (vlSelf->inst_val 
                                       >> 0xcU)))) 
                      & (1U == (vlSelf->inst_val >> 0x19U))) 
                     << 5U) | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                   & (0U == (7U & (vlSelf->inst_val 
                                                   >> 0xcU)))) 
                                  & (1U == (vlSelf->inst_val 
                                            >> 0x19U))) 
                                 | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                     & (0U == (7U & 
                                               (vlSelf->inst_val 
                                                >> 0xcU)))) 
                                    & (1U == (vlSelf->inst_val 
                                              >> 0x19U)))) 
                                << 4U) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                          << 3U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus 
        = ((0xfc3fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                  & (5U == (7U & (vlSelf->inst_val 
                                  >> 0xcU)))) & (1U 
                                                 == 
                                                 (vlSelf->inst_val 
                                                  >> 0x19U))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                    & (5U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (1U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U)))) 
               << 9U) | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                             & (4U == (7U & (vlSelf->inst_val 
                                             >> 0xcU)))) 
                            & (1U == (vlSelf->inst_val 
                                      >> 0x19U))) | 
                           (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                             & (4U == (7U & (vlSelf->inst_val 
                                             >> 0xcU)))) 
                            & (1U == (vlSelf->inst_val 
                                      >> 0x19U)))) 
                          << 8U) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                       & (3U == (7U 
                                                 & (vlSelf->inst_val 
                                                    >> 0xcU)))) 
                                      & (1U == (vlSelf->inst_val 
                                                >> 0x19U))) 
                                     << 7U) | ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                 & (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->inst_val 
                                                        >> 0xcU)))) 
                                                & (1U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U))) 
                                               << 6U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus 
        = ((0x3ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                  & (7U == (7U & (vlSelf->inst_val 
                                  >> 0xcU)))) & (1U 
                                                 == 
                                                 (vlSelf->inst_val 
                                                  >> 0x19U))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                    & (7U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (1U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U)))) 
               << 0xbU) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                              & (6U == (7U & (vlSelf->inst_val 
                                              >> 0xcU)))) 
                             & (1U == (vlSelf->inst_val 
                                       >> 0x19U))) 
                            | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                                & (6U == (7U & (vlSelf->inst_val 
                                                >> 0xcU)))) 
                               & (1U == (vlSelf->inst_val 
                                         >> 0x19U)))) 
                           << 0xaU)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xffefU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                 & (0U == (7U & (vlSelf->inst_val >> 0xcU)))) 
                & (0x20U == (vlSelf->inst_val >> 0x19U))) 
               | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                   & (0U == (7U & (vlSelf->inst_val 
                                   >> 0xcU)))) & (0x20U 
                                                  == 
                                                  (vlSelf->inst_val 
                                                   >> 0x19U)))) 
              << 4U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xfe3fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                  & (4U == (7U & (vlSelf->inst_val 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 (vlSelf->inst_val 
                                                  >> 0x19U))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                   & (4U == (7U & (vlSelf->inst_val 
                                   >> 0xcU))))) << 8U) 
              | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                     & (3U == (7U & (vlSelf->inst_val 
                                     >> 0xcU)))) & 
                    (0U == (vlSelf->inst_val >> 0x19U))) 
                   | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                      & (3U == (7U & (vlSelf->inst_val 
                                      >> 0xcU))))) 
                  << 7U) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                               & (2U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))) 
                              & (0U == (vlSelf->inst_val 
                                        >> 0x19U))) 
                             | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                & (2U == (7U & (vlSelf->inst_val 
                                                >> 0xcU))))) 
                            << 6U))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xc7ffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI) 
               << 0xdU) | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                               & (7U == (7U & (vlSelf->inst_val 
                                               >> 0xcU)))) 
                              & (0U == (vlSelf->inst_val 
                                        >> 0x19U))) 
                             | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                & (7U == (7U & (vlSelf->inst_val 
                                                >> 0xcU))))) 
                            << 0xcU) | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                           & (6U == 
                                              (7U & 
                                               (vlSelf->inst_val 
                                                >> 0xcU)))) 
                                          & (0U == 
                                             (vlSelf->inst_val 
                                              >> 0x19U))) 
                                         | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                            & (6U == 
                                               (7U 
                                                & (vlSelf->inst_val 
                                                   >> 0xcU))))) 
                                        << 0xbU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xffdfU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                   & (1U == (7U & (vlSelf->inst_val 
                                   >> 0xcU)))) & (0U 
                                                  == 
                                                  (vlSelf->inst_val 
                                                   >> 0x19U))) 
                 | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                    & (1U == (7U & (vlSelf->inst_val 
                                    >> 0xcU))))) | 
                (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                  & (1U == (7U & (vlSelf->inst_val 
                                  >> 0xcU)))) & (0U 
                                                 == 
                                                 (vlSelf->inst_val 
                                                  >> 0x19U)))) 
               | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                  & (1U == (7U & (vlSelf->inst_val 
                                  >> 0xcU))))) << 5U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xfdffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                   & (5U == (7U & (vlSelf->inst_val 
                                   >> 0xcU)))) & (0U 
                                                  == 
                                                  (vlSelf->inst_val 
                                                   >> 0x19U))) 
                 | (IData)(((1U == (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                            & (0x5000U == (0x40007000U 
                                           & vlSelf->inst_val))))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                    & (5U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (0U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U)))) 
               | (IData)(((1U == (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                          & (0x5000U == (0x40007000U 
                                         & vlSelf->inst_val))))) 
              << 9U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xfbffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | (((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                   & (5U == (7U & (vlSelf->inst_val 
                                   >> 0xcU)))) & (0x20U 
                                                  == 
                                                  (vlSelf->inst_val 
                                                   >> 0x19U))) 
                 | (IData)(((1U == (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I))) 
                            & (0x40005000U == (0x40007000U 
                                               & vlSelf->inst_val))))) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                    & (5U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (0x20U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U)))) 
               | (IData)(((1U == (1U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))) 
                          & (0x40005000U == (0x40007000U 
                                             & vlSelf->inst_val))))) 
              << 0xaU));
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus 
        = ((0xfff7U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
           | ((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                    & (0U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (0U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U))) 
                  | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                     & (0U == (7U & (vlSelf->inst_val 
                                     >> 0xcU))))) | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM) 
                    & (0U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) & (0U 
                                                   == 
                                                   (vlSelf->inst_val 
                                                    >> 0x19U)))) 
               | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I) 
                  & (0U == (7U & (vlSelf->inst_val 
                                  >> 0xcU))))) << 3U));
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm = ((((((- (QData)((IData)(
                                                                     ((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                                                        | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))))) 
                                                  & vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i) 
                                                 | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S))) 
                                                    & (((- (QData)((IData)(
                                                                           (vlSelf->inst_val 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0xfe0U 
                                                                           & (vlSelf->inst_val 
                                                                              >> 0x14U)) 
                                                                          | (0x1fU 
                                                                             & (vlSelf->inst_val 
                                                                                >> 7U)))))))) 
                                                | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B))) 
                                                   & (((- (QData)((IData)(
                                                                          (vlSelf->inst_val 
                                                                           >> 0x1fU)))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        ((0x1000U 
                                                                          & (vlSelf->inst_val 
                                                                             >> 0x13U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->inst_val 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->inst_val 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->inst_val 
                                                                                >> 7U)))))))))) 
                                               | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))) 
                                                  & (((- (QData)((IData)(
                                                                         (vlSelf->inst_val 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->inst_val 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->inst_val) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->inst_val 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->inst_val 
                                                                                >> 0x14U)))))))))) 
                                              | ((- (QData)((IData)(
                                                                    ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI))))) 
                                                 & (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->inst_val 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->inst_val))))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__lwu = ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                              & (6U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->inst_val 
                                                     >> 0xcU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__lbu = ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                              & (4U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->inst_val 
                                                     >> 0xcU))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__lhu = ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                              & (5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->inst_val 
                                                     >> 0xcU))));
    vlSelf->cpu_top__DOT__op1_jp_to_exu = (((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))) 
                                            & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                           | ((- (QData)((IData)(
                                                                 ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL))))) 
                                              & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__op1_to_exu = (((- (QData)((IData)(
                                                            (1U 
                                                             & (~ 
                                                                (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak))))))) 
                                         & vlSelf->cpu_top__DOT__rs1_data_to_idu) 
                                        | ((- (QData)((IData)(
                                                              (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr))))) 
                                           & vlSelf->cpu_top__DOT__pc_to_ifu));
    vlSelf->cpu_top__DOT__op2_jp_s_to_exu = (((- (QData)((IData)(
                                                                 (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B))))) 
                                              & vlSelf->cpu_top__DOT__idu_u0__DOT__imm) 
                                             | ((- (QData)((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S))) 
                                                & vlSelf->cpu_top__DOT__rs2_data_to_idu));
    vlSelf->cpu_top__DOT__op2_to_exu = ((((- (QData)((IData)(
                                                             (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                               | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B)) 
                                                              | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM))))) 
                                          & vlSelf->cpu_top__DOT__rs2_data_to_idu) 
                                         | ((- (QData)((IData)(
                                                               ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I))))) 
                                            & vlSelf->cpu_top__DOT__idu_u0__DOT__imm)) 
                                        | (4ULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL) 
                                                                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)))))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus 
        = ((0xfcffU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus)) 
           | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                 & (3U == (7U & (vlSelf->inst_val >> 0xcU)))) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                   & (3U == (7U & (vlSelf->inst_val 
                                   >> 0xcU))))) << 9U) 
              | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                    & (2U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                                   & (2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->inst_val 
                                                          >> 0xcU))))) 
                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu)) 
                 << 8U)));
    vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus 
        = ((0xffc0U & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus)) 
           | (2U | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu) 
                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu)) 
                      | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lwu)) 
                     << 5U) | (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                                << 4U) | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                          << 3U)))));
    vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus 
        = ((0xff3fU & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus)) 
           | ((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                  & (1U == (7U & (vlSelf->inst_val 
                                  >> 0xcU)))) | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lhu)) 
                | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                   & (1U == (7U & (vlSelf->inst_val 
                                   >> 0xcU))))) << 7U) 
              | (((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                    & (0U == (7U & (vlSelf->inst_val 
                                    >> 0xcU)))) | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__lbu)) 
                  | ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S) 
                     & (0U == (7U & (vlSelf->inst_val 
                                     >> 0xcU))))) << 6U)));
    vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res = (vlSelf->cpu_top__DOT__op1_to_exu 
                                                  << 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)));
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)))) {
        vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res 
            = ((IData)(vlSelf->cpu_top__DOT__op1_to_exu) 
               >> (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)));
        vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->cpu_top__DOT__op1_to_exu), 
                             (0x3fU & (IData)(vlSelf->cpu_top__DOT__op2_to_exu)));
    } else {
        vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res = 0U;
        vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res 
            = (- ((IData)(vlSelf->cpu_top__DOT__op1_to_exu) 
                  >> 0x1fU));
    }
    VL_EXTEND_WQ(128,64, __Vtemp1, vlSelf->cpu_top__DOT__op1_to_exu);
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->cpu_top__DOT__op2_to_exu);
    VL_MUL_W(4, __Vtemp3, __Vtemp1, __Vtemp2);
    vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[0U] 
        = __Vtemp3[0U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[1U] 
        = __Vtemp3[1U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[2U] 
        = __Vtemp3[2U];
    vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[3U] 
        = __Vtemp3[3U];
    vlSelf->cpu_top__DOT__exu_info_bus_to_exu = (((
                                                   ((- (IData)(
                                                               (((((((((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                                       | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                                                      & (1U 
                                                                         != 
                                                                         (vlSelf->inst_val 
                                                                          >> 0x19U))) 
                                                                     | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I)) 
                                                                    | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC)) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak)) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                                                | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I)))) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus)) 
                                                   | ((- (IData)(
                                                                 (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B) 
                                                                   | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL)) 
                                                                  | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__jalr)))) 
                                                      & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus))) 
                                                  | ((- (IData)(
                                                                ((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S)))) 
                                                     & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus))) 
                                                 | ((- (IData)(
                                                               (((IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM) 
                                                                 | (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM)) 
                                                                & (1U 
                                                                   == 
                                                                   (vlSelf->inst_val 
                                                                    >> 0x19U))))) 
                                                    & (IData)(vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus)));
    vlSelf->cpu_top__DOT__ls_info_bus_to_isu = (((IData)(
                                                         (0x202U 
                                                          == 
                                                          (0x207U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0x102U 
                                                             == 
                                                             (0x107U 
                                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                    << 5U) 
                                                   | (((IData)(
                                                               (0x82U 
                                                                == 
                                                                (0x87U 
                                                                 & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                       << 4U) 
                                                      | (((IData)(
                                                                  (0x42U 
                                                                   == 
                                                                   (0x47U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                          << 3U) 
                                                         | (((IData)(
                                                                     (0x22U 
                                                                      == 
                                                                      (0x27U 
                                                                       & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                             << 2U) 
                                                            | (((IData)(
                                                                        (0x12U 
                                                                         == 
                                                                         (0x17U 
                                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
                                                                << 1U) 
                                                               | (IData)(
                                                                         (0xaU 
                                                                          == 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))))))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop = (IData)(
                                                         (0x8000U 
                                                          == 
                                                          (0x8007U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll = (IData)(
                                                        (0x20U 
                                                         == 
                                                         (0x27U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl = (IData)(
                                                        (0x200U 
                                                         == 
                                                         (0x207U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra = (IData)(
                                                        (0x400U 
                                                         == 
                                                         (0x407U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal = (IData)(
                                                        (9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr = (IData)(
                                                         (0x11U 
                                                          == 
                                                          (0x17U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq = (IData)(
                                                        (0x21U 
                                                         == 
                                                         (0x27U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne = (IData)(
                                                        (0x41U 
                                                         == 
                                                         (0x47U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt = (IData)(
                                                        (0x81U 
                                                         == 
                                                         (0x87U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge = (IData)(
                                                        (0x101U 
                                                         == 
                                                         (0x107U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu = (IData)(
                                                         (0x201U 
                                                          == 
                                                          (0x207U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu = (IData)(
                                                         (0x401U 
                                                          == 
                                                          (0x407U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt = (IData)(
                                                        (0x40U 
                                                         == 
                                                         (0x47U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu = (IData)(
                                                         (0x80U 
                                                          == 
                                                          (0x87U 
                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub = (IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x17U 
                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub = 
        (((((IData)((8U == (0xfU & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
            | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal)) 
           | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr)) 
          | (2U == (7U & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))) 
         | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub));
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need 
        = (((((((((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub) 
                  | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt)) 
                 | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu)) 
                | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq)) 
               | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne)) 
              | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt)) 
             | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge)) 
            | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu)) 
           | (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu));
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2 = 
        ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
          ? (~ vlSelf->cpu_top__DOT__op2_to_exu) : vlSelf->cpu_top__DOT__op2_to_exu);
    VL_EXTEND_WQ(65,64, __Vtemp5, vlSelf->cpu_top__DOT__op1_to_exu);
    VL_EXTEND_WQ(65,64, __Vtemp6, vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2);
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    VL_EXTEND_WQ(65,64, __Vtemp8, ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
                                    ? 1ULL : 0ULL));
    VL_ADD_W(3, __Vtemp9, __Vtemp7, __Vtemp8);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout = 
        (1U & __Vtemp9[2U]);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res = 
        ((vlSelf->cpu_top__DOT__op1_to_exu + vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2) 
         + ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need)
             ? 1ULL : 0ULL));
    vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res 
        = (1U & (((IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                           >> 0x3fU)) & (~ (IData)(
                                                   (vlSelf->cpu_top__DOT__op2_to_exu 
                                                    >> 0x3fU)))) 
                 | ((~ ((IData)((vlSelf->cpu_top__DOT__op1_to_exu 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->cpu_top__DOT__op2_to_exu 
                                                       >> 0x3fU)))) 
                    & (IData)((vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res 
                               >> 0x3fU)))));
    VL_EXTEND_WQ(128,64, __Vtemp11, vlSelf->cpu_top__DOT__op1_to_exu);
    VL_EXTEND_WQ(128,64, __Vtemp12, vlSelf->cpu_top__DOT__op2_to_exu);
    VL_MUL_W(4, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_EXTEND_WQ(128,64, __Vtemp14, vlSelf->cpu_top__DOT__op1_to_exu);
    VL_EXTEND_WQ(128,64, __Vtemp15, vlSelf->cpu_top__DOT__op2_to_exu);
    VL_MUL_W(4, __Vtemp16, __Vtemp14, __Vtemp15);
    vlSelf->cpu_top__DOT__alu_res_to_lsu = ((((((((
                                                   (((((((((((((((- (QData)((IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub) 
                                                                                & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop)))))) 
                                                                 & vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res) 
                                                                | ((- (QData)((IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub) 
                                                                                & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop))))) 
                                                                   & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res 
                                                                                >> 0x1fU))))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res))))) 
                                                               | ((- (QData)((IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll) 
                                                                                & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop)))))) 
                                                                  & vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res)) 
                                                              | ((- (QData)((IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll) 
                                                                                & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop))))) 
                                                                 & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res 
                                                                                >> 0x1fU))))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res))))) 
                                                             | ((- (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt))) 
                                                                & (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res)))) 
                                                            | ((- (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu))) 
                                                               & (QData)((IData)(
                                                                                (1U 
                                                                                & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout))))))) 
                                                           | ((- (QData)((IData)(
                                                                                (0x100U 
                                                                                == 
                                                                                (0x107U 
                                                                                & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                              & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                                 ^ vlSelf->cpu_top__DOT__op2_to_exu))) 
                                                          | ((- (QData)((IData)(
                                                                                ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl) 
                                                                                & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop)))))) 
                                                             & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                                >> 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))) 
                                                         | ((- (QData)((IData)(
                                                                               ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl) 
                                                                                & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop))))) 
                                                            & (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res 
                                                                                >> 0x1fU))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res))))) 
                                                        | ((- (QData)((IData)(
                                                                              ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra) 
                                                                               & (~ (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop)))))) 
                                                           & VL_SHIFTRS_QQI(64,64,6, vlSelf->cpu_top__DOT__op1_to_exu, 
                                                                            (0x3fU 
                                                                             & (IData)(vlSelf->cpu_top__DOT__op2_to_exu))))) 
                                                       | ((- (QData)((IData)(
                                                                             ((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra) 
                                                                              & (IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop))))) 
                                                          & (((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res))))) 
                                                      | ((- (QData)((IData)(
                                                                            (0x800U 
                                                                             == 
                                                                             (0x807U 
                                                                              & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                         & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                            | vlSelf->cpu_top__DOT__op2_to_exu))) 
                                                     | ((- (QData)((IData)(
                                                                           (0x1000U 
                                                                            == 
                                                                            (0x1007U 
                                                                             & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                        & (vlSelf->cpu_top__DOT__op1_to_exu 
                                                           & vlSelf->cpu_top__DOT__op2_to_exu))) 
                                                    | ((- (QData)((IData)(
                                                                          (0x2000U 
                                                                           == 
                                                                           (0x2007U 
                                                                            & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                       & vlSelf->cpu_top__DOT__op2_to_exu)) 
                                                   | ((- (QData)((IData)(
                                                                         (0x13U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                      & (((QData)((IData)(
                                                                          vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[0U]))))) 
                                                  | ((- (QData)((IData)(
                                                                        (0x23U 
                                                                         == 
                                                                         (0x2fU 
                                                                          & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                     & (((QData)((IData)(
                                                                         vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t[2U]))))) 
                                                 | ((- (QData)((IData)(
                                                                       (0x43U 
                                                                        == 
                                                                        (0x4fU 
                                                                         & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                    & (((QData)((IData)(
                                                                        __Vtemp13[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         __Vtemp13[2U]))))) 
                                                | ((- (QData)((IData)(
                                                                      (0x83U 
                                                                       == 
                                                                       (0x8fU 
                                                                        & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                   & (((QData)((IData)(
                                                                       __Vtemp16[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        __Vtemp16[2U]))))) 
                                               | ((- (QData)((IData)(
                                                                     (0x103U 
                                                                      == 
                                                                      (0x10fU 
                                                                       & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                  & VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu))) 
                                              | ((- (QData)((IData)(
                                                                    (0x203U 
                                                                     == 
                                                                     (0x20fU 
                                                                      & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                 & VL_DIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu))) 
                                             | ((- (QData)((IData)(
                                                                   (0x403U 
                                                                    == 
                                                                    (0x40fU 
                                                                     & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                                & VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu))) 
                                            | ((- (QData)((IData)(
                                                                  (0x803U 
                                                                   == 
                                                                   (0x80fU 
                                                                    & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu)))))) 
                                               & VL_MODDIV_QQQ(64, vlSelf->cpu_top__DOT__op1_to_exu, vlSelf->cpu_top__DOT__op2_to_exu)));
    if ((2U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))) {
        Vcpu_top___024unit____Vdpiimwrap_mem_write_TOP____024unit(
                                                                  ((2U 
                                                                    & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                                                    ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                                                    : 0ULL), 
                                                                  ((IData)(
                                                                           (0x12U 
                                                                            == 
                                                                            (0x17U 
                                                                             & (IData)(vlSelf->cpu_top__DOT__exu_info_bus_to_exu))))
                                                                    ? vlSelf->cpu_top__DOT__op2_jp_s_to_exu
                                                                    : 0ULL), 
                                                                  (0xffU 
                                                                   & ((((1U 
                                                                         & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                                >> 3U))))) 
                                                                        | (3U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                                >> 4U)))))) 
                                                                       | (0xfU 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                                >> 5U)))))) 
                                                                      | (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu) 
                                                                                >> 6U)))))));
    }
    if ((1U & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))) {
        Vcpu_top___024unit____Vdpiimwrap_mem_read_TOP____024unit(
                                                                 ((1U 
                                                                   & (IData)(vlSelf->cpu_top__DOT__ls_info_bus_to_isu))
                                                                   ? vlSelf->cpu_top__DOT__alu_res_to_lsu
                                                                   : 0ULL), vlSelf->__Vtask_mem_read__3__rdata);
        vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata 
            = vlSelf->__Vtask_mem_read__3__rdata;
    }
}

void Vcpu_top___024root___eval_initial(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vcpu_top___024root___eval_settle(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___eval_settle\n"); );
    // Body
    Vcpu_top___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcpu_top___024root___final(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___final\n"); );
}

void Vcpu_top___024root___ctor_var_reset(Vcpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst_val = VL_RAND_RESET_I(32);
    vlSelf->rdata_63_32 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__pc_to_ifu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op1_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op2_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op1_jp_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__op2_jp_s_to_exu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_info_bus_to_exu = VL_RAND_RESET_I(16);
    vlSelf->cpu_top__DOT__alu_res_to_lsu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__ls_info_bus_to_isu = VL_RAND_RESET_I(7);
    vlSelf->cpu_top__DOT__rs1_data_to_idu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__rs2_data_to_idu = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__ifu_u0__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_1_0_11 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_000 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_100 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_101 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_4_2_110 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_00 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_01 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__opcode_6_5_11 = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_RM = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_I = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_L = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_S = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_B = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_LUI = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_AUIPC = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64I_JAL = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_RM = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__rv64IW_I = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm_i = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__lwu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__ebreak = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__idu_u0__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__idu_u0__DOT__alu_info_bus = VL_RAND_RESET_I(16);
    vlSelf->cpu_top__DOT__idu_u0__DOT__bjp_info_bus = VL_RAND_RESET_I(16);
    vlSelf->cpu_top__DOT__idu_u0__DOT__ls_info_bus = VL_RAND_RESET_I(16);
    vlSelf->cpu_top__DOT__idu_u0__DOT__mdu_info_bus = VL_RAND_RESET_I(16);
    vlSelf->cpu_top__DOT__exu_u0__DOT__alu_wop = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sub_need = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_add_sub = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_in2 = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_cout = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__adder_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_u0__DOT__sll_res = VL_RAND_RESET_Q(64);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sll = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_srl = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__srlw_res = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sra = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__sraw_res = VL_RAND_RESET_I(32);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_slt = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__slt_cmp_res = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_sltu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jal = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_jalr = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_beq = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bne = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_blt = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bge = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bltu = VL_RAND_RESET_I(1);
    vlSelf->cpu_top__DOT__exu_u0__DOT__op_bgeu = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->cpu_top__DOT__exu_u0__DOT__mul_res_t);
    vlSelf->cpu_top__DOT__lsu_u0__DOT__mem_rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<33; ++__Vi0) {
        vlSelf->cpu_top__DOT__regs_u0__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_mem_read__0__rdata = 0;
    vlSelf->__Vtask_mem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
