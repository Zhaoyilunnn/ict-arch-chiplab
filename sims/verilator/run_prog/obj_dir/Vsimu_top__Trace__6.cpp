// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsimu_top__Syms.h"


void Vsimu_top::traceChgSub8(void* userp, VerilatedFst* tracep) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 10962);
    if (false && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp1002[4];
    WData/*127:0*/ __Vtemp1004[4];
    WData/*127:0*/ __Vtemp1006[4];
    WData/*127:0*/ __Vtemp1008[4];
    WData/*127:0*/ __Vtemp1010[4];
    WData/*127:0*/ __Vtemp1012[4];
    WData/*127:0*/ __Vtemp1013[4];
    WData/*127:0*/ __Vtemp1020[4];
    WData/*95:0*/ __Vtemp1027[3];
    WData/*95:0*/ __Vtemp1034[3];
    WData/*95:0*/ __Vtemp1041[3];
    WData/*95:0*/ __Vtemp1048[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                          >> 1U))));
            tracep->chgBit(oldp+1,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+2,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 0xbU))));
            tracep->chgBit(oldp+3,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                 >> 0xbU))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                                >> 0xbU))))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 0xdU))));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029) 
                                          >> 0xcU))));
            tracep->chgIData(oldp+6,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+7,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                           & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 0xdU) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xcU))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                              >> 0xdU) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 0xcU))))));
            tracep->chgBit(oldp+8,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 0xdU))) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 0xcU)) 
                                            | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig)) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 0xdU))) 
                                              & (~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 0xcU)))) 
                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xdU)) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 0xcU))))));
            tracep->chgCData(oldp+9,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+10,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+11,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+12,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+13,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+14,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 4U))));
            tracep->chgBit(oldp+15,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 3U))));
            tracep->chgBit(oldp+16,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 2U))));
            tracep->chgBit(oldp+17,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                             >> 4U) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 3U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 2U))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               >> 3U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 2U))))));
            tracep->chgBit(oldp+18,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 4U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 2U)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 4U)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 3U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 3U)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 2U))))));
            tracep->chgBit(oldp+19,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 7U))));
            tracep->chgBit(oldp+20,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 6U))));
            tracep->chgBit(oldp+21,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 5U))));
            tracep->chgBit(oldp+22,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                             >> 7U) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 6U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 5U))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               >> 6U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 5U))))));
            tracep->chgBit(oldp+23,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 6U))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 5U)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 7U)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 5U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 7U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 6U)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 5U))))));
            tracep->chgBit(oldp+24,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xaU))));
            tracep->chgBit(oldp+25,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 9U))));
            tracep->chgBit(oldp+26,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 8U))));
            tracep->chgBit(oldp+27,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                             >> 0xaU) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 9U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 8U))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               >> 9U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 8U))))));
            tracep->chgBit(oldp+28,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xaU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 9U))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 8U)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xaU)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 8U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 0xaU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 9U)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 8U))))));
            tracep->chgBit(oldp+29,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xdU))));
            tracep->chgBit(oldp+30,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xcU))));
            tracep->chgBit(oldp+31,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xbU))));
            tracep->chgBit(oldp+32,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                             >> 0xdU) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 0xbU))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               >> 0xcU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xbU))))));
            tracep->chgBit(oldp+33,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xdU)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xcU))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xbU)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xdU)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xcU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xbU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 0xdU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 0xcU)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xbU))))));
            tracep->chgBit(oldp+34,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0x10U))));
            tracep->chgBit(oldp+35,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xfU))));
            tracep->chgBit(oldp+36,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 0xeU))));
            tracep->chgBit(oldp+37,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                             >> 0x10U) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 0xeU))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               >> 0xfU) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xeU))))));
            tracep->chgBit(oldp+38,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0x10U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xfU))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xeU)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0x10U)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xfU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 0xeU)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                >> 0x10U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 0xfU)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 0xeU))))));
            tracep->chgBit(oldp+39,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 2U))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 1U))));
            tracep->chgBit(oldp+41,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029))));
            tracep->chgBit(oldp+42,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                             >> 2U) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 1U) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 1U) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029))))));
            tracep->chgBit(oldp+43,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 2U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 1U))) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 2U)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 1U))) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 1U)) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029))))));
            tracep->chgBit(oldp+44,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+45,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 4U))));
            tracep->chgBit(oldp+46,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 3U))));
            tracep->chgBit(oldp+47,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 4U) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 3U))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 4U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 3U))))));
            tracep->chgBit(oldp+48,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 4U))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 3U)) 
                                             | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 4U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 3U)))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 4U)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 3U))))));
            tracep->chgBit(oldp+49,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                           >> 1U))));
            tracep->chgBit(oldp+50,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+51,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                           >> 1U))));
            tracep->chgBit(oldp+52,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                  >> 1U))) 
                                           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 1U))))));
            tracep->chgBit(oldp+53,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 1U)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 1U)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData 
                                                 >> 1U))))));
            tracep->chgBit(oldp+54,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                           >> 4U))));
            tracep->chgBit(oldp+55,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                           >> 3U))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                           >> 2U))));
            tracep->chgBit(oldp+57,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                             >> 4U) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                               >> 3U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+58,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 4U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 4U)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                  >> 3U)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+59,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+60,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 6U))));
            tracep->chgBit(oldp+61,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 5U))));
            tracep->chgBit(oldp+62,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 6U) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 5U))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 6U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+63,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 6U))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 5U)) 
                                             | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 6U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 6U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 5U)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 6U)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 5U))))));
            tracep->chgBit(oldp+64,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                           >> 3U))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                           >> 2U))));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                           >> 1U))));
            tracep->chgBit(oldp+67,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                             >> 3U) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                               >> 2U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+68,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                   >> 3U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                   >> 3U)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                  >> 2U)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+69,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 9U))));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 8U))));
            tracep->chgBit(oldp+71,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 7U))));
            tracep->chgBit(oldp+72,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                             >> 9U) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 8U) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 7U))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                               >> 8U) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 7U))))));
            tracep->chgBit(oldp+73,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 9U)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 8U))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 7U)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 9U)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 8U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 9U) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 8U))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 7U)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                >> 9U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 8U)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 7U))))));
            tracep->chgBit(oldp+74,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                           >> 1U))));
            tracep->chgBit(oldp+75,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+76,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xaU))));
            tracep->chgBit(oldp+77,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 0xaU))) 
                                           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+78,((1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                                   >> 1U)) 
                                               & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xaU)) 
                                             | (((~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                                   >> 1U)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                   >> 0xaU)))) 
                                           | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+79,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                           >> 1U))));
            tracep->chgBit(oldp+80,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+81,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+82,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                             >> 1U) 
                                            & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                  >> 0xbU))) 
                                           | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                                 >> 0xbU))))));
            tracep->chgBit(oldp+83,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xdU))));
            tracep->chgBit(oldp+84,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029) 
                                           >> 0xcU))));
            tracep->chgIData(oldp+85,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+86,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                            & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 0xdU) 
                                               | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xcU))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                               >> 0xdU) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 0xcU))))));
            tracep->chgBit(oldp+87,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 0xdU))) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 0xcU)) 
                                             | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig)) 
                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 0xdU)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 0xdU))) 
                                               & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 0xcU)))) 
                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xdU)) 
                                              & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 0xcU))))));
            tracep->chgCData(oldp+88,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+89,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+90,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+91,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+92,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+93,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                           >> 4U))));
            tracep->chgBit(oldp+94,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                           >> 3U))));
            tracep->chgBit(oldp+95,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                           >> 2U))));
            tracep->chgBit(oldp+96,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                             >> 4U) 
                                            & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 3U) 
                                               | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 2U))) 
                                           | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                               >> 3U) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 2U))))));
            tracep->chgBit(oldp+97,((1U & ((((((~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 4U)) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 3U))) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 2U)) 
                                             | (((~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 4U)) 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 3U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (~ 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 2U)))) 
                                           | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 4U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 3U)) 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 2U))))));
            tracep->chgBit(oldp+98,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                           >> 7U))));
            tracep->chgBit(oldp+99,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                           >> 6U))));
            tracep->chgBit(oldp+100,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+101,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+102,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+103,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+104,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+105,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+106,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+107,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+108,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+109,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+110,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+111,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+112,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+113,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+114,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+115,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+116,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+117,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+118,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+119,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+120,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029))));
            tracep->chgBit(oldp+121,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029))))));
            tracep->chgBit(oldp+122,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029))))));
            tracep->chgBit(oldp+123,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+124,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+126,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+127,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+128,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+129,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+130,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+131,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+132,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+133,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+136,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+137,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+138,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+139,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+140,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+141,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+142,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+143,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+144,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+145,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+146,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+147,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+149,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+150,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+151,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+152,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+154,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+155,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+156,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+157,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+158,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+159,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+160,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+161,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+162,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+163,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029) 
                                            >> 0xcU))));
            tracep->chgIData(oldp+164,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+165,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 0xdU) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 0xcU))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+166,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 0xdU))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xcU)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 0xdU))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 0xdU)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+167,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+168,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+169,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+170,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+171,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+172,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 4U))));
            tracep->chgBit(oldp+173,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 3U))));
            tracep->chgBit(oldp+174,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 2U))));
            tracep->chgBit(oldp+175,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                              >> 4U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 3U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 2U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 3U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+176,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 2U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 4U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 4U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 3U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+177,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 7U))));
            tracep->chgBit(oldp+178,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 6U))));
            tracep->chgBit(oldp+179,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+180,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+181,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+182,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+183,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+184,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+185,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+186,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+187,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+188,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+189,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+190,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+191,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+192,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+193,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+194,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+195,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+196,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+198,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+199,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))));
            tracep->chgBit(oldp+200,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))));
            tracep->chgBit(oldp+201,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029))))));
            tracep->chgBit(oldp+202,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+203,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+205,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+206,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+207,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+208,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+209,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+210,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+211,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+212,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+213,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+214,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+215,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+216,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+217,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+218,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+219,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+220,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+221,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+223,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+224,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+225,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+226,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+227,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+230,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+231,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+232,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+233,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+234,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+235,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+236,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+238,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+240,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029) 
                                            >> 0xcU))));
            tracep->chgIData(oldp+243,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+244,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 0xdU) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 0xcU))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+245,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 0xdU))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xcU)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xdU))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 0xdU)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+246,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+247,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+248,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+250,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+251,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 4U))));
            tracep->chgBit(oldp+252,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 3U))));
            tracep->chgBit(oldp+253,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 2U))));
            tracep->chgBit(oldp+254,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                              >> 4U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 3U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 2U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 3U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+255,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 2U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 4U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 4U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 3U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+256,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 7U))));
            tracep->chgBit(oldp+257,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 6U))));
            tracep->chgBit(oldp+258,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+259,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+260,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+261,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+262,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+263,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+264,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+265,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+266,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+267,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+268,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+269,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+270,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+271,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+272,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+273,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+274,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+275,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+278,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))));
            tracep->chgBit(oldp+279,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))));
            tracep->chgBit(oldp+280,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029))))));
            tracep->chgBit(oldp+281,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+282,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+283,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+284,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+285,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+287,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+288,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+289,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+290,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+292,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+294,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+295,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+296,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+297,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+299,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+300,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+301,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+303,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+304,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+305,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+308,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+309,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+310,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+312,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+314,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+315,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+316,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+317,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+318,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+319,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+321,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029) 
                                            >> 0xcU))));
            tracep->chgIData(oldp+322,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+323,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 0xdU) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 0xcU))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+324,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 0xdU))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xcU)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xdU))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 0xdU)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+325,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+326,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+327,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+328,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+329,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+330,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 4U))));
            tracep->chgBit(oldp+331,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 3U))));
            tracep->chgBit(oldp+332,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 2U))));
            tracep->chgBit(oldp+333,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                              >> 4U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 3U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 2U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 3U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+334,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 2U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 4U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 4U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 3U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+335,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 7U))));
            tracep->chgBit(oldp+336,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 6U))));
            tracep->chgBit(oldp+337,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+338,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+339,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+340,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+341,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+342,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+343,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+344,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+345,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+346,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+347,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+348,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+349,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+350,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+351,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+352,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+353,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+354,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+355,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+356,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+357,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))));
            tracep->chgBit(oldp+358,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))));
            tracep->chgBit(oldp+359,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029))))));
            tracep->chgBit(oldp+360,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+361,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+362,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+363,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+364,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+365,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+366,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+367,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+368,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+369,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+370,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+371,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+372,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+373,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+374,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+375,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+376,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+377,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+378,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+379,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+380,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+381,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+382,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+383,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+384,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+385,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+386,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+387,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+388,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+389,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+390,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+391,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+392,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+393,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+394,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+395,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+396,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+397,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+398,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+399,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+400,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xcU))));
            tracep->chgIData(oldp+401,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+402,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 0xdU) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 0xcU))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+403,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 0xdU))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xcU)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xdU))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 0xdU)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+404,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+405,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+406,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+407,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+408,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+409,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 4U))));
            tracep->chgBit(oldp+410,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 3U))));
            tracep->chgBit(oldp+411,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 2U))));
            tracep->chgBit(oldp+412,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                              >> 4U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 3U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 2U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 3U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+413,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 2U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 4U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 4U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 3U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+414,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 7U))));
            tracep->chgBit(oldp+415,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 6U))));
            tracep->chgBit(oldp+416,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+417,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+418,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+419,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+420,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+421,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+422,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+423,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+424,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+425,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+426,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+427,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+428,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+429,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+430,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+431,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+432,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+433,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+434,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+435,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+436,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))));
            tracep->chgBit(oldp+437,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))));
            tracep->chgBit(oldp+438,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029))))));
            tracep->chgBit(oldp+439,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+440,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+441,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+442,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+443,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+444,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+445,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+446,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+447,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+448,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+449,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+450,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+451,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+452,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+453,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+454,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+455,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+456,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+457,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+458,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+459,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+460,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+461,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+462,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+463,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+464,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+465,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+466,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+467,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+468,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+469,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+470,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+472,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+473,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+474,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+475,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+477,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+478,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+479,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xcU))));
            tracep->chgIData(oldp+480,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData),17);
            tracep->chgBit(oldp+481,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 0xdU) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 0xcU))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 0xdU) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xcU))))));
            tracep->chgBit(oldp+482,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 0xdU))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xcU)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xdU)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xcU)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xdU))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 0xcU)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 0xdU)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xcU))))));
            tracep->chgCData(oldp+483,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig),5);
            tracep->chgCData(oldp+484,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig),4);
            tracep->chgCData(oldp+485,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig),2);
            tracep->chgCData(oldp+486,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig),2);
            tracep->chgBit(oldp+487,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig));
            tracep->chgBit(oldp+488,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 4U))));
            tracep->chgBit(oldp+489,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 3U))));
            tracep->chgBit(oldp+490,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 2U))));
            tracep->chgBit(oldp+491,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                              >> 4U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 3U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 2U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 3U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+492,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 4U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 3U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 2U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 4U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 3U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 2U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 4U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 3U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 2U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 4U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 3U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 2U))))));
            tracep->chgBit(oldp+493,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 7U))));
            tracep->chgBit(oldp+494,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 6U))));
            tracep->chgBit(oldp+495,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 5U))));
            tracep->chgBit(oldp+496,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                              >> 7U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 6U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 5U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 6U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+497,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 7U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 6U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 5U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 7U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 5U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 7U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 6U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 5U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 7U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 6U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 5U))))));
            tracep->chgBit(oldp+498,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xaU))));
            tracep->chgBit(oldp+499,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 9U))));
            tracep->chgBit(oldp+500,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 8U))));
            tracep->chgBit(oldp+501,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                              >> 0xaU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 9U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 8U))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 9U) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+502,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xaU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 9U))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 8U)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xaU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 8U)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 9U))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 8U)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 0xaU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 9U)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 8U))))));
            tracep->chgBit(oldp+503,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xdU))));
            tracep->chgBit(oldp+504,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xcU))));
            tracep->chgBit(oldp+505,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xbU))));
            tracep->chgBit(oldp+506,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                              >> 0xdU) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 0xcU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 0xbU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 0xcU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+507,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xdU)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xcU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xbU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xdU)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xcU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xbU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xcU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xbU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 0xdU) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 0xcU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+508,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0x10U))));
            tracep->chgBit(oldp+509,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xfU))));
            tracep->chgBit(oldp+510,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 0xeU))));
            tracep->chgBit(oldp+511,((1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                              >> 0x10U) 
                                             & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 0xfU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 0xeU))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                >> 0xfU) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+512,((1U & ((((((~ 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0x10U)) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xfU))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xeU)) 
                                              | (((~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0x10U)) 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xfU)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xeU)))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0x10U) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 0xfU))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 0xeU)))) 
                                            | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 >> 0x10U) 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 0xfU)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+513,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 2U))));
            tracep->chgBit(oldp+514,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 1U))));
            tracep->chgBit(oldp+515,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))));
            tracep->chgBit(oldp+516,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 2U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 1U) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))));
            tracep->chgBit(oldp+517,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 1U))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 2U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 1U)) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 1U))) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 2U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 1U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029))))));
            tracep->chgBit(oldp+518,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData)));
            tracep->chgBit(oldp+519,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 4U))));
            tracep->chgBit(oldp+520,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 3U))));
            tracep->chgBit(oldp+521,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 4U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 3U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 4U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+522,((1U & ((((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 4U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 3U)) 
                                              | (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 4U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 3U)))) 
                                             | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 4U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 3U)))) 
                                            | ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 4U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+523,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+524,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))));
            tracep->chgBit(oldp+525,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                            >> 1U))));
            tracep->chgBit(oldp+526,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                   >> 1U))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+527,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
                                                 & (~ 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig))) 
                                                & (~ 
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig)) 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                  >> 1U))))));
            tracep->chgBit(oldp+528,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                            >> 4U))));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+530,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+531,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                              >> 4U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                 >> 3U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                   >> 2U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                >> 3U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+532,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                    >> 3U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                    >> 4U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                     >> 2U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 4U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                     >> 3U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                    >> 2U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                 >> 4U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                   >> 3U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+533,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))));
            tracep->chgBit(oldp+534,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 6U))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 5U))));
            tracep->chgBit(oldp+536,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 6U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 5U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 6U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+537,((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 6U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 5U)) 
                                              | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 6U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 5U)))) 
                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 6U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 5U)))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 6U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 5U))))));
            tracep->chgBit(oldp+538,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U))));
            tracep->chgBit(oldp+539,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                            >> 2U))));
            tracep->chgBit(oldp+540,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+541,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                 >> 2U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                   >> 1U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                >> 2U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+542,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                    >> 2U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                    >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                     >> 1U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 3U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                    >> 1U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                 >> 3U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                   >> 2U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+543,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 9U))));
            tracep->chgBit(oldp+544,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 8U))));
            tracep->chgBit(oldp+545,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 7U))));
            tracep->chgBit(oldp+546,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 9U) 
                                             & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 8U) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 7U))) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 8U) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+547,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 9U)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 8U))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 7U)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 9U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 8U)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 7U)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 9U) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 8U))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 7U)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 9U) 
                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 8U)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 7U))))));
            tracep->chgBit(oldp+548,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+549,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))));
            tracep->chgBit(oldp+550,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+551,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 0xaU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+552,((1U & ((((((~ 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U)) 
                                                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xaU)) 
                                              | (((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                    >> 1U)) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
                                                 & (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 0xaU)))) 
                                             | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 0xaU)))) 
                                            | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                                 >> 1U) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xaU))))));
            tracep->chgBit(oldp+553,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U))));
            tracep->chgBit(oldp+554,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))));
            tracep->chgBit(oldp+555,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+556,((1U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                              >> 1U) 
                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 0xbU))) 
                                            | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                  >> 0xbU))))));
            tracep->chgBit(oldp+557,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+558,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xcU))));
            tracep->chgWData(oldp+559,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r),425);
            tracep->chgCData(oldp+573,((0xfU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                 << 0x19U) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                   >> 7U)))),4);
            tracep->chgCData(oldp+574,((3U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U])),2);
            tracep->chgCData(oldp+575,((3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                               << 0x15U) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                 >> 0xbU)))),2);
            tracep->chgBit(oldp+576,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+577,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+578,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])),5);
            tracep->chgIData(oldp+579,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]),32);
            tracep->chgIData(oldp+580,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]),32);
            tracep->chgBit(oldp+581,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                            >> 0xdU))));
            tracep->chgSData(oldp+582,((0x3ffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                   << 2U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                     >> 0x1eU)))),10);
            tracep->chgBit(oldp+583,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                            >> 0xeU))));
            tracep->chgIData(oldp+584,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                         << 0x11U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                           >> 0xfU))),32);
            tracep->chgSData(oldp+585,((0x3fffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                      >> 0xfU)))),14);
            tracep->chgBit(oldp+586,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+587,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 8U))));
            tracep->chgBit(oldp+588,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 9U))));
            tracep->chgBit(oldp+589,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+590,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+591,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+592,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+593,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+594,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+595,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                            >> 0x10U))));
            tracep->chgSData(oldp+596,((0x3ffU & ((
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                     >> 0x11U)))),10);
            tracep->chgIData(oldp+597,((0x7ffffU & 
                                        ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                          << 5U) | 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                          >> 0x1bU)))),19);
            tracep->chgBit(oldp+598,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+599,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+600,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+601,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+602,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+603,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+604,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+605,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+606,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                            >> 0x16U))));
            tracep->chgIData(oldp+607,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                         << 9U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   >> 0x17U))),32);
            tracep->chgIData(oldp+608,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff),32);
            tracep->chgBit(oldp+609,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable));
            tracep->chgBit(oldp+610,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem));
            tracep->chgCData(oldp+611,((3U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                               << 0x1dU) 
                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                 >> 3U)))),2);
            tracep->chgBit(oldp+612,((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                        >> 5U) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))));
            tracep->chgBit(oldp+613,((0U == (0x1fU 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))));
            tracep->chgSData(oldp+614,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                         << 0xfU) | 
                                        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                          << 0xeU) 
                                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                             << 0xdU) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                << 0xcU) 
                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                   << 0xbU) 
                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                      << 0xaU) 
                                                     | (0x3ffU 
                                                        & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                            << 2U) 
                                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                              >> 0x1eU)))))))))),16);
            tracep->chgBit(oldp+615,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp));
            tracep->chgBit(oldp+616,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem));
            tracep->chgBit(oldp+617,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr));
            tracep->chgBit(oldp+618,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil));
            tracep->chgBit(oldp+619,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis));
            tracep->chgBit(oldp+620,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme));
            tracep->chgBit(oldp+621,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi));
            tracep->chgBit(oldp+622,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_da)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_pg))));
            tracep->chgBit(oldp+623,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                            >> 0x17U))));
            tracep->chgQData(oldp+624,((((QData)((IData)(
                                                         vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U])) 
                                         << 0x29U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U])) 
                                            << 9U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U])) 
                                              >> 0x17U)))),64);
            tracep->chgIData(oldp+626,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                         << 9U) | (
                                                   vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                   >> 0x17U))),32);
            tracep->chgCData(oldp+627,((0xffU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU] 
                                                  << 8U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                    >> 0x18U)))),8);
            tracep->chgIData(oldp+628,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                         << 0xcU) | 
                                        (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                          << 4U) | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))),32);
            tracep->chgIData(oldp+629,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU]),32);
            tracep->chgCData(oldp+630,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU])),8);
            tracep->chgIData(oldp+631,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                         << 0x18U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+632,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                            >> 8U))));
            tracep->chgIData(oldp+633,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                         << 0x17U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                           >> 9U))),32);
            tracep->chgCData(oldp+634,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index),8);
            tracep->chgCData(oldp+635,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset),4);
            tracep->chgBit(oldp+636,((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush))));
            tracep->chgWData(oldp+637,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r),460);
            tracep->chgBit(oldp+652,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+653,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                            >> 6U))));
            tracep->chgSData(oldp+654,((0xffffU & (
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 9U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 0x17U)))),16);
            tracep->chgBit(oldp+655,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[2U] 
                                            >> 7U))));
            tracep->chgIData(oldp+656,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[1U]),32);
            tracep->chgBit(oldp+657,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+658,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                            >> 8U))));
            tracep->chgIData(oldp+659,(((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                         << 0x17U) 
                                        | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                           >> 9U))),32);
            tracep->chgBit(oldp+660,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 9U))));
            tracep->chgBit(oldp+661,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+662,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+663,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+664,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+665,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+666,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+667,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+668,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+669,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+670,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+671,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+672,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x18U))));
            tracep->chgBit(oldp+673,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[6U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+674,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we));
            tracep->chgBit(oldp+675,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen));
            tracep->chgBit(oldp+676,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (1U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 8U)))))));
            tracep->chgBit(oldp+677,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (4U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 8U)))))));
            tracep->chgBit(oldp+678,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (5U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 8U)))))));
            tracep->chgBit(oldp+679,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (6U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 8U)))))));
            tracep->chgBit(oldp+680,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (7U == (0x3fffU 
                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                    << 0x18U) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                      >> 8U)))))));
            tracep->chgBit(oldp+681,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0xcU == (0x3fffU 
                                                  & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                        >> 8U)))))));
            tracep->chgBit(oldp+682,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x10U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+683,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x11U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+684,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x12U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+685,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x13U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+686,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x18U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+687,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x19U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+688,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x1aU == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+689,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x1bU == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+690,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x20U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+691,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x30U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+692,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x31U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+693,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x32U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+694,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x33U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+695,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x40U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+696,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen));
            tracep->chgBit(oldp+697,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x42U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+698,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x43U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+699,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x44U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+700,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x60U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+701,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x88U == (0x3fffU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                                         >> 8U)))))));
            tracep->chgBit(oldp+702,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen));
            tracep->chgBit(oldp+703,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen));
            tracep->chgBit(oldp+704,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x100U == 
                                         (0x3fffU & 
                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                            << 0x18U) 
                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                              >> 8U)))))));
            tracep->chgBit(oldp+705,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en) 
                                      & (0x101U == 
                                         (0x3fffU & 
                                          ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[4U] 
                                            << 0x18U) 
                                           | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[3U] 
                                              >> 8U)))))));
            tracep->chgIData(oldp+706,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid),32);
            tracep->chgIData(oldp+707,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc),32);
            tracep->chgIData(oldp+708,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl),32);
            tracep->chgIData(oldp+709,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk),32);
            tracep->chgIData(oldp+710,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache),32);
            tracep->chgIData(oldp+711,(((0x80000000U 
                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv)
                                         ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh
                                         : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl)),32);
            tracep->chgBit(oldp+712,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en));
            tracep->chgQData(oldp+713,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64),64);
            tracep->chgBit(oldp+715,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en));
            tracep->chgBit(oldp+716,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en));
            tracep->chgBit(oldp+717,((0x3fU == (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                   >> 0x10U)))));
            tracep->chgBit(oldp+718,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward));
            tracep->chgBit(oldp+719,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state));
            tracep->chgBit(oldp+720,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state));
            tracep->chgCData(oldp+721,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state),3);
            tracep->chgBit(oldp+722,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state));
            tracep->chgBit(oldp+723,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable));
            tracep->chgBit(oldp+724,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state)))));
            tracep->chgBit(oldp+725,((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))));
            tracep->chgBit(oldp+726,((4U == ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                              ? 2U : 4U))));
            tracep->chgCData(oldp+727,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size),3);
            tracep->chgCData(oldp+728,(((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type))
                                         ? 3U : 0U)),8);
            tracep->chgCData(oldp+729,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size),3);
            tracep->chgCData(oldp+730,(((4U == ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en)
                                                 ? 2U
                                                 : 4U))
                                         ? 3U : 0U)),8);
            tracep->chgBit(oldp+731,((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))));
            tracep->chgCData(oldp+732,(((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                         ? 2U : (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))),3);
            tracep->chgCData(oldp+733,(((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type))
                                         ? 3U : 0U)),8);
            tracep->chgWData(oldp+734,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data),128);
            tracep->chgCData(oldp+738,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num),3);
            tracep->chgBit(oldp+739,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num))));
            tracep->chgCData(oldp+740,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps),6);
            tracep->chgIData(oldp+741,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn),20);
            tracep->chgIData(oldp+742,((0x7ffffU & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                         >> 0xdU))),19);
            tracep->chgBit(oldp+743,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                                            >> 0xcU))));
            tracep->chgCData(oldp+744,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps),6);
            tracep->chgIData(oldp+745,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn),20);
            tracep->chgBit(oldp+746,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we));
            tracep->chgCData(oldp+747,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index),5);
            tracep->chgIData(oldp+748,((0x7ffffU & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi 
                                         >> 0xdU))),19);
            tracep->chgBit(oldp+749,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1) 
                                            >> 6U))));
            tracep->chgCData(oldp+750,((0x3fU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx 
                                                 >> 0x18U))),6);
            tracep->chgBit(oldp+751,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e));
            tracep->chgBit(oldp+752,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0)));
            tracep->chgBit(oldp+753,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                            >> 1U))));
            tracep->chgCData(oldp+754,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                              >> 4U))),2);
            tracep->chgCData(oldp+755,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                              >> 2U))),2);
            tracep->chgIData(oldp+756,((0xfffffU & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 
                                         >> 8U))),20);
            tracep->chgBit(oldp+757,((1U & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1)));
            tracep->chgBit(oldp+758,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                            >> 1U))));
            tracep->chgCData(oldp+759,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                              >> 4U))),2);
            tracep->chgCData(oldp+760,((3U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                              >> 2U))),2);
            tracep->chgIData(oldp+761,((0xfffffU & 
                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 
                                         >> 8U))),20);
            tracep->chgCData(oldp+762,((0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)),5);
            tracep->chgIData(oldp+763,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),19);
            tracep->chgBit(oldp+764,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g));
            tracep->chgCData(oldp+765,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),6);
            tracep->chgBit(oldp+766,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e
                                     [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
            tracep->chgBit(oldp+767,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0
                                     [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
            tracep->chgBit(oldp+768,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0
                                     [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
            tracep->chgCData(oldp+769,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
            tracep->chgCData(oldp+770,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
            tracep->chgIData(oldp+771,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),20);
            tracep->chgBit(oldp+772,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1
                                     [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
            tracep->chgBit(oldp+773,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1
                                     [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]));
            tracep->chgCData(oldp+774,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
            tracep->chgCData(oldp+775,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),2);
            tracep->chgIData(oldp+776,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1
                                       [(0x1fU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx)]),20);
            tracep->chgIData(oldp+777,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer),32);
            tracep->chgIData(oldp+778,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer),32);
            tracep->chgIData(oldp+779,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr),32);
            tracep->chgIData(oldp+780,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr),32);
            tracep->chgBit(oldp+781,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode));
            tracep->chgCData(oldp+782,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index),5);
            tracep->chgIData(oldp+783,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[0]),19);
            tracep->chgIData(oldp+784,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[1]),19);
            tracep->chgIData(oldp+785,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[2]),19);
            tracep->chgIData(oldp+786,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[3]),19);
            tracep->chgIData(oldp+787,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[4]),19);
            tracep->chgIData(oldp+788,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[5]),19);
            tracep->chgIData(oldp+789,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[6]),19);
            tracep->chgIData(oldp+790,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[7]),19);
            tracep->chgIData(oldp+791,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[8]),19);
            tracep->chgIData(oldp+792,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[9]),19);
            tracep->chgIData(oldp+793,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[10]),19);
            tracep->chgIData(oldp+794,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[11]),19);
            tracep->chgIData(oldp+795,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[12]),19);
            tracep->chgIData(oldp+796,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[13]),19);
            tracep->chgIData(oldp+797,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[14]),19);
            tracep->chgIData(oldp+798,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[15]),19);
            tracep->chgIData(oldp+799,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[16]),19);
            tracep->chgIData(oldp+800,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[17]),19);
            tracep->chgIData(oldp+801,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[18]),19);
            tracep->chgIData(oldp+802,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[19]),19);
            tracep->chgIData(oldp+803,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[20]),19);
            tracep->chgIData(oldp+804,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[21]),19);
            tracep->chgIData(oldp+805,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[22]),19);
            tracep->chgIData(oldp+806,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[23]),19);
            tracep->chgIData(oldp+807,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[24]),19);
            tracep->chgIData(oldp+808,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[25]),19);
            tracep->chgIData(oldp+809,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[26]),19);
            tracep->chgIData(oldp+810,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[27]),19);
            tracep->chgIData(oldp+811,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[28]),19);
            tracep->chgIData(oldp+812,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[29]),19);
            tracep->chgIData(oldp+813,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[30]),19);
            tracep->chgIData(oldp+814,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[31]),19);
            tracep->chgBit(oldp+815,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[0]));
            tracep->chgBit(oldp+816,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[1]));
            tracep->chgBit(oldp+817,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[2]));
            tracep->chgBit(oldp+818,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[3]));
            tracep->chgBit(oldp+819,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[4]));
            tracep->chgBit(oldp+820,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[5]));
            tracep->chgBit(oldp+821,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[6]));
            tracep->chgBit(oldp+822,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[7]));
            tracep->chgBit(oldp+823,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[8]));
            tracep->chgBit(oldp+824,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[9]));
            tracep->chgBit(oldp+825,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[10]));
            tracep->chgBit(oldp+826,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[11]));
            tracep->chgBit(oldp+827,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[12]));
            tracep->chgBit(oldp+828,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[13]));
            tracep->chgBit(oldp+829,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[14]));
            tracep->chgBit(oldp+830,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[15]));
            tracep->chgBit(oldp+831,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[16]));
            tracep->chgBit(oldp+832,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[17]));
            tracep->chgBit(oldp+833,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[18]));
            tracep->chgBit(oldp+834,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[19]));
            tracep->chgBit(oldp+835,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[20]));
            tracep->chgBit(oldp+836,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[21]));
            tracep->chgBit(oldp+837,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[22]));
            tracep->chgBit(oldp+838,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[23]));
            tracep->chgBit(oldp+839,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[24]));
            tracep->chgBit(oldp+840,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[25]));
            tracep->chgBit(oldp+841,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[26]));
            tracep->chgBit(oldp+842,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[27]));
            tracep->chgBit(oldp+843,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[28]));
            tracep->chgBit(oldp+844,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[29]));
            tracep->chgBit(oldp+845,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[30]));
            tracep->chgBit(oldp+846,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[31]));
            tracep->chgSData(oldp+847,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[0]),10);
            tracep->chgSData(oldp+848,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[1]),10);
            tracep->chgSData(oldp+849,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[2]),10);
            tracep->chgSData(oldp+850,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[3]),10);
            tracep->chgSData(oldp+851,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[4]),10);
            tracep->chgSData(oldp+852,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[5]),10);
            tracep->chgSData(oldp+853,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[6]),10);
            tracep->chgSData(oldp+854,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[7]),10);
            tracep->chgSData(oldp+855,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[8]),10);
            tracep->chgSData(oldp+856,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[9]),10);
            tracep->chgSData(oldp+857,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[10]),10);
            tracep->chgSData(oldp+858,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[11]),10);
            tracep->chgSData(oldp+859,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[12]),10);
            tracep->chgSData(oldp+860,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[13]),10);
            tracep->chgSData(oldp+861,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[14]),10);
            tracep->chgSData(oldp+862,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[15]),10);
            tracep->chgSData(oldp+863,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[16]),10);
            tracep->chgSData(oldp+864,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[17]),10);
            tracep->chgSData(oldp+865,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[18]),10);
            tracep->chgSData(oldp+866,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[19]),10);
            tracep->chgSData(oldp+867,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[20]),10);
            tracep->chgSData(oldp+868,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[21]),10);
            tracep->chgSData(oldp+869,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[22]),10);
            tracep->chgSData(oldp+870,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[23]),10);
            tracep->chgSData(oldp+871,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[24]),10);
            tracep->chgSData(oldp+872,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[25]),10);
            tracep->chgSData(oldp+873,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[26]),10);
            tracep->chgSData(oldp+874,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[27]),10);
            tracep->chgSData(oldp+875,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[28]),10);
            tracep->chgSData(oldp+876,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[29]),10);
            tracep->chgSData(oldp+877,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[30]),10);
            tracep->chgSData(oldp+878,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[31]),10);
            tracep->chgBit(oldp+879,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[0]));
            tracep->chgBit(oldp+880,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[1]));
            tracep->chgBit(oldp+881,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[2]));
            tracep->chgBit(oldp+882,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[3]));
            tracep->chgBit(oldp+883,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[4]));
            tracep->chgBit(oldp+884,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[5]));
            tracep->chgBit(oldp+885,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[6]));
            tracep->chgBit(oldp+886,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[7]));
            tracep->chgBit(oldp+887,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[8]));
            tracep->chgBit(oldp+888,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[9]));
            tracep->chgBit(oldp+889,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[10]));
            tracep->chgBit(oldp+890,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[11]));
            tracep->chgBit(oldp+891,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[12]));
            tracep->chgBit(oldp+892,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[13]));
            tracep->chgBit(oldp+893,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[14]));
            tracep->chgBit(oldp+894,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[15]));
            tracep->chgBit(oldp+895,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[16]));
            tracep->chgBit(oldp+896,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[17]));
            tracep->chgBit(oldp+897,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[18]));
            tracep->chgBit(oldp+898,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[19]));
            tracep->chgBit(oldp+899,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[20]));
            tracep->chgBit(oldp+900,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[21]));
            tracep->chgBit(oldp+901,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[22]));
            tracep->chgBit(oldp+902,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[23]));
            tracep->chgBit(oldp+903,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[24]));
            tracep->chgBit(oldp+904,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[25]));
            tracep->chgBit(oldp+905,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[26]));
            tracep->chgBit(oldp+906,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[27]));
            tracep->chgBit(oldp+907,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[28]));
            tracep->chgBit(oldp+908,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[29]));
            tracep->chgBit(oldp+909,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[30]));
            tracep->chgBit(oldp+910,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[31]));
            tracep->chgCData(oldp+911,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[0]),6);
            tracep->chgCData(oldp+912,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[1]),6);
            tracep->chgCData(oldp+913,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[2]),6);
            tracep->chgCData(oldp+914,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[3]),6);
            tracep->chgCData(oldp+915,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[4]),6);
            tracep->chgCData(oldp+916,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[5]),6);
            tracep->chgCData(oldp+917,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[6]),6);
            tracep->chgCData(oldp+918,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[7]),6);
            tracep->chgCData(oldp+919,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[8]),6);
            tracep->chgCData(oldp+920,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[9]),6);
            tracep->chgCData(oldp+921,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[10]),6);
            tracep->chgCData(oldp+922,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[11]),6);
            tracep->chgCData(oldp+923,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[12]),6);
            tracep->chgCData(oldp+924,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[13]),6);
            tracep->chgCData(oldp+925,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[14]),6);
            tracep->chgCData(oldp+926,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[15]),6);
            tracep->chgCData(oldp+927,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[16]),6);
            tracep->chgCData(oldp+928,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[17]),6);
            tracep->chgCData(oldp+929,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[18]),6);
            tracep->chgCData(oldp+930,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[19]),6);
            tracep->chgCData(oldp+931,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[20]),6);
            tracep->chgCData(oldp+932,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[21]),6);
            tracep->chgCData(oldp+933,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[22]),6);
            tracep->chgCData(oldp+934,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[23]),6);
            tracep->chgCData(oldp+935,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[24]),6);
            tracep->chgCData(oldp+936,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[25]),6);
            tracep->chgCData(oldp+937,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[26]),6);
            tracep->chgCData(oldp+938,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[27]),6);
            tracep->chgCData(oldp+939,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[28]),6);
            tracep->chgCData(oldp+940,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[29]),6);
            tracep->chgCData(oldp+941,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[30]),6);
            tracep->chgCData(oldp+942,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[31]),6);
            tracep->chgIData(oldp+943,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[0]),20);
            tracep->chgIData(oldp+944,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[1]),20);
            tracep->chgIData(oldp+945,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[2]),20);
            tracep->chgIData(oldp+946,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[3]),20);
            tracep->chgIData(oldp+947,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[4]),20);
            tracep->chgIData(oldp+948,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[5]),20);
            tracep->chgIData(oldp+949,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[6]),20);
            tracep->chgIData(oldp+950,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[7]),20);
            tracep->chgIData(oldp+951,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[8]),20);
            tracep->chgIData(oldp+952,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[9]),20);
            tracep->chgIData(oldp+953,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[10]),20);
            tracep->chgIData(oldp+954,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[11]),20);
            tracep->chgIData(oldp+955,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[12]),20);
            tracep->chgIData(oldp+956,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[13]),20);
            tracep->chgIData(oldp+957,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[14]),20);
            tracep->chgIData(oldp+958,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[15]),20);
            tracep->chgIData(oldp+959,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[16]),20);
            tracep->chgIData(oldp+960,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[17]),20);
            tracep->chgIData(oldp+961,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[18]),20);
            tracep->chgIData(oldp+962,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[19]),20);
            tracep->chgIData(oldp+963,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[20]),20);
            tracep->chgIData(oldp+964,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[21]),20);
            tracep->chgIData(oldp+965,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[22]),20);
            tracep->chgIData(oldp+966,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[23]),20);
            tracep->chgIData(oldp+967,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[24]),20);
            tracep->chgIData(oldp+968,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[25]),20);
            tracep->chgIData(oldp+969,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[26]),20);
            tracep->chgIData(oldp+970,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[27]),20);
            tracep->chgIData(oldp+971,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[28]),20);
            tracep->chgIData(oldp+972,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[29]),20);
            tracep->chgIData(oldp+973,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[30]),20);
            tracep->chgIData(oldp+974,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[31]),20);
            tracep->chgCData(oldp+975,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[0]),2);
            tracep->chgCData(oldp+976,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[1]),2);
            tracep->chgCData(oldp+977,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[2]),2);
            tracep->chgCData(oldp+978,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[3]),2);
            tracep->chgCData(oldp+979,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[4]),2);
            tracep->chgCData(oldp+980,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[5]),2);
            tracep->chgCData(oldp+981,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[6]),2);
            tracep->chgCData(oldp+982,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[7]),2);
            tracep->chgCData(oldp+983,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[8]),2);
            tracep->chgCData(oldp+984,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[9]),2);
            tracep->chgCData(oldp+985,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[10]),2);
            tracep->chgCData(oldp+986,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[11]),2);
            tracep->chgCData(oldp+987,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[12]),2);
            tracep->chgCData(oldp+988,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[13]),2);
            tracep->chgCData(oldp+989,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[14]),2);
            tracep->chgCData(oldp+990,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[15]),2);
            tracep->chgCData(oldp+991,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[16]),2);
            tracep->chgCData(oldp+992,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[17]),2);
            tracep->chgCData(oldp+993,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[18]),2);
            tracep->chgCData(oldp+994,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[19]),2);
            tracep->chgCData(oldp+995,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[20]),2);
            tracep->chgCData(oldp+996,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[21]),2);
            tracep->chgCData(oldp+997,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[22]),2);
            tracep->chgCData(oldp+998,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[23]),2);
            tracep->chgCData(oldp+999,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[24]),2);
            tracep->chgCData(oldp+1000,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[25]),2);
            tracep->chgCData(oldp+1001,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[26]),2);
            tracep->chgCData(oldp+1002,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[27]),2);
            tracep->chgCData(oldp+1003,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[28]),2);
            tracep->chgCData(oldp+1004,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[29]),2);
            tracep->chgCData(oldp+1005,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[30]),2);
            tracep->chgCData(oldp+1006,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[31]),2);
            tracep->chgCData(oldp+1007,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[0]),2);
            tracep->chgCData(oldp+1008,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[1]),2);
            tracep->chgCData(oldp+1009,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[2]),2);
            tracep->chgCData(oldp+1010,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[3]),2);
            tracep->chgCData(oldp+1011,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[4]),2);
            tracep->chgCData(oldp+1012,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[5]),2);
            tracep->chgCData(oldp+1013,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[6]),2);
            tracep->chgCData(oldp+1014,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[7]),2);
            tracep->chgCData(oldp+1015,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[8]),2);
            tracep->chgCData(oldp+1016,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[9]),2);
            tracep->chgCData(oldp+1017,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[10]),2);
            tracep->chgCData(oldp+1018,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[11]),2);
            tracep->chgCData(oldp+1019,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[12]),2);
            tracep->chgCData(oldp+1020,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[13]),2);
            tracep->chgCData(oldp+1021,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[14]),2);
            tracep->chgCData(oldp+1022,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[15]),2);
            tracep->chgCData(oldp+1023,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[16]),2);
            tracep->chgCData(oldp+1024,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[17]),2);
            tracep->chgCData(oldp+1025,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[18]),2);
            tracep->chgCData(oldp+1026,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[19]),2);
            tracep->chgCData(oldp+1027,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[20]),2);
            tracep->chgCData(oldp+1028,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[21]),2);
            tracep->chgCData(oldp+1029,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[22]),2);
            tracep->chgCData(oldp+1030,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[23]),2);
            tracep->chgCData(oldp+1031,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[24]),2);
            tracep->chgCData(oldp+1032,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[25]),2);
            tracep->chgCData(oldp+1033,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[26]),2);
            tracep->chgCData(oldp+1034,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[27]),2);
            tracep->chgCData(oldp+1035,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[28]),2);
            tracep->chgCData(oldp+1036,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[29]),2);
            tracep->chgCData(oldp+1037,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[30]),2);
            tracep->chgCData(oldp+1038,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[31]),2);
            tracep->chgBit(oldp+1039,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[0]));
            tracep->chgBit(oldp+1040,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[1]));
            tracep->chgBit(oldp+1041,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[2]));
            tracep->chgBit(oldp+1042,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[3]));
            tracep->chgBit(oldp+1043,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[4]));
            tracep->chgBit(oldp+1044,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[5]));
            tracep->chgBit(oldp+1045,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[6]));
            tracep->chgBit(oldp+1046,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[7]));
            tracep->chgBit(oldp+1047,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[8]));
            tracep->chgBit(oldp+1048,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[9]));
            tracep->chgBit(oldp+1049,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[10]));
            tracep->chgBit(oldp+1050,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[11]));
            tracep->chgBit(oldp+1051,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[12]));
            tracep->chgBit(oldp+1052,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[13]));
            tracep->chgBit(oldp+1053,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[14]));
            tracep->chgBit(oldp+1054,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[15]));
            tracep->chgBit(oldp+1055,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[16]));
            tracep->chgBit(oldp+1056,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[17]));
            tracep->chgBit(oldp+1057,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[18]));
            tracep->chgBit(oldp+1058,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[19]));
            tracep->chgBit(oldp+1059,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[20]));
            tracep->chgBit(oldp+1060,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[21]));
            tracep->chgBit(oldp+1061,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[22]));
            tracep->chgBit(oldp+1062,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[23]));
            tracep->chgBit(oldp+1063,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[24]));
            tracep->chgBit(oldp+1064,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[25]));
            tracep->chgBit(oldp+1065,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[26]));
            tracep->chgBit(oldp+1066,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[27]));
            tracep->chgBit(oldp+1067,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[28]));
            tracep->chgBit(oldp+1068,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[29]));
            tracep->chgBit(oldp+1069,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[30]));
            tracep->chgBit(oldp+1070,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[31]));
            tracep->chgBit(oldp+1071,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[0]));
            tracep->chgBit(oldp+1072,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[1]));
            tracep->chgBit(oldp+1073,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[2]));
            tracep->chgBit(oldp+1074,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[3]));
            tracep->chgBit(oldp+1075,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[4]));
            tracep->chgBit(oldp+1076,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[5]));
            tracep->chgBit(oldp+1077,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[6]));
            tracep->chgBit(oldp+1078,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[7]));
            tracep->chgBit(oldp+1079,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[8]));
            tracep->chgBit(oldp+1080,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[9]));
            tracep->chgBit(oldp+1081,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[10]));
            tracep->chgBit(oldp+1082,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[11]));
            tracep->chgBit(oldp+1083,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[12]));
            tracep->chgBit(oldp+1084,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[13]));
            tracep->chgBit(oldp+1085,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[14]));
            tracep->chgBit(oldp+1086,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[15]));
            tracep->chgBit(oldp+1087,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[16]));
            tracep->chgBit(oldp+1088,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[17]));
            tracep->chgBit(oldp+1089,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[18]));
            tracep->chgBit(oldp+1090,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[19]));
            tracep->chgBit(oldp+1091,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[20]));
            tracep->chgBit(oldp+1092,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[21]));
            tracep->chgBit(oldp+1093,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[22]));
            tracep->chgBit(oldp+1094,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[23]));
            tracep->chgBit(oldp+1095,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[24]));
            tracep->chgBit(oldp+1096,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[25]));
            tracep->chgBit(oldp+1097,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[26]));
            tracep->chgBit(oldp+1098,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[27]));
            tracep->chgBit(oldp+1099,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[28]));
            tracep->chgBit(oldp+1100,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[29]));
            tracep->chgBit(oldp+1101,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[30]));
            tracep->chgBit(oldp+1102,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[31]));
            tracep->chgIData(oldp+1103,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[0]),20);
            tracep->chgIData(oldp+1104,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[1]),20);
            tracep->chgIData(oldp+1105,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[2]),20);
            tracep->chgIData(oldp+1106,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[3]),20);
            tracep->chgIData(oldp+1107,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[4]),20);
            tracep->chgIData(oldp+1108,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[5]),20);
            tracep->chgIData(oldp+1109,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[6]),20);
            tracep->chgIData(oldp+1110,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[7]),20);
            tracep->chgIData(oldp+1111,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[8]),20);
            tracep->chgIData(oldp+1112,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[9]),20);
            tracep->chgIData(oldp+1113,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[10]),20);
            tracep->chgIData(oldp+1114,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[11]),20);
            tracep->chgIData(oldp+1115,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[12]),20);
            tracep->chgIData(oldp+1116,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[13]),20);
            tracep->chgIData(oldp+1117,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[14]),20);
            tracep->chgIData(oldp+1118,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[15]),20);
            tracep->chgIData(oldp+1119,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[16]),20);
            tracep->chgIData(oldp+1120,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[17]),20);
            tracep->chgIData(oldp+1121,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[18]),20);
            tracep->chgIData(oldp+1122,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[19]),20);
            tracep->chgIData(oldp+1123,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[20]),20);
            tracep->chgIData(oldp+1124,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[21]),20);
            tracep->chgIData(oldp+1125,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[22]),20);
            tracep->chgIData(oldp+1126,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[23]),20);
            tracep->chgIData(oldp+1127,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[24]),20);
            tracep->chgIData(oldp+1128,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[25]),20);
            tracep->chgIData(oldp+1129,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[26]),20);
            tracep->chgIData(oldp+1130,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[27]),20);
            tracep->chgIData(oldp+1131,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[28]),20);
            tracep->chgIData(oldp+1132,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[29]),20);
            tracep->chgIData(oldp+1133,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[30]),20);
            tracep->chgIData(oldp+1134,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[31]),20);
            tracep->chgCData(oldp+1135,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[0]),2);
            tracep->chgCData(oldp+1136,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[1]),2);
            tracep->chgCData(oldp+1137,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[2]),2);
            tracep->chgCData(oldp+1138,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[3]),2);
            tracep->chgCData(oldp+1139,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[4]),2);
            tracep->chgCData(oldp+1140,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[5]),2);
            tracep->chgCData(oldp+1141,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[6]),2);
            tracep->chgCData(oldp+1142,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[7]),2);
            tracep->chgCData(oldp+1143,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[8]),2);
            tracep->chgCData(oldp+1144,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[9]),2);
            tracep->chgCData(oldp+1145,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[10]),2);
            tracep->chgCData(oldp+1146,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[11]),2);
            tracep->chgCData(oldp+1147,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[12]),2);
            tracep->chgCData(oldp+1148,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[13]),2);
            tracep->chgCData(oldp+1149,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[14]),2);
            tracep->chgCData(oldp+1150,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[15]),2);
            tracep->chgCData(oldp+1151,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[16]),2);
            tracep->chgCData(oldp+1152,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[17]),2);
            tracep->chgCData(oldp+1153,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[18]),2);
            tracep->chgCData(oldp+1154,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[19]),2);
            tracep->chgCData(oldp+1155,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[20]),2);
            tracep->chgCData(oldp+1156,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[21]),2);
            tracep->chgCData(oldp+1157,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[22]),2);
            tracep->chgCData(oldp+1158,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[23]),2);
            tracep->chgCData(oldp+1159,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[24]),2);
            tracep->chgCData(oldp+1160,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[25]),2);
            tracep->chgCData(oldp+1161,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[26]),2);
            tracep->chgCData(oldp+1162,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[27]),2);
            tracep->chgCData(oldp+1163,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[28]),2);
            tracep->chgCData(oldp+1164,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[29]),2);
            tracep->chgCData(oldp+1165,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[30]),2);
            tracep->chgCData(oldp+1166,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[31]),2);
            tracep->chgCData(oldp+1167,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[0]),2);
            tracep->chgCData(oldp+1168,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[1]),2);
            tracep->chgCData(oldp+1169,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[2]),2);
            tracep->chgCData(oldp+1170,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[3]),2);
            tracep->chgCData(oldp+1171,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[4]),2);
            tracep->chgCData(oldp+1172,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[5]),2);
            tracep->chgCData(oldp+1173,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[6]),2);
            tracep->chgCData(oldp+1174,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[7]),2);
            tracep->chgCData(oldp+1175,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[8]),2);
            tracep->chgCData(oldp+1176,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[9]),2);
            tracep->chgCData(oldp+1177,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[10]),2);
            tracep->chgCData(oldp+1178,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[11]),2);
            tracep->chgCData(oldp+1179,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[12]),2);
            tracep->chgCData(oldp+1180,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[13]),2);
            tracep->chgCData(oldp+1181,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[14]),2);
            tracep->chgCData(oldp+1182,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[15]),2);
            tracep->chgCData(oldp+1183,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[16]),2);
            tracep->chgCData(oldp+1184,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[17]),2);
            tracep->chgCData(oldp+1185,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[18]),2);
            tracep->chgCData(oldp+1186,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[19]),2);
            tracep->chgCData(oldp+1187,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[20]),2);
            tracep->chgCData(oldp+1188,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[21]),2);
            tracep->chgCData(oldp+1189,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[22]),2);
            tracep->chgCData(oldp+1190,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[23]),2);
            tracep->chgCData(oldp+1191,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[24]),2);
            tracep->chgCData(oldp+1192,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[25]),2);
            tracep->chgCData(oldp+1193,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[26]),2);
            tracep->chgCData(oldp+1194,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[27]),2);
            tracep->chgCData(oldp+1195,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[28]),2);
            tracep->chgCData(oldp+1196,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[29]),2);
            tracep->chgCData(oldp+1197,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[30]),2);
            tracep->chgCData(oldp+1198,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[31]),2);
            tracep->chgBit(oldp+1199,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[0]));
            tracep->chgBit(oldp+1200,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[1]));
            tracep->chgBit(oldp+1201,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[2]));
            tracep->chgBit(oldp+1202,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[3]));
            tracep->chgBit(oldp+1203,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[4]));
            tracep->chgBit(oldp+1204,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[5]));
            tracep->chgBit(oldp+1205,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[6]));
            tracep->chgBit(oldp+1206,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[7]));
            tracep->chgBit(oldp+1207,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[8]));
            tracep->chgBit(oldp+1208,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[9]));
            tracep->chgBit(oldp+1209,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[10]));
            tracep->chgBit(oldp+1210,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[11]));
            tracep->chgBit(oldp+1211,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[12]));
            tracep->chgBit(oldp+1212,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[13]));
            tracep->chgBit(oldp+1213,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[14]));
            tracep->chgBit(oldp+1214,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[15]));
            tracep->chgBit(oldp+1215,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[16]));
            tracep->chgBit(oldp+1216,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[17]));
            tracep->chgBit(oldp+1217,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[18]));
            tracep->chgBit(oldp+1218,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[19]));
            tracep->chgBit(oldp+1219,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[20]));
            tracep->chgBit(oldp+1220,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[21]));
            tracep->chgBit(oldp+1221,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[22]));
            tracep->chgBit(oldp+1222,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[23]));
            tracep->chgBit(oldp+1223,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[24]));
            tracep->chgBit(oldp+1224,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[25]));
            tracep->chgBit(oldp+1225,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[26]));
            tracep->chgBit(oldp+1226,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[27]));
            tracep->chgBit(oldp+1227,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[28]));
            tracep->chgBit(oldp+1228,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[29]));
            tracep->chgBit(oldp+1229,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[30]));
            tracep->chgBit(oldp+1230,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[31]));
            tracep->chgBit(oldp+1231,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[0]));
            tracep->chgBit(oldp+1232,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[1]));
            tracep->chgBit(oldp+1233,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[2]));
            tracep->chgBit(oldp+1234,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[3]));
            tracep->chgBit(oldp+1235,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[4]));
            tracep->chgBit(oldp+1236,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[5]));
            tracep->chgBit(oldp+1237,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[6]));
            tracep->chgBit(oldp+1238,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[7]));
            tracep->chgBit(oldp+1239,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[8]));
            tracep->chgBit(oldp+1240,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[9]));
            tracep->chgBit(oldp+1241,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[10]));
            tracep->chgBit(oldp+1242,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[11]));
            tracep->chgBit(oldp+1243,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[12]));
            tracep->chgBit(oldp+1244,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[13]));
            tracep->chgBit(oldp+1245,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[14]));
            tracep->chgBit(oldp+1246,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[15]));
            tracep->chgBit(oldp+1247,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[16]));
            tracep->chgBit(oldp+1248,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[17]));
            tracep->chgBit(oldp+1249,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[18]));
            tracep->chgBit(oldp+1250,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[19]));
            tracep->chgBit(oldp+1251,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[20]));
            tracep->chgBit(oldp+1252,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[21]));
            tracep->chgBit(oldp+1253,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[22]));
            tracep->chgBit(oldp+1254,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[23]));
            tracep->chgBit(oldp+1255,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[24]));
            tracep->chgBit(oldp+1256,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[25]));
            tracep->chgBit(oldp+1257,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[26]));
            tracep->chgBit(oldp+1258,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[27]));
            tracep->chgBit(oldp+1259,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[28]));
            tracep->chgBit(oldp+1260,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[29]));
            tracep->chgBit(oldp+1261,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[30]));
            tracep->chgBit(oldp+1262,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[31]));
            tracep->chgIData(oldp+1263,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0),32);
            tracep->chgIData(oldp+1264,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1),32);
            tracep->chgIData(oldp+1265,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer),32);
            tracep->chgIData(oldp+1266,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer),32);
            tracep->chgBit(oldp+1267,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op));
            tracep->chgCData(oldp+1268,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index),8);
            tracep->chgIData(oldp+1269,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag),20);
            tracep->chgCData(oldp+1270,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset),4);
            tracep->chgCData(oldp+1271,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb),4);
            tracep->chgIData(oldp+1272,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata),32);
            tracep->chgBit(oldp+1273,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en));
            tracep->chgBit(oldp+1274,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop));
            tracep->chgCData(oldp+1275,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode),2);
            tracep->chgBit(oldp+1276,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way));
            tracep->chgCData(oldp+1277,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num),2);
            tracep->chgCData(oldp+1278,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one),2);
            tracep->chgIData(oldp+1279,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer),32);
            tracep->chgBit(oldp+1280,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena));
            tracep->chgIData(oldp+1281,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer),32);
            tracep->chgIData(oldp+1282,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer),32);
            tracep->chgIData(oldp+1283,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer),32);
            tracep->chgIData(oldp+1284,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer),32);
            tracep->chgIData(oldp+1285,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer),32);
            tracep->chgIData(oldp+1286,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer),32);
            tracep->chgIData(oldp+1287,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer),32);
            tracep->chgIData(oldp+1288,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina),21);
            tracep->chgIData(oldp+1289,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer),21);
            tracep->chgBit(oldp+1290,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena));
            tracep->chgIData(oldp+1291,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer),21);
            tracep->chgBit(oldp+1292,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit));
            tracep->chgBit(oldp+1293,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit));
            tracep->chgBit(oldp+1294,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit));
            __Vtemp1002[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
            __Vtemp1002[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
            __Vtemp1002[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
            __Vtemp1002[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            tracep->chgIData(oldp+1295,(__Vtemp1002[
                                        (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                               >> 2U))]),32);
            __Vtemp1004[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
            __Vtemp1004[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
            __Vtemp1004[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
            __Vtemp1004[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            tracep->chgIData(oldp+1296,(__Vtemp1004[
                                        (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                               >> 2U))]),32);
            __Vtemp1006[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
            __Vtemp1006[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
            __Vtemp1006[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
            __Vtemp1006[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            __Vtemp1008[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
            __Vtemp1008[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
            __Vtemp1008[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
            __Vtemp1008[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            tracep->chgIData(oldp+1297,((((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit))) 
                                          & __Vtemp1006[
                                          (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                                 >> 2U))]) 
                                         | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit))) 
                                            & __Vtemp1008[
                                            (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset) 
                                                   >> 2U))]))),32);
            __Vtemp1010[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer;
            __Vtemp1010[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer;
            __Vtemp1010[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))));
            __Vtemp1010[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+1298,(__Vtemp1010),128);
            __Vtemp1012[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer;
            __Vtemp1012[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer;
            __Vtemp1012[2U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))));
            __Vtemp1012[3U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer))) 
                                       >> 0x20U));
            tracep->chgWData(oldp+1302,(__Vtemp1012),128);
            tracep->chgBit(oldp+1306,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
            tracep->chgBit(oldp+1307,((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
            tracep->chgBit(oldp+1308,((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
            tracep->chgBit(oldp+1309,((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))));
            tracep->chgBit(oldp+1310,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0));
            tracep->chgBit(oldp+1311,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1));
            tracep->chgBit(oldp+1312,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2));
            tracep->chgBit(oldp+1313,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 7U))));
            tracep->chgBit(oldp+1314,((1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset)) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer))) 
                                             | ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)) 
                                                & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                                       >> 7U)) 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))))));
            tracep->chgBit(oldp+1315,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr));
            tracep->chgBit(oldp+1316,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer))) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer)))));
            tracep->chgBit(oldp+1317,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer));
            tracep->chgBit(oldp+1318,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer));
            tracep->chgIData(oldp+1319,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag),20);
            tracep->chgCData(oldp+1320,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state),5);
            tracep->chgBit(oldp+1321,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer));
            tracep->chgBit(oldp+1322,((1U & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr) 
                                                 >> 7U)) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer))));
            tracep->chgCData(oldp+1323,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr),8);
            tracep->chgWData(oldp+1324,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg),256);
            tracep->chgWData(oldp+1332,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg),256);
            tracep->chgBit(oldp+1340,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op));
            tracep->chgBit(oldp+1341,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld));
            tracep->chgCData(oldp+1342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size),3);
            tracep->chgCData(oldp+1343,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index),8);
            tracep->chgIData(oldp+1344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag),20);
            tracep->chgCData(oldp+1345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset),4);
            tracep->chgCData(oldp+1346,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb),4);
            tracep->chgIData(oldp+1347,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata),32);
            tracep->chgBit(oldp+1348,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en));
            tracep->chgBit(oldp+1349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop));
            tracep->chgCData(oldp+1350,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode),2);
            tracep->chgBit(oldp+1351,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way));
            tracep->chgCData(oldp+1352,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num),2);
            tracep->chgCData(oldp+1353,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one),2);
            tracep->chgCData(oldp+1354,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index),8);
            tracep->chgCData(oldp+1355,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb),4);
            tracep->chgIData(oldp+1356,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata),32);
            tracep->chgBit(oldp+1357,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way));
            tracep->chgCData(oldp+1358,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_offset),4);
            tracep->chgCData(oldp+1359,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra),8);
            tracep->chgIData(oldp+1360,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer),32);
            tracep->chgBit(oldp+1361,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena));
            tracep->chgCData(oldp+1362,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra),8);
            tracep->chgIData(oldp+1363,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer),32);
            tracep->chgCData(oldp+1364,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra),8);
            tracep->chgIData(oldp+1365,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer),32);
            tracep->chgCData(oldp+1366,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra),8);
            tracep->chgIData(oldp+1367,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer),32);
            tracep->chgCData(oldp+1368,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra),8);
            tracep->chgIData(oldp+1369,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer),32);
            tracep->chgCData(oldp+1370,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra),8);
            tracep->chgIData(oldp+1371,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer),32);
            tracep->chgCData(oldp+1372,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra),8);
            tracep->chgIData(oldp+1373,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer),32);
            tracep->chgCData(oldp+1374,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra),8);
            tracep->chgIData(oldp+1375,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer),32);
            tracep->chgCData(oldp+1376,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra),8);
            tracep->chgIData(oldp+1377,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina),21);
            tracep->chgIData(oldp+1378,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer),21);
            tracep->chgBit(oldp+1379,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena));
            tracep->chgIData(oldp+1380,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer),21);
            tracep->chgBit(oldp+1381,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0));
            tracep->chgBit(oldp+1382,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1));
            tracep->chgBit(oldp+1383,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2));
            tracep->chgBit(oldp+1384,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3));
            tracep->chgBit(oldp+1385,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0));
            tracep->chgBit(oldp+1386,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1));
            tracep->chgBit(oldp+1387,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2));
            tracep->chgBit(oldp+1388,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3));
            tracep->chgCData(oldp+1389,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index),8);
            tracep->chgBit(oldp+1390,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))))));
            tracep->chgBit(oldp+1391,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                                             ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                              >> 5U)] 
                                             >> (0x1fU 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index))))));
            tracep->chgBit(oldp+1392,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit));
            tracep->chgBit(oldp+1393,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit));
            tracep->chgBit(oldp+1394,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit));
            tracep->chgIData(oldp+1395,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                                        (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                               >> 2U))]),32);
            tracep->chgIData(oldp+1396,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                        (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                               >> 2U))]),32);
            tracep->chgIData(oldp+1397,((((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit))) 
                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[
                                          (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                                 >> 2U))]) 
                                         | ((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[
                                            (3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                                   >> 2U))]))),32);
            tracep->chgWData(oldp+1398,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data),128);
            tracep->chgWData(oldp+1402,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data),128);
            if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way) {
                __Vtemp1013[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[0U];
                __Vtemp1013[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[1U];
                __Vtemp1013[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[2U];
                __Vtemp1013[3U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data[3U];
            } else {
                __Vtemp1013[0U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[0U];
                __Vtemp1013[1U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[1U];
                __Vtemp1013[2U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[2U];
                __Vtemp1013[3U] = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data[3U];
            }
            tracep->chgWData(oldp+1406,(__Vtemp1013),128);
            tracep->chgBit(oldp+1410,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                              ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg[
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))
                                              : (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg[
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index) 
                                                  >> 5U)] 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index)))))));
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way)
                                              ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer
                                              : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
            tracep->chgIData(oldp+1412,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way)
                                          ? (0xfffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer 
                                                >> 1U))
                                          : (0xfffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer 
                                                >> 1U)))),21);
            tracep->chgBit(oldp+1413,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                             >> 7U))));
            tracep->chgBit(oldp+1414,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way));
            tracep->chgBit(oldp+1415,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup));
            tracep->chgBit(oldp+1416,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup));
            tracep->chgBit(oldp+1417,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
            tracep->chgBit(oldp+1418,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
            tracep->chgBit(oldp+1419,((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
            tracep->chgBit(oldp+1420,((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
            tracep->chgBit(oldp+1421,((0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state))));
            tracep->chgBit(oldp+1422,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state)))));
            tracep->chgBit(oldp+1423,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state));
            tracep->chgBit(oldp+1424,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr));
            tracep->chgBit(oldp+1425,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0));
            tracep->chgBit(oldp+1426,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1));
            tracep->chgBit(oldp+1427,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2));
            tracep->chgBit(oldp+1428,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr));
            tracep->chgBit(oldp+1429,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer))) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer)))));
            tracep->chgBit(oldp+1430,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer));
            tracep->chgBit(oldp+1431,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer));
            tracep->chgCData(oldp+1432,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state),5);
            tracep->chgBit(oldp+1433,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer));
            tracep->chgBit(oldp+1434,((1U & (((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer) 
                                              | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr) 
                                                 >> 7U)) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer))));
            tracep->chgCData(oldp+1435,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr),8);
            tracep->chgIData(oldp+1436,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[0]),30);
            tracep->chgIData(oldp+1437,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[1]),30);
            tracep->chgIData(oldp+1438,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[2]),30);
            tracep->chgIData(oldp+1439,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[3]),30);
            tracep->chgIData(oldp+1440,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[4]),30);
            tracep->chgIData(oldp+1441,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[5]),30);
            tracep->chgIData(oldp+1442,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[6]),30);
            tracep->chgIData(oldp+1443,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[7]),30);
            tracep->chgIData(oldp+1444,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[8]),30);
            tracep->chgIData(oldp+1445,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[9]),30);
            tracep->chgIData(oldp+1446,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[10]),30);
            tracep->chgIData(oldp+1447,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[11]),30);
            tracep->chgIData(oldp+1448,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[12]),30);
            tracep->chgIData(oldp+1449,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[13]),30);
            tracep->chgIData(oldp+1450,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[14]),30);
            tracep->chgIData(oldp+1451,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[15]),30);
            tracep->chgIData(oldp+1452,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[16]),30);
            tracep->chgIData(oldp+1453,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[17]),30);
            tracep->chgIData(oldp+1454,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[18]),30);
            tracep->chgIData(oldp+1455,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[19]),30);
            tracep->chgIData(oldp+1456,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[20]),30);
            tracep->chgIData(oldp+1457,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[21]),30);
            tracep->chgIData(oldp+1458,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[22]),30);
            tracep->chgIData(oldp+1459,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[23]),30);
            tracep->chgIData(oldp+1460,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[24]),30);
            tracep->chgIData(oldp+1461,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[25]),30);
            tracep->chgIData(oldp+1462,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[26]),30);
            tracep->chgIData(oldp+1463,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[27]),30);
            tracep->chgIData(oldp+1464,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[28]),30);
            tracep->chgIData(oldp+1465,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[29]),30);
            tracep->chgIData(oldp+1466,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[30]),30);
            tracep->chgIData(oldp+1467,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[31]),30);
            tracep->chgIData(oldp+1468,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[0]),30);
            tracep->chgIData(oldp+1469,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[1]),30);
            tracep->chgIData(oldp+1470,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[2]),30);
            tracep->chgIData(oldp+1471,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[3]),30);
            tracep->chgIData(oldp+1472,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[4]),30);
            tracep->chgIData(oldp+1473,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[5]),30);
            tracep->chgIData(oldp+1474,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[6]),30);
            tracep->chgIData(oldp+1475,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[7]),30);
            tracep->chgIData(oldp+1476,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[8]),30);
            tracep->chgIData(oldp+1477,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[9]),30);
            tracep->chgIData(oldp+1478,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[10]),30);
            tracep->chgIData(oldp+1479,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[11]),30);
            tracep->chgIData(oldp+1480,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[12]),30);
            tracep->chgIData(oldp+1481,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[13]),30);
            tracep->chgIData(oldp+1482,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[14]),30);
            tracep->chgIData(oldp+1483,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[15]),30);
            tracep->chgIData(oldp+1484,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[16]),30);
            tracep->chgIData(oldp+1485,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[17]),30);
            tracep->chgIData(oldp+1486,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[18]),30);
            tracep->chgIData(oldp+1487,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[19]),30);
            tracep->chgIData(oldp+1488,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[20]),30);
            tracep->chgIData(oldp+1489,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[21]),30);
            tracep->chgIData(oldp+1490,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[22]),30);
            tracep->chgIData(oldp+1491,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[23]),30);
            tracep->chgIData(oldp+1492,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[24]),30);
            tracep->chgIData(oldp+1493,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[25]),30);
            tracep->chgIData(oldp+1494,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[26]),30);
            tracep->chgIData(oldp+1495,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[27]),30);
            tracep->chgIData(oldp+1496,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[28]),30);
            tracep->chgIData(oldp+1497,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[29]),30);
            tracep->chgIData(oldp+1498,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[30]),30);
            tracep->chgIData(oldp+1499,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[31]),30);
            tracep->chgCData(oldp+1500,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[0]),3);
            tracep->chgCData(oldp+1501,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[1]),3);
            tracep->chgCData(oldp+1502,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[2]),3);
            tracep->chgCData(oldp+1503,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[3]),3);
            tracep->chgCData(oldp+1504,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[4]),3);
            tracep->chgCData(oldp+1505,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[5]),3);
            tracep->chgCData(oldp+1506,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[6]),3);
            tracep->chgCData(oldp+1507,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[7]),3);
            tracep->chgCData(oldp+1508,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[8]),3);
            tracep->chgCData(oldp+1509,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[9]),3);
            tracep->chgCData(oldp+1510,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[10]),3);
            tracep->chgCData(oldp+1511,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[11]),3);
            tracep->chgCData(oldp+1512,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[12]),3);
            tracep->chgCData(oldp+1513,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[13]),3);
            tracep->chgCData(oldp+1514,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[14]),3);
            tracep->chgCData(oldp+1515,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[15]),3);
            tracep->chgCData(oldp+1516,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[16]),3);
            tracep->chgCData(oldp+1517,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[17]),3);
            tracep->chgCData(oldp+1518,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[18]),3);
            tracep->chgCData(oldp+1519,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[19]),3);
            tracep->chgCData(oldp+1520,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[20]),3);
            tracep->chgCData(oldp+1521,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[21]),3);
            tracep->chgCData(oldp+1522,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[22]),3);
            tracep->chgCData(oldp+1523,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[23]),3);
            tracep->chgCData(oldp+1524,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[24]),3);
            tracep->chgCData(oldp+1525,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[25]),3);
            tracep->chgCData(oldp+1526,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[26]),3);
            tracep->chgCData(oldp+1527,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[27]),3);
            tracep->chgCData(oldp+1528,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[28]),3);
            tracep->chgCData(oldp+1529,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[29]),3);
            tracep->chgCData(oldp+1530,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[30]),3);
            tracep->chgCData(oldp+1531,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[31]),3);
            tracep->chgIData(oldp+1532,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag),32);
            tracep->chgIData(oldp+1533,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid),32);
            tracep->chgIData(oldp+1534,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[0]),30);
            tracep->chgIData(oldp+1535,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[1]),30);
            tracep->chgIData(oldp+1536,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[2]),30);
            tracep->chgIData(oldp+1537,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[3]),30);
            tracep->chgIData(oldp+1538,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[4]),30);
            tracep->chgIData(oldp+1539,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[5]),30);
            tracep->chgIData(oldp+1540,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[6]),30);
            tracep->chgIData(oldp+1541,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[7]),30);
            tracep->chgCData(oldp+1542,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr),3);
            tracep->chgIData(oldp+1543,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer),30);
            tracep->chgBit(oldp+1544,((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))));
            tracep->chgBit(oldp+1545,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr))));
            tracep->chgIData(oldp+1546,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd),32);
            tracep->chgIData(oldp+1547,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target),30);
            tracep->chgCData(oldp+1548,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter),3);
            tracep->chgBit(oldp+1549,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag));
            tracep->chgBit(oldp+1550,((0xffffffffU 
                                       == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid)));
            tracep->chgCData(oldp+1551,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__select_one_invalid_entry),5);
            tracep->chgCData(oldp+1552,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index),5);
            tracep->chgCData(oldp+1553,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr),6);
            tracep->chgIData(oldp+1554,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter),32);
            tracep->chgIData(oldp+1555,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter),32);
            tracep->chgIData(oldp+1556,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter),32);
            tracep->chgIData(oldp+1557,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter),32);
            tracep->chgIData(oldp+1558,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter),32);
            tracep->chgIData(oldp+1559,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter),32);
            tracep->chgIData(oldp+1560,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter),32);
            tracep->chgQData(oldp+1561,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc))),64);
            tracep->chgQData(oldp+1563,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata))),64);
            tracep->chgIData(oldp+1565,((0x7ffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat 
                                                   >> 2U))),32);
            tracep->chgIData(oldp+1566,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode),32);
            tracep->chgCData(oldp+1567,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__trap_code))),3);
            tracep->chgQData(oldp+1568,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr))),64);
            tracep->chgQData(oldp+1570,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr))),64);
            tracep->chgQData(oldp+1572,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data))),64);
            tracep->chgQData(oldp+1574,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr))),64);
            tracep->chgQData(oldp+1576,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr))),64);
            tracep->chgQData(oldp+1578,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd))),64);
            tracep->chgQData(oldp+1580,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd))),64);
            tracep->chgQData(oldp+1582,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl))),64);
            tracep->chgQData(oldp+1584,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat))),64);
            tracep->chgQData(oldp+1586,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era))),64);
            tracep->chgQData(oldp+1588,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv))),64);
            tracep->chgQData(oldp+1590,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry))),64);
            tracep->chgQData(oldp+1592,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx))),64);
            tracep->chgQData(oldp+1594,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi))),64);
            tracep->chgQData(oldp+1596,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0))),64);
            tracep->chgQData(oldp+1598,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1))),64);
            tracep->chgQData(oldp+1600,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid))),64);
            tracep->chgQData(oldp+1602,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl))),64);
            tracep->chgQData(oldp+1604,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh))),64);
            tracep->chgQData(oldp+1606,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0))),64);
            tracep->chgQData(oldp+1608,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1))),64);
            tracep->chgQData(oldp+1610,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2))),64);
            tracep->chgQData(oldp+1612,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3))),64);
            tracep->chgQData(oldp+1614,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))),64);
            tracep->chgQData(oldp+1616,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg))),64);
            tracep->chgQData(oldp+1618,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval))),64);
            tracep->chgQData(oldp+1620,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr))),64);
            tracep->chgQData(oldp+1622,((QData)((IData)(
                                                        ((0xfffffffeU 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))))),64);
            tracep->chgQData(oldp+1624,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry))),64);
            tracep->chgQData(oldp+1626,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0))),64);
            tracep->chgQData(oldp+1628,((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1))),64);
            tracep->chgQData(oldp+1630,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [1U]))),64);
            tracep->chgQData(oldp+1632,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [2U]))),64);
            tracep->chgQData(oldp+1634,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [3U]))),64);
            tracep->chgQData(oldp+1636,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [4U]))),64);
            tracep->chgQData(oldp+1638,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [5U]))),64);
            tracep->chgQData(oldp+1640,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [6U]))),64);
            tracep->chgQData(oldp+1642,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [7U]))),64);
            tracep->chgQData(oldp+1644,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [8U]))),64);
            tracep->chgQData(oldp+1646,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [9U]))),64);
            tracep->chgQData(oldp+1648,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xaU]))),64);
            tracep->chgQData(oldp+1650,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xbU]))),64);
            tracep->chgQData(oldp+1652,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xcU]))),64);
            tracep->chgQData(oldp+1654,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xdU]))),64);
            tracep->chgQData(oldp+1656,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xeU]))),64);
            tracep->chgQData(oldp+1658,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0xfU]))),64);
            tracep->chgQData(oldp+1660,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x10U]))),64);
            tracep->chgQData(oldp+1662,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x11U]))),64);
            tracep->chgQData(oldp+1664,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x12U]))),64);
            tracep->chgQData(oldp+1666,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x13U]))),64);
            tracep->chgQData(oldp+1668,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x14U]))),64);
            tracep->chgQData(oldp+1670,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x15U]))),64);
            tracep->chgQData(oldp+1672,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x16U]))),64);
            tracep->chgQData(oldp+1674,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x17U]))),64);
            tracep->chgQData(oldp+1676,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x18U]))),64);
            tracep->chgQData(oldp+1678,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x19U]))),64);
            tracep->chgQData(oldp+1680,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1aU]))),64);
            tracep->chgQData(oldp+1682,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1bU]))),64);
            tracep->chgQData(oldp+1684,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1cU]))),64);
            tracep->chgQData(oldp+1686,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1dU]))),64);
            tracep->chgQData(oldp+1688,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1eU]))),64);
            tracep->chgQData(oldp+1690,((QData)((IData)(
                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__regs
                                                        [0x1fU]))),64);
            tracep->chgBit(oldp+1692,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar));
            tracep->chgBit(oldp+1693,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable));
            tracep->chgBit(oldp+1694,((1U & vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random)));
            tracep->chgBit(oldp+1695,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw));
            tracep->chgBit(oldp+1696,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable));
            tracep->chgBit(oldp+1697,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                             >> 1U))));
            tracep->chgBit(oldp+1698,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                             >> 2U))));
            tracep->chgBit(oldp+1699,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay));
            tracep->chgBit(oldp+1700,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                             >> 3U))));
            tracep->chgIData(oldp+1701,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random),23);
            tracep->chgIData(oldp+1702,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random_next),23);
            tracep->chgBit(oldp+1703,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay));
            tracep->chgBit(oldp+1704,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w));
            tracep->chgBit(oldp+1705,(vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable));
            tracep->chgBit(oldp+1706,((1U & (vlTOPp->simu_top__DOT__soc__DOT__delay__DOT__mask_random 
                                             >> 4U))));
            tracep->chgCData(oldp+1707,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit),5);
            tracep->chgCData(oldp+1708,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit),5);
            tracep->chgCData(oldp+1709,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready),5);
            tracep->chgCData(oldp+1710,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready),5);
            tracep->chgCData(oldp+1711,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid),5);
            tracep->chgCData(oldp+1712,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready),5);
            tracep->chgCData(oldp+1713,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast),5);
            tracep->chgCData(oldp+1714,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid),5);
            tracep->chgCData(oldp+1715,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[0]),4);
            tracep->chgCData(oldp+1716,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[1]),4);
            tracep->chgCData(oldp+1717,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[2]),4);
            tracep->chgCData(oldp+1718,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[3]),4);
            tracep->chgCData(oldp+1719,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[4]),4);
            tracep->chgCData(oldp+1720,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[0]),4);
            tracep->chgCData(oldp+1721,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[1]),4);
            tracep->chgCData(oldp+1722,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[2]),4);
            tracep->chgCData(oldp+1723,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[3]),4);
            tracep->chgCData(oldp+1724,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[4]),4);
            tracep->chgCData(oldp+1725,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0),3);
            tracep->chgCData(oldp+1726,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1),3);
            tracep->chgCData(oldp+1727,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid))),3);
            tracep->chgCData(oldp+1728,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid) 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1729,((7U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid))),3);
            tracep->chgCData(oldp+1730,((3U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1731,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty));
            tracep->chgBit(oldp+1732,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full));
            tracep->chgBit(oldp+1733,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty));
            tracep->chgBit(oldp+1734,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full));
            tracep->chgCData(oldp+1735,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir),3);
            tracep->chgCData(oldp+1736,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel),3);
            tracep->chgBit(oldp+1737,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog));
            tracep->chgCData(oldp+1738,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg),3);
            tracep->chgCData(oldp+1739,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel),3);
            tracep->chgCData(oldp+1740,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir),3);
            tracep->chgCData(oldp+1741,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel),3);
            tracep->chgCData(oldp+1742,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[0]),3);
            tracep->chgCData(oldp+1743,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[1]),3);
            tracep->chgCData(oldp+1744,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr),2);
            tracep->chgCData(oldp+1745,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr),2);
            tracep->chgBit(oldp+1746,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr))));
            tracep->chgBit(oldp+1747,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr))));
            tracep->chgIData(oldp+1748,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i),32);
            tracep->chgCData(oldp+1749,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[0]),3);
            tracep->chgCData(oldp+1750,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[1]),3);
            tracep->chgCData(oldp+1751,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr),2);
            tracep->chgCData(oldp+1752,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr),2);
            tracep->chgBit(oldp+1753,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr))));
            tracep->chgBit(oldp+1754,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr))));
            tracep->chgIData(oldp+1755,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i),32);
            tracep->chgBit(oldp+1756,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant) 
                                       & ((0U == (0x3fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU)))
                                           ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                           : ((0U != 
                                               (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU))) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
            tracep->chgIData(oldp+1757,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                          ? ((((0U 
                                                != 
                                                (0x3fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                    >> 0xeU)))
                                                ? (0xffffffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                      >> 8U))
                                                : 0U) 
                                              << 8U) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao))
                                          : 0U)),32);
            tracep->chgBit(oldp+1758,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant));
            tracep->chgBit(oldp+1759,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ));
            tracep->chgBit(oldp+1760,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)) 
                                       & ((0U == (0x3fU 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                     >> 0xeU)))
                                           ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                           : ((0U != 
                                               (0x3fU 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                   >> 0xeU))) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab))))));
            tracep->chgBit(oldp+1761,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr));
            tracep->chgBit(oldp+1762,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu));
            tracep->chgBit(oldp+1763,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu));
            tracep->chgIData(oldp+1764,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr),20);
            tracep->chgCData(oldp+1765,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu),8);
            tracep->chgCData(oldp+1766,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu),8);
            tracep->chgBit(oldp+1767,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu));
            tracep->chgIData(oldp+1768,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                          ? 0U : ((0U 
                                                   != 
                                                   (0x3fU 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                       >> 0xeU)))
                                                   ? 
                                                  (0xffffffU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                      >> 8U))
                                                   : 0U))),24);
            tracep->chgIData(oldp+1769,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr),24);
            tracep->chgBit(oldp+1770,((0U == (0x3fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))));
            tracep->chgBit(oldp+1771,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab));
            tracep->chgBit(oldp+1772,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw));
            tracep->chgBit(oldp+1773,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel));
            tracep->chgIData(oldp+1774,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr),20);
            tracep->chgCData(oldp+1775,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai),8);
            tracep->chgCData(oldp+1776,((0xffU & ((4U 
                                                   & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                   ? 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((0x80U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg)
                                                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))
                                                     : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr))
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr)
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                      >> 0x10U)
                                                      : 
                                                     (0xc0U 
                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir))))
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)
                                                     ? 
                                                    ((0x80U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl 
                                                      >> 8U)
                                                      : (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier))
                                                     : 
                                                    ((0x80U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr))
                                                      ? vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl
                                                      : 
                                                     ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                                      >> 3U))))))),8);
            tracep->chgBit(oldp+1777,((0U != (0x3fU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                 >> 0xeU)))));
            tracep->chgBit(oldp+1778,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab));
            tracep->chgBit(oldp+1779,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel));
            tracep->chgIData(oldp+1780,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai),32);
            tracep->chgIData(oldp+1781,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T),32);
            tracep->chgBit(oldp+1782,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))));
            tracep->chgBit(oldp+1783,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready));
            tracep->chgBit(oldp+1784,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd));
            tracep->chgCData(oldp+1785,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm),4);
            tracep->chgCData(oldp+1786,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb),4);
            tracep->chgCData(oldp+1787,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb),4);
            tracep->chgIData(oldp+1788,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32),32);
            tracep->chgIData(oldp+1789,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32),32);
            tracep->chgCData(oldp+1790,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count),3);
            tracep->chgCData(oldp+1791,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size),3);
            tracep->chgCData(oldp+1792,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size),3);
            tracep->chgBit(oldp+1793,(((0U == (0x3fU 
                                               & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                  >> 0xeU)))
                                        ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab)
                                        : ((0U != (0x3fU 
                                                   & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                      >> 0xeU))) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab)))));
            tracep->chgBit(oldp+1794,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel));
            tracep->chgBit(oldp+1795,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab));
            tracep->chgIData(oldp+1796,((0xffffffU 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)
                                             ? (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma 
                                                >> 8U)
                                             : vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr))),24);
            tracep->chgIData(oldp+1797,(((0U != (0x3fU 
                                                 & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr 
                                                    >> 0xeU)))
                                          ? (0xffffffU 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T 
                                                >> 8U))
                                          : 0U)),24);
            tracep->chgCData(oldp+1798,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao),8);
            tracep->chgCData(oldp+1799,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),8);
            tracep->chgBit(oldp+1800,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we));
            tracep->chgBit(oldp+1801,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re));
            tracep->chgBit(oldp+1802,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en));
            tracep->chgBit(oldp+1803,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en));
            tracep->chgBit(oldp+1804,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode));
            tracep->chgCData(oldp+1805,((7U & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),3);
            tracep->chgBit(oldp+1806,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable));
            tracep->chgBit(oldp+1807,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad));
            tracep->chgCData(oldp+1808,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier),4);
            tracep->chgCData(oldp+1809,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir),4);
            tracep->chgCData(oldp+1810,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr),2);
            tracep->chgCData(oldp+1811,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr),5);
            tracep->chgBit(oldp+1812,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared));
            tracep->chgBit(oldp+1813,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol));
            tracep->chgCData(oldp+1814,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr),8);
            tracep->chgCData(oldp+1815,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr),8);
            tracep->chgIData(oldp+1816,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl),24);
            tracep->chgBit(oldp+1817,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc));
            tracep->chgBit(oldp+1818,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d));
            tracep->chgBit(oldp+1819,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset));
            tracep->chgSData(oldp+1820,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc),16);
            tracep->chgCData(oldp+1821,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level),4);
            tracep->chgBit(oldp+1822,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset));
            tracep->chgBit(oldp+1823,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset));
            tracep->chgBit(oldp+1824,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr) 
                                             >> 7U))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                             >> 2U))));
            tracep->chgBit(oldp+1826,((1U & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1827,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg));
            tracep->chgBit(oldp+1828,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg));
            tracep->chgCData(oldp+1829,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg),8);
            tracep->chgCData(oldp+1830,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg),8);
            tracep->chgCData(oldp+1831,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count),8);
            tracep->chgCData(oldp+1832,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg),3);
            tracep->chgBit(oldp+1833,((0U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+1834,((1U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+1835,((2U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+1836,((3U == (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))));
            tracep->chgBit(oldp+1837,((((0U == (3U 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                        | (1U == (3U 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                >> 2U))))));
            tracep->chgBit(oldp+1838,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                             >> 3U))));
            tracep->chgBit(oldp+1839,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                             >> 4U))));
            tracep->chgBit(oldp+1840,((1U & (((0x10U 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                               ? ((0xcU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                               : ((8U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((4U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)))) 
                                             >> 3U))));
            tracep->chgBit(oldp+1841,((1U & (((0x10U 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                               ? ((0xcU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                               : ((8U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((4U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)))) 
                                             >> 2U))));
            tracep->chgBit(oldp+1842,((1U & (((0x10U 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                               ? ((0xcU 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                           >> 3U))))
                                               : ((8U 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                      << 1U)) 
                                                  | ((4U 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                         << 1U)) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)))) 
                                             >> 1U))));
            tracep->chgBit(oldp+1843,((1U & ((0x10U 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr))
                                              ? ((0xcU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                        >> 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr) 
                                                          >> 3U))))
                                              : ((8U 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                     << 1U)) 
                                                 | ((4U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                        << 1U)) 
                                                    | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__UART_RI) 
                                                       << 1U)))))));
            tracep->chgCData(oldp+1844,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr),8);
            tracep->chgBit(oldp+1845,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0));
            tracep->chgBit(oldp+1846,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun));
            tracep->chgBit(oldp+1847,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                             >> 1U))));
            tracep->chgBit(oldp+1848,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out))));
            tracep->chgBit(oldp+1849,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out) 
                                             >> 2U))));
            tracep->chgBit(oldp+1850,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5));
            tracep->chgBit(oldp+1851,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6));
            tracep->chgBit(oldp+1852,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7));
            tracep->chgBit(oldp+1853,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r));
            tracep->chgBit(oldp+1854,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r));
            tracep->chgBit(oldp+1855,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r));
            tracep->chgBit(oldp+1856,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r));
            tracep->chgBit(oldp+1857,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r));
            tracep->chgBit(oldp+1858,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r));
            tracep->chgBit(oldp+1859,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r));
            tracep->chgBit(oldp+1860,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r));
            tracep->chgBit(oldp+1861,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask));
            tracep->chgBit(oldp+1862,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int));
            tracep->chgBit(oldp+1863,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int));
            tracep->chgBit(oldp+1864,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int));
            tracep->chgBit(oldp+1865,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int));
            tracep->chgBit(oldp+1866,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int));
            tracep->chgBit(oldp+1867,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push));
            tracep->chgBit(oldp+1868,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop));
            tracep->chgSData(oldp+1869,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out),11);
            tracep->chgBit(oldp+1870,((0U != ((((((
                                                   (((((((((vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [0U] 
                                                            | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [1U]) 
                                                           | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                           [2U]) 
                                                          | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [3U]) 
                                                         | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [4U]) 
                                                        | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                        [5U]) 
                                                       | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U]) 
                                                      | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [7U]) 
                                                     | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                     [8U]) 
                                                    | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [9U]) 
                                                   | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [0xaU]) 
                                                  | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                  [0xbU]) 
                                                 | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [0xcU]) 
                                                | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                [0xdU]) 
                                               | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                               [0xeU]) 
                                              | vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [0xfU]))));
            tracep->chgCData(oldp+1871,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count),5);
            tracep->chgCData(oldp+1872,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count),5);
            tracep->chgCData(oldp+1873,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate),3);
            tracep->chgCData(oldp+1874,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate),4);
            tracep->chgSData(oldp+1875,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t),10);
            tracep->chgBit(oldp+1876,((1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt)))))));
            tracep->chgCData(oldp+1877,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt),8);
            tracep->chgCData(oldp+1878,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value),8);
            tracep->chgBit(oldp+1879,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                             | ((0U 
                                                 == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate)) 
                                                & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error) 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                                       == 
                                                       (7U 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg))))) 
                                                   | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error))))))));
            tracep->chgBit(oldp+1880,(((((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time) 
                                         == (7U & ((IData)(1U) 
                                                   + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg)))) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)) 
                                       & (2U == (3U 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))))));
            tracep->chgBit(oldp+1881,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out));
            tracep->chgBit(oldp+1882,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in));
            tracep->chgBit(oldp+1883,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse));
            tracep->chgBit(oldp+1884,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition));
            tracep->chgBit(oldp+1885,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read));
            tracep->chgBit(oldp+1886,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read));
            tracep->chgBit(oldp+1887,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read));
            tracep->chgCData(oldp+1888,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals),4);
            tracep->chgBit(oldp+1889,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d));
            tracep->chgBit(oldp+1890,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d));
            tracep->chgBit(oldp+1891,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d));
            tracep->chgBit(oldp+1892,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d));
            tracep->chgBit(oldp+1893,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d));
            tracep->chgBit(oldp+1894,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d));
            tracep->chgBit(oldp+1895,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d));
            tracep->chgBit(oldp+1896,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d));
            tracep->chgSData(oldp+1897,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt),9);
            tracep->chgSData(oldp+1898,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next),9);
            tracep->chgBit(oldp+1899,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt) 
                                              ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next)) 
                                             >> 8U))));
            tracep->chgBit(oldp+1900,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d));
            tracep->chgBit(oldp+1901,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d));
            tracep->chgBit(oldp+1902,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d));
            tracep->chgBit(oldp+1903,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d));
            tracep->chgBit(oldp+1904,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d));
            tracep->chgBit(oldp+1905,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d)))));
            tracep->chgBit(oldp+1906,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d)))));
            tracep->chgBit(oldp+1907,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d)))));
            tracep->chgBit(oldp+1908,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d)))));
            tracep->chgBit(oldp+1909,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d)))));
            tracep->chgBit(oldp+1910,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd));
            tracep->chgBit(oldp+1911,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd));
            tracep->chgBit(oldp+1912,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd));
            tracep->chgBit(oldp+1913,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd));
            tracep->chgBit(oldp+1914,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd));
            tracep->chgBit(oldp+1915,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read));
            tracep->chgBit(oldp+1916,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable) 
                                       & (((0U == (3U 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg))) 
                                           | (1U == 
                                              (3U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg)))) 
                                          | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode) 
                                             & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg) 
                                                   >> 2U)))))));
            tracep->chgCData(oldp+1917,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter),5);
            tracep->chgCData(oldp+1918,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter),3);
            tracep->chgCData(oldp+1919,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out),7);
            tracep->chgBit(oldp+1920,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp));
            tracep->chgBit(oldp+1921,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor));
            tracep->chgBit(oldp+1922,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop));
            tracep->chgBit(oldp+1923,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out));
            tracep->chgBit(oldp+1924,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error));
            tracep->chgCData(oldp+1925,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time),3);
            tracep->chgCData(oldp+1926,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out),8);
            tracep->chgBit(oldp+1927,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun));
            tracep->chgCData(oldp+1928,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak),8);
            tracep->chgCData(oldp+1929,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
            tracep->chgCData(oldp+1930,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
            tracep->chgCData(oldp+1931,((0xfU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
            tracep->chgCData(oldp+1932,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+1933,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+1934,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+1935,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+1936,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+1937,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+1938,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+1939,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+1940,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+1941,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+1942,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+1943,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+1944,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+1945,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+1946,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+1947,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
            tracep->chgBit(oldp+1948,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0));
            tracep->chgBit(oldp+1949,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable));
            tracep->chgCData(oldp+1950,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16),4);
            tracep->chgCData(oldp+1951,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter),3);
            tracep->chgCData(oldp+1952,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift),8);
            tracep->chgBit(oldp+1953,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity));
            tracep->chgBit(oldp+1954,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error));
            tracep->chgBit(oldp+1955,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error));
            tracep->chgBit(oldp+1956,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in));
            tracep->chgBit(oldp+1957,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor));
            tracep->chgCData(oldp+1958,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b),8);
            tracep->chgBit(oldp+1959,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q));
            tracep->chgSData(oldp+1960,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in),11);
            tracep->chgBit(oldp+1961,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push));
            tracep->chgBit(oldp+1962,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b))));
            tracep->chgBit(oldp+1963,((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+1964,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgBit(oldp+1965,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16))));
            tracep->chgCData(oldp+1966,((0xfU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16) 
                                                 - (IData)(1U)))),4);
            tracep->chgSData(oldp+1967,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value),10);
            tracep->chgCData(oldp+1968,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value) 
                                                  >> 2U))),8);
            tracep->chgCData(oldp+1969,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out),8);
            tracep->chgCData(oldp+1970,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
            tracep->chgCData(oldp+1971,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
            tracep->chgCData(oldp+1972,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
            tracep->chgCData(oldp+1973,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
            tracep->chgCData(oldp+1974,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
            tracep->chgCData(oldp+1975,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
            tracep->chgCData(oldp+1976,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
            tracep->chgCData(oldp+1977,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
            tracep->chgCData(oldp+1978,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
            tracep->chgCData(oldp+1979,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
            tracep->chgCData(oldp+1980,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
            tracep->chgCData(oldp+1981,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
            tracep->chgCData(oldp+1982,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
            tracep->chgCData(oldp+1983,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
            tracep->chgCData(oldp+1984,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
            tracep->chgCData(oldp+1985,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
            tracep->chgCData(oldp+1986,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
            tracep->chgCData(oldp+1987,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
            tracep->chgCData(oldp+1988,((0xfU & ((IData)(1U) 
                                                 + (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
            tracep->chgCData(oldp+1989,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0U]),3);
            tracep->chgCData(oldp+1990,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [1U]),3);
            tracep->chgCData(oldp+1991,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [2U]),3);
            tracep->chgCData(oldp+1992,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [3U]),3);
            tracep->chgCData(oldp+1993,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [4U]),3);
            tracep->chgCData(oldp+1994,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [5U]),3);
            tracep->chgCData(oldp+1995,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [6U]),3);
            tracep->chgCData(oldp+1996,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [7U]),3);
            tracep->chgCData(oldp+1997,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [8U]),3);
            tracep->chgCData(oldp+1998,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [9U]),3);
            tracep->chgCData(oldp+1999,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xaU]),3);
            tracep->chgCData(oldp+2000,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xbU]),3);
            tracep->chgCData(oldp+2001,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xcU]),3);
            tracep->chgCData(oldp+2002,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xdU]),3);
            tracep->chgCData(oldp+2003,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xeU]),3);
            tracep->chgCData(oldp+2004,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                        [0xfU]),3);
            tracep->chgCData(oldp+2005,((0xffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in) 
                                                  >> 3U))),8);
            tracep->chgCData(oldp+2006,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
            tracep->chgCData(oldp+2007,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
            tracep->chgCData(oldp+2008,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
            tracep->chgCData(oldp+2009,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
            tracep->chgCData(oldp+2010,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
            tracep->chgCData(oldp+2011,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
            tracep->chgCData(oldp+2012,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
            tracep->chgCData(oldp+2013,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
            tracep->chgCData(oldp+2014,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
            tracep->chgCData(oldp+2015,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
            tracep->chgCData(oldp+2016,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
            tracep->chgCData(oldp+2017,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
            tracep->chgCData(oldp+2018,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
            tracep->chgCData(oldp+2019,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
            tracep->chgCData(oldp+2020,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
            tracep->chgCData(oldp+2021,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
            tracep->chgBit(oldp+2022,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int));
            tracep->chgSData(oldp+2023,((0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)),11);
            tracep->chgCData(oldp+2024,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0),4);
            tracep->chgCData(oldp+2025,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1),4);
            tracep->chgCData(oldp+2026,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1),2);
            tracep->chgCData(oldp+2027,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2),2);
            tracep->chgSData(oldp+2028,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c),14);
            tracep->chgIData(oldp+2029,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r),25);
            tracep->chgIData(oldp+2030,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num),32);
            tracep->chgIData(oldp+2031,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter),32);
            tracep->chgIData(oldp+2032,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0),32);
            tracep->chgIData(oldp+2033,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1),32);
            tracep->chgIData(oldp+2034,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0),32);
            tracep->chgIData(oldp+2035,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1),32);
            tracep->chgIData(oldp+2036,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command),32);
            tracep->chgSData(oldp+2037,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing),16);
            tracep->chgQData(oldp+2038,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die),38);
            tracep->chgCData(oldp+2040,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE),5);
            tracep->chgIData(oldp+2041,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM),32);
            tracep->chgSData(oldp+2042,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT),14);
            tracep->chgSData(oldp+2043,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT),14);
            tracep->chgBit(oldp+2044,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack));
            tracep->chgBit(oldp+2045,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE));
            tracep->chgBit(oldp+2046,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_));
            tracep->chgSData(oldp+2047,((0x3fffU & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                          >> 0x10U))),14);
            tracep->chgCData(oldp+2048,((7U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2049,((0xfU & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter 
                                                 >> 8U))),4);
            tracep->chgBit(oldp+2050,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                             >> 8U))));
            tracep->chgBit(oldp+2051,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                             >> 9U))));
            tracep->chgBit(oldp+2052,((1U & (vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2053,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                       & (0x40U == 
                                          (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+2054,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY));
            tracep->chgBit(oldp+2055,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0));
            tracep->chgBit(oldp+2056,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1));
            tracep->chgBit(oldp+2057,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2));
            tracep->chgBit(oldp+2058,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3));
            tracep->chgBit(oldp+2059,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                       & (0x10U == 
                                          (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+2060,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel) 
                                       & (0x14U == 
                                          (0x7ffU & vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr)))));
            tracep->chgBit(oldp+2061,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6));
            tracep->chgBit(oldp+2062,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7));
            tracep->chgBit(oldp+2063,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8));
            tracep->chgBit(oldp+2064,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9));
            tracep->chgBit(oldp+2065,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10));
            tracep->chgBit(oldp+2066,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11));
            tracep->chgBit(oldp+2067,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT));
            tracep->chgBit(oldp+2068,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid));
            tracep->chgCData(oldp+2069,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status),8);
            tracep->chgCData(oldp+2070,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number),2);
            tracep->chgQData(oldp+2071,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM),48);
            tracep->chgIData(oldp+2073,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD),32);
            tracep->chgCData(oldp+2074,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o),4);
            tracep->chgCData(oldp+2075,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i),4);
            tracep->chgCData(oldp+2076,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer),2);
            tracep->chgCData(oldp+2077,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT),3);
            tracep->chgCData(oldp+2078,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM),8);
            tracep->chgCData(oldp+2079,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM),8);
            tracep->chgCData(oldp+2080,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND),8);
            tracep->chgCData(oldp+2081,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE),5);
            tracep->chgCData(oldp+2082,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM),3);
            tracep->chgSData(oldp+2083,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count),14);
            tracep->chgQData(oldp+2084,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR),38);
            tracep->chgIData(oldp+2086,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR),32);
            tracep->chgBit(oldp+2087,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO));
            tracep->chgBit(oldp+2088,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK));
            tracep->chgBit(oldp+2089,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE));
            tracep->chgBit(oldp+2090,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL));
            tracep->chgBit(oldp+2091,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half));
            tracep->chgBit(oldp+2092,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob));
            tracep->chgQData(oldp+2093,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)) 
                                          << 0x2bU) 
                                         | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize)) 
                                             << 0x28U) 
                                            | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                   << 4U) 
                                                  | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid))))))),45);
            tracep->chgIData(oldp+2095,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
            tracep->chgIData(oldp+2096,(((((- (IData)(
                                                      (0U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                                         | ((- (IData)(
                                                       (2U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
            tracep->chgIData(oldp+2097,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
            tracep->chgCData(oldp+2098,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst),2);
            tracep->chgBit(oldp+2099,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+2100,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+2101,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgCData(oldp+2102,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid),4);
            tracep->chgCData(oldp+2103,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen),4);
            tracep->chgBit(oldp+2104,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last));
            tracep->chgCData(oldp+2105,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize),3);
            tracep->chgBit(oldp+2106,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid));
            tracep->chgQData(oldp+2107,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_araddr)) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           (0x800U 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arsize) 
                                                                << 8U) 
                                                               | ((0xf0U 
                                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__arlen) 
                                                                      << 4U)) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_arid)))))))),45);
            tracep->chgQData(oldp+2109,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas),45);
            tracep->chgIData(oldp+2111,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xdU))),32);
            tracep->chgCData(oldp+2112,((3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                       >> 0xbU)))),2);
            tracep->chgCData(oldp+2113,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas))),4);
            tracep->chgCData(oldp+2114,((0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2115,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas 
                                                       >> 8U)))),3);
            tracep->chgBit(oldp+2116,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid));
            tracep->chgCData(oldp+2117,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur),4);
            tracep->chgQData(oldp+2118,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst) 
                                                             << 0xbU) 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                   << 4U) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
            tracep->chgIData(oldp+2120,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
            tracep->chgIData(oldp+2121,(((((- (IData)(
                                                      (0U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                                         | ((- (IData)(
                                                       (2U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
            tracep->chgIData(oldp+2122,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
            tracep->chgCData(oldp+2123,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst),2);
            tracep->chgBit(oldp+2124,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+2125,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+2126,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgCData(oldp+2127,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid),4);
            tracep->chgCData(oldp+2128,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen),4);
            tracep->chgCData(oldp+2129,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize),3);
            tracep->chgBit(oldp+2130,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid));
            tracep->chgQData(oldp+2131,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awaddr)) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           (0x801U 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_awsize) 
                                                                << 8U) 
                                                               | (0xf0U 
                                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT____Vcellout__cpu__awlen) 
                                                                     << 4U)))))))),45);
            tracep->chgQData(oldp+2133,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas),45);
            tracep->chgIData(oldp+2135,((IData)((vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xdU))),32);
            tracep->chgCData(oldp+2136,((3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                       >> 0xbU)))),2);
            tracep->chgCData(oldp+2137,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas))),4);
            tracep->chgCData(oldp+2138,((0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2139,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas 
                                                       >> 8U)))),3);
            tracep->chgBit(oldp+2140,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid));
            tracep->chgBit(oldp+2141,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out));
            tracep->chgBit(oldp+2142,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid));
            tracep->chgCData(oldp+2143,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas),4);
            tracep->chgBit(oldp+2144,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid)))));
            tracep->chgCData(oldp+2145,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb),4);
            tracep->chgBit(oldp+2146,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast));
            tracep->chgBit(oldp+2147,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid));
            tracep->chgQData(oldp+2148,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)) 
                                          << 0x2bU) 
                                         | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize)) 
                                             << 0x28U) 
                                            | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr)) 
                                                   << 4U) 
                                                  | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid))))))),45);
            tracep->chgIData(oldp+2150,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr),32);
            tracep->chgIData(oldp+2151,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr),32);
            tracep->chgIData(oldp+2152,(((((- (IData)(
                                                      (0U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr)) 
                                         | ((- (IData)(
                                                       (2U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap))),32);
            tracep->chgIData(oldp+2153,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap),32);
            tracep->chgCData(oldp+2154,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst),2);
            tracep->chgBit(oldp+2155,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+2156,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgBit(oldp+2157,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst))));
            tracep->chgCData(oldp+2158,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid),4);
            tracep->chgCData(oldp+2159,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen),4);
            tracep->chgBit(oldp+2160,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last));
            tracep->chgCData(oldp+2161,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize),3);
            tracep->chgBit(oldp+2162,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid));
            tracep->chgQData(oldp+2163,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas),45);
            tracep->chgIData(oldp+2165,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                 >> 0xdU))),32);
            tracep->chgCData(oldp+2166,((3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                       >> 0xbU)))),2);
            tracep->chgCData(oldp+2167,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas))),4);
            tracep->chgCData(oldp+2168,((0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2169,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas 
                                                       >> 8U)))),3);
            tracep->chgBit(oldp+2170,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid));
            tracep->chgCData(oldp+2171,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur),4);
            tracep->chgQData(oldp+2172,((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr)) 
                                          << 0xdU) 
                                         | (QData)((IData)(
                                                           (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst) 
                                                             << 0xbU) 
                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize) 
                                                                << 8U) 
                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen) 
                                                                   << 4U) 
                                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid)))))))),45);
            tracep->chgIData(oldp+2174,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr),32);
            tracep->chgIData(oldp+2175,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr),32);
            tracep->chgIData(oldp+2176,(((((- (IData)(
                                                      (0U 
                                                       == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                           & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr) 
                                          | ((- (IData)(
                                                        (1U 
                                                         == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                             & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr)) 
                                         | ((- (IData)(
                                                       (2U 
                                                        == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst)))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap))),32);
            tracep->chgIData(oldp+2177,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap),32);
            tracep->chgCData(oldp+2178,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst),2);
            tracep->chgBit(oldp+2179,((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+2180,((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgBit(oldp+2181,((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst))));
            tracep->chgCData(oldp+2182,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid),4);
            tracep->chgCData(oldp+2183,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen),4);
            tracep->chgCData(oldp+2184,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize),3);
            tracep->chgBit(oldp+2185,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid));
            tracep->chgQData(oldp+2186,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas),45);
            tracep->chgIData(oldp+2188,((IData)((vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                 >> 0xdU))),32);
            tracep->chgCData(oldp+2189,((3U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                       >> 0xbU)))),2);
            tracep->chgCData(oldp+2190,((0xfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas))),4);
            tracep->chgCData(oldp+2191,((0xfU & (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2192,((7U & (IData)(
                                                      (vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas 
                                                       >> 8U)))),3);
            tracep->chgBit(oldp+2193,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid));
            tracep->chgBit(oldp+2194,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out));
            tracep->chgBit(oldp+2195,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid));
            tracep->chgCData(oldp+2196,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas),4);
            tracep->chgBit(oldp+2197,((1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid)))));
            tracep->chgCData(oldp+2198,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb),4);
            tracep->chgIData(oldp+2199,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata),32);
            tracep->chgBit(oldp+2200,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast));
            tracep->chgBit(oldp+2201,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid));
            tracep->chgIData(oldp+2202,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr0),32);
            tracep->chgIData(oldp+2203,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr1),32);
            tracep->chgIData(oldp+2204,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr2),32);
            tracep->chgIData(oldp+2205,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr3),32);
            tracep->chgIData(oldp+2206,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr4),32);
            tracep->chgIData(oldp+2207,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr5),32);
            tracep->chgIData(oldp+2208,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr6),32);
            tracep->chgIData(oldp+2209,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__cr7),32);
            tracep->chgIData(oldp+2210,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_data),32);
            tracep->chgIData(oldp+2211,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data),32);
            tracep->chgIData(oldp+2212,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data),32);
            tracep->chgIData(oldp+2213,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_data),32);
            tracep->chgIData(oldp+2214,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),32);
            tracep->chgIData(oldp+2215,(((2U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                                << 1U)) 
                                         | (1U & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r))))),32);
            tracep->chgCData(oldp+2216,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data),8);
            tracep->chgBit(oldp+2217,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid));
            tracep->chgIData(oldp+2218,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r2),32);
            tracep->chgIData(oldp+2219,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__simu_flag),32);
            tracep->chgIData(oldp+2220,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__io_simu),32);
            tracep->chgCData(oldp+2221,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data),8);
            tracep->chgBit(oldp+2222,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__open_trace));
            tracep->chgBit(oldp+2223,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__num_monitor));
            tracep->chgBit(oldp+2224,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin));
            tracep->chgBit(oldp+2225,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1));
            tracep->chgBit(oldp+2226,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2));
            tracep->chgBit(oldp+2227,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3));
            tracep->chgBit(oldp+2228,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1));
            tracep->chgBit(oldp+2229,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2));
            tracep->chgIData(oldp+2230,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r),32);
            tracep->chgIData(oldp+2231,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1),32);
            tracep->chgIData(oldp+2232,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2),32);
            tracep->chgIData(oldp+2233,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer_r1),32);
            tracep->chgIData(oldp+2234,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__timer),32);
            tracep->chgCData(oldp+2235,((0xffU & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata)),8);
            tracep->chgSData(oldp+2236,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r),16);
            tracep->chgCData(oldp+2237,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state),3);
            tracep->chgBit(oldp+2238,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_flag));
            tracep->chgIData(oldp+2239,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count),20);
            tracep->chgCData(oldp+2240,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state_count),4);
            tracep->chgBit(oldp+2241,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__key_count 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2242,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r));
            tracep->chgBit(oldp+2243,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r));
            tracep->chgBit(oldp+2244,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_flag));
            tracep->chgIData(oldp+2245,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count),20);
            tracep->chgBit(oldp+2246,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step0_count 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2247,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_flag));
            tracep->chgIData(oldp+2248,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count),20);
            tracep->chgBit(oldp+2249,((1U & (vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__step1_count 
                                             >> 0x13U))));
            tracep->chgIData(oldp+2250,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__count),20);
            tracep->chgCData(oldp+2251,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__scan_data),4);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+2252,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                        & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                           >> 6U)) 
                                       & (~ ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                              >> 7U) 
                                             ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken))))));
            __Vtemp1020[0U] = (IData)((((QData)((IData)(
                                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))));
            __Vtemp1020[1U] = (IData)(((((QData)((IData)(
                                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                                           ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc))) 
                                       >> 0x20U));
            __Vtemp1020[2U] = ((0xffffe000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
                                               << 0xdU)) 
                               | ((0xffffff00U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index) 
                                                  << 8U)) 
                                  | ((0x80U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                               << 5U)) 
                                     | ((0xffffffc0U 
                                         & ((IData)(
                                                    (0U 
                                                     != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd)) 
                                            << 6U)) 
                                        | ((0xffffffe0U 
                                            & ((((0x10U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last)) 
                                                & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop)))) 
                                               << 5U)) 
                                           | ((0xfffffff0U 
                                               & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp) 
                                                  << 4U)) 
                                              | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi) 
                                                  << 3U) 
                                                 | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif) 
                                                     << 2U) 
                                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr) 
                                                        << 1U) 
                                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num) 
                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef)))))))))));
            __Vtemp1020[3U] = (0x1fffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc 
                                          >> 0x13U));
            tracep->chgWData(oldp+2253,(__Vtemp1020),109);
            tracep->chgBit(oldp+2257,(((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive))));
            tracep->chgIData(oldp+2258,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff
                                          : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata)),32);
            tracep->chgIData(oldp+2259,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
                                          : ((IData)(4U) 
                                             + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U]))),32);
            if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                              << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 5U))) 
                   == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x20U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                             >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
                __Vtemp1027[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
                __Vtemp1027[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                           >> 0x20U));
                __Vtemp1027[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                 >> 0x26U)));
            } else {
                __Vtemp1027[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))))
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1);
                __Vtemp1027[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                               >> 0x20U))
                                    : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
                __Vtemp1027[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (1U & ((IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                      >> 0x26U)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                                    : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                               >> 0x20U)));
            }
            tracep->chgIData(oldp+2260,(__Vtemp1027[1U]),32);
            if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                   == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x20U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                             >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
                __Vtemp1034[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
                __Vtemp1034[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                           >> 0x20U));
            } else {
                __Vtemp1034[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                    ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
                __Vtemp1034[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                    ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                               >> 0x20U))
                                    : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
            }
            tracep->chgIData(oldp+2261,(__Vtemp1034[1U]),32);
            if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                              << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                           >> 5U))) 
                   == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x20U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                             >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
                __Vtemp1041[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
                __Vtemp1041[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                           >> 0x20U));
                __Vtemp1041[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                 >> 0x26U)));
            } else {
                __Vtemp1041[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))))
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1);
                __Vtemp1041[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                               >> 0x20U))
                                    : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
                __Vtemp1041[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                 << 0x1bU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                   >> 5U))) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                                    ? (1U & ((IData)(
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                      >> 0x26U)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                                    : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                               >> 0x20U)));
            }
            tracep->chgBit(oldp+2262,((1U & __Vtemp1041[2U])));
            if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                   == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x20U)))) 
                  & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                             >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
                __Vtemp1048[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
                __Vtemp1048[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                           >> 0x20U));
            } else {
                __Vtemp1048[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                    ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                                    : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
                __Vtemp1048[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                      == (0x1fU & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                           >> 0x20U)))) 
                                     & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x25U))) 
                                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                    ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                               >> 0x20U))
                                    : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
            }
            tracep->chgBit(oldp+2263,((1U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                            >> 0x20U)))) 
                                               & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                          >> 0x25U))) 
                                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                              ? (1U 
                                                 & (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                            >> 0x26U)))
                                              : (((
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                                >> 0x20U)))) 
                                                   & (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                              >> 0x25U))) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                                                  ? 
                                                 (1U 
                                                  & ((IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                              >> 0x26U)) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                                                  : (IData)(
                                                            ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                                                             >> 0x20U)))))));
            tracep->chgBit(oldp+2264,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                                       & (1U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)))));
            tracep->chgBit(oldp+2265,((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                              >> 6U) 
                                             & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid))))));
            tracep->chgIData(oldp+2266,(((((((- (IData)(
                                                        (1U 
                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                             >> 0xbU) 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                               >> 0xeU))))) 
                                             & ((0xffffff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                               >> 0xbU) 
                                                              & (~ 
                                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                  >> 0xeU)))))) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded))) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                              >> 0xcU) 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0xeU))))) 
                                              & ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded) 
                                                                    >> 0xfU)))) 
                                                     << 0x10U)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded)))) 
                                          | ((- (IData)(
                                                        (1U 
                                                         & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                             >> 0xcU) 
                                                            & (~ 
                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                >> 0xeU)))))) 
                                             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded))) 
                                         | ((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                           << 0x15U) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                             >> 0xbU))))))))) 
                                            & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata))),32);
            tracep->chgIData(oldp+2267,((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op) 
                                          & ((3U & 
                                              ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset) 
                                               >> 2U)) 
                                             == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num)))
                                          ? ((0xff000000U 
                                              & (((8U 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                   ? 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                   >> 0x18U)
                                                   : 
                                                  (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                   >> 0x18U)) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & (((4U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                      ? 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                      >> 0x10U)
                                                      : 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                      >> 0x10U)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((2U 
                                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                         ? 
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                         >> 8U)
                                                         : 
                                                        (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((1U 
                                                          & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                          : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))))
                                          : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)),32);
            tracep->chgIData(oldp+2268,(((0xff000000U 
                                          & (((8U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                               ? (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                  >> 0x18U)
                                               : (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                  >> 0x18U)) 
                                             << 0x18U)) 
                                         | ((0xff0000U 
                                             & (((4U 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                  ? 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                  >> 0x10U)
                                                  : 
                                                 (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                  >> 0x10U)) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((2U 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                     ? 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata 
                                                     >> 8U)
                                                     : 
                                                    (vlTOPp->simu_top__DOT__soc__DOT__m0_rdata 
                                                     >> 8U)) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((1U 
                                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb))
                                                      ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata
                                                      : vlTOPp->simu_top__DOT__soc__DOT__m0_rdata)))))),32);
            tracep->chgBit(oldp+2269,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready))));
            tracep->chgCData(oldp+2270,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit),5);
            tracep->chgCData(oldp+2271,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit),5);
            tracep->chgIData(oldp+2272,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[0]),32);
            tracep->chgIData(oldp+2273,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[1]),32);
            tracep->chgIData(oldp+2274,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[2]),32);
            tracep->chgIData(oldp+2275,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[3]),32);
            tracep->chgIData(oldp+2276,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[4]),32);
            tracep->chgBit(oldp+2277,(((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_wready)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu_wlast))));
            tracep->chgBit(oldp+2278,(((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rvalid)) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rready)) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_rlast))));
            tracep->chgBit(oldp+2279,(((((8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                           >> 2U)) 
                                       | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U)))));
            tracep->chgCData(oldp+2280,(((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                          ? ((1U & 
                                              ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid)) 
                                                >> 2U) 
                                               & ((~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd))) 
                                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant)))))
                                              ? 2U : 1U)
                                          : ((2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                              ? ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd)
                                                   ? 8U
                                                   : 2U))
                                              : ((8U 
                                                  == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm))
                                                  ? 
                                                 (((((8U 
                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm)) 
                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_rlast)) 
                                                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                                       >> 2U)) 
                                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__apb_s_bvalid) 
                                                      & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                                         >> 2U)))
                                                   ? 1U
                                                   : 8U)
                                                  : 1U)))),4);
            tracep->chgBit(oldp+2281,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last)))));
            tracep->chgBit(oldp+2282,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid))));
            tracep->chgBit(oldp+2283,((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                              >> 3U) 
                                             | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid))))));
            tracep->chgBit(oldp+2284,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast)))));
            tracep->chgBit(oldp+2285,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid))));
            tracep->chgBit(oldp+2286,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop) 
                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                          | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid))))));
            tracep->chgBit(oldp+2287,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid))));
            tracep->chgBit(oldp+2288,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last)))));
            tracep->chgBit(oldp+2289,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid))));
            tracep->chgBit(oldp+2290,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid))))));
            tracep->chgBit(oldp+2291,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast)))));
            tracep->chgBit(oldp+2292,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid))));
            tracep->chgBit(oldp+2293,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop) 
                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                          | (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid))))));
            tracep->chgBit(oldp+2294,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid))));
            tracep->chgBit(oldp+2295,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8000U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2296,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8010U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2297,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8020U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2298,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8030U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2299,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8040U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2300,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8050U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2301,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8060U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2302,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0x8070U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2303,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xff00U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2304,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xff30U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2305,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xff40U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2306,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xf020U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2307,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xf030U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2308,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xf040U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
            tracep->chgBit(oldp+2309,(((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen)) 
                                       & (0xf050U == 
                                          (0xffffU 
                                           & vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+2310,(vlTOPp->simu_top__DOT__soc__DOT__cpu_awready));
            tracep->chgBit(oldp+2311,(vlTOPp->simu_top__DOT__soc__DOT__cpu_wready));
            tracep->chgBit(oldp+2312,(vlTOPp->simu_top__DOT__soc__DOT__cpu_bvalid));
            tracep->chgBit(oldp+2313,(vlTOPp->simu_top__DOT__soc__DOT__cpu_arready));
            tracep->chgIData(oldp+2314,(vlTOPp->simu_top__DOT__soc__DOT__m0_rdata),32);
            tracep->chgBit(oldp+2315,(vlTOPp->simu_top__DOT__soc__DOT__cpu_rvalid));
            tracep->chgBit(oldp+2316,(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid));
            tracep->chgBit(oldp+2317,(vlTOPp->simu_top__DOT__soc__DOT__m0_awready));
            tracep->chgBit(oldp+2318,(vlTOPp->simu_top__DOT__soc__DOT__m0_wvalid));
            tracep->chgBit(oldp+2319,(vlTOPp->simu_top__DOT__soc__DOT__m0_bready));
            tracep->chgBit(oldp+2320,(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid));
            tracep->chgBit(oldp+2321,(vlTOPp->simu_top__DOT__soc__DOT__m0_arready));
            tracep->chgBit(oldp+2322,(vlTOPp->simu_top__DOT__soc__DOT__m0_rready));
            tracep->chgBit(oldp+2323,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid))));
            tracep->chgBit(oldp+2324,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid))));
            tracep->chgBit(oldp+2325,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready))));
            tracep->chgBit(oldp+2326,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid))));
            tracep->chgBit(oldp+2327,((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready))));
            tracep->chgBit(oldp+2328,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+2329,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+2330,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 3U))));
            tracep->chgBit(oldp+2331,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 3U))));
            tracep->chgBit(oldp+2332,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 3U))));
            tracep->chgBit(oldp+2333,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+2334,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+2335,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 2U))));
            tracep->chgBit(oldp+2336,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 2U))));
            tracep->chgBit(oldp+2337,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 2U))));
            tracep->chgBit(oldp+2338,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en));
            tracep->chgCData(oldp+2339,(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen),4);
            tracep->chgBit(oldp+2340,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin));
            tracep->chgBit(oldp+2341,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin));
            tracep->chgBit(oldp+2342,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin));
            tracep->chgBit(oldp+2343,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid));
            tracep->chgBit(oldp+2344,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid));
            tracep->chgBit(oldp+2345,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid));
            tracep->chgBit(oldp+2346,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid));
            tracep->chgBit(oldp+2347,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en));
            tracep->chgBit(oldp+2348,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en));
            tracep->chgIData(oldp+2349,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc),32);
            tracep->chgBit(oldp+2350,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en));
            tracep->chgBit(oldp+2351,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry));
            tracep->chgBit(oldp+2352,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en));
            tracep->chgBit(oldp+2353,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error));
            tracep->chgBit(oldp+2354,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error));
            tracep->chgBit(oldp+2355,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken));
            tracep->chgIData(oldp+2356,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target),32);
            tracep->chgBit(oldp+2357,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_fetch));
            tracep->chgWData(oldp+2358,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus),350);
            tracep->chgWData(oldp+2369,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus),425);
            tracep->chgWData(oldp+2383,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus),460);
            tracep->chgQData(oldp+2398,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus),33);
            tracep->chgQData(oldp+2400,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus),39);
            tracep->chgBit(oldp+2402,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid));
            tracep->chgCData(oldp+2403,((0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                                  >> 4U))),8);
            tracep->chgCData(oldp+2404,((0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc)),4);
            tracep->chgBit(oldp+2405,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
            tracep->chgBit(oldp+2406,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok));
            tracep->chgIData(oldp+2407,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata),32);
            tracep->chgBit(oldp+2408,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid));
            tracep->chgBit(oldp+2409,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_valid));
            tracep->chgBit(oldp+2410,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok));
            tracep->chgIData(oldp+2411,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_rdata),32);
            tracep->chgBit(oldp+2412,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive));
            tracep->chgBit(oldp+2413,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid));
            tracep->chgBit(oldp+2414,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__preld_en));
            tracep->chgBit(oldp+2415,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go));
            tracep->chgBit(oldp+2416,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin));
            tracep->chgBit(oldp+2417,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid));
            tracep->chgBit(oldp+2418,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
            tracep->chgIData(oldp+2419,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc),32);
            tracep->chgBit(oldp+2420,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef));
            tracep->chgBit(oldp+2421,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+2422,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus)),32);
            tracep->chgBit(oldp+2423,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay));
            tracep->chgBit(oldp+2424,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt));
            tracep->chgBit(oldp+2425,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
            tracep->chgBit(oldp+2426,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush));
            tracep->chgBit(oldp+2427,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd));
            tracep->chgBit(oldp+2428,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign));
            tracep->chgBit(oldp+2429,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign));
            tracep->chgBit(oldp+2430,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                     >> 0x25U)))));
            tracep->chgCData(oldp+2431,((0x1fU & (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                          >> 0x20U)))),5);
            tracep->chgIData(oldp+2432,((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)),32);
            tracep->chgBit(oldp+2433,((1U & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                     >> 0x26U)))));
            tracep->chgIData(oldp+2434,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es),32);
            tracep->chgIData(oldp+2435,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es),32);
            tracep->chgBit(oldp+2436,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go));
            tracep->chgBit(oldp+2437,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en));
            tracep->chgBit(oldp+2438,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go));
            tracep->chgIData(oldp+2439,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result),32);
            tracep->chgIData(oldp+2440,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata),32);
            tracep->chgCData(oldp+2441,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded),8);
            tracep->chgSData(oldp+2442,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded),16);
            tracep->chgIData(oldp+2443,((0x7ffffU & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                          >> 0xdU))),19);
            tracep->chgBit(oldp+2444,((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                                             >> 0xcU))));
            tracep->chgCData(oldp+2445,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra),8);
            tracep->chgIData(oldp+2446,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina),32);
            tracep->chgCData(oldp+2447,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea),4);
            tracep->chgCData(oldp+2448,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea),4);
            tracep->chgCData(oldp+2449,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea),4);
            tracep->chgCData(oldp+2450,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea),4);
            tracep->chgCData(oldp+2451,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea),4);
            tracep->chgCData(oldp+2452,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea),4);
            tracep->chgCData(oldp+2453,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea),4);
            tracep->chgCData(oldp+2454,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea),4);
            tracep->chgCData(oldp+2455,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra),8);
            tracep->chgBit(oldp+2456,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea));
            tracep->chgBit(oldp+2457,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea));
            tracep->chgBit(oldp+2458,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en));
            tracep->chgBit(oldp+2459,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en));
            tracep->chgBit(oldp+2460,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en));
            tracep->chgCData(oldp+2461,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset),4);
            tracep->chgCData(oldp+2462,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index),8);
            tracep->chgBit(oldp+2463,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid));
            tracep->chgIData(oldp+2464,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina),32);
            tracep->chgCData(oldp+2465,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea),4);
            tracep->chgCData(oldp+2466,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea),4);
            tracep->chgCData(oldp+2467,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea),4);
            tracep->chgCData(oldp+2468,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea),4);
            tracep->chgCData(oldp+2469,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea),4);
            tracep->chgCData(oldp+2470,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea),4);
            tracep->chgCData(oldp+2471,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea),4);
            tracep->chgCData(oldp+2472,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea),4);
            tracep->chgBit(oldp+2473,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea));
            tracep->chgBit(oldp+2474,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea));
            tracep->chgBit(oldp+2475,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en));
            tracep->chgBit(oldp+2476,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en));
            tracep->chgBit(oldp+2477,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en));
            tracep->chgBit(oldp+2478,(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid));
            tracep->chgBit(oldp+2479,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arvalid) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_arready))));
            tracep->chgBit(oldp+2480,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awvalid) 
                                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__m0_awready))));
            tracep->chgBit(oldp+2481,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+2482,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+2483,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 1U))));
            tracep->chgBit(oldp+2484,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 1U))));
            tracep->chgBit(oldp+2485,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 1U))));
            tracep->chgBit(oldp+2486,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+2487,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+2488,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready) 
                                             >> 4U))));
            tracep->chgBit(oldp+2489,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid) 
                                             >> 4U))));
            tracep->chgBit(oldp+2490,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready) 
                                             >> 4U))));
            tracep->chgCData(oldp+2491,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid),5);
            tracep->chgCData(oldp+2492,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid),5);
            tracep->chgCData(oldp+2493,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready),5);
            tracep->chgCData(oldp+2494,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid),5);
            tracep->chgCData(oldp+2495,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready),5);
            tracep->chgBit(oldp+2496,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins));
            tracep->chgCData(oldp+2497,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir),3);
            tracep->chgIData(oldp+2498,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int),32);
            tracep->chgBit(oldp+2499,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins));
            tracep->chgCData(oldp+2500,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir),3);
            tracep->chgIData(oldp+2501,(vlTOPp->simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int),32);
            tracep->chgBit(oldp+2502,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu));
            tracep->chgBit(oldp+2503,(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag));
            tracep->chgBit(oldp+2504,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+2505,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+2506,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+2507,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+2508,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+2509,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+2510,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+2511,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+2512,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+2513,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+2514,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+2515,(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+2516,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push));
            tracep->chgBit(oldp+2517,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop));
            tracep->chgBit(oldp+2518,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push));
            tracep->chgBit(oldp+2519,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push));
            tracep->chgBit(oldp+2520,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en));
            tracep->chgBit(oldp+2521,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push));
            tracep->chgBit(oldp+2522,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop));
            tracep->chgBit(oldp+2523,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push));
            tracep->chgBit(oldp+2524,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push));
            tracep->chgBit(oldp+2525,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop));
            tracep->chgBit(oldp+2526,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push));
            tracep->chgBit(oldp+2527,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en));
            tracep->chgBit(oldp+2528,(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go));
            tracep->chgBit(oldp+2529,((0U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_s_ram_wen))));
            tracep->chgBit(oldp+2530,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_timer));
            tracep->chgBit(oldp+2531,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid));
            tracep->chgCData(oldp+2532,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__next_state),3);
            tracep->chgSData(oldp+2533,(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp),16);
        }
        tracep->chgBit(oldp+2534,(vlTOPp->aclk));
        tracep->chgBit(oldp+2535,(vlTOPp->aresetn));
        tracep->chgBit(oldp+2536,(vlTOPp->enable_delay));
        tracep->chgIData(oldp+2537,(vlTOPp->random_seed),23);
        tracep->chgBit(oldp+2538,(vlTOPp->ram_ren));
        tracep->chgIData(oldp+2539,(vlTOPp->ram_raddr),32);
        tracep->chgIData(oldp+2540,(vlTOPp->ram_rdata),32);
        tracep->chgCData(oldp+2541,(vlTOPp->ram_wen),4);
        tracep->chgIData(oldp+2542,(vlTOPp->ram_waddr),32);
        tracep->chgIData(oldp+2543,(vlTOPp->ram_wdata),32);
        tracep->chgIData(oldp+2544,(vlTOPp->debug0_wb_pc),32);
        tracep->chgBit(oldp+2545,(vlTOPp->debug0_wb_rf_wen));
        tracep->chgCData(oldp+2546,(vlTOPp->debug0_wb_rf_wnum),5);
        tracep->chgIData(oldp+2547,(vlTOPp->debug0_wb_rf_wdata),32);
        tracep->chgIData(oldp+2548,(vlTOPp->num_data),32);
        tracep->chgBit(oldp+2549,(vlTOPp->open_trace));
        tracep->chgBit(oldp+2550,(vlTOPp->num_monitor));
        tracep->chgCData(oldp+2551,(vlTOPp->confreg_uart_data),8);
        tracep->chgBit(oldp+2552,(vlTOPp->write_uart_valid));
        tracep->chgWData(oldp+2553,(vlTOPp->uart_ctr_bus),128);
        tracep->chgBit(oldp+2557,(vlTOPp->uart_rx));
        tracep->chgBit(oldp+2558,(vlTOPp->uart_tx));
        tracep->chgSData(oldp+2559,(vlTOPp->led),16);
        tracep->chgCData(oldp+2560,(vlTOPp->led_rg0),2);
        tracep->chgCData(oldp+2561,(vlTOPp->led_rg1),2);
        tracep->chgCData(oldp+2562,(vlTOPp->num_csn),8);
        tracep->chgCData(oldp+2563,(vlTOPp->num_a_g),7);
        tracep->chgCData(oldp+2564,(vlTOPp->btn_key_col),4);
        tracep->chgCData(oldp+2565,(vlTOPp->btn_key_row),4);
        tracep->chgCData(oldp+2566,(vlTOPp->btn_step),2);
        tracep->chgCData(oldp+2567,(vlTOPp->__SYM__switch),8);
        tracep->chgBit(oldp+2568,((1U & (~ (IData)(vlTOPp->aresetn)))));
        tracep->chgBit(oldp+2569,((1U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode)
                                          ? ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en)) 
                                             | (IData)(vlTOPp->uart_tx))
                                          : (IData)(vlTOPp->uart_rx)))));
        tracep->chgBit(oldp+2570,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgBit(oldp+2571,((1U & ((~ (IData)(vlTOPp->aresetn)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop)))));
        tracep->chgIData(oldp+2572,(vlTOPp->__SYM__switch),32);
        tracep->chgIData(oldp+2573,(((0x8000U & ((IData)(vlTOPp->__SYM__switch) 
                                                 << 8U)) 
                                     | ((0x2000U & 
                                         ((IData)(vlTOPp->__SYM__switch) 
                                          << 7U)) | 
                                        ((0x800U & 
                                          ((IData)(vlTOPp->__SYM__switch) 
                                           << 6U)) 
                                         | ((0x200U 
                                             & ((IData)(vlTOPp->__SYM__switch) 
                                                << 5U)) 
                                            | ((0x80U 
                                                & ((IData)(vlTOPp->__SYM__switch) 
                                                   << 4U)) 
                                               | ((0x20U 
                                                   & ((IData)(vlTOPp->__SYM__switch) 
                                                      << 3U)) 
                                                  | ((8U 
                                                      & ((IData)(vlTOPp->__SYM__switch) 
                                                         << 2U)) 
                                                     | (2U 
                                                        & ((IData)(vlTOPp->__SYM__switch) 
                                                           << 1U)))))))))),32);
        tracep->chgBit(oldp+2574,(((0U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                   & (~ (IData)((0xfU 
                                                 == (IData)(vlTOPp->btn_key_row)))))));
        tracep->chgBit(oldp+2575,(((7U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__state)) 
                                   & (0xfU == (IData)(vlTOPp->btn_key_row)))));
        tracep->chgBit(oldp+2576,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r) 
                                   & (~ (IData)(vlTOPp->btn_step)))));
        tracep->chgBit(oldp+2577,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r)) 
                                         & (IData)(vlTOPp->btn_step)))));
        tracep->chgBit(oldp+2578,(((IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r) 
                                   & (~ ((IData)(vlTOPp->btn_step) 
                                         >> 1U)))));
        tracep->chgBit(oldp+2579,((1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r)) 
                                         & ((IData)(vlTOPp->btn_step) 
                                            >> 1U)))));
    }
}

void Vsimu_top::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vsimu_top__Syms* __restrict vlSymsp = static_cast<Vsimu_top__Syms*>(userp);
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
