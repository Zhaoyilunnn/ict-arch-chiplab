// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimu_top.h for the primary calling header

#include "Vsimu_top.h"
#include "Vsimu_top__Syms.h"

#include "verilated_dpi.h"

void Vsimu_top::_settle__TOP__13(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_settle__TOP__13\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp384[5];
    WData/*159:0*/ __Vtemp394[5];
    WData/*159:0*/ __Vtemp395[5];
    WData/*447:0*/ __Vtemp399[14];
    WData/*95:0*/ __Vtemp408[3];
    WData/*95:0*/ __Vtemp415[3];
    WData/*95:0*/ __Vtemp422[3];
    WData/*95:0*/ __Vtemp429[3];
    WData/*127:0*/ __Vtemp431[4];
    WData/*127:0*/ __Vtemp434[4];
    WData/*191:0*/ __Vtemp436[6];
    WData/*95:0*/ __Vtemp443[3];
    WData/*95:0*/ __Vtemp450[3];
    WData/*159:0*/ __Vtemp455[5];
    WData/*159:0*/ __Vtemp457[5];
    WData/*351:0*/ __Vtemp463[11];
    // Body
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xdfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                           >> 0xcU)))))) 
              << 0x3dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xdfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029) 
                                         >> 0xcU)))))) 
              << 0x3dU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0xbfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                           >> 0xcU)))))) 
              << 0x3eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0xbfffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029) 
                                         >> 0xcU)))))) 
              << 0x3eU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3fdfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x20U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                         << 3U) & ((0xffffffe0U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   << 4U)) 
                                   | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      << 5U))) | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   << 4U) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     << 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x37ffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x800U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                          << 2U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3fbfU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x40U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                         << 6U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                    << 2U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              << 3U))) 
                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                           << 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                            >> 9U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 8U))) 
                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                          >> 7U)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 9U)) & 
                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                       >> 8U)) & (~ 
                                                  ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 7U)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                          >> 9U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                       >> 8U))) & (~ 
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                    >> 7U)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                         >> 9U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                   >> 8U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 7U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig 
        = ((0xeU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
           | (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                            >> 2U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 1U))) 
                       & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)) 
                      | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                              >> 2U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         >> 1U)) & 
                         (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                          >> 2U) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                       >> 1U))) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))) 
                    | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                         >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                   >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig 
        = ((0xdU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
           | (2U & ((((0x3ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 4U))) 
                                       << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                 >> 2U))) 
                      | (0x1ffffffeU & ((((~ vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 3U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                             >> 3U)) 
                                         << 1U)))) 
                     | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                >> 4U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               >> 3U))) 
                        << 1U)) | (0x1ffffffeU & ((
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData 
                                                    << 1U) 
                                                   & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                      >> 3U)) 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                     >> 2U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3bffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x400U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                          << 7U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                     << 8U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                               << 9U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                            << 8U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                      << 9U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x3dffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x200U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                          << 9U) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                     << 3U) | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               << 4U))) 
                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                            << 3U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      << 4U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
           | (2U & ((((0xfffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                            >> 3U)) 
                                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                              >> 2U))) 
                                       << 1U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))) 
                      | (0x7ffffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                              >> 3U)) 
                                          << 1U) & 
                                         ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                          >> 1U)) & 
                                        ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                             >> 1U)) 
                                         << 1U)))) 
                     | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                         >> 2U) & (
                                                   (~ 
                                                    ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                     >> 2U)) 
                                                   << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                              >> 1U)) 
                                          << 1U)))) 
                    | (0x3ffffffeU & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                        >> 2U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                                                  >> 1U)) 
                                      & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig 
        = ((2U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
           | (1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                        & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                              >> 6U))) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 5U)) | 
                      (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig)) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                           >> 6U)) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         >> 5U)))) 
                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                               >> 6U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 5U)))) 
                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig) 
                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                           >> 6U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                      >> 5U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x2fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x1000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                           << 0xbU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        << 0xcU) | 
                                       (0xfffff000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                             << 0xcU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig 
        = ((1U & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
           | (2U & ((((0x7ffffeU & ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                          >> 1U)) & 
                                      (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig))) 
                                     << 1U) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               >> 9U))) 
                      | ((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                               >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                >> 0xaU))) << 1U)) 
                     | (0xfffffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig)) 
                                           << 1U)) 
                                       & ((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 0xaU)) 
                                          << 1U)))) 
                    | (0x7ffffeU & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig) 
                                        << 1U)) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                   >> 9U))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 
        = ((0x1fffU & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029)) 
           | (0x2000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                           << 0xcU) & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                        << 0xdU) | 
                                       (0xffffe000U 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           << 2U)))) 
                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                             << 0xdU) & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         << 2U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig 
        = (1U & ((((((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                         >> 1U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                    & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                       >> 0xbU)) | (((~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                         >> 1U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
                                    & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 0xbU)))) 
                  | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                       >> 1U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig))) 
                     & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                           >> 0xbU)))) | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig)) 
                                          & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                             >> 0xbU))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
        = ((0x7fffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut) 
           | ((QData)((IData)((1U & ((((((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               >> 0xdU))) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           >> 0xcU)) 
                                       | (((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig)) 
                                           & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                              >> 0xdU)) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 0xcU)))) 
                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                          & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                                >> 0xdU))) 
                                         & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                               >> 0xcU)))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                         & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xdU)) 
                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                           >> 0xcU)))))) 
              << 0x3fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
        = ((0x7fffffffffffffffULL & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut) 
           | ((QData)((IData)((1U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig) 
                                      & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                          >> 0xdU) 
                                         | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                            >> 0xcU))) 
                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         >> 0xdU) & 
                                        ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029) 
                                         >> 0xcU)))))) 
              << 0x3fU));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
        = ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut 
            + ((0xfffffffffffffffeULL & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut 
                                         << 1U)) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                                                       >> 0xeU)))))) 
           + (QData)((IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry 
                                    >> 0xfU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result 
        = (((((((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 6U)))) & (((((
                                                   (- (IData)(
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
                                                  & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata))) 
               | ((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 7U)))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mul_result))) 
              | ((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                   >> 8U)))) & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mul_result 
                                                        >> 0x20U)))) 
             | ((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                  >> 9U)))) & (IData)(
                                                      (0x1ffffffffULL 
                                                       & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                           ? 
                                                          (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31) 
                                                            == 
                                                            (1U 
                                                             & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete)
                                                                 ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer)
                                                                 : 
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[1U] 
                                                                 >> 0x1fU))))
                                                            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS
                                                            : 
                                                           (~ 
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS 
                                                             - 1ULL)))
                                                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS))))) 
            | ((- (IData)((1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                 >> 0xaU)))) & (IData)(
                                                       (0x1ffffffffULL 
                                                        & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed)
                                                            ? 
                                                           ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31)
                                                             ? 
                                                            (~ 
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR 
                                                              - 1ULL))
                                                             : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR)
                                                            : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR))))) 
           | ((- (IData)((1U & ((~ (IData)((0U != (0xfU 
                                                   & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                       << 0x19U) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                         >> 7U)))))) 
                                & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                      >> 6U)))))) & 
              vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[1U]));
    __Vtemp384[0U] = (IData)((((QData)((IData)((1U 
                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                   >> 0x16U)))) 
                               << 0x2eU) | (((QData)((IData)(
                                                             (1U 
                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                 >> 0x13U)))) 
                                             << 0x2dU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                    >> 0x12U)))) 
                                                << 0x2cU) 
                                               | (((QData)((IData)(
                                                                   (((0x10U 
                                                                      == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                                                     & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                                                    & (~ 
                                                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld)))))) 
                                                   << 0x2bU) 
                                                  | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(
                                                                         ((0x80000000U 
                                                                           & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                              << 0xeU)) 
                                                                          | ((0x40000000U 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                             | ((0x20000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | (0x1fffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 0x11U)))))))) 
                                                         << 0xaU) 
                                                        | (QData)((IData)(
                                                                          ((0x200U 
                                                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                               >> 7U)) 
                                                                           | ((0x100U 
                                                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                              | ((0x80U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index)))))))))))))));
    __Vtemp384[1U] = ((0xffff8000U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                       << 0x18U) | 
                                      (0xff8000U & 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                        >> 8U)))) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                >> 0x16U)))) 
                                                               << 0x2eU) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                >> 0x13U)))) 
                                                                  << 0x2dU) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                >> 0x12U)))) 
                                                                     << 0x2cU) 
                                                                    | (((QData)((IData)(
                                                                                (((0x10U 
                                                                                == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state)) 
                                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last)) 
                                                                                & (~ 
                                                                                (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld)))))) 
                                                                        << 0x2bU) 
                                                                       | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem)) 
                                                                           << 0x2aU) 
                                                                          | (((QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x40000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | ((0x20000000U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xeU)) 
                                                                                | (0x1fffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                                                                << 0xfU) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 0x11U)))))))) 
                                                                              << 0xaU) 
                                                                             | (QData)((IData)(
                                                                                ((0x200U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x100U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x80U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                >> 7U)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index)))))))))))))) 
                                                             >> 0x20U)));
    __Vtemp394[2U] = ((0xffffff00U & ((IData)((((QData)((IData)(
                                                                ((0x80000000U 
                                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                     << 0x17U)) 
                                                                 | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                     << 0x1eU) 
                                                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                        << 0x1dU) 
                                                                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                           << 0x1cU) 
                                                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                              << 0x1bU) 
                                                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                                << 0x19U) 
                                                                                | (0x1ffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                   << 0x11U) 
                                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                     >> 0xfU)))))) 
                                      << 8U)) | ((0x80U 
                                                  & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                     >> 7U)) 
                                                 | ((0xffffffc0U 
                                                     & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]) 
                                                       | (0x1fU 
                                                          & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U])))));
    __Vtemp394[3U] = ((0xffU & ((IData)((((QData)((IData)(
                                                          ((0x80000000U 
                                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                               << 0x17U)) 
                                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                               << 0x1eU) 
                                                              | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                  << 0x1dU) 
                                                                 | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                     << 0x1cU) 
                                                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                        << 0x1bU) 
                                                                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                           << 0x1aU) 
                                                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                              << 0x19U) 
                                                                             | (0x1ffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                             << 0x11U) 
                                                            | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                               >> 0xfU)))))) 
                                >> 0x18U)) | (0xffffff00U 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((0x80000000U 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x17U)) 
                                                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                                << 0x19U) 
                                                                                | (0x1ffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                               << 0x11U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                                >> 0xfU))))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp395[4U] = ((0x100U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                 >> 1U)) | (0xffU & 
                                            ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x80000000U 
                                                                          & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                             << 0x17U)) 
                                                                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil) 
                                                                             << 0x1eU) 
                                                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis) 
                                                                                << 0x1dU) 
                                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem) 
                                                                                << 0x19U) 
                                                                                | (0x1ffffffU 
                                                                                & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                                                << 0x11U) 
                                                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                                >> 0xfU)))))))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[3U] 
                                                                           << 0x11U) 
                                                                          | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                                                             >> 0xfU))))) 
                                                      >> 0x20U)) 
                                             >> 0x18U)));
    __Vtemp399[9U] = ((0x7ffU & ((0x7f8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                            << 3U)) 
                                 | (7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                          >> 0x1dU)))) 
                      | (0xfffff800U & ((0xf8000000U 
                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                            << 3U)) 
                                        | ((0x4000000U 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                               << 3U)) 
                                           | (0x3fff800U 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                 << 3U))))));
    __Vtemp399[0xaU] = ((0x7ffU & ((0x7f8U & ((IData)(
                                                      (((QData)((IData)(
                                                                        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                           << 0xcU) 
                                                                          | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                              << 4U) 
                                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                              << 3U)) 
                                   | (7U & ((0x7f8U 
                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU] 
                                                << 3U)) 
                                            | (7U & 
                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[9U] 
                                                >> 0x1dU)))))) 
                        | (0xfffff800U & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                          << 4U) 
                                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                          << 3U)));
    __Vtemp399[0xbU] = ((0x7ffU & ((7U & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                          << 4U) 
                                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset))))))) 
                                          >> 0x1dU)) 
                                   | (0x7f8U & ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                              << 0xcU) 
                                                                             | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                                         >> 0x20U)) 
                                                << 3U)))) 
                        | (0xfffff800U & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                        << 0xcU) 
                                                                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                           << 4U) 
                                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                                   >> 0x20U)) 
                                          << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0U] 
        = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0U]))) 
                   >> 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[2U] 
        = __Vtemp394[2U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[3U] 
        = __Vtemp394[3U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[4U] 
        = ((0xfffffe00U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                            << 0x12U) | (0x3fe00U & 
                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[5U] 
                                          >> 0xeU)))) 
           | __Vtemp395[4U]);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[5U] 
        = ((0xfffff800U & (__Vtemp384[0U] << 0xbU)) 
           | ((0xfffffc00U & ((IData)((0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1)) 
                              << 0xaU)) | ((0x200U 
                                            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                               >> 2U)) 
                                           | (0x1ffU 
                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[6U] 
                                                 >> 0xeU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[6U] 
        = ((0x7ffU & (__Vtemp384[0U] >> 0x15U)) | (0xfffff800U 
                                                   & (__Vtemp384[1U] 
                                                      << 0xbU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[7U] 
        = ((0x7ffU & (__Vtemp384[1U] >> 0x15U)) | (0xfffff800U 
                                                   & ((0x3fff800U 
                                                       & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                                          << 3U)) 
                                                      | (0xfc000000U 
                                                         & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                                            << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[8U] 
        = ((0x7ffU & ((0x7f8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                 << 3U)) | (7U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[7U] 
                                                  >> 0x1dU)))) 
           | (0xfffff800U & ((0x3fff800U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                            << 3U)) 
                             | (0xfc000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[8U] 
                                               << 3U)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[9U] 
        = __Vtemp399[9U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xaU] 
        = __Vtemp399[0xaU];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xbU] 
        = __Vtemp399[0xbU];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xcU] 
        = ((0x7ffU & ((0x7f8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                 << 3U)) | (7U & ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xaU])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_tag 
                                                                                << 0xcU) 
                                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index) 
                                                                                << 4U) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset)))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1dU)))) 
           | (0xfffff800U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                             << 3U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xdU] 
        = ((0xfffff000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                           << 3U)) | ((0x800U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                                 << 3U)) 
                                      | (0x7ffU & (
                                                   (0x7f8U 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                                       << 3U)) 
                                                   | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xbU] 
                                                      >> 0x1dU)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus[0xeU] 
        = (0xfffU & ((0xff8U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xdU] 
                                << 3U)) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[0xcU] 
                                           >> 0x1dU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
        = (((QData)((IData)((1U & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                    >> 6U) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid)))))) 
            << 0x26U) | (((QData)((IData)((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U] 
                                             >> 5U) 
                                            & (0U != 
                                               (0x1fU 
                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid)))) 
                          << 0x25U) | (((QData)((IData)(
                                                        (0x1fU 
                                                         & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[2U]))) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result)))));
    if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
           == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                >> 0x20U)))) & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x25U))) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp408[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp408[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp408[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp408[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
    }
    if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                           >> 0x20U)))) 
          & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                     >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp415[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp415[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp415[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp415[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1);
        __Vtemp415[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp415[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                           : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                      >> 0x20U)));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go 
        = (1U & ((~ (((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                            == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                 >> 0x20U)))) 
                           & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                      >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                          ? (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                           >> 0x26U)))
                          : (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                                == (0x1fU & (IData)(
                                                    (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                     >> 0x20U)))) 
                               & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                          >> 0x25U))) 
                              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                              ? (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                >> 0x26U)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                              : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2)) 
                                         >> 0x20U)))) 
                        | __Vtemp415[2U]) | (((((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[6U] 
                                                 >> 0x1eU) 
                                                | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r[7U] 
                                                   >> 2U)) 
                                               & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid)) 
                                              | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                   >> 0xbU) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r[4U] 
                                                     >> 0xfU)) 
                                                 & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid))) 
                                             | (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                  >> 9U) 
                                                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[5U] 
                                                    >> 0x13U)) 
                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid)))) 
                      | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar) 
                         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty))) 
                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar) 
                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty)))) 
                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp)));
    if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
           == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                >> 0x20U)))) & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x25U))) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp422[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp422[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp422[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp422[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
        = __Vtemp422[0U];
    if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                           >> 0x20U)))) 
          & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                     >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp429[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp429[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp429[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp429[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1);
        __Vtemp429[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp429[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                           : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                      >> 0x20U)));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
        = __Vtemp429[0U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_allowin))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target 
        = (((- (IData)((1U & ((((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                             >> 0x16U)) 
                                    | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                               >> 0x17U))) 
                                   | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                              >> 0x15U))) 
                                  | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                             >> 0x14U))) 
                                 | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                            >> 0x18U))) 
                                | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                           >> 0x19U))) 
                               | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                          >> 0x1aU))) 
                              | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                         >> 0x1bU)))))) 
            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U] 
               + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
           | ((- (IData)((1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                        >> 0x13U))))) 
              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                 + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd 
        = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
           == vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign 
        = (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
           < vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es);
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin)) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin 
        = (1U & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid)) 
                 | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go) 
                    & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign 
        = (1U & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                   >> 0x1fU) & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
                                   >> 0x1fU))) | ((~ 
                                                   ((~ 
                                                     (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es 
                                                      >> 0x1fU)) 
                                                    & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es 
                                                       >> 0x1fU))) 
                                                  & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken 
        = ((((((((((((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x16U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)) 
                    | ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                >> 0x17U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd)))) 
                   | ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                               >> 0x18U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign))) 
                  | ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                              >> 0x19U)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign)))) 
                 | ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                             >> 0x1aU)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign))) 
                | ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                            >> 0x1bU)) & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign)))) 
               | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                          >> 0x13U))) | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                 >> 0x15U))) 
             | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                        >> 0x14U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
            & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                  >> 6U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
            & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
               >> 6U)) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                           >> 7U) ^ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error 
        = ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                >> 6U)) & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                            >> 7U) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken))) 
           & (((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[3U] 
                << 0x13U) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                             >> 0xdU)) != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush 
        = (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry) 
                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry)) 
               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error)) 
              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error)) 
             & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go)) 
           & (~ (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                 >> 4U)));
    __Vtemp431[0U] = ((0xffffc000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      << 0xeU)) | (
                                                   ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle) 
                                                    << 0xdU) 
                                                   | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush) 
                                                       << 0xcU) 
                                                      | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb) 
                                                          << 0xbU) 
                                                         | ((0x400U 
                                                             & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                << 5U)) 
                                                            | ((0x200U 
                                                                & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data) 
                                                                     | (IData)(
                                                                               (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                                                >> 0x15U))) 
                                                                    | (IData)(
                                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                                               >> 0x14U))) 
                                                                   << 9U)) 
                                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld) 
                                                                   << 8U) 
                                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop) 
                                                                      << 7U) 
                                                                     | ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                                         << 6U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb) 
                                                                            << 5U) 
                                                                           | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd) 
                                                                               << 4U) 
                                                                              | (((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar)) 
                                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid)) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch)))))))))))))));
    __Vtemp434[3U] = ((0xff800000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit) 
                                        & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                       << 0x1aU) | 
                                      (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w) 
                                        << 0x19U) | 
                                       (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h) 
                                         << 0x18U) 
                                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                           << 0x17U))))) 
                      | ((0xffff8000U & (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w) 
                                          << 0x14U) 
                                         | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w) 
                                             << 0x13U) 
                                            | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu) 
                                                << 0x12U) 
                                               | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                   << 0x11U) 
                                                  | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu) 
                                                      << 0x10U) 
                                                     | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                        << 0xfU))))))) 
                         | ((0xffffc000U & ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                            << 0xeU)) 
                            | (0x3fffU & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                   >> 0x20U)) 
                                          >> 0x12U)))));
    __Vtemp436[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                               << 0x3fU) | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                                                  << 8U) 
                                                                 | ((0x80U 
                                                                     & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                                        << 7U)) 
                                                                    | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                                        << 6U) 
                                                                       | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                           << 5U) 
                                                                          | ((0x1eU 
                                                                              & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                                << 1U)) 
                                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))))))) 
                                                << 0x35U) 
                                               | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))) 
                                                      << 0x33U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fffU 
                                                                          & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                              << 0x16U) 
                                                                             | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0xaU))))) 
                                                         << 0x25U) 
                                                        | (((QData)((IData)(
                                                                            (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (((((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                >> 0x20U))) 
                                                                                | (((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U))) 
                                                                                >> 0x20U)))) 
                                                                                | (((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                                >> 0x20U))))))
                                                                                 ? 
                                                                                ((((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                                                                & (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U)))) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))
                                                                                 : 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                                                                 ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)))) 
                                                               << 4U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))))))))))))));
    __Vtemp436[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                << 0x3fU) | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe) 
                                                                   << 8U) 
                                                                  | ((0x80U 
                                                                      & ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid)) 
                                                                         << 7U)) 
                                                                     | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break) 
                                                                         << 6U) 
                                                                        | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall) 
                                                                            << 5U) 
                                                                           | ((0x1eU 
                                                                               & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                                << 1U)) 
                                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__has_int)))))))) 
                                                 << 0x35U) 
                                                | (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr) 
                                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)))) 
                                                       << 0x33U) 
                                                      | (((QData)((IData)(
                                                                          (0x3fffU 
                                                                           & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                                               << 0x16U) 
                                                                              | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                                                >> 0xaU))))) 
                                                          << 0x25U) 
                                                         | (((QData)((IData)(
                                                                             (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w)) 
                                                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w)) 
                                                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)))) 
                                                             << 0x24U) 
                                                            | (((QData)((IData)(
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (((((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                >> 0x20U))) 
                                                                                | (((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U))) 
                                                                                >> 0x20U)))) 
                                                                                | (((- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))) 
                                                                                >> 0x20U) 
                                                                                & (1ULL 
                                                                                | ((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid)) 
                                                                                >> 0x20U))))))
                                                                                 ? 
                                                                                ((((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w))))) 
                                                                                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64)) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w))))) 
                                                                                & (IData)(
                                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                                                >> 0x20U)))) 
                                                                                | ((IData)(
                                                                                (0x1ffffffffULL 
                                                                                & (- (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w))))) 
                                                                                & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid))
                                                                                 : 
                                                                                ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)
                                                                                 ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit)
                                                                                 : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data)))) 
                                                                << 4U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp) 
                                                                                << 2U) 
                                                                                | (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b))))))))))))))) 
                              >> 0x20U));
    if (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                      << 0x1bU) | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                   >> 5U))) == (0x1fU 
                                                & (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                           >> 0x20U)))) 
          & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                     >> 0x25U))) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))) {
        __Vtemp443[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp443[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
        __Vtemp443[2U] = (1U & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                        >> 0x26U)));
    } else {
        __Vtemp443[0U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1);
        __Vtemp443[1U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1))));
        __Vtemp443[2U] = (((((0x1fU & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                        << 0x1bU) | 
                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                        >> 5U))) == 
                             (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                               >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj))
                           ? (1U & ((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                             >> 0x26U)) 
                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data)))
                           : (IData)(((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1)) 
                                      >> 0x20U)));
    }
    if (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
           == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                >> 0x20U)))) & (IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus 
                                                        >> 0x25U))) 
         & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))) {
        __Vtemp450[0U] = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                   << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))));
        __Vtemp450[1U] = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus)) 
                                    << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus))) 
                                  >> 0x20U));
    } else {
        __Vtemp450[0U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                       << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))))
                           : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2);
        __Vtemp450[1U] = (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2) 
                             == (0x1fU & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                                  >> 0x20U)))) 
                            & (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus 
                                       >> 0x25U))) 
                           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd))
                           ? (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus)) 
                                        << 0x20U) | (QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))) 
                                      >> 0x20U)) : (IData)((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2))));
    }
    __Vtemp455[4U] = ((0x40U & ((((((((((((((((((((
                                                   (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h))) 
                                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w))) 
                                                 & (~ (IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                               >> 0x16U)))) 
                                                & (~ (IData)(
                                                             (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                              >> 0x17U)))) 
                                               & (~ (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                             >> 0x18U)))) 
                                              & (~ (IData)(
                                                           (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                            >> 0x19U)))) 
                                             & (~ (IData)(
                                                          (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                           >> 0x1aU)))) 
                                            & (~ (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                          >> 0x1bU)))) 
                                           & (~ (IData)(
                                                        (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                         >> 0x14U)))) 
                                          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall))) 
                                         & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch))) 
                                        & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd))) 
                                       & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr))) 
                                      & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill))) 
                                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb))) 
                                    & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop))) 
                                   & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld))) 
                                  & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar))) 
                                 & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar))) 
                                << 6U)) | ((0xffffffe0U 
                                            & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                                | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w) 
                                                   & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit))) 
                                               << 5U)) 
                                           | ((1U & (IData)(
                                                            (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                             >> 0x15U)))
                                               ? 1U
                                               : (0x1fU 
                                                  & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w)
                                                      ? 
                                                     ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                       << 0x1bU) 
                                                      | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                         >> 5U))
                                                      : 
                                                     vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U])))));
    __Vtemp457[4U] = ((0xffffff00U & ((((((((((((((
                                                   (((((((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w) 
                                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w)) 
                                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w)) 
                                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w)) 
                                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti)) 
                                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui)) 
                                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi)) 
                                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori)) 
                                                      | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori)) 
                                                     | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                                    | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b)) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w)) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w)) 
                                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop)) 
                                       | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld)) 
                                      << 8U)) | ((0x80U 
                                                  & (((IData)(
                                                              (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                               >> 0x13U)) 
                                                      | (IData)(
                                                                (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                                 >> 0x15U))) 
                                                     << 7U)) 
                                                 | __Vtemp455[4U]));
    __Vtemp463[4U] = ((0xc0000000U & (__Vtemp436[0U] 
                                      << 0x1eU)) | 
                      ((0xfc000000U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op) 
                                       << 0x1aU)) | 
                       ((0xfe000000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w) 
                                           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w)) 
                                          | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w)) 
                                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w)) 
                                        << 0x19U)) 
                        | ((0xfffff800U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op) 
                                           << 0xbU)) 
                           | ((0xfffffc00U & (((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b) 
                                                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h)) 
                                                  | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w)) 
                                                 | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu)) 
                                                | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu)) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w)) 
                                              << 0xaU)) 
                              | ((0x200U & (((((IData)(
                                                       (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                        >> 0x13U)) 
                                               | (IData)(
                                                         (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d 
                                                          >> 0x15U))) 
                                              | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi)) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i)) 
                                            << 9U)) 
                                 | __Vtemp457[4U]))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0U] 
        = vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[1U] 
        = __Vtemp450[1U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[2U] 
        = (IData)((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                    << 0x20U) | (QData)((IData)(__Vtemp443[1U]))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm)) 
                     << 0x20U) | (QData)((IData)(__Vtemp443[1U]))) 
                   >> 0x20U));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[4U] 
        = __Vtemp463[4U];
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[5U] 
        = ((0x3fffffffU & (__Vtemp436[0U] >> 2U)) | 
           (0xc0000000U & (__Vtemp436[1U] << 0x1eU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[6U] 
        = ((0x3fffffffU & (__Vtemp436[1U] >> 2U)) | 
           (0xc0000000U & (__Vtemp431[0U] << 0x1eU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[7U] 
        = ((0x3fffffffU & (__Vtemp431[0U] >> 2U)) | 
           (0xc0000000U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                           << 0xcU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[8U] 
        = ((0x3fffffffU & ((0xfffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                      >> 0x14U)) | 
                           (0x3ffff000U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
                                           << 0xcU)))) 
           | (0xc0000000U & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
                             << 0xcU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[9U] 
        = ((0x3fffffffU & ((0xfffU & ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64) 
                                      >> 0x14U)) | 
                           (0x3ffff000U & ((IData)(
                                                   (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 
                                                    >> 0x20U)) 
                                           << 0xcU)))) 
           | (0xc0000000U & (__Vtemp434[3U] << 0x1eU)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus[0xaU] 
        = (0x3fffffffU & ((0x20000000U & (((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd) 
                                             | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr)) 
                                            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg)) 
                                           & (5U == 
                                              (0x3fffU 
                                               & ((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[2U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[1U] 
                                                     >> 0xaU))))) 
                                          << 0x1dU)) 
                          | (__Vtemp434[3U] >> 2U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
        = (((QData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush)) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken)
                                          ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target
                                          : ((IData)(4U) 
                                             + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r[0U])))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
            & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill)))
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry
            : (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_flush) 
                & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill))
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry
                : ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush)
                    ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era
                    : ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush) 
                         | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush)) 
                        | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush))
                        ? ((IData)(4U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r[0U])
                        : (((IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                                     >> 0x20U)) & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid))
                            ? (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus)
                            : ((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter) 
                                 >> 2U) & (0U != vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd))
                                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc
                                : ((IData)(4U) + vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc)))))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state)
            ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer
            : (((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state)) 
                & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)))
                ? vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer
                : vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc));
    if (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr);
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr 
                        >> 4U));
    } else {
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset 
            = (0xfU & vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc);
        vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index 
            = (0xffU & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                        >> 4U));
    }
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef 
        = (1U & (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                 | (vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc 
                    >> 1U)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra 
        = (((- (IData)((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok))) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)(((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                          | (0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra 
        = (((- (IData)(((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok) 
                        | ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en) 
                           & ((1U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                              | (2U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))))) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index)) 
           | ((- (IData)((((4U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state)) 
                           | (8U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))) 
                          | (0x10U == (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state))))) 
              & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index)));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid 
        = (1U & ((((((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin) 
                     & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef))) 
                    & (~ (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req) 
                           & (4U != (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state))) 
                          & (~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state))))) 
                   | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign)) 
                  | (IData)((vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__br_bus 
                             >> 0x20U))) & (~ ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__idle_flush) 
                                               | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock)))));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid 
        = ((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__fetch_en 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok)) 
           | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go 
        = (((IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_valid) 
            | (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok));
    vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid 
        = ((~ (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__reset)) 
           & (IData)(vlTOPp->simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go));
}

