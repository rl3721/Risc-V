// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+48,"rst", false,-1);
    tracep->declBus(c+49,"a0", false,-1, 31,0);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->declBus(c+51,"PC", false,-1, 31,0);
    tracep->declBit(c+52,"PCsrc", false,-1);
    tracep->declBus(c+53,"ImmOp", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+48,"rst", false,-1);
    tracep->declBus(c+49,"a0", false,-1, 31,0);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->declBus(c+51,"PC", false,-1, 31,0);
    tracep->declBit(c+52,"PCsrc", false,-1);
    tracep->declBus(c+53,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"RD1", false,-1, 31,0);
    tracep->declBus(c+2,"RD2", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+4,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+8,"ALUop2", false,-1, 31,0);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBus(c+10,"Result", false,-1, 31,0);
    tracep->declBit(c+11,"ResultSrc", false,-1);
    tracep->declBus(c+12,"ReadData", false,-1, 31,0);
    tracep->declBit(c+13,"MemWrite", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+63,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"d0", false,-1, 31,0);
    tracep->declBus(c+8,"d1", false,-1, 31,0);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBus(c+4,"dout", false,-1, 31,0);
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Decode ");
    tracep->declBit(c+5,"EQ", false,-1);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->declBit(c+3,"RegWrite", false,-1);
    tracep->declBus(c+6,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+9,"ALUSrc", false,-1);
    tracep->declBit(c+52,"PCsrc", false,-1);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+11,"ResultSrc", false,-1);
    tracep->declBit(c+13,"MemWrite", false,-1);
    tracep->declBus(c+54,"funct3", false,-1, 2,0);
    tracep->declBus(c+55,"ALUop", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Extend ");
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"instr", false,-1, 31,0);
    tracep->declBus(c+7,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+53,"ImmOp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Instruction ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"A", false,-1, 31,0);
    tracep->declBus(c+50,"RD", false,-1, 31,0);
    tracep->declBus(c+56,"short_addr", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+63,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+48,"rst", false,-1);
    tracep->declBit(c+52,"PCsrc", false,-1);
    tracep->declBus(c+53,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+51,"PC", false,-1, 31,0);
    tracep->declBus(c+57,"inc_PC", false,-1, 31,0);
    tracep->declBus(c+58,"branch_PC", false,-1, 31,0);
    tracep->declBus(c+59,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+63,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"A_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBus(c+60,"AD1", false,-1, 4,0);
    tracep->declBus(c+61,"AD2", false,-1, 4,0);
    tracep->declBus(c+62,"AD3", false,-1, 4,0);
    tracep->declBit(c+3,"WE3", false,-1);
    tracep->declBus(c+10,"WD3", false,-1, 31,0);
    tracep->declBus(c+1,"RD1", false,-1, 31,0);
    tracep->declBus(c+2,"RD2", false,-1, 31,0);
    tracep->declBus(c+49,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"mem", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_ram ");
    tracep->declBus(c+63,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+47,"clk", false,-1);
    tracep->declBit(c+13,"Data_WE", false,-1);
    tracep->declBus(c+4,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+2,"Data_WD", false,-1, 31,0);
    tracep->declBus(c+12,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+46,"short_addr", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Top__DOT__RD1),32);
    bufp->fullIData(oldp+2,(vlSelf->Top__DOT__RD2),32);
    bufp->fullBit(oldp+3,(vlSelf->Top__DOT__RegWrite));
    bufp->fullIData(oldp+4,(vlSelf->Top__DOT__ALUResult),32);
    bufp->fullBit(oldp+5,(vlSelf->Top__DOT__EQ));
    bufp->fullCData(oldp+6,(vlSelf->Top__DOT__ALUctrl),3);
    bufp->fullCData(oldp+7,(vlSelf->Top__DOT__ImmSrc),3);
    bufp->fullIData(oldp+8,(vlSelf->Top__DOT__ALUop2),32);
    bufp->fullBit(oldp+9,(vlSelf->Top__DOT__ALUSrc));
    bufp->fullIData(oldp+10,(((IData)(vlSelf->Top__DOT__ResultSrc)
                               ? ((vlSelf->Top__DOT__data_ram__DOT__data_mem
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
                                                       + vlSelf->Top__DOT__ALUResult))])))
                               : vlSelf->Top__DOT__ALUResult)),32);
    bufp->fullBit(oldp+11,(vlSelf->Top__DOT__ResultSrc));
    bufp->fullIData(oldp+12,(((vlSelf->Top__DOT__data_ram__DOT__data_mem
                               [(0xffU & vlSelf->Top__DOT__ALUResult)] 
                               << 0x18U) | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                             [(0xffU 
                                               & ((IData)(1U) 
                                                  + vlSelf->Top__DOT__ALUResult))] 
                                             << 0x10U) 
                                            | ((vlSelf->Top__DOT__data_ram__DOT__data_mem
                                                [(0xffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->Top__DOT__ALUResult))] 
                                                << 8U) 
                                               | vlSelf->Top__DOT__data_ram__DOT__data_mem
                                               [(0xffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->Top__DOT__ALUResult))])))),32);
    bufp->fullBit(oldp+13,(vlSelf->Top__DOT__MemWrite));
    bufp->fullIData(oldp+14,(vlSelf->Top__DOT__Register__DOT__mem[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->Top__DOT__Register__DOT__mem[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->Top__DOT__Register__DOT__mem[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->Top__DOT__Register__DOT__mem[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->Top__DOT__Register__DOT__mem[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->Top__DOT__Register__DOT__mem[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->Top__DOT__Register__DOT__mem[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->Top__DOT__Register__DOT__mem[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->Top__DOT__Register__DOT__mem[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->Top__DOT__Register__DOT__mem[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->Top__DOT__Register__DOT__mem[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->Top__DOT__Register__DOT__mem[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->Top__DOT__Register__DOT__mem[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->Top__DOT__Register__DOT__mem[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->Top__DOT__Register__DOT__mem[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->Top__DOT__Register__DOT__mem[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->Top__DOT__Register__DOT__mem[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->Top__DOT__Register__DOT__mem[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->Top__DOT__Register__DOT__mem[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->Top__DOT__Register__DOT__mem[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->Top__DOT__Register__DOT__mem[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->Top__DOT__Register__DOT__mem[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->Top__DOT__Register__DOT__mem[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->Top__DOT__Register__DOT__mem[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->Top__DOT__Register__DOT__mem[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->Top__DOT__Register__DOT__mem[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->Top__DOT__Register__DOT__mem[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->Top__DOT__Register__DOT__mem[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->Top__DOT__Register__DOT__mem[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->Top__DOT__Register__DOT__mem[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->Top__DOT__Register__DOT__mem[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->Top__DOT__Register__DOT__mem[31]),32);
    bufp->fullCData(oldp+46,((0xffU & vlSelf->Top__DOT__ALUResult)),8);
    bufp->fullBit(oldp+47,(vlSelf->clk));
    bufp->fullBit(oldp+48,(vlSelf->rst));
    bufp->fullIData(oldp+49,(vlSelf->a0),32);
    bufp->fullIData(oldp+50,(vlSelf->instr),32);
    bufp->fullIData(oldp+51,(vlSelf->PC),32);
    bufp->fullBit(oldp+52,(vlSelf->PCsrc));
    bufp->fullIData(oldp+53,(vlSelf->ImmOp),32);
    bufp->fullCData(oldp+54,((7U & (vlSelf->instr >> 0xcU))),3);
    bufp->fullCData(oldp+55,((3U & vlSelf->instr)),2);
    bufp->fullCData(oldp+56,((0xffU & vlSelf->PC)),8);
    bufp->fullIData(oldp+57,(((IData)(4U) + vlSelf->PC)),32);
    bufp->fullIData(oldp+58,((vlSelf->PC + vlSelf->ImmOp)),32);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->PCsrc)
                               ? (vlSelf->PC + vlSelf->ImmOp)
                               : ((IData)(4U) + vlSelf->PC))),32);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+62,((0x1fU & (vlSelf->instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+63,(0x20U),32);
    bufp->fullIData(oldp+64,(5U),32);
}
