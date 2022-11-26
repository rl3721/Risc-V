// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Top__DOT__RD1),32);
        bufp->chgIData(oldp+1,(vlSelf->Top__DOT__RD2),32);
        bufp->chgBit(oldp+2,(vlSelf->Top__DOT__RegWrite));
        bufp->chgIData(oldp+3,(vlSelf->Top__DOT__ALUResult),32);
        bufp->chgBit(oldp+4,(vlSelf->Top__DOT__EQ));
        bufp->chgCData(oldp+5,(vlSelf->Top__DOT__ALUctrl),3);
        bufp->chgCData(oldp+6,(vlSelf->Top__DOT__ImmSrc),3);
        bufp->chgIData(oldp+7,(vlSelf->Top__DOT__ALUop2),32);
        bufp->chgBit(oldp+8,(vlSelf->Top__DOT__ALUSrc));
        bufp->chgIData(oldp+9,(((IData)(vlSelf->Top__DOT__ResultSrc)
                                 ? ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                     [(0xffU & vlSelf->Top__DOT__ALUResult)] 
                                     << 0x18U) | ((
                                                   vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                   [
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->Top__DOT__ALUResult))] 
                                                   << 0x10U) 
                                                  | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                      [
                                                      (0xffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->Top__DOT__ALUResult))] 
                                                      << 8U) 
                                                     | vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                     [
                                                     (0xffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->Top__DOT__ALUResult))])))
                                 : vlSelf->Top__DOT__ALUResult)),32);
        bufp->chgBit(oldp+10,(vlSelf->Top__DOT__ResultSrc));
        bufp->chgIData(oldp+11,(((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                  [(0xffU & vlSelf->Top__DOT__ALUResult)] 
                                  << 0x18U) | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                [(0xffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->Top__DOT__ALUResult))] 
                                                << 0x10U) 
                                               | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                   [
                                                   (0xffU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->Top__DOT__ALUResult))] 
                                                   << 8U) 
                                                  | vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                  [
                                                  (0xffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->Top__DOT__ALUResult))])))),32);
        bufp->chgBit(oldp+12,(vlSelf->Top__DOT__MemWrite));
        bufp->chgIData(oldp+13,(vlSelf->Top__DOT__Register__DOT__mem[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->Top__DOT__Register__DOT__mem[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->Top__DOT__Register__DOT__mem[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->Top__DOT__Register__DOT__mem[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->Top__DOT__Register__DOT__mem[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->Top__DOT__Register__DOT__mem[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->Top__DOT__Register__DOT__mem[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->Top__DOT__Register__DOT__mem[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->Top__DOT__Register__DOT__mem[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->Top__DOT__Register__DOT__mem[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->Top__DOT__Register__DOT__mem[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->Top__DOT__Register__DOT__mem[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->Top__DOT__Register__DOT__mem[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->Top__DOT__Register__DOT__mem[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->Top__DOT__Register__DOT__mem[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->Top__DOT__Register__DOT__mem[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->Top__DOT__Register__DOT__mem[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->Top__DOT__Register__DOT__mem[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->Top__DOT__Register__DOT__mem[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->Top__DOT__Register__DOT__mem[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->Top__DOT__Register__DOT__mem[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->Top__DOT__Register__DOT__mem[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->Top__DOT__Register__DOT__mem[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->Top__DOT__Register__DOT__mem[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->Top__DOT__Register__DOT__mem[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->Top__DOT__Register__DOT__mem[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->Top__DOT__Register__DOT__mem[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->Top__DOT__Register__DOT__mem[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->Top__DOT__Register__DOT__mem[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->Top__DOT__Register__DOT__mem[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->Top__DOT__Register__DOT__mem[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->Top__DOT__Register__DOT__mem[31]),32);
        bufp->chgCData(oldp+45,((0xffU & vlSelf->Top__DOT__ALUResult)),8);
    }
    bufp->chgBit(oldp+46,(vlSelf->clk));
    bufp->chgBit(oldp+47,(vlSelf->rst));
    bufp->chgIData(oldp+48,(vlSelf->a0),32);
    bufp->chgIData(oldp+49,(vlSelf->instr),32);
    bufp->chgIData(oldp+50,(vlSelf->PC),32);
    bufp->chgBit(oldp+51,(vlSelf->PCsrc));
    bufp->chgIData(oldp+52,(vlSelf->ImmOp),32);
    bufp->chgCData(oldp+53,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->chgCData(oldp+54,((3U & vlSelf->instr)),2);
    bufp->chgCData(oldp+55,((0xffU & vlSelf->PC)),8);
    bufp->chgIData(oldp+56,(((IData)(4U) + vlSelf->PC)),32);
    bufp->chgIData(oldp+57,((vlSelf->PC + vlSelf->ImmOp)),32);
    bufp->chgIData(oldp+58,(((IData)(vlSelf->PCsrc)
                              ? (vlSelf->PC + vlSelf->ImmOp)
                              : ((IData)(4U) + vlSelf->PC))),32);
    bufp->chgCData(oldp+59,((0x1fU & (vlSelf->instr 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+60,((0x1fU & (vlSelf->instr 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+61,((0x1fU & (vlSelf->instr 
                                      >> 7U))),5);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
