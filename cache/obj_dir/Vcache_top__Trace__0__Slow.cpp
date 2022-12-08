// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_top__Syms.h"


VL_ATTR_COLD void Vcache_top___024root__trace_init_sub__TOP__0(Vcache_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBus(c+98,"address", false,-1, 31,0);
    tracep->declBit(c+99,"WE", false,-1);
    tracep->declBus(c+100,"Data_WD", false,-1, 31,0);
    tracep->declBus(c+101,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+102,"hit", false,-1, 1,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBus(c+103,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBus(c+98,"address", false,-1, 31,0);
    tracep->declBit(c+99,"WE", false,-1);
    tracep->declBus(c+100,"Data_WD", false,-1, 31,0);
    tracep->declBus(c+101,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+102,"hit", false,-1, 1,0);
    tracep->declArray(c+87,"data_bus_read", false,-1, 127,0);
    tracep->declArray(c+1,"data_bus_write", false,-1, 127,0);
    tracep->declBus(c+91,"read_address_bus", false,-1, 31,0);
    tracep->declBus(c+5,"write_address_bus", false,-1, 31,0);
    tracep->declBit(c+6,"Memory_WE", false,-1);
    tracep->pushNamePrefix("Cache ");
    tracep->declBus(c+103,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"BLOCK_SIZE", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+99,"WE", false,-1);
    tracep->declBus(c+98,"Data_addr", false,-1, 31,0);
    tracep->declBus(c+100,"Data_WD", false,-1, 31,0);
    tracep->declArray(c+87,"Memory_bus_in", false,-1, 127,0);
    tracep->declArray(c+1,"Memory_bus_out", false,-1, 127,0);
    tracep->declBus(c+91,"Memory_read_address", false,-1, 31,0);
    tracep->declBus(c+5,"Memory_write_address", false,-1, 31,0);
    tracep->declBit(c+6,"Memory_WE", false,-1);
    tracep->declBus(c+101,"Data_RD", false,-1, 31,0);
    tracep->declBus(c+102,"hit", false,-1, 1,0);
    tracep->pushNamePrefix("data_cache");
    tracep->pushNamePrefix("[0]");
    tracep->declArray(c+7,"[0]", false,-1, 155,0);
    tracep->declArray(c+12,"[1]", false,-1, 155,0);
    tracep->declArray(c+17,"[2]", false,-1, 155,0);
    tracep->declArray(c+22,"[3]", false,-1, 155,0);
    tracep->declArray(c+27,"[4]", false,-1, 155,0);
    tracep->declArray(c+32,"[5]", false,-1, 155,0);
    tracep->declArray(c+37,"[6]", false,-1, 155,0);
    tracep->declArray(c+42,"[7]", false,-1, 155,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declArray(c+47,"[0]", false,-1, 155,0);
    tracep->declArray(c+52,"[1]", false,-1, 155,0);
    tracep->declArray(c+57,"[2]", false,-1, 155,0);
    tracep->declArray(c+62,"[3]", false,-1, 155,0);
    tracep->declArray(c+67,"[4]", false,-1, 155,0);
    tracep->declArray(c+72,"[5]", false,-1, 155,0);
    tracep->declArray(c+77,"[6]", false,-1, 155,0);
    tracep->declArray(c+82,"[7]", false,-1, 155,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+92,"replace", false,-1);
    tracep->declArray(c+93,"block_out", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+103,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+97,"clk", false,-1);
    tracep->declBit(c+6,"Data_WE", false,-1);
    tracep->declBus(c+91,"Data_read_addr", false,-1, 31,0);
    tracep->declBus(c+5,"Data_write_addr", false,-1, 31,0);
    tracep->declArray(c+1,"Data_WD", false,-1, 127,0);
    tracep->declArray(c+87,"Data_RD", false,-1, 127,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcache_top___024root__trace_init_top(Vcache_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_init_top\n"); );
    // Body
    Vcache_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache_top___024root__trace_register(Vcache_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcache_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcache_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcache_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache_top___024root__trace_full_sub_0(Vcache_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_full_top_0\n"); );
    // Init
    Vcache_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_top___024root*>(voidSelf);
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcache_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache_top___024root__trace_full_sub_0(Vcache_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h4f17aabe__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17c904__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17c945__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17ab82__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17c7c3__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17aa33__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17aa72__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f17c4b5__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1ad7__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1d11__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1d52__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1b93__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1bd4__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1a04__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f1a43__0;
    VlWide<5>/*159:0*/ __Vtemp_h4f1f2882__0;
    // Body
    bufp->fullWData(oldp+1,(vlSelf->Top__DOT__data_bus_write),128);
    bufp->fullIData(oldp+5,(vlSelf->Top__DOT__write_address_bus),32);
    bufp->fullBit(oldp+6,(vlSelf->Top__DOT__Memory_WE));
    __Vtemp_h4f17aabe__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][0U][0U];
    __Vtemp_h4f17aabe__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][0U][1U];
    __Vtemp_h4f17aabe__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][0U][2U];
    __Vtemp_h4f17aabe__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][0U][3U];
    __Vtemp_h4f17aabe__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][0U][4U];
    bufp->fullWData(oldp+7,(__Vtemp_h4f17aabe__0),156);
    __Vtemp_h4f17c904__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][1U][0U];
    __Vtemp_h4f17c904__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][1U][1U];
    __Vtemp_h4f17c904__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][1U][2U];
    __Vtemp_h4f17c904__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][1U][3U];
    __Vtemp_h4f17c904__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][1U][4U];
    bufp->fullWData(oldp+12,(__Vtemp_h4f17c904__0),156);
    __Vtemp_h4f17c945__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][2U][0U];
    __Vtemp_h4f17c945__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][2U][1U];
    __Vtemp_h4f17c945__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][2U][2U];
    __Vtemp_h4f17c945__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][2U][3U];
    __Vtemp_h4f17c945__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][2U][4U];
    bufp->fullWData(oldp+17,(__Vtemp_h4f17c945__0),156);
    __Vtemp_h4f17ab82__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][3U][0U];
    __Vtemp_h4f17ab82__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][3U][1U];
    __Vtemp_h4f17ab82__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][3U][2U];
    __Vtemp_h4f17ab82__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][3U][3U];
    __Vtemp_h4f17ab82__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][3U][4U];
    bufp->fullWData(oldp+22,(__Vtemp_h4f17ab82__0),156);
    __Vtemp_h4f17c7c3__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][4U][0U];
    __Vtemp_h4f17c7c3__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][4U][1U];
    __Vtemp_h4f17c7c3__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][4U][2U];
    __Vtemp_h4f17c7c3__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][4U][3U];
    __Vtemp_h4f17c7c3__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][4U][4U];
    bufp->fullWData(oldp+27,(__Vtemp_h4f17c7c3__0),156);
    __Vtemp_h4f17aa33__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][5U][0U];
    __Vtemp_h4f17aa33__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][5U][1U];
    __Vtemp_h4f17aa33__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][5U][2U];
    __Vtemp_h4f17aa33__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][5U][3U];
    __Vtemp_h4f17aa33__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][5U][4U];
    bufp->fullWData(oldp+32,(__Vtemp_h4f17aa33__0),156);
    __Vtemp_h4f17aa72__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][6U][0U];
    __Vtemp_h4f17aa72__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][6U][1U];
    __Vtemp_h4f17aa72__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][6U][2U];
    __Vtemp_h4f17aa72__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][6U][3U];
    __Vtemp_h4f17aa72__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][6U][4U];
    bufp->fullWData(oldp+37,(__Vtemp_h4f17aa72__0),156);
    __Vtemp_h4f17c4b5__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][7U][0U];
    __Vtemp_h4f17c4b5__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][7U][1U];
    __Vtemp_h4f17c4b5__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][7U][2U];
    __Vtemp_h4f17c4b5__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][7U][3U];
    __Vtemp_h4f17c4b5__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [0U][7U][4U];
    bufp->fullWData(oldp+42,(__Vtemp_h4f17c4b5__0),156);
    __Vtemp_h4f1f1ad7__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][0U][0U];
    __Vtemp_h4f1f1ad7__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][0U][1U];
    __Vtemp_h4f1f1ad7__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][0U][2U];
    __Vtemp_h4f1f1ad7__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][0U][3U];
    __Vtemp_h4f1f1ad7__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][0U][4U];
    bufp->fullWData(oldp+47,(__Vtemp_h4f1f1ad7__0),156);
    __Vtemp_h4f1f1d11__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][1U][0U];
    __Vtemp_h4f1f1d11__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][1U][1U];
    __Vtemp_h4f1f1d11__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][1U][2U];
    __Vtemp_h4f1f1d11__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][1U][3U];
    __Vtemp_h4f1f1d11__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][1U][4U];
    bufp->fullWData(oldp+52,(__Vtemp_h4f1f1d11__0),156);
    __Vtemp_h4f1f1d52__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][2U][0U];
    __Vtemp_h4f1f1d52__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][2U][1U];
    __Vtemp_h4f1f1d52__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][2U][2U];
    __Vtemp_h4f1f1d52__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][2U][3U];
    __Vtemp_h4f1f1d52__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][2U][4U];
    bufp->fullWData(oldp+57,(__Vtemp_h4f1f1d52__0),156);
    __Vtemp_h4f1f1b93__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][3U][0U];
    __Vtemp_h4f1f1b93__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][3U][1U];
    __Vtemp_h4f1f1b93__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][3U][2U];
    __Vtemp_h4f1f1b93__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][3U][3U];
    __Vtemp_h4f1f1b93__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][3U][4U];
    bufp->fullWData(oldp+62,(__Vtemp_h4f1f1b93__0),156);
    __Vtemp_h4f1f1bd4__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][4U][0U];
    __Vtemp_h4f1f1bd4__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][4U][1U];
    __Vtemp_h4f1f1bd4__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][4U][2U];
    __Vtemp_h4f1f1bd4__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][4U][3U];
    __Vtemp_h4f1f1bd4__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][4U][4U];
    bufp->fullWData(oldp+67,(__Vtemp_h4f1f1bd4__0),156);
    __Vtemp_h4f1f1a04__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][5U][0U];
    __Vtemp_h4f1f1a04__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][5U][1U];
    __Vtemp_h4f1f1a04__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][5U][2U];
    __Vtemp_h4f1f1a04__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][5U][3U];
    __Vtemp_h4f1f1a04__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][5U][4U];
    bufp->fullWData(oldp+72,(__Vtemp_h4f1f1a04__0),156);
    __Vtemp_h4f1f1a43__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][6U][0U];
    __Vtemp_h4f1f1a43__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][6U][1U];
    __Vtemp_h4f1f1a43__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][6U][2U];
    __Vtemp_h4f1f1a43__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][6U][3U];
    __Vtemp_h4f1f1a43__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][6U][4U];
    bufp->fullWData(oldp+77,(__Vtemp_h4f1f1a43__0),156);
    __Vtemp_h4f1f2882__0[0U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][7U][0U];
    __Vtemp_h4f1f2882__0[1U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][7U][1U];
    __Vtemp_h4f1f2882__0[2U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][7U][2U];
    __Vtemp_h4f1f2882__0[3U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][7U][3U];
    __Vtemp_h4f1f2882__0[4U] = vlSelf->Top__DOT__Cache__DOT__data_cache
        [1U][7U][4U];
    bufp->fullWData(oldp+82,(__Vtemp_h4f1f2882__0),156);
    bufp->fullWData(oldp+87,(vlSelf->Top__DOT__data_bus_read),128);
    bufp->fullIData(oldp+91,(vlSelf->Top__DOT__read_address_bus),32);
    bufp->fullBit(oldp+92,(vlSelf->Top__DOT__Cache__DOT__replace));
    bufp->fullWData(oldp+93,(vlSelf->Top__DOT__Cache__DOT__block_out),128);
    bufp->fullBit(oldp+97,(vlSelf->clk));
    bufp->fullIData(oldp+98,(vlSelf->address),32);
    bufp->fullBit(oldp+99,(vlSelf->WE));
    bufp->fullIData(oldp+100,(vlSelf->Data_WD),32);
    bufp->fullIData(oldp+101,(vlSelf->Data_RD),32);
    bufp->fullCData(oldp+102,(vlSelf->hit),2);
    bufp->fullIData(oldp+103,(0x20U),32);
    bufp->fullIData(oldp+104,(4U),32);
}
