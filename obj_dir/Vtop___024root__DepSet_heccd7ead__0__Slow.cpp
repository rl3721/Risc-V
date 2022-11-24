// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hd013696d__0;
    // Body
    vlSelf->Top__DOT__Register__DOT__mem[0U] = 0U;
    VL_WRITEF("Loading rom.\n");
    __Vtemp_hd013696d__0[0U] = 0x2e6d656dU;
    __Vtemp_hd013696d__0[1U] = 0x6d6f7279U;
    __Vtemp_hd013696d__0[2U] = 0x6d65U;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hd013696d__0)
                 ,  &(vlSelf->Top__DOT__Instruction__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Loading Data_mem.\n");
    VL_READMEM_N(true, 8, 256, 0, std::string{"data.mem"}
                 ,  &(vlSelf->Top__DOT__data_ram__DOT__data_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->instr = VL_RAND_RESET_I(32);
    vlSelf->PC = VL_RAND_RESET_I(32);
    vlSelf->PCsrc = VL_RAND_RESET_I(1);
    vlSelf->ImmOp = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__RD1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__RD2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ALUResult = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__ImmSrc = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ResultSrc = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ProgramCounter__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Top__DOT__Instruction__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->Top__DOT__Register__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->Top__DOT__data_ram__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
