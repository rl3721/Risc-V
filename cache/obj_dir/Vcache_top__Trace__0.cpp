// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache_top__Syms.h"


void Vcache_top___024root__trace_chg_sub_0(Vcache_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_chg_top_0\n"); );
    // Init
    Vcache_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_top___024root*>(voidSelf);
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcache_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache_top___024root__trace_chg_sub_0(Vcache_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->Top__DOT__data_bus_write),128);
        bufp->chgIData(oldp+4,(vlSelf->Top__DOT__write_address_bus),32);
        bufp->chgBit(oldp+5,(vlSelf->Top__DOT__Memory_WE));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
        bufp->chgWData(oldp+6,(__Vtemp_h4f17aabe__0),156);
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
        bufp->chgWData(oldp+11,(__Vtemp_h4f17c904__0),156);
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
        bufp->chgWData(oldp+16,(__Vtemp_h4f17c945__0),156);
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
        bufp->chgWData(oldp+21,(__Vtemp_h4f17ab82__0),156);
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
        bufp->chgWData(oldp+26,(__Vtemp_h4f17c7c3__0),156);
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
        bufp->chgWData(oldp+31,(__Vtemp_h4f17aa33__0),156);
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
        bufp->chgWData(oldp+36,(__Vtemp_h4f17aa72__0),156);
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
        bufp->chgWData(oldp+41,(__Vtemp_h4f17c4b5__0),156);
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
        bufp->chgWData(oldp+46,(__Vtemp_h4f1f1ad7__0),156);
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
        bufp->chgWData(oldp+51,(__Vtemp_h4f1f1d11__0),156);
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
        bufp->chgWData(oldp+56,(__Vtemp_h4f1f1d52__0),156);
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
        bufp->chgWData(oldp+61,(__Vtemp_h4f1f1b93__0),156);
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
        bufp->chgWData(oldp+66,(__Vtemp_h4f1f1bd4__0),156);
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
        bufp->chgWData(oldp+71,(__Vtemp_h4f1f1a04__0),156);
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
        bufp->chgWData(oldp+76,(__Vtemp_h4f1f1a43__0),156);
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
        bufp->chgWData(oldp+81,(__Vtemp_h4f1f2882__0),156);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgWData(oldp+86,(vlSelf->Top__DOT__data_bus_read),128);
        bufp->chgIData(oldp+90,(vlSelf->Top__DOT__read_address_bus),32);
        bufp->chgBit(oldp+91,(vlSelf->Top__DOT__Cache__DOT__replace));
        bufp->chgWData(oldp+92,(vlSelf->Top__DOT__Cache__DOT__block_out),128);
    }
    bufp->chgBit(oldp+96,(vlSelf->clk));
    bufp->chgIData(oldp+97,(vlSelf->address),32);
    bufp->chgBit(oldp+98,(vlSelf->WE));
    bufp->chgIData(oldp+99,(vlSelf->Data_WD),32);
    bufp->chgIData(oldp+100,(vlSelf->Data_RD),32);
    bufp->chgCData(oldp+101,(vlSelf->hit),2);
}

void Vcache_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache_top___024root__trace_cleanup\n"); );
    // Init
    Vcache_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache_top___024root*>(voidSelf);
    Vcache_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