void Vsimu_top::_eval_initial(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval_initial\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
}

void Vsimu_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::final\n"); );
    // Variables
    Vsimu_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimu_top::_eval_settle(Vsimu_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_eval_settle\n"); );
    Vsimu_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
}

void Vsimu_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimu_top::_ctor_var_reset\n"); );
    // Body
    aclk = VL_RAND_RESET_I(1);
    aresetn = VL_RAND_RESET_I(1);
    enable_delay = VL_RAND_RESET_I(1);
    random_seed = VL_RAND_RESET_I(23);
    ram_ren = VL_RAND_RESET_I(1);
    ram_raddr = VL_RAND_RESET_I(32);
    ram_rdata = VL_RAND_RESET_I(32);
    ram_wen = VL_RAND_RESET_I(4);
    ram_waddr = VL_RAND_RESET_I(32);
    ram_wdata = VL_RAND_RESET_I(32);
    debug0_wb_pc = VL_RAND_RESET_I(32);
    debug0_wb_rf_wen = VL_RAND_RESET_I(1);
    debug0_wb_rf_wnum = VL_RAND_RESET_I(5);
    debug0_wb_rf_wdata = VL_RAND_RESET_I(32);
    num_data = VL_RAND_RESET_I(32);
    open_trace = VL_RAND_RESET_I(1);
    num_monitor = VL_RAND_RESET_I(1);
    confreg_uart_data = VL_RAND_RESET_I(8);
    write_uart_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, uart_ctr_bus);
    uart_rx = VL_RAND_RESET_I(1);
    uart_tx = VL_RAND_RESET_I(1);
    led = VL_RAND_RESET_I(16);
    led_rg0 = VL_RAND_RESET_I(2);
    led_rg1 = VL_RAND_RESET_I(2);
    num_csn = VL_RAND_RESET_I(8);
    num_a_g = VL_RAND_RESET_I(7);
    __SYM__switch = VL_RAND_RESET_I(8);
    btn_key_col = VL_RAND_RESET_I(4);
    btn_key_row = VL_RAND_RESET_I(4);
    btn_step = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu_awaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu_awsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu_awvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu_wlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_bready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_arid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu_araddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu_arsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu_arvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_awvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__m0_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__m0_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_bready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_arvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__m0_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__m0_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__m0_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__m0_rready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__s0_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_s_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_s_ram_wen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__UART_RI = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__uart0_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__uart0_txd_oe = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT____Vcellout__cpu__awlen = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT____Vcellout__cpu__arlen = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ds_allowin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__es_allowin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ms_allowin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__fs_to_ds_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_esubcode = VL_RAND_RESET_I(9);
    simu_top__DOT__soc__DOT__cpu__DOT__ws_csr_ecode = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__ds_timer_64 = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__rd_csr_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__ws_bad_va = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__ws_va_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__has_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__excp_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__ertn_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icacop_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__idle_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__es_div_enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mul_result = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbrd_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbelo1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbr_tlbidx = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__invtlb_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_v = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_mat = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_plv = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_index = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_v = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_mat = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_plv = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbfill_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__tlbwr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__refetch_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__excp_tlbrefill = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_pg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_da = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_dmw1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__csr_plv = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_trans_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_addr_trans_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cacop_op_mode_di = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__excp_tlb_vppn = VL_RAND_RESET_I(19);
    simu_top__DOT__soc__DOT__cpu__DOT__icacop_op_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcacop_op_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache_unbusy = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__fetch_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_ret_pc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_add_entry = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_operate_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_delete_entry = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_pre_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb_target_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_fetch = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(350, simu_top__DOT__soc__DOT__cpu__DOT__ds_to_es_bus);
    VL_RAND_RESET_W(425, simu_top__DOT__soc__DOT__cpu__DOT__es_to_ms_bus);
    VL_RAND_RESET_W(460, simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ws_bus);
    simu_top__DOT__soc__DOT__cpu__DOT__ws_to_rf_bus = VL_RAND_RESET_Q(38);
    simu_top__DOT__soc__DOT__cpu__DOT__br_bus = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__es_to_ds_forward_bus = VL_RAND_RESET_Q(39);
    simu_top__DOT__soc__DOT__cpu__DOT__ms_to_ds_forward_bus = VL_RAND_RESET_Q(39);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_addr_ok = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_data_ok = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_rd_addr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_ret_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_type = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_addr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_wstrb = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, simu_top__DOT__soc__DOT__cpu__DOT__inst_wr_data);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_uncache_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_tlb_excp_cancel_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw0_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__inst_dmw1_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_vaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__data_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_op = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tag = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__data_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__data_addr_ok = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_data_ok = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__data_rd_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_rd_type = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__data_rd_addr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__data_ret_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_ret_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_wr_type = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, simu_top__DOT__soc__DOT__cpu__DOT__data_wr_data);
    simu_top__DOT__soc__DOT__cpu__DOT__data_uncache_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_dmw0_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_dmw1_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__data_tlb_excp_cancel_req = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__preld_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__commit_inst = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT____Vcellout__id_stage__rf_to_diff[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_cnt_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_timer_64 = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_ld_en = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_paddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_ld_vaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst_st_en = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_paddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_vaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_st_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_rstat_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_pc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_excp_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_ertn = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_csr_ecode = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_tlbfill_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__cmt_rand_index = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_allowin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__to_fs_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_ready_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__nextpc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__real_nextpc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__pfs_excp_adef = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_tlbr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_pif = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_ppi = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_num = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__excp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_sign = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_rd_buff = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__inst_buff_enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_go_dirt = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__idle_lock = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_excp_adef = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__fs_pc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(109, simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__fs_to_ds_bus_r);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_taken = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_target = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__btb_pre_error_flush = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__alu_op = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__mul_div_op = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__ds_imm = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__i26 = VL_RAND_RESET_I(26);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_31_26_d = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_25_22_d = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_21_20_d = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__op_19_15_d = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rd_d = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_d = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rk_d = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_add_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sub_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slt = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_nor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_and = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_or = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_lu12i_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_addi_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slti = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sltui = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddi = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_pcaddu12i = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_andi = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ori = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_xori = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mul_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mulh_wu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_div_wu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_mod_wu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_slli_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srli_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srai_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sll_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_srl_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sra_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ll_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_sc_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_b = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_bu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_h = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_hu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ld_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_b = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_h = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_st_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_syscall = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_break = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrrd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrwr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_csrxchg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ertn = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntid_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvl_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_rdcntvh_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_idle = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbsrch = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbrd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbwr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_tlbfill = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_invtlb = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_cacop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_preld = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_dbar = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_ibar = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_raddr2 = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rf_rdata2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__pipeline_no_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_eq_rd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_sign = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_lt_rd_unsign = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__excp_ipe = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_jirl = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_need_reg_data = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__br_to_btb = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rj = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__inst_need_rkd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rj_value_forward_es = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__rkd_value_forward_es = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT____Vcellout__u_regfile__rf_o[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(350, simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__ds_to_es_bus_r);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__excp_ale = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__access_mem = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcache_req_or_inst_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__dcacop_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__preld_inst = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_src2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_alu_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__exe_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_stb_wen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__es_sth_wen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__slt_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__sltu_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__or_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_b = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_cin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__exe_stage__DOT__u_alu__DOT__adder_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignR = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_d = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__result_r = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__div_signed_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__x_31_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__y_31_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_div_signed = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_x_31 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__complete_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__real_complete = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__CalY = VL_RAND_RESET_Q(33);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__Carry = VL_RAND_RESET_I(17);
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__BoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__fir__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__las__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__las__y = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageCarry = VL_RAND_RESET_I(17);
    { int __Vi0=0; for (; __Vi0<17; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__p = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0280__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0281__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0282__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0283__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0284__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0285__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0286__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0287__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0288__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__0289__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02810__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02811__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02812__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02813__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02814__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02815__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02816__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02817__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02818__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02819__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02820__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02821__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02822__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02823__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02824__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02825__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02826__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02827__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02828__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02829__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02830__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02831__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02832__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02833__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02834__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02835__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02836__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02837__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02838__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02839__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02840__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02841__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02842__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02843__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02844__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02845__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02846__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02847__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02848__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02849__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02850__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02851__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02852__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02853__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02854__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02855__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02856__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02857__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02858__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02859__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02860__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02861__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02862__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02863__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__WallaceInter__02864__029 = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__COut = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SOut = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__firs__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__2__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__4__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__6__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__8__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__10__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__12__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__14__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__16__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__18__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__20__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__22__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__24__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__26__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__28__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellout__boothfor__BRA__30__KET____DOT__ai__OutX = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__1__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__2__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__3__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__4__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__5__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__6__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__7__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__8__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__9__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__10__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__11__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__12__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__13__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__14__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__15__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__16__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__17__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__18__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__19__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__20__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__21__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__22__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__23__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__24__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__25__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__26__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__27__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__28__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__29__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__30__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__31__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__32__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__33__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__34__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__35__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__36__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__37__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__38__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__39__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__40__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__41__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__42__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__43__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__44__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__45__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__46__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__47__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__48__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__49__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__50__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__51__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__52__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__53__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__54__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__55__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__56__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__57__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__58__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__59__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__60__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__61__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__62__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vcellinp__wallacefor__BRA__63__KET____DOT__bi__InData = VL_RAND_RESET_I(17);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__neg2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__fir__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__las__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__firs__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__2__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__4__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__6__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__8__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__10__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__12__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__14__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__16__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__18__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__20__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__22__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__24__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__26__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__28__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__negx = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__neg2x = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT___2x = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<65; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__boothfor__BRA__30__KET____DOT__ai__DOT__CarrySig[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__1__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__2__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__3__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__4__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__5__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__6__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__7__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__8__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__9__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__10__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__11__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__12__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__13__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__14__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__15__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__16__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__17__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__18__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__19__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__20__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__21__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__22__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__23__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__24__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__25__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__26__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__27__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__28__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__29__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__30__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__31__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__32__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__33__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__34__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__35__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__36__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__37__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__38__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__39__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__40__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__41__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__42__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__43__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__44__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__45__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__46__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__47__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__48__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__49__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__50__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__51__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__52__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__53__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__54__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__55__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__56__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__57__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__58__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__59__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__60__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__61__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__62__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FirSig = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__SecSig = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ThiSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__ForSig = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__wallacefor__BRA__63__KET____DOT__bi__DOT__FifSig = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(425, simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__es_to_ms_bus_r);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_final_result = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__flush_sign = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__ms_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_rd_buff = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__data_buff_enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__access_mem = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_adem = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_tlbr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pil = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pis = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_pme = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__excp_ppi = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_byteLoaded = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__mem_halfLoaded = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__mem_stage__DOT__tmp_data_offset = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ws_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(460, simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__ms_to_ws_bus_r);
    simu_top__DOT__soc__DOT__cpu__DOT__wb_stage__DOT__rf_we = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__crmd_wen = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tcfg_wen = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW0_wen = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__DMW1_wen = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_prmd = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ectl = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_estat = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_era = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_badv = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_eentry = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbidx = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbehi = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbelo1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_asid = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cpuid = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_save3 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tid = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tcfg = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_cntc = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_ticlr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tlbrentry = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_dmw1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdl = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_pgdh = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_brk = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_disable_cache = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = VL_RAND_RESET_Q(64);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__llbit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_valid_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__tlbrd_invalid_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__no_forward = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_wait_enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__rd_requst_can_receive = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__data_real_rd_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__inst_real_rd_size = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ps = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s0_ppn = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ps = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__s1_ppn = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__we = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_index = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__w_e = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__r_g = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_vaddr_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_vaddr_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__inst_paddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__data_paddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__pg_mode = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_index = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn[__Vi0] = VL_RAND_RESET_I(19);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid[__Vi0] = VL_RAND_RESET_I(10);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0[__Vi0] = VL_RAND_RESET_I(20);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1[__Vi0] = VL_RAND_RESET_I(20);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1[__Vi0] = VL_RAND_RESET_I(1);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__match1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s0_odd_page_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__s1_odd_page_buffer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_op = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_tag = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_offset = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_cacop_op_mode = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_replace_way = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__miss_buffer_ret_num = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__ret_num_add_one = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_hit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_hit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cache_hit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_dina = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_dina = VL_RAND_RESET_I(21);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__bank_ena = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_ena = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__tagv_wea_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__replace_way = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__cacop_op_mode2_hit_wr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way0_hit_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lookup_way1_hit_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_offset = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_tag = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__real_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__req_or_inst_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_d_reg);
    VL_RAND_RESET_W(256, simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_d_reg);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_op = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_preld = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_tag = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_offset = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_cacop_op_mode = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_replace_way = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__miss_buffer_ret_num = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__ret_num_add_one = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_way = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_offset = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3_wea = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv_wea = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv_wea = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way0_bank3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__wr_match_way1_bank3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state_index = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_hit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_hit = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cache_hit = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_data);
    VL_RAND_RESET_W(128, simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_data);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__replace_way = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_idle2lookup = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_lookup2lookup = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_addra = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_dina = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_dina = VL_RAND_RESET_I(21);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__bank_ena = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_ena = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__tagv_wea_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__uncache_wr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_wr_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__cacop_op_mode2_hit_wr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_st_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__preld_ld_st_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__req_or_inst_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way0_hit_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lookup_way1_hit_buffer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__rd_req_buffer = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__output_buffer = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg[__Vi0] = VL_RAND_RESET_I(21);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__output_buffer = VL_RAND_RESET_I(21);
    simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc[__Vi0] = VL_RAND_RESET_I(30);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target[__Vi0] = VL_RAND_RESET_I(30);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__jirl_flag = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__valid = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras[__Vi0] = VL_RAND_RESET_I(30);
    }}
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_buffer = VL_RAND_RESET_I(30);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_full = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_target = VL_RAND_RESET_I(30);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_counter = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_index = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_jirl_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__select_one_invalid_entry = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__add_entry_index = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = VL_RAND_RESET_I(6);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__delay__DOT__mask_ar = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_ar_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_aw = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_aw_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_no_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_random = VL_RAND_RESET_I(23);
    simu_top__DOT__soc__DOT__delay__DOT__mask_random_next = VL_RAND_RESET_I(23);
    simu_top__DOT__soc__DOT__delay__DOT__mask_short_delay = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_w = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__delay__DOT__mask_w_disable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s1_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_awready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_wready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_bvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_arready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rresp = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s4_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_s_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_s_hit = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rlast = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rvalid = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bid[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bresp[__Vi0] = VL_RAND_RESET_I(2);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rid[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rresp[__Vi0] = VL_RAND_RESET_I(2);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_awvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_wvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_bready = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_arvalid = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__s_rready = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__BASE_ADDR[__Vi0] = VL_RAND_RESET_I(5);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_0 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_sel_group_1 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_0 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_sel_group_1 = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo_full = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_empty = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo_full = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_dir_ins = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_data_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_pre_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel_reg = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_dir_ins = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_data_pre_sel = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound5 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT____Vlvbound9 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__i = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_rw_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_addr_dma = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_wdata_dma = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_ack_i = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_ce = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_enab_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datai_cpu = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_datao_cpu = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_word_trans_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_valid_cpu = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_high_24b_wr = VL_RAND_RESET_I(24);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_clk_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_reset_n_dma = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_uart0_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_nand_datai = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_ready = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__csr_rw_sm_nxt = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_w_id = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_r_id = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_rstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datao_32 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_wr_size = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_rw = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_psel = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_enab = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_addr = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datai = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_apb_mux16__DOT__apb_datao = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__we = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__re = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__rx_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__tx2rx_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__isomode = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__srx_pad = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fcr = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mcr = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__infrared = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_pol = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lcr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dl = VL_RAND_RESET_I(24);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__start_dlc = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__trigger_level = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rx_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tx_reset = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_reg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_en_reg = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__mode_reg = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fi_di_reg = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__repeat_reg = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_data_out = VL_RAND_RESET_I(11);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__serial_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_overrun = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_push_pulse = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT____Vcellinp__receiver__enable = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr_mask_condition = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__iir_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msr_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__fifo_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__delayed_modem_signals = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr0_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr1_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr2_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr3_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr4_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr6_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr7_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_cnt = VL_RAND_RESET_I(9);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_next = VL_RAND_RESET_I(9);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__M_toggle = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_d = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__d1_fifo_read = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__stx_o_tmp = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_out = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_overrun = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tf_data_bak = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__i_uart_sync_flops__DOT__flop_0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_counter = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rframing_error = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rbit_in = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push_q = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_data_in = VL_RAND_RESET_I(11);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rf_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_eq_0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rcounter16_minus_1 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value = VL_RAND_RESET_I(10);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__data8_out = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vi0] = VL_RAND_RESET_I(3);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_int = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r0 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_iordy_r1 = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r1 = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__nand_type_r2 = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__REG_DAT_T = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_c = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_addr_r = VL_RAND_RESET_I(25);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_op_num = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_parameter = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_ce_map1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_rdy_map1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_timing = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__addr_in_die = VL_RAND_RESET_Q(38);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_clr_ack = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NANDtag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT0 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT6 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT7 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT8 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT9 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT10 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HIT11 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_HIT = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_cmd_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_number = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ID_INFORM = VL_RAND_RESET_Q(48);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_O_RD = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_pre_o = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_IORDY_post_i = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DAT_I_WR = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ACK = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_araddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arlen_last = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_arsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_incr = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_next = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awaddr_wrap = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awburst = VL_RAND_RESET_I(2);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awid = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awlen = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_awsize = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_data_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_datas = VL_RAND_RESET_Q(45);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_a_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_allow_out = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_data = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_datas = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_pop = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_push = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_queue_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_b_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_en = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_go = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wdata = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wlast = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wstrb = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_w_wvalid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_rg0_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__led_rg1_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__num_data = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_data = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__confreg__DOT__confreg_uart_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__timer_r2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__simu_flag = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__io_simu = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__virtual_uart_data = VL_RAND_RESET_I(8);
    simu_top__DOT__soc__DOT__confreg__DOT__open_trace = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__num_monitor = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_rdata_reg = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_begin_r3 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r2 = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__conf_wdata_r2 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__timer_r1 = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    simu_top__DOT__soc__DOT__confreg__DOT__write_timer = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__write_uart_valid = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_key_r = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__confreg__DOT__state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__confreg__DOT__next_state = VL_RAND_RESET_I(3);
    simu_top__DOT__soc__DOT__confreg__DOT__key_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_key_tmp = VL_RAND_RESET_I(16);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_step0_r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__btn_step1_r = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step0_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__step1_flag = VL_RAND_RESET_I(1);
    simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    simu_top__DOT__soc__DOT__confreg__DOT__scan_data = VL_RAND_RESET_I(4);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__valid = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__7__pre_num = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__Vfuncout = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__valid = VL_RAND_RESET_I(3);
    __Vfunc_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__get_num__8__pre_num = VL_RAND_RESET_I(3);
    __Vtableidx1 = 0;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[0] = 0U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[1] = 0U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[2] = 1U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[3] = 1U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[4] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[5] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[6] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[7] = 2U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[8] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[9] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[10] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[11] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[12] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[13] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[14] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[15] = 3U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[16] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[17] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[18] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[19] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[20] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[21] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[22] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[23] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[24] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[25] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[26] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[27] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[28] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[29] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[30] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_dir[31] = 4U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[0] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[1] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[2] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[3] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[4] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[5] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[6] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[7] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[8] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[9] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[10] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[11] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[12] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[13] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[14] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[15] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[16] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[17] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[18] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[19] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[20] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[21] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[22] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[23] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[24] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[25] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[26] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[27] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[28] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[29] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[30] = 5U;
    __Vtable1_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__w_addr_dir_int[31] = 5U;
    __Vtableidx2 = 0;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[0] = 0U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[1] = 0U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[2] = 1U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[3] = 1U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[4] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[5] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[6] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[7] = 2U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[8] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[9] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[10] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[11] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[12] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[13] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[14] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[15] = 3U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[16] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[17] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[18] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[19] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[20] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[21] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[22] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[23] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[24] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[25] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[26] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[27] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[28] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[29] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[30] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir[31] = 4U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[0] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[1] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[2] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[3] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[4] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[5] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[6] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[7] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[8] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[9] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[10] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[11] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[12] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[13] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[14] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[15] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[16] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[17] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[18] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[19] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[20] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[21] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[22] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[23] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[24] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[25] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[26] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[27] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[28] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[29] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[30] = 5U;
    __Vtable2_simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_dir_int[31] = 5U;
    __Vtableidx3 = 0;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[0] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[1] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[2] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[3] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[4] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[5] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[6] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[7] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[8] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[9] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[10] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[11] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[12] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[13] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[14] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[15] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[16] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[17] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[18] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[19] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[20] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[21] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[22] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[23] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[24] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[25] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[26] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[27] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[28] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[29] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[30] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[31] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[32] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[33] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[34] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[35] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[36] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[37] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[38] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[39] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[40] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[41] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[42] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[43] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[44] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[45] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[46] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[47] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[48] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[49] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[50] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[51] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[52] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[53] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[54] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[55] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[56] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[57] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[58] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[59] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[60] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[61] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[62] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[63] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[64] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[65] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[66] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[67] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[68] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[69] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[70] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[71] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[72] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[73] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[74] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[75] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[76] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[77] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[78] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[79] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[80] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[81] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[82] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[83] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[84] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[85] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[86] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[87] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[88] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[89] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[90] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[91] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[92] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[93] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[94] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[95] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[96] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[97] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[98] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[99] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[100] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[101] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[102] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[103] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[104] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[105] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[106] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[107] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[108] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[109] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[110] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[111] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[112] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[113] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[114] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[115] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[116] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[117] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[118] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[119] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[120] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[121] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[122] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[123] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[124] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[125] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[126] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[127] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[128] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[129] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[130] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[131] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[132] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[133] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[134] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[135] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[136] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[137] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[138] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[139] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[140] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[141] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[142] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[143] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[144] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[145] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[146] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[147] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[148] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[149] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[150] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[151] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[152] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[153] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[154] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[155] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[156] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[157] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[158] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[159] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[160] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[161] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[162] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[163] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[164] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[165] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[166] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[167] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[168] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[169] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[170] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[171] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[172] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[173] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[174] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[175] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[176] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[177] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[178] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[179] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[180] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[181] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[182] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[183] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[184] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[185] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[186] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[187] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[188] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[189] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[190] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[191] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[192] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[193] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[194] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[195] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[196] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[197] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[198] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[199] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[200] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[201] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[202] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[203] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[204] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[205] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[206] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[207] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[208] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[209] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[210] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[211] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[212] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[213] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[214] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[215] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[216] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[217] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[218] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[219] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[220] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[221] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[222] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[223] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[224] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[225] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[226] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[227] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[228] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[229] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[230] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[231] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[232] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[233] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[234] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[235] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[236] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[237] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[238] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[239] = 0xafU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[240] = 0x5fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[241] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[242] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[243] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[244] = 0x67U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[245] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[246] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[247] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[248] = 0x6fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[249] = 0x7fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[250] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[251] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[252] = 0x77U;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[253] = 0x8fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[254] = 0x9fU;
    __Vtable3_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_value[255] = 0xafU;
    __Vtableidx4 = 0;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[0] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[1] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[2] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[3] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[4] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[5] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[6] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[7] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[8] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[9] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[10] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[11] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[12] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[13] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[14] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[15] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[16] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[17] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[18] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[19] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[20] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[21] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[22] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[23] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[24] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[25] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[26] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[27] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[28] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[29] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[30] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[31] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[32] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[33] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[34] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[35] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[36] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[37] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[38] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[39] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[40] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[41] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[42] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[43] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[44] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[45] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[46] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[47] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[48] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[49] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[50] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[51] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[52] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[53] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[54] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[55] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[56] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[57] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[58] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[59] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[60] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[61] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[62] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[63] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[64] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[65] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[66] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[67] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[68] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[69] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[70] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[71] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[72] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[73] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[74] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[75] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[76] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[77] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[78] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[79] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[80] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[81] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[82] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[83] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[84] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[85] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[86] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[87] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[88] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[89] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[90] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[91] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[92] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[93] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[94] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[95] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[96] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[97] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[98] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[99] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[100] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[101] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[102] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[103] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[104] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[105] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[106] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[107] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[108] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[109] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[110] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[111] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[112] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[113] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[114] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[115] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[116] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[117] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[118] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[119] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[120] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[121] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[122] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[123] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[124] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[125] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[126] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[127] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[128] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[129] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[130] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[131] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[132] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[133] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[134] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[135] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[136] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[137] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[138] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[139] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[140] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[141] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[142] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[143] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[144] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[145] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[146] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[147] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[148] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[149] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[150] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[151] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[152] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[153] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[154] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[155] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[156] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[157] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[158] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[159] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[160] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[161] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[162] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[163] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[164] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[165] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[166] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[167] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[168] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[169] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[170] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[171] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[172] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[173] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[174] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[175] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[176] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[177] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[178] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[179] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[180] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[181] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[182] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[183] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[184] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[185] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[186] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[187] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[188] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[189] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[190] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[191] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[192] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[193] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[194] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[195] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[196] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[197] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[198] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[199] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[200] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[201] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[202] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[203] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[204] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[205] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[206] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[207] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[208] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[209] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[210] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[211] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[212] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[213] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[214] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[215] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[216] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[217] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[218] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[219] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[220] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[221] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[222] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[223] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[224] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[225] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[226] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[227] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[228] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[229] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[230] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[231] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[232] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[233] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[234] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[235] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[236] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[237] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[238] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[239] = 0x2ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[240] = 0x1bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[241] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[242] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[243] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[244] = 0x1dfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[245] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[246] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[247] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[248] = 0x1ffU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[249] = 0x23fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[250] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[251] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[252] = 0x21fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[253] = 0x27fU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[254] = 0x2bfU;
    __Vtable4_simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__toc_value[255] = 0x2ffU;
    __Vtable5_num_a_g[0] = 0U;
    __Vtable5_num_a_g[1] = 0x7eU;
    __Vtable5_num_a_g[2] = 0U;
    __Vtable5_num_a_g[3] = 0x30U;
    __Vtable5_num_a_g[4] = 0U;
    __Vtable5_num_a_g[5] = 0x6dU;
    __Vtable5_num_a_g[6] = 0U;
    __Vtable5_num_a_g[7] = 0x79U;
    __Vtable5_num_a_g[8] = 0U;
    __Vtable5_num_a_g[9] = 0x33U;
    __Vtable5_num_a_g[10] = 0U;
    __Vtable5_num_a_g[11] = 0x5bU;
    __Vtable5_num_a_g[12] = 0U;
    __Vtable5_num_a_g[13] = 0x5fU;
    __Vtable5_num_a_g[14] = 0U;
    __Vtable5_num_a_g[15] = 0x70U;
    __Vtable5_num_a_g[16] = 0U;
    __Vtable5_num_a_g[17] = 0x7fU;
    __Vtable5_num_a_g[18] = 0U;
    __Vtable5_num_a_g[19] = 0x7bU;
    __Vtable5_num_a_g[20] = 0U;
    __Vtable5_num_a_g[21] = 0x77U;
    __Vtable5_num_a_g[22] = 0U;
    __Vtable5_num_a_g[23] = 0x1fU;
    __Vtable5_num_a_g[24] = 0U;
    __Vtable5_num_a_g[25] = 0x4eU;
    __Vtable5_num_a_g[26] = 0U;
    __Vtable5_num_a_g[27] = 0x3dU;
    __Vtable5_num_a_g[28] = 0U;
    __Vtable5_num_a_g[29] = 0x4fU;
    __Vtable5_num_a_g[30] = 0U;
    __Vtable5_num_a_g[31] = 0x47U;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__flush_inst_req_state = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__if_stage__DOT__br_target_inst_req_state = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__branch_slot_cancel = VL_RAND_RESET_I(1);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__id_stage__DOT__u_regfile__DOT__rf__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__count = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__tmp_r = VL_RAND_RESET_Q(33);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_div__DOT__UnsignS = VL_RAND_RESET_Q(33);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v1 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v2 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v3 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v4 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v5 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v6 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v7 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v8 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v9 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v10 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v11 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v12 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v13 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v14 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v15 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__u_mul__DOT__SecStageBoothRes__v16 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_crmd = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_en = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_tval = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__csr_llbctl = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__u_csr__DOT__timer_64 = VL_RAND_RESET_Q(64);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_requst_state = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__read_respond_state = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_requst_state = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__cpu_wlast = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_num = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(128, __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_buffer_data);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__axi_bridge__DOT__write_respond_state = VL_RAND_RESET_I(1);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat1__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv1__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v0__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d0__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = VL_RAND_RESET_I(19);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_vppn__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_mat0__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_plv0__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = VL_RAND_RESET_I(20);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn0__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_g__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = VL_RAND_RESET_I(10);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_asid__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ps__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = VL_RAND_RESET_I(20);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_ppn1__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_d1__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_v1__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v1 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v2 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v3 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v4 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v5 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v6 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v7 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v8 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v9 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v10 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v11 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v12 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v13 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v14 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v15 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v16 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v17 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v18 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v19 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v20 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v21 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v22 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v23 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v24 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v25 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v26 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v27 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v28 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v29 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v30 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v31 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v32 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v33 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v34 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v35 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v36 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v37 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v38 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v39 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v40 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v41 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v42 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v43 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v44 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v45 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v46 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v47 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v48 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v49 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v50 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v51 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v52 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v53 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v54 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v55 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v56 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v57 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v58 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v59 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v60 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v61 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v62 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v63 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v64 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v65 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v66 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v67 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v68 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v69 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v70 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v71 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v72 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v73 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v74 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v75 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v76 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v77 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v78 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v79 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v80 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v81 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v82 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v83 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v84 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v85 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v86 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v87 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v88 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v89 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v90 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v91 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v92 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v93 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v94 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v95 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v96 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v97 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v98 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v99 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v100 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v101 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v102 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v103 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v104 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v105 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v106 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v107 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v108 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v109 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v110 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v111 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v112 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v113 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v114 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v115 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v116 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v117 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v118 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v119 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v120 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v121 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v122 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v123 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v124 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v125 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v126 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v127 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v128 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v129 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v130 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v131 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v132 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v133 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v134 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v135 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v136 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v137 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v138 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v139 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v140 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v141 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v142 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v143 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v144 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v145 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v146 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v147 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v148 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v149 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v150 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v151 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v152 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v153 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v154 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v155 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v156 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v157 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v158 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v159 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v160 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v161 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v162 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v163 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v164 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v165 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v166 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v167 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v168 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v169 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v170 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v171 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v172 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v173 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v174 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v175 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v176 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v177 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v178 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v179 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v180 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v181 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v182 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v183 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v184 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v185 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v186 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v187 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v188 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v189 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v190 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v191 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v192 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v193 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v194 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v195 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v196 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v197 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v198 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v199 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v200 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v201 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v202 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v203 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v204 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v205 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v206 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v207 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v208 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v209 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v210 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v211 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v212 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v213 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v214 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v215 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v216 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v217 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v218 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v219 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v220 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v221 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v222 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__addr_trans__DOT__tlb_entry__DOT__tlb_e__v223 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__main_state = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__request_buffer_icacop = VL_RAND_RESET_I(1);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__icache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__main_state = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_uncache_en = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__request_buffer_dcacop = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__data_wr_req = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__write_buffer_state = VL_RAND_RESET_I(1);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank0__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank1__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank2__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvlsb__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_bank3__DOT__mem_reg__v3 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way0_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = VL_RAND_RESET_I(21);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__way1_tagv__DOT__mem_reg__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__dcache__DOT__lfsr__DOT__r_lfsr = VL_RAND_RESET_I(8);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = VL_RAND_RESET_I(30);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = VL_RAND_RESET_I(30);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__target__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = VL_RAND_RESET_I(30);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__pc__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v1 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v2 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__counter__v3 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__match_rd = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras_ptr = VL_RAND_RESET_I(3);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = VL_RAND_RESET_I(30);
    __Vdlyvset__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__ras__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__btb__DOT__fcsr = VL_RAND_RESET_I(6);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_error_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_pre_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__mem_inst_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__br_inst_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__commit_inst_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__icache_miss_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__cpu__DOT__perf_counter__DOT__dcache_miss_counter = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_req_addr = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_wr = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__apb_psel_cpu = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_s_wstrb = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__reg_datai_32 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__apb_s_bvalid = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__axi_s_sel_rd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__apb_rd_size = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__AA_axi2apb_bridge_cpu__DOT__rd_count = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__apb_s_rvalid = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__dma_grant = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__sclk_count = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_pop = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__msi_reset = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ier = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__lsr5r = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__dlc = VL_RAND_RESET_I(16);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__block_cnt = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rls_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rda_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__thre_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ms_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__ti_int_pnd = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tstate = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__error_time = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__counter = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__tx_error = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_counter = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__parity_xor = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__shift_out = VL_RAND_RESET_I(7);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__bit_out = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__tf_count = VL_RAND_RESET_I(5);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rstate = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rparity_xor = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__rshift = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__counter_b = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__counter_t = VL_RAND_RESET_I(10);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__top = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__bottom = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__rf_count = VL_RAND_RESET_I(5);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v17 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v18 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v19 = 0;
    __Vdlyvdim0__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__simu_top__DOT__soc__DOT__APB_DEV__DOT__uart0__DOT__regs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0;
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__nand_command = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_up_half = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__now_oob = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_CE_ = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__COMMAND = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__data_count = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR = VL_RAND_RESET_Q(38);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DONE = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_GO = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__status = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WAIT_NUM = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__HOLD_NUM = VL_RAND_RESET_I(8);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__PRE_STATE = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ADDR_pointer = VL_RAND_RESET_I(2);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_DMA_REQ = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__ERASE_SERIAL = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_OP_NUM = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_ADDR_COUNT = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_MAX_COUNT = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__WRITE_MAX_COUNT = VL_RAND_RESET_I(14);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__DMA_OP_DONE = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__READ_ID_NUM = VL_RAND_RESET_I(3);
    __Vdly__simu_top__DOT__soc__DOT__APB_DEV__DOT__nand_module__DOT__NAND__DOT__NAND_STATE = VL_RAND_RESET_I(5);
    __Vdly__simu_top__DOT__soc__DOT__conf_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__sram_axi_ram__DOT__ram_r_rcur = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr0 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr6 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr1 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr2 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr3 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr4 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr5 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__cr7 = VL_RAND_RESET_I(32);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__write_timer_end_r1 = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__key_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__state_count = VL_RAND_RESET_I(4);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step0_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__step1_count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__count = VL_RAND_RESET_I(20);
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_resp_prog = VL_RAND_RESET_I(1);
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_fifo__DOT__fifo_ram__v1 = 0;
    __Vdly__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    __Vdlyvdim0__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvval__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = VL_RAND_RESET_I(3);
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v0 = 0;
    __Vdlyvset__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_fifo__DOT__fifo_ram__v1 = 0;
    __Vdly__simu_top__DOT__soc__DOT__confreg__DOT__timer = VL_RAND_RESET_I(32);
    __Vchglast__TOP__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__rd_addr_hit = VL_RAND_RESET_I(5);
    __Vchglast__TOP__simu_top__DOT__soc__DOT__AXI_SLAVE_MUX__DOT__wr_addr_hit = VL_RAND_RESET_I(5);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
