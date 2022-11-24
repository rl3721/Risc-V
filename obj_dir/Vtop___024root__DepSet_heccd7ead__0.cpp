// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__Register__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__Top__DOT__Register__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__Register__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v0;
    CData/*7:0*/ __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v0;
    CData/*0:0*/ __Vdlyvset__Top__DOT__data_ram__DOT__data_mem__v0;
    CData/*7:0*/ __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v1;
    CData/*7:0*/ __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v1;
    CData/*7:0*/ __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v2;
    CData/*7:0*/ __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v2;
    CData/*7:0*/ __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v3;
    CData/*7:0*/ __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v3;
    // Body
    __Vdlyvset__Top__DOT__data_ram__DOT__data_mem__v0 = 0U;
    __Vdlyvset__Top__DOT__Register__DOT__mem__v0 = 0U;
    if (vlSelf->Top__DOT__MemWrite) {
        __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v0 
            = (vlSelf->Top__DOT__RD2 >> 0x18U);
        __Vdlyvset__Top__DOT__data_ram__DOT__data_mem__v0 = 1U;
        __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v0 
            = (0xffU & vlSelf->Top__DOT__ALUResult);
        __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v1 
            = (0xffU & (vlSelf->Top__DOT__RD2 >> 0x10U));
        __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v1 
            = (0xffU & ((IData)(1U) + vlSelf->Top__DOT__ALUResult));
        __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v2 
            = (0xffU & (vlSelf->Top__DOT__RD2 >> 8U));
        __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v2 
            = (0xffU & ((IData)(2U) + vlSelf->Top__DOT__ALUResult));
        __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v3 
            = (0xffU & vlSelf->Top__DOT__RD2);
        __Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v3 
            = (0xffU & ((IData)(3U) + vlSelf->Top__DOT__ALUResult));
    }
    if (vlSelf->Top__DOT__RegWrite) {
        __Vdlyvval__Top__DOT__Register__DOT__mem__v0 
            = ((IData)(vlSelf->Top__DOT__ResultSrc)
                ? ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                    [(0xffU & ((IData)(3U) + vlSelf->Top__DOT__ALUResult))] 
                    << 0x18U) | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                  [(0xffU & ((IData)(2U) 
                                             + vlSelf->Top__DOT__ALUResult))] 
                                  << 0x10U) | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->Top__DOT__ALUResult))] 
                                                << 8U) 
                                               | vlSelf->Top__DOT__data_ram__DOT__data_mem
                                               [(0xffU 
                                                 & vlSelf->Top__DOT__ALUResult)])))
                : vlSelf->Top__DOT__ALUResult);
        __Vdlyvset__Top__DOT__Register__DOT__mem__v0 = 1U;
        __Vdlyvdim0__Top__DOT__Register__DOT__mem__v0 
            = (0x1fU & (vlSelf->instr >> 7U));
    }
    vlSelf->PC = ((IData)(vlSelf->rst) ? 0U : vlSelf->Top__DOT__ProgramCounter__DOT__next_PC);
    if (__Vdlyvset__Top__DOT__data_ram__DOT__data_mem__v0) {
        vlSelf->Top__DOT__data_ram__DOT__data_mem[__Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v0] 
            = __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v0;
        vlSelf->Top__DOT__data_ram__DOT__data_mem[__Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v1] 
            = __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v1;
        vlSelf->Top__DOT__data_ram__DOT__data_mem[__Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v2] 
            = __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v2;
        vlSelf->Top__DOT__data_ram__DOT__data_mem[__Vdlyvdim0__Top__DOT__data_ram__DOT__data_mem__v3] 
            = __Vdlyvval__Top__DOT__data_ram__DOT__data_mem__v3;
    }
    if (__Vdlyvset__Top__DOT__Register__DOT__mem__v0) {
        vlSelf->Top__DOT__Register__DOT__mem[__Vdlyvdim0__Top__DOT__Register__DOT__mem__v0] 
            = __Vdlyvval__Top__DOT__Register__DOT__mem__v0;
    }
    vlSelf->a0 = vlSelf->Top__DOT__Register__DOT__mem
        [0xaU];
    vlSelf->instr = ((vlSelf->Top__DOT__Instruction__DOT__rom_array
                      [(0xffU & vlSelf->PC)] << 0x18U) 
                     | ((vlSelf->Top__DOT__Instruction__DOT__rom_array
                         [(0xffU & ((IData)(1U) + vlSelf->PC))] 
                         << 0x10U) | ((vlSelf->Top__DOT__Instruction__DOT__rom_array
                                       [(0xffU & ((IData)(2U) 
                                                  + vlSelf->PC))] 
                                       << 8U) | vlSelf->Top__DOT__Instruction__DOT__rom_array
                                      [(0xffU & ((IData)(3U) 
                                                 + vlSelf->PC))])));
    if ((0U == (3U & vlSelf->instr))) {
        vlSelf->Top__DOT__ALUctrl = 0U;
    } else if ((1U == (3U & vlSelf->instr))) {
        vlSelf->Top__DOT__ALUctrl = 1U;
    } else if ((2U == (3U & vlSelf->instr))) {
        vlSelf->Top__DOT__ALUctrl = 0U;
    }
    vlSelf->Top__DOT__RD1 = vlSelf->Top__DOT__Register__DOT__mem
        [(0x1fU & (vlSelf->instr >> 0xfU))];
    vlSelf->Top__DOT__RD2 = vlSelf->Top__DOT__Register__DOT__mem
        [(0x1fU & (vlSelf->instr >> 0x14U))];
    if ((3U == (0x7fU & vlSelf->instr))) {
        if ((2U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->Top__DOT__RegWrite = 1U;
            vlSelf->Top__DOT__ResultSrc = 1U;
            vlSelf->Top__DOT__MemWrite = 1U;
            vlSelf->Top__DOT__ALUSrc = 1U;
            vlSelf->Top__DOT__ImmSrc = 0U;
        }
    } else if ((0x13U == (0x7fU & vlSelf->instr))) {
        if ((0U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->Top__DOT__RegWrite = 1U;
            vlSelf->Top__DOT__ResultSrc = 0U;
            vlSelf->Top__DOT__MemWrite = 0U;
            vlSelf->Top__DOT__ALUSrc = 1U;
            vlSelf->Top__DOT__ImmSrc = 0U;
        }
    } else if ((0x63U == (0x7fU & vlSelf->instr))) {
        if ((0U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->Top__DOT__RegWrite = 0U;
            vlSelf->Top__DOT__ResultSrc = 0U;
            vlSelf->Top__DOT__MemWrite = 0U;
            vlSelf->Top__DOT__ALUSrc = 1U;
            vlSelf->Top__DOT__ImmSrc = 3U;
        }
        if ((1U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->Top__DOT__RegWrite = 0U;
            vlSelf->Top__DOT__ResultSrc = 0U;
            vlSelf->Top__DOT__MemWrite = 0U;
            vlSelf->Top__DOT__ALUSrc = 1U;
            vlSelf->Top__DOT__ImmSrc = 3U;
        }
    }
    if ((0U == (IData)(vlSelf->Top__DOT__ImmSrc))) {
        vlSelf->ImmOp = (((- (IData)((vlSelf->instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (vlSelf->instr >> 0x14U));
    } else if ((1U == (IData)(vlSelf->Top__DOT__ImmSrc))) {
        vlSelf->ImmOp = (((- (IData)((vlSelf->instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (vlSelf->instr 
                                       >> 0x14U)) | 
                            (0x1fU & (vlSelf->instr 
                                      >> 7U))));
    } else if ((3U == (IData)(vlSelf->Top__DOT__ImmSrc))) {
        vlSelf->ImmOp = (((- (IData)((vlSelf->instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0x800U & (vlSelf->instr 
                                       << 4U)) | ((0x7e0U 
                                                   & (vlSelf->instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->instr 
                                                        >> 7U)))));
    }
    vlSelf->Top__DOT__ALUop2 = ((IData)(vlSelf->Top__DOT__ALUSrc)
                                 ? vlSelf->ImmOp : vlSelf->Top__DOT__RD2);
    if ((0U == (IData)(vlSelf->Top__DOT__ALUctrl))) {
        vlSelf->Top__DOT__ALUResult = (vlSelf->Top__DOT__RD1 
                                       + vlSelf->Top__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->Top__DOT__ALUctrl))) {
        vlSelf->Top__DOT__ALUResult = (vlSelf->Top__DOT__RD1 
                                       - vlSelf->Top__DOT__ALUop2);
    } else if ((2U == (IData)(vlSelf->Top__DOT__ALUctrl))) {
        vlSelf->Top__DOT__ALUResult = (vlSelf->Top__DOT__RD1 
                                       & vlSelf->Top__DOT__ALUop2);
    } else if ((3U == (IData)(vlSelf->Top__DOT__ALUctrl))) {
        vlSelf->Top__DOT__ALUResult = (vlSelf->Top__DOT__RD1 
                                       | vlSelf->Top__DOT__ALUop2);
    } else if ((5U == (IData)(vlSelf->Top__DOT__ALUctrl))) {
        vlSelf->Top__DOT__ALUResult = (vlSelf->Top__DOT__RD1 
                                       < vlSelf->Top__DOT__ALUop2);
    }
    vlSelf->Top__DOT__EQ = (vlSelf->Top__DOT__RD1 == vlSelf->Top__DOT__ALUop2);
    if ((3U == (0x7fU & vlSelf->instr))) {
        if ((2U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->PCsrc = 0U;
        }
    } else if ((0x13U == (0x7fU & vlSelf->instr))) {
        if ((0U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->PCsrc = 0U;
        }
    } else if ((0x63U == (0x7fU & vlSelf->instr))) {
        if ((0U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->PCsrc = vlSelf->Top__DOT__EQ;
        }
        if ((1U == (7U & (vlSelf->instr >> 0xcU)))) {
            vlSelf->PCsrc = (1U & (~ (IData)(vlSelf->Top__DOT__EQ)));
        }
    }
    vlSelf->Top__DOT__ProgramCounter__DOT__next_PC 
        = ((IData)(vlSelf->PCsrc) ? (vlSelf->PC + vlSelf->ImmOp)
            : ((IData)(4U) + vlSelf->PC));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
